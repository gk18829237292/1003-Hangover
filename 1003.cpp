#include<stdio.h>
int main()
{
	double A_temp;
	double C;
	while (scanf("%lf", &A_temp)&& A_temp)
	{
		C = 1;
		while (A_temp > 0)
		{
			C++;
			A_temp -= 1 / C;
		}
		printf("%d card(s)\n", (int)C - 1);
	}
}

