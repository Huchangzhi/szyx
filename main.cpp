#include <bits/stdc++.h>
using namespace std;
int js(int dq)
{
    for (int i = 1; i <= 5; i++)
    {
        if ((dq - i) % 6 == 0)
        {
            return i;
        }
    }
    srand(time(0));
    return (rand() % 5 + 1);
}
int main()
{
    printf("����һ������ͨͨ��������Ϸ��һ����100��ÿ�ֿ��Լ�ȥ1~5֮�����������������ȼ�������1������������������:");
    int n;
    cin >> n;
    int dq = 100;
    if (n == 1)
    {

        int k;
        while (dq > 0)
        {
            printf("����1~5֮���������:");
            cin >> k;
            if (k >= 1 && k <= 5)
            {
                printf("%d-%d=%d\n", dq, k, dq - k);
                dq -= k;
                if (dq < 1)
                {
                    printf("��Ӯ��");
                    return 0;
                }
                int jl = js(dq);
                printf("�Ҽ�%d��%d-%d=%d\n", jl, dq, jl, dq - jl);
                dq -= jl;
                if (dq < 1)
                {
                    printf("\n��Ӯ��");
                    return 0;
                }
            }
            else
            {
                printf("�����������������:");
            }
        }
    }
    else
    {
        int k;
        int jl = js(dq);
        printf("�Ҽ�%d��%d-%d=%d\n", jl, dq, jl, dq - jl);
        dq -= jl;
        if (dq < 1)
        {
            printf("\n��Ӯ��");
            return 0;
        }
        while (dq > 0)
        {
            printf("����1~5֮���������:");
            cin >> k;
            if (k >= 1 && k <= 5)
            {
                printf("%d-%d=%d\n", dq, k, dq - k);
                dq -= k;
                if (dq < 1)
                {
                    printf("��Ӯ��");
                    return 0;
                }
                int jl = js(dq);
                printf("�Ҽ�%d��%d-%d=%d\n", jl, dq, jl, dq - jl);
                dq -= jl;
                if (dq < 1)
                {
                    printf("\n��Ӯ��");
                    return 0;
                }
            }
            else
            {
                printf("�����������������:");
            }
        }
    }
    return 0;
}