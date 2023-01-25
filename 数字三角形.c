#include<stdio.h>

int max(a, b)
{
	if (a > b)
		return a;
	else
		return b;
}

int main()
{
	//定义数组
	int a[300][300] = { 0 }, b[300][300] = { 0 }, c = 0;

	//输入行数
	scanf_s("%d", &c);
	
	//输入三角形数
	int x = 0, y = 0;
	for (x = 1; x <= c; x++)
		for (y = 1; y <= x; y++)
			scanf_s("%d", &a[x][y]);

	//开始最大值计算
	b[1][1] = a[1][1];
	for (x = 2; x <= c; x++)
		for (y = 1; y <= x; y++)
			b[x][y] = a[x][y] + max(b[x - 1][y], b[x - 1][y - 1]);

	//输出
	printf("%d", max(b[c][(c + 1) / 2], b[c][(c + 2) / 2]));
	return 0;
}