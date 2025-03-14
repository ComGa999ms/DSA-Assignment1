# DSA-Assignment1
Họ và tên: Nguyễn Đăng Khoa

Lớp: ATTN2024

MSSV: 24520825

## VQ44_FLOWERS	
### Tóm tắt đề 
Cho dãy $a$ có $n$ phần tử và một số $k$ với ($1 \leq k \leq n \leq 10^5$) và ($1 \leq a_i \leq 10^9$). In ra số phần tử khác nhau nhiều nhất có thể.
### Lời giải
Bài này dùng một cái map để đếm số lần xuất hiện và in ra sẽ có 2 trường hợp:
- Số phần tử phân biệt nhiều hơn k: TH này đơn giản là in bừa các màu ra.
- Số phần tử phân biệt ít hơn k: trong TH này đầu tiên in ra màu khác nhau sau đó duyệt lại các màu sẵn có thêm 1 lần nữa in tới khi nào đủ k màu thì thôi.

## Point2D	
### Tóm tắt đề 
Cho $n$ ($1 \leq n \leq 10^6$) cặp điểm $(x, y)$ với ($-10^9 \leq x, y \leq 10^9$) trên tọa độ mặt phẳng. In ra các điểm đó với $x$ tăng dần nếu $x$ bằng nhau thì sort theo $y$ tăng dần.
### Lời giải 
Bài này đơn giản là viết một hàm $cmp$ cho hàm sort theo yêu cầu đề bài xong sau đó in ra mảng $a$ sau khi sort.

## VS14_Gifts	
### Tóm tắt đề
Cho mảng $a$ ($1 \leq a_ii \leq 10^5$) có $n$ ($1 \leq n \leq 10^5$) phần tử và một số nguyên dương $k$ ($1 \leq k \leq 10^9$). In ra tổng hai số lớn nhất và $\leq k$.
### Lời giải 
Bài này đầu tiên sort lại toàn bộ mảng $a$ xong sau đó duyệt qua các phần tử với mỗi phần tử $a_i$ chặt nhị phân tìm phần tử $a_j$ to nhất sao cho $a_i + a_j \leq k$. 

## PasswordStrength	
### Tóm tắt đề
Bài cho một xâu kí tự $S$ $(|S| \leq 100)$ và xác định xem xâu đã cho là KhongHopLe, Vua, Manh, Yeu, hay RatManh theo một số ràng buộc nhất định.
### Lời giải
Tính điểm theo đề bài đã yêu cầu vói mỗi mức điểm sẽ tương ứng mức độ xâu đó KhongHopLe, Vua, Manh, Yeu hay RatManh.


## CaesarCipher	
### Tóm tắt đề
Đề bài cho một plantext ($1 \leq |plantext| \leq 10^4$) và một số nguyên dương $k (1 \leq |k| \leq 10^9)$. In ra plantext được mã hóa theo Caesar code với công thức $E(x) = (x + k)$ $mod$ $26$.  
### Lời giải 
Đơn giản là với mỗi $plantext[i]$ tính theo công thức như trên.

## ReversingEncryption	
### Tóm tắt đề
Đề bài cho một xâu T ($1 \leq |T| \leq 300$) được mã hóa như sau:
+  Duyệt trên tất cả các ước của $|T|$ theo thứ tự giảm dần từ $|T|$ đến 1
+  Với mỗi ước số d, đảo ngược chuỗi con T[1… d]  (tức là chuỗi con bắt đầu ở vị trí 1 và kết thúc ở vị trí d). 

Ví dụ: s = "ATTN2020" dẫn đến những thay đổi sau: "0202NTTA" → "2020NTTA" → "0220NTTA" → "0220NTTA" (rõ ràng là thao tác dảo ngược cuối cùng không thay đổi chuỗi vì d = 1). 
### Lời giải
Bài này duyệt đi tìm các ước $x$ của $n$ xong với mỗi ước này chúng ta sẽ reverse đoạn từ s.begin đến s.beign + x.

## Messages	
### Tóm tắt đề 
Đề bài cho hai xâu S, T gồm các chữ cái la tinh in thường ($1 \leq |T|, |S| \leq 500$). In ra xâu $X$ có độ dài ngắn nhất sao cho với phần đầu của xâu $S$ và phần đuôi của xâu $T$ mà vẫn đảm bảo rằng toàn xâu trong xâu $X$ đều có trong xâu $S, T$.
### Lời giải 
Đầu tiên đi tìm phần dài nhất mà 2 xâu khớp nhau giữa phần đuôi của xâu $S$ và phần đầu của xâu $T$. Đến đây xâu hoàn chỉnh của chúng ta là $S$ + phần còn lại của xâu $T$ (xâu $T$ bỏ đi đoạn khớp nhau dài nhất).



