#include <stdio.h>
#include <windows.h>
int (*max2)(int x, int y);
int max1(int x, int y)
{
    return x > y ? x : y;
}
main()
{
    int a, b, c;
    scanf("%d %d", &a, &b);
    max2 = max1;
    c = (*max2)(a, b);
    printf("%d \n", c);
    system("pause");
}
