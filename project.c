#include <stdio.h>

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
}
