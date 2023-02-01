#include<stdio.h>

int main()
{
	//输入成绩
	int students = 0, grade[10000] = { 0 }, n = 0;
	scanf_s("%d", &students);
	for (; n < students; n++)
		scanf_s("%d", &grade[n]);

	//输出成绩
	int max = grade[0], min = grade[students - 1];
	float average = grade[0];
	for (n = 1; n < students; n++)
	{
		average += grade[n];
		if (grade[n] > max)
			max = grade[n];
		if (grade[n] < min)
			min = grade[n];
	}
	printf("%d\n%d\n%.2f", max, min, average /= students);
	return 0;
}