#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h> 
void Function(int p, int q)
{
    int input = 0;
    int t = 0;
    do {
        printf("********      ������׼������       ********\n");
        printf("*******************************************\n");
        printf("********     1. ��ȡ   2. ��ȡ     ********\n");
        printf("********     3. �̺�   4.�ȼ�      ********\n");
        printf("********     0. �˳�               ********\n");
        printf("*******************************************\n");
        printf("��������Ҫ���еĲ���\n");
        scanf("%d", &input);
        switch (input) {
            //��ȡ����
        case 1: {
            if (p && q)
                printf("��ȡ���㣺p/\\q=1\n");
            else
                printf("��ȡ���㣺p/\\q=0\n");
            break;
        }
              //��ȡ����
        case 2: {
            if (p || q)
                printf("��ȡ���㣺p\\/q=1\n");
            else
                printf("��ȡ���㣺p\\/q=0\n");
            break;
        }
              //�̺�����
        case 3: {
            if (p && !q)
                printf("�̺���p->q=0\n");
            else
                printf("�̺���p->q=1\n");
            break; }
              //�ȼ�����
        case 4: {
            if ((p && q) || (!p && !q))
                printf("�ȼ����㣺p<->q=1\n");
            else
                printf("�ȼ����㣺p<->q=0\n");
            break; }
        case 0:
            printf("�˳�����\n");
            break;
        default:
            printf("ѡ�����\n");
            break;
        }
        //�Ƿ����
    } while (input);
}

int main()
{
    int p, q;
    //�Ӽ��̶�ȡp����ֵ
    do {
        printf("������ p ��ֵ(0 �� 1)");
        scanf("%d", &p);
        if (p != 0 && p != 1)
            printf("��������");
    } while (p != 0 && p != 1);
    //�Ӽ��̶�ȡq����ֵ
    do {
        printf("������ q ��ֵ(0 �� 1)");
        scanf("%d", &q);
        if (q != 0 && q != 1)
            printf("��������");
    } while (q != 0 && q != 1);
    //���ú����������������ֵ�ж�
    Function(p, q);
}