#include <stdio.h>
int main() 
{
    int n = 0;
    int num[5] = { 0 };
    int tmp;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) 
    {
        int sum = 0;
        for (int j = 0; j < 5; j++) 
        {
            scanf("%d", &num[j]);
        }


        for (int k = 0; k < 5; k++) {
            for (int m = 0; m < 5; m++) 
            {
                if (num[k] > num[m]) 
                {
                    tmp = num[k];
                    num[k] = num[m];
                    num[m] = tmp;


                }
            }
        }
        if (num[1] - num[3] >= 4) 
            printf("KIN\n");
        else 
            printf("%d\n", num[3] + num[2] + num[1]);
    }
    return 0;
}