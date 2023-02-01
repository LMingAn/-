#include<stdio.h>
int main()
{
	//1GB = 1024MB
	//1MB = 1024KB
	//1KB = 1024B(byte)
	//1B = 8b(bit)
	//32位 = 4B -> 32b -> 32 / 8
	//64位 = 8B -> 64b -> 64 / 8
	printf("%lld", (long long)256 * 1024 * 1024 * 8 / 32);//加入一个强制类型转换，存放数据
	return 0;
}