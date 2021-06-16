#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#define MAXN 100

void dfs(int* a, int n, int i, int* x)
{
    if (i >= n)Output(a, n, x);
    else {
        x[i] = 0;
        dfs(a, n, i + 1, x);
        x[i] = 1;
        dfs(a, n, i + 1, x);
    }
}

int Output(int* a, int n, int* x)
{
    int i;
    printf("{");
    for (i = 0; i < n; i++) {
        if (x[i] == 1)
            printf("%d", a[i]);
    }
    printf("} ");  
}

int main()
{
    int a[3] = { 0 };
    int i = 0;
    printf("请输入要计算的集合元素\n");
    for (i = 0; i < 3; i++)
    {
        scanf("%d", &a[i]);
    }
    int n = sizeof(a) / sizeof(a[0]);
    int x[MAXN];
    memset(x, 0, sizeof(x));
    printf("The result is:\n");
    dfs(a, n, 0, x);
    return 0;
}