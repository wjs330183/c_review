#include <stdio.h>
#include <windows.h>
typedef struct max2
{
    int (*p_max)(int x, int y);
} max2;
/**
*typedef的功能是定义新的类型。
第一句就是定义了一种 pfun 的类型，并定义这种类型为指向某种函数的指针，这种函数以一个 int 为参数并返回 void 类型。
*/
int max1(int x, int y)
{
    return x > y ? x : y;
}
main()
{
    int a, b, c;
    scanf("%d %d", &a, &b);
    max2 gcode = {
        .p_max = max1, //将函数指针指向要调用函数的地址
    };
    c = gcode.p_max(a, b);
    printf("%d \n", c);
    system("pause");
}