## Binary Search 1	
### Tóm tắt đề
Cho mảng $a$ (các giá trị a_i đôi một phân biệt) có $n$ ($1 \leq n \leq 32000$) phần tử và một số nguyên dương $x$ cần tìm. In ra số $x$ nằm ở vị trí nào và dùng chặt nhị phân thì tốn bao nhiêu lần chặt mới tìm được vị trí đó, ngược lại không có $x$ trong mảng thì in ra -1. 
### Lời giải
Bài này làm theo như đề bài :))))

## Binary Search 2	
### Tóm tắt đề
Cho mảng $a$ (các chuỗi kí tự có độ dài $\leq 10$ và được xếp tăng dần) có $n$ ($1 \leq n \leq 2000$) phần tử và một chuỗi $x$ cần tìm. In chuỗi $x$ nằm ở vị trí nào và dùng chặt nhị phân thì tốn bao nhiêu lần chặt mới tìm được vị trí đó, ngược lại không có $x$ trong mảng thì in ra -1. 
### Lời giải 
Làm tương tự bài Bin1 việc đổi từ số sang chữ không ảnh hưởng.

## Linear Search 1	
### Tóm tắt đề
Cho mảng $a$ có $n$ ($1 \leq n \leq 10000$) phần tử và một số nguyên dương $x$ cần tìm. In ra nếu duyệt từ trái sang phải thì $x$ nằm ở vị trí thử mấy và phải duyệt bao nhiêu lần, cũng như thế thì duyệt theo chiều ngược lại, ngược lại nếu không có $x$ trong mảng thì in ra -1. 
### Lời giải
Đề bảo gì làm đó :)))


## Linear Search 2
### Tóm tắt đề
Cho mảng $a$ có $n$ ($1 \leq n \leq 10000$) phần tử và một số nguyên dương $x$ cần tìm. In ra vị trí $x$ xuất hiện bao nhiêu lần và nằm ở vị trí nào tốn bao nhiêu lần duyệt từ trái sang. Ngược lại in ra -1.
### Lời giải 
Bài này cũng thế đề kêu gì làm đó :)))

## Linear Search 3
### Tóm tắt đề
Cho mảng $a$ có $n$ ($1 \leq n \leq 2.10^5$) phần tử. Biết rằng, $MEX_i$ là số nguyên nhỏ nhất lớn hơn hoặc bằng 0 mà không xuất hiện trong từ đầu mảng cho đến phần tử i. In ra $MEX_i$ ở tại mọi vị trí i trong mảng.

### Lời giải
Bài này duy trì một biến res và cứ mỗi lần đọc vào thì đánh dấu $a[i]$ đã xuất hiện xong sau đó cứ while nếu res chưa xuất hiện thì đáp án là res ngược lại cứ tăng dần res.


## Linear Search 5
### Tóm tắt đề
Cho $T$ ($1 \leq T \leq 10^4$) bộ test và mảng $a$ ($1 \leq a_i \leq 10^9$) có $n$ ($1 \leq n \leq 10^5$) phần tử. Định nghĩa trọng số của mảng là phần tử lớn nhất - phần tử bé nhất. Hỏi chia mảng $a$ thành hai mảng con tìm tổng trọng số lớn nhất của hai mảng con đó.
### Lời giải 
Bài này đầu tiên vì tính chất của trọng số chỉ là MAX - MiN nên là dãy đầu tiên sẽ là phần tử to nhất và phần tử bé nhất. Dãy con lại các là phần tử còn lại (bỏ 2 phần tử MAX và MIN vừa lấy ra).
## VW05p_Enrichement    
### Tóm tắt đề
Cho bảng $a$ có kích thước $n.m \leq 10^6$. Tìm hình vuông 3x3 có giá trị bé nhẩt.
### Lời giải
Bài này xài mảng cộng dồn và duyệt tuần tự với ô trái trên là $(i, j)$ và ô phải dưới là $(i + 2, j + 2)$. Cứ như vậy vừa duyệt vừa lấy MIN. 