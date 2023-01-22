///*
//输入包含一个八位整数N，表示日期。对于所有评测用例，10000101≤N≤89991231，保证N是一个合法日期的8位数表示。
//*/
//#include<stdio.h>
//
////回文日期
//int Date1(int date)
//{
//	int a, b, c, d, e, f, g, h;//a代表第1位，h代表第8位
//	a = date / 10000000;
//	b = (date - a * 10000000) / 1000000;
//	c = (date - a * 10000000 - b * 1000000) / 100000;
//	d = (date - a * 10000000 - b * 1000000 - c * 100000) / 10000;
//	e = (date - a * 10000000 - b * 1000000 - c * 100000 - d * 10000) / 1000;
//	f = (date - a * 10000000 - b * 1000000 - c * 100000 - d * 10000 - e * 1000) / 100;
//	g = (date - a * 10000000 - b * 1000000 - c * 100000 - d * 10000 - e * 1000 - f * 100) / 10;
//	h = (date - a * 10000000 - b * 1000000 - c * 100000 - d * 10000 - e * 1000 - f * 100 - g * 10);
//	if (a == h && b == g && c == f && d == e)
//		return date;
//	else
//		return 0;
//}
//
////特殊回文日期
//int Date2(int date)
//{
//	int a, b, c, d, e, f, g, h;//a代表第1位，h代表第8位
//	a = date / 10000000;
//	b = (date - a * 10000000) / 1000000;
//	c = (date - a * 10000000 - b * 1000000) / 100000;
//	d = (date - a * 10000000 - b * 1000000 - c * 100000) / 10000;
//	e = (date - a * 10000000 - b * 1000000 - c * 100000 - d * 10000) / 1000;
//	f = (date - a * 10000000 - b * 1000000 - c * 100000 - d * 10000 - e * 1000) / 100;
//	g = (date - a * 10000000 - b * 1000000 - c * 100000 - d * 10000 - e * 1000 - f * 100) / 10;
//	h = (date - a * 10000000 - b * 1000000 - c * 100000 - d * 10000 - e * 1000 - f * 100 - g * 10);
//	if (a == h && b == g && c == f && d == e && a == c && c == f && f == h && b == d && d == e && e == g)
//		return date;
//	else
//		return 0;
//}
//
//int main()
//{
//	int date = 0, date1 = 0, date2 = 0, year = 0, month = 0, day = 0, N;
//	while (1)
//	{
//		scanf_s("%d", &N);
//		if (10000101 <= N && N <= 89991231)//输入日期判断
//			break;
//		else
//			printf("日期输入不合法，请重试\n");
//			continue;
//	}
//	for (date = N + 1; date <= 89991231; date++)
//	{
//		year = date / 10000;
//		if (1000 <= year && year <= 8999)//第一级日期判断 - 年
//		{
//			month = (date - year * 10000) / 100;
//			if (01 <= month && month <= 12)//第二级日期判断 - 月
//			{
//				day = date - year * 10000 - month * 100;
//				if (01 <= day && day <= 31)//第三级日期判断 - 日
//				{
//					//判断回文数
//					date1 = Date1(date);//回文日期
//					if (date1 != 0)
//						break;
//				}
//			}
//		}
//	}
//	for (date = N + 1; date <= 89991231; date++)
//	{
//		year = date / 10000;
//		if (1000 <= year && year <= 8999)//第一级日期判断 - 年
//		{
//			month = (date - year * 10000) / 100;
//			if (01 <= month && month <= 12)//第二级日期判断 - 月
//			{
//				day = date - year * 10000 - month * 100;
//				if (01 <= day && day <= 31)//第三级日期判断 - 日
//				{
//					//判断回文数
//					date2 = Date2(date);//特殊回文日期
//					if (date2 != 0)
//						break;
//				}
//			}
//		}
//	}
//	printf("%d\n%d", date1, date2);
//	return 0;
//}
#include <stdio.h>
#include <stdlib.h>

int Compare(int year, int month, int day);

int main(int argc, char* argv[])
{
    int date, year, month, day, p, a, flag1 = 0, flag2 = 0;
    scanf_s("%d", &date);
    year = date / 10000;
    month = (date % 10000) / 100;
    day = date % 100 + 1;
    for (; year < 9999; year++)
    {

        for (; month <= 12; month++)
        {
            if (month == 4 || month == 6 || month == 9 || month == 11)
                p = 30;
            else if ((month == 2) && (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0)))
                p = 29;
            else if (month == 2)
                p = 28;
            else
                p = 31;
            for (; day <= p; day++) {
                a = Compare(year, month, day);
                if ((a == 1) && (flag1 == 0))
                {
                    printf("%d\n", year * 10000 + month * 100 + day);
                    flag1 = 1;
                }
                if ((a == 2) && (flag2 == 0))
                {
                    printf("%d\n", year * 10000 + month * 100 + day);
                    flag2 = 1;
                }
                if ((flag1 == 1) && (flag2 == 1))
                    goto END;
            }
            day = 1;
        }
        month = 1;
    }
END:;
    return 0;
}


int Compare(int year, int month, int day)
{
    int a[4], b[2], c[2];
    a[0] = year / 1000;
    a[1] = (year % 1000) / 100;
    a[2] = (year % 100) / 10;
    a[3] = year % 10;
    b[0] = month / 10;
    b[1] = month % 10;
    c[0] = day / 10;
    c[1] = day % 10;
    if ((a[1] == a[3]) && (a[3] == b[0]) && (b[0] == c[0]) && (a[0] == a[2]) && (a[2] == b[1]) && (b[1] == c[1]))
        return 2;
    if ((a[3] == b[0]) && (a[2] == b[1]) && (a[1] == c[0]) && (a[0] == c[1]))
        return 1;
    else
        return 0;
}