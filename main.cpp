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
    printf("这是一个普普通通的数字游戏，一个数100，每轮可以减去1~5之间的任意数，如果你先减，输入1，其他数就是我先来:");
    int n;
    cin >> n;
    int dq = 100;
    if (n == 1)
    {

        int k;
        while (dq > 0)
        {
            printf("输入1~5之间的任意数:");
            cin >> k;
            if (k >= 1 && k <= 5)
            {
                printf("%d-%d=%d\n", dq, k, dq - k);
                dq -= k;
                if (dq < 1)
                {
                    printf("你赢了");
                    return 0;
                }
                int jl = js(dq);
                printf("我减%d，%d-%d=%d\n", jl, dq, jl, dq - jl);
                dq -= jl;
                if (dq < 1)
                {
                    printf("\n我赢了");
                    return 0;
                }
            }
            else
            {
                printf("输入错误，请重新输入:");
            }
        }
    }
    else
    {
        int k;
        int jl = js(dq);
        printf("我减%d，%d-%d=%d\n", jl, dq, jl, dq - jl);
        dq -= jl;
        if (dq < 1)
        {
            printf("\n我赢了");
            return 0;
        }
        while (dq > 0)
        {
            printf("输入1~5之间的任意数:");
            cin >> k;
            if (k >= 1 && k <= 5)
            {
                printf("%d-%d=%d\n", dq, k, dq - k);
                dq -= k;
                if (dq < 1)
                {
                    printf("你赢了");
                    return 0;
                }
                int jl = js(dq);
                printf("我减%d，%d-%d=%d\n", jl, dq, jl, dq - jl);
                dq -= jl;
                if (dq < 1)
                {
                    printf("\n我赢了");
                    return 0;
                }
            }
            else
            {
                printf("输入错误，请重新输入:");
            }
        }
    }
    return 0;
}