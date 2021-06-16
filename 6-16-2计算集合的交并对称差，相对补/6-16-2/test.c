#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#define N 40
int geshu(int a[])
{
    int i = -1;
    do
    {
        i++;
        scanf("%d", &a[i]);
    } while (a[i] != -1);
    return i;
}
void jiao(int h, int k, int a[N], int b[N])
{
    int i, n, find = 0;
    for (i = 0; i < h; i++)
    {
        find = 0;
        for (n = 0; n < k; n++)
        {
            if (a[i] == b[n])
                find = 1;
        }
        if (find == 1)
            printf("%d  ", a[i]);
    }
    printf("\n");
}
void dccA(int h, int k, int a[N], int b[N])
{
    int i, n, find = 0;
    for (i = 0; i < h; i++)
    {
        find = 0;
        for (n = 0; n < k; n++)
        {
            if (a[i] == b[n])
                find = 1;
        }
        if (find == 0)
            printf("%d  ", a[i]);
    }
}
void dccB(int h, int k, int a[N], int b[N])
{
    int i, n, find = 0;
    for (i = 0; i < k; i++)
    {
        find = 0;
        for (n = 0; n < h; n++)
        {
            if (b[i] == a[n])
                find = 1;
        }
        if (find == 0)
            printf("%d  ", b[i]);
    }

}
void pd(int h, int k, int a[N], int b[N])
{
    int i, n, f = 0;
    for (i = 0; i < h; i++)
    {
        for (n = 0; n < k; n++)
        {
            if (a[i] == b[n])
                f++;
        }

    }
    if (f == i && h == k)
        printf("A集合与B集合相等");
    else
        printf(" A集合与B集合不相等");
    printf("\n");
}

int main()
{
    int a[N], b[N];
    int h, k;
    printf("请输入A集合：\n");
    h = geshu(a);
    printf("请输入B集合：\n");
    k = geshu(b);
    printf("A集合有%d个 B集合有%d个\n", h, k);
    printf("A集合与B集合的交集为：\n");
    jiao(h, k, a, b);
    printf("A集合与B集合的并集为：\n");
    dccA(h, k, a, b);
    dccB(h, k, a, b);
    jiao(h, k, a, b);
    printf("A集合与B集合的对称差集为：\n");
    dccA(h, k, a, b);
    dccB(h, k, a, b);
    printf("\n");
    printf("A集合在B集合的相对补集为：\n");
    dccB(h, k, a, b);
    printf("\n");
    pd(h, k, a, b);
    return 0;
}
