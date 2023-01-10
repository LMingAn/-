/*
输入一行包含一个单词，单词只由小写英文字母组成。对于所有的评测用例，输入的单词长度不超过 1000。
输出两行，第一行包含一个英文字母，表示单词中出现得最多的字母是哪个。如果有多个字母出现的次数相等，输出字典序最小的那个。
第二行包含一个整数，表示出现得最多的那个字母在单词中出现的次数。
*/

#include<stdio.h>


//V4
int main()
{
	char arr[1000] = { 0 };
	int take[26] = { 0 }, A = 0;
	while ((arr[A] = getchar()) != '\n')
	{
		take[arr[A] - 'a']++;
		A++;
	}
	int max = 0, word = 0;
	for (A = 1; A < 26; A++)
	{
		if (take[A] > take[max])
		{
			max = A;
		}
	}
	printf("%c\n%d", 'a' + max, take[max]);
}


//V3
//int main()
//{
//	char arr[1000] = { 0 };
//	gets(arr);
//	int take[26] = { 0 }, A = 0;
//	while (arr[A] != '\0')
//	{
//		take[arr[A] - 'a']++;
//		A++;
//	}
	//int max = 0, word = 0;
	//for (A = 1; A < 26; A++)
	//{
	//	if (take[A] > take[max])
	//	{
	//		max = A;
	//	}
	//}
	//printf("%c\n%d", 'a' + max, take[max]);
//	return 0;
//}


//V2
//int main()
//{
//	char arr[1000] = { 0 };
//	gets(arr);
//	int take[26] = { 0 }, A = 0;
//	while (arr[A] != '\0')
//	{
//		switch (arr[A])
//		{
//		case 'a': take[0]++; A++; break;
//		case 'b': take[1]++; A++; break;
//		case 'c': take[2]++; A++; break;
//		case 'd': take[3]++; A++; break;
//		case 'e': take[4]++; A++; break;
//		case 'f': take[5]++; A++; break;
//		case 'g': take[6]++; A++; break;
//		case 'h': take[7]++; A++; break;
//		case 'i': take[8]++; A++; break;
//		case 'j': take[9]++; A++; break;
//		case 'k': take[10]++; A++; break;
//		case 'l': take[11]++; A++; break;
//		case 'm': take[12]++; A++; break;
//		case 'n': take[13]++; A++; break;
//		case 'o': take[14]++; A++; break;
//		case 'p': take[15]++; A++; break;
//		case 'q': take[16]++; A++; break;
//		case 'r': take[17]++; A++; break;
//		case 's': take[18]++; A++; break;
//		case 't': take[19]++; A++; break;
//		case 'u': take[20]++; A++; break;
//		case 'v': take[21]++; A++; break;
//		case 'w': take[22]++; A++; break;
//		case 'x': take[23]++; A++; break;
//		case 'y': take[24]++; A++; break;
//		case 'z': take[25]++; A++; break;
//		}
//	}
//	int max = 0, word = 0;
//	for (A = 0; A < 26; A++)
//	{
//		if (take[A] > max)
//		{
//			max = take[A];
//			word = A;
//		}
//		else if (take[A] == max)
//		{
//			if (A < word)//字母比较
//			{
//				max = take[A];
//				word = A;
//			}
//			else
//			{
//				;
//			}
//		}
//	}
//	printf("%c\n%d", 'a' + word, max);
//	return 0;
//}


//V1
//int main()
//{
//	char arr[1000] = { 0 };
//	gets(arr);
//	int take[26] = { 0 }, A = 0;
//	while (arr[A] != '\0')
//	{
//		switch (arr[A])
//		{
//		case 'a': { take[0]++; A++; break; }
//		case 'b': { take[1]++; A++; break; }
//		case 'c': { take[2]++; A++; break; }
//		case 'd': { take[3]++; A++; break; }
//		case 'e': { take[4]++; A++; break; }
//		case 'f': { take[5]++; A++; break; }
//		case 'g': { take[6]++; A++; break; }
//		case 'h': { take[7]++; A++; break; }
//		case 'i': { take[8]++; A++; break; }
//		case 'j': { take[9]++; A++; break; }
//		case 'k': { take[10]++; A++; break; }
//		case 'l': { take[11]++; A++; break; }
//		case 'm': { take[12]++; A++; break; }
//		case 'n': { take[13]++; A++; break; }
//		case 'o': { take[14]++; A++; break; }
//		case 'p': { take[15]++; A++; break; }
//		case 'q': { take[16]++; A++; break; }
//		case 'r': { take[17]++; A++; break; }
//		case 's': { take[18]++; A++; break; }
//		case 't': { take[19]++; A++; break; }
//		case 'u': { take[20]++; A++; break; }
//		case 'v': { take[21]++; A++; break; }
//		case 'w': { take[22]++; A++; break; }
//		case 'x': { take[23]++; A++; break; }
//		case 'y': { take[24]++; A++; break; }
//		case 'z': { take[25]++; A++; break; }
//		}
//	}
//	int max = 0, word = 0;
//	for (A = 0; A < 26; A++)
//	{
//		if (take[A] > max)
//		{
//			max = take[A];
//			word = A;
//		}
//		else if (take[A] == max)
//		{
//			if (A < word)//字母比较
//			{
//				max = take[A];
//				word = A;
//			}
//			else
//			{
//				max = max;
//				word = word;
//			}
//		}
//	}
//	printf("%c\n%d", 'a' + word, max);
//  return 0;
//}