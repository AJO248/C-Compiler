#include <stdio.h>
unsigned long fact(int n);
int add(int x, int y) { return x + y; }
int arr[10][20];
int main()
{
    int r = add(3, 5);
    printf("%d\n", r);
    return 0;
}
unsigned long fact(int n)
{
    if (n <= 1)
        return 1;
    return n * fact(n - 1);
}
