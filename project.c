#include <stdio.h>
#include "hamNhan.h"

void cong(int a, int b)
{
    int tong = a + b;
    printf("Tong: %d", tong);
}

void tru(int a, int b)
{
    int hieu = a - b;
    printf("Hieu: %d", hieu);
}

void main()
{
    int a = 5, b = 5;
    cong(a, b);
    tru(a, b);
    nhan(a, b);
}
// sự thay đổi từ khi lấy về
// -> git pull
// conflict -> sửa cùng 1 file

//
