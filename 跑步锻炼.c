#include <stdio.h>

int main()
{
    int year = 2000, month[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 }, day[7] = { 6, 7, 1, 2, 3, 4, 5 };
    int m = 0, d = 0, a = 0, take = 0;

    //最外层的for循环为年份循坏
    for (; year <= 2020; year++)
    {
        //闰年与平年的2月天数不相同，需要进行判断 -- 每400年1闰，4年1闰，百年不闰
        if (year % 400 == 0 || year % 4 == 0 && year % 100 != 0)
            month[2] = 29;
        else
            month[2] = 28;

        //次一层for循环为月份循环
        for (m = 1; m <= 12; m++)
        {
            //最里层for循环为天数循环
            for (d = 1; d <= month[m]; d++)
            {
                //如果是周一或月初，要跑2千米
                if (day[a % 7] == 1 || d == 1)
                    take++;

                //每天跑1千米
                take++;
                a++;

                //停止日期
                if (year == 2020 && m == 10 && d == 1)
                {
                    printf("%d", take);
                    return 0;
                }
            }
        }
    }
}