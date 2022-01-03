# 1 số kiến thức cơ bản trong C

## Hàm printf, scanf trong c

- format:  %[flags][width][.precision][length]specifier
    + flags: tác dụng căn chỉnh, thêm dấu, đệm số ...
    + witdh: độ dài tối thiểu của kết quả xuất ra
    + .precision: độ chính xác khi xuất số thực
    + length: chỉ định bằng các kí tự "h, l, L" xác định thuộc dạng short, long, double
    + specifier: định dạng của chuỗi kết quả

- specifier - Danh sách các định dạng của chuỗi
    + %c: kí tự: char
    + %s: chuỗi kí tự: char*
    + %d: số nguyên: int, short
    + %u: số nguyên dạng thập phân không dấu: unsigned int, unsigned short
    + %x: xuất ra số nguyên dưới dạng thập lục phân
    + %o: Xuất ra số nguyên dưới dạng bát phân
    + %f: số thực
    + %e: số thực dưới dạng số mũ
    + %g: số thực
    + %ld: long
    + %lu: unsigned long
    + %lo: long, unsigned long
    + %lx: long, unsigned long
    + %lf: double, unsigned long
    + %a: double: số thực dạng thập lục phân

## xử lí nhập vào chuỗi trong c (sử dụng header string.h)
- fgets(s, sizeof(s), stdin): nhập chuỗi vào từ stdin và sẽ lấy cả kí tự '\n' để xóa kí tự '\n'
        s[strlen(s) - 1] = '\0';

- scanf("%[^\n]s", s): nhập chuỗi cho tới khi gặp phím enter

- Xóa buffer enter trước khi nhập vào 1 chuỗi bất kì: while(getchar() != '\n);

- strstr(str, substr): tìm chuỗi con nếu có trả về con trỏ trỏ đến vị trí đầu tiên xuất hiện, nếu không trả về NULL
- strcpy(char *dest, char *source): copy từ source -> dest
- strncpy(char *dest, char *source, int n): copy n kí tự của source -> dest
- strlen(s): lấy ra độ dài chuỗi
- strcat(s, w): nối chuỗi w vào sau s
- strncat(s, w, n)
- strcmp(s, w): so sánh 2 xâu
- strrev(s)
- strupr
- strlwr

