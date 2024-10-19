# YARA
Yara có thể xác định thông tin dựa trên cả mẫu nhị phân và mẫu văn bản, chẳng hạn như thập lục phân và chuỗi ký tự có trong tệp.

Các quy tắc được sử dụng để dán nhãn cho các mẫu này. Ví dụ, các quy tắc Yara thường được viết để xác định xem một tệp có độc hại hay không, dựa trên các tính năng - hoặc các mẫu - mà nó thể hiện.  Chuỗi là thành phần cơ bản của ngôn ngữ lập trình. Các ứng dụng sử dụng chuỗi để lưu trữ dữ liệu như văn bản.

Ví dụ, đoạn mã dưới đây in ra "Hello World" trong Python. Văn bản "Hello World" sẽ được lưu trữ dưới dạng chuỗi.

print("Hello World!")

Chúng ta có thể viết quy tắc Yara để tìm kiếm "hello world" trong mọi chương trình trên hệ điều hành nếu muốn. 

Tại sao phần mềm độc hại lại sử dụng Strings?


Phần mềm độc hại, giống như ứng dụng "Hello World" của chúng tôi, sử dụng chuỗi để lưu trữ dữ liệu văn bản.


Sau đây là một số ví dụ về dữ liệu mà nhiều loại phần mềm độc hại lưu trữ trong chuỗi:

Dữ liệu Sự miêu tản Phần mềm tống tiền

12t9YDPgwueZ9NyMgw519p7AA8isjr6SMw

Ví Bitcoin để thanh toán tiền chuộc





