This is just my personal practice for the algorithm. It does not relate to any codeforces problem.

Bài 1 — Tìm phần tử


Binary Search:

Cho mảng tăng dần a[] và số x .

Tìm vị trí của x, nếu không có in -1.

Ví dụ
a = [1 3 5 7 9]
x = 7
=> 3




Bài 2 — Lower Bound

Cho mảng tăng dần.

Tìm vị trí đầu tiên có giá trị >= x.

Ví dụ
a = [1 2 2 2 5 7]
x = 3
=> 4


Bài 3 — Upper Bound

Tìm vị trí đầu tiên có giá trị > x.


Bài 4 — Đếm số lần xuất hiện

Cho mảng đã sort.

Đếm xem x xuất hiện bao nhiêu lần.

Gợi ý
count = upper_bound - lower_bound



Bài 5 — Cắt dây

Có n sợi dây dài a[i].

Cắt thành các đoạn bằng nhau sao cho được ít nhất k đoạn.

Tìm độ dài lớn nhất có thể.



Bài 6 — Máy photocopy

Có 2 máy photo.

Máy 1 mất x giây/tờ.

Máy 2 mất y giây/tờ.

In ra thời gian ít nhất để in được n tờ.



Bài 7 — Chia sách

Có n quyển sách.

Mỗi quyển có số trang a[i].

Chia cho k người liên tiếp nhau đọc.

Tối thiểu hóa số trang lớn nhất một người phải đọc.



Bài 8 — Painter Partition

Giống bài chia sách nhưng đổi context sang thợ sơn.



Bài 9 — Aggressive Cows

Có các vị trí chuồng bò.

Đặt k con bò sao cho khoảng cách nhỏ nhất giữa 2 con là lớn nhất.

Đây là bài kinh điển của binary search.