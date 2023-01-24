/*
1是最先消耗的，所以判断1的剩余数量，从1开始
*/
#include<stdio.h>
int main()
{
	int a = 0, b = 0, c = 0;
	for (a = 1; ; a++)
	{
		for (b = a; b != 0; b /= 10)
			if (b % 10 == 1)
				c++;
		if (c >= 2021)
			goto take;
	}
take:printf("%d", a);
	return 0;
}