#include <stdio.h>
#include <yara.h>

int main() {
    yr_initialize();

    const char* rule_string = 
        "rule ExampleRule {"
        "    strings:"
        "        $a = \"malwarenhalam\""
        "    condition:"
        "        $a"
        "}";

    YR_COMPILER* compiler;
    yr_compiler_create(&compiler);
    yr_compiler_add_string(compiler, rule_string, NULL);

    YR_RULES* rules;
    if (yr_compiler_get_rules(compiler, &rules) != ERROR_SUCCESS) {
        fprintf(stderr, "thoi xong ko tim thay.\n");
        yr_compiler_destroy(compiler);
        return 1;
    }

    const char* test_string = "test cho 1 payload";
    YR_SCAN_CONTEXT* scan_context;
    yr_scan_context_create(rules, NULL, NULL, &scan_context);

    yr_scan_string(scan_context, test_string, 0);

    yr_scan_context_destroy(scan_context);
    yr_rules_destroy(rules);
    yr_compiler_destroy(compiler);
    yr_finalize();

    return 0;
}
