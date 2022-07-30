#include <stdio.h>
#include <stdlib.h>
int main()
{
    int hcf(int, int);
    int lcd(int, int, int);
    int u, v, h, l;
    printf("请输入两个数字：");
    scanf("%d,%d", &u, &v);
    h = hcf(u, v);
    printf("最大公约数为：%d\n", h);
    l = lcd(u, v, h);
    printf("最小公倍数为：%d\n", l);
    system("pause");
    return 0;
}
int hcf(int u, int v)
{
    int t, r;
    if (v > u)
    {
        t = u;
        u = v;
        v = t;
    }
    while ((r = u % v) != 0)
    {
        u = v;
        v = r;
    }
    return (v);
}
int lcd(int u, int v, int h)
{
    return (u * v / h);
}