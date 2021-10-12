#include <stdio.h>
void cong(int a, int b)
{
    int tong = a + b;
    printf("Tong: %d", tong);
}
void main()
{
    int a = 5, b = 5;
    cong(a, b);
}