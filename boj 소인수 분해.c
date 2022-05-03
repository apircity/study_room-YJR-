#include<stdio.h>
int main()
{
	int num = 0;
	scanf("%d", &num);
	for (int i = 2; i < num + 1; i++)
	{
		while (num % i == 0) //나누었을 때 0이라면 소수
		{
			printf("%d\n", i);
			num /= i;
		}
	}
	return 0;
}