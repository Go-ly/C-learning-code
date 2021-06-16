#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h> 
void Function(int p, int q)
{
    int input = 0;
    int t = 0;
    do {
        printf("********      程序已准备就绪       ********\n");
        printf("*******************************************\n");
        printf("********     1. 合取   2. 析取     ********\n");
        printf("********     3. 蕴含   4.等价      ********\n");
        printf("********     0. 退出               ********\n");
        printf("*******************************************\n");
        printf("你输入您要进行的操作\n");
        scanf("%d", &input);
        switch (input) {
            //合取运算
        case 1: {
            if (p && q)
                printf("合取运算：p/\\q=1\n");
            else
                printf("合取运算：p/\\q=0\n");
            break;
        }
              //析取运算
        case 2: {
            if (p || q)
                printf("析取运算：p\\/q=1\n");
            else
                printf("析取运算：p\\/q=0\n");
            break;
        }
              //蕴含运算
        case 3: {
            if (p && !q)
                printf("蕴含：p->q=0\n");
            else
                printf("蕴含：p->q=1\n");
            break; }
              //等价运算
        case 4: {
            if ((p && q) || (!p && !q))
                printf("等价运算：p<->q=1\n");
            else
                printf("等价运算：p<->q=0\n");
            break; }
        case 0:
            printf("退出程序\n");
            break;
        default:
            printf("选择错误\n");
            break;
        }
        //是否结束
    } while (input);
}

int main()
{
    int p, q;
    //从键盘读取p的真值
    do {
        printf("请输入 p 的值(0 或 1)");
        scanf("%d", &p);
        if (p != 0 && p != 1)
            printf("输入有误");
    } while (p != 0 && p != 1);
    //从键盘读取q的真值
    do {
        printf("请输入 q 的值(0 或 1)");
        scanf("%d", &q);
        if (q != 0 && q != 1)
            printf("输入有误");
    } while (q != 0 && q != 1);
    //调用函数，进行运算的真值判断
    Function(p, q);
}