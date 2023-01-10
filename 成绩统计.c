#include<stdio.h>

//V3
int main()
{
	int grade = 0, a = 0, b = 0;
	scanf_s("%d", &a);
	int c = 0, C = 0;
	for (b = 0; b < a; b++)
	{
		scanf_s("%d", &grade);
		if (grade >= 60)
			c++;
		if (grade >= 85)
			C++;
	}
	printf("%.0f%%\n%.0f%%", c * 100.0 / a, C * 100.0 / a);
	return 0;
}

//V2
//int main()
//{
//	int grade[10000] = { 0 }, a = 0, b = 0;
//	scanf_s("%d", &a);
//	int c = 0, C = 0;
//	for (b = 0; b < a; b++)
//	{
//		scanf_s("%d", &grade[b]);
//		if (grade[b] >= 60)
//			c++;
//		if (grade[b] >= 85)
//			C++;
//	}
//	printf("%.0f%%\n%.0f%%", c * 100.0 / a, C * 100.0 / a);
//	return 0;
//}

//V1
//int main()
//{
//	int grade[10000] = { 0 }, a = 0, b = 0;
//	//输入考试人数
//	scanf_s("%d", &a);
//
//	//输入考试成绩
//	for (b = 0; b < a; b++)
//	{
//		scanf_s("%d", &grade[b]);
//	}
//
//	//计算及格率与优秀率 -  先判断及格再判断优秀 - 判断范围由大到小
//	int c = 0, C = 0;//c为及格人数，C为优秀人数
//	for (b = 0; b < a; b++)
//	{
//		//及格
//		if (grade[b] >= 60)
//		{
//			//优秀
//			if (grade[b] >= 85)
//			{
//				C++;
//			}
//			c++;
//		}
//	}
//	float d = 0, D = 0;//d为及格率，D为优秀率
//	d = c * 100.0 / a;
//	D = C * 100.0 / a;
//	printf("%.0f%%\n%.0f%%", d, D);
//	return 0;
//}