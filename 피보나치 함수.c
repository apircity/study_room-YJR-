#include <stdio.h>
int main()
{
    int t=0;
    int num = 0;
    int fibo[42][2] = { {0},{0} };
    fibo[0][0] = 1;
    fibo[0][1] = 0;
    fibo[1][0] = 0;
    fibo[1][1] = 1;
    for (int i = 2; i < 42; ++i)
    {
        fibo[i][0] = fibo[i - 1][0] + fibo[i - 2][0];
        fibo[i][1] = fibo[i - 1][1] + fibo[i - 2][1];
    }
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        scanf("%d", &num);
        if (num == 0)
        {
            printf("1 0\n");
        }
        else
        {
            printf("%d %d\n", fibo[num][0], fibo[num][1]);
        }
    }
    return 0;
}