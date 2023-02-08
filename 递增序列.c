#include <stdio.h>

int main()
{
    //先将矩阵输入二维数组中
    char word[30][51] =
    {
    "VLPWJVVNNZSWFGHSFRBCOIJTPYNEURPIGKQGPSXUGNELGRVZAG",
    "SDLLOVGRTWEYZKKXNKIRWGZWXWRHKXFASATDWZAPZRNHTNNGQF",
    "ZGUGXVQDQAEAHOQEADMWWXFBXECKAVIGPTKTTQFWSWPKRPSMGA",
    "BDGMGYHAOPPRRHKYZCMFZEDELCALTBSWNTAODXYVHQNDASUFRL",
    "YVYWQZUTEPFSFXLTZBMBQETXGXFUEBHGMJKBPNIHMYOELYZIKH",
    "ZYZHSLTCGNANNXTUJGBYKUOJMGOGRDPKEUGVHNZJZHDUNRERBU",
    "XFPTZKTPVQPJEMBHNTUBSMIYEGXNWQSBZMHMDRZZMJPZQTCWLR",
    "ZNXOKBITTPSHEXWHZXFLWEMPZTBVNKNYSHCIQRIKQHFRAYWOPG",
    "MHJKFYYBQSDPOVJICWWGGCOZSBGLSOXOFDAADZYEOBKDDTMQPA",
    "VIDPIGELBYMEVQLASLQRUKMXSEWGHRSFVXOMHSJWWXHIBCGVIF",
    "GWRFRFLHAMYWYZOIQODBIHHRIIMWJWJGYPFAHZZWJKRGOISUJC",
    "EKQKKPNEYCBWOQHTYFHHQZRLFNDOVXTWASSQWXKBIVTKTUIASK",
    "PEKNJFIVBKOZUEPPHIWLUBFUDWPIDRJKAZVJKPBRHCRMGNMFWW",
    "CGZAXHXPDELTACGUWBXWNNZNDQYYCIQRJCULIEBQBLLMJEUSZP",
    "RWHHQMBIJWTQPUFNAESPZHAQARNIDUCRYQAZMNVRVZUJOZUDGS",
    "PFGAYBDEECHUXFUZIKAXYDFWJNSAOPJYWUIEJSCORRBVQHCHMR",
    "JNVIPVEMQSHCCAXMWEFSYIGFPIXNIDXOTXTNBCHSHUZGKXFECL",
    "YZBAIIOTWLREPZISBGJLQDALKZUKEQMKLDIPXJEPENEIPWFDLP",
    "HBQKWJFLSEXVILKYPNSWUZLDCRTAYUUPEITQJEITZRQMMAQNLN",
    "DQDJGOWMBFKAIGWEAJOISPFPLULIWVVALLIIHBGEZLGRHRCKGF",
    "LXYPCVPNUKSWCCGXEYTEBAWRLWDWNHHNNNWQNIIBUCGUJYMRYW",
    "CZDKISKUSBPFHVGSAVJBDMNPSDKFRXVVPLVAQUGVUJEXSZFGFQ",
    "IYIJGISUANRAXTGQLAVFMQTICKQAHLEBGHAVOVVPEXIMLFWIYI",
    "ZIIFSOPCMAWCBPKWZBUQPQLGSNIBFADUUJJHPAIUVVNWNWKDZB",
    "HGTEEIISFGIUEUOWXVTPJDVACYQYFQUCXOXOSSMXLZDQESHXKP",
    "FEBZHJAGIFGXSMRDKGONGELOALLSYDVILRWAPXXBPOOSWZNEAS",
    "VJGMAOFLGYIFLJTEKDNIWHJAABCASFMAKIENSYIZZSLRSUIPCJ",
    "BMQGMPDRCPGWKTPLOTAINXZAAJWCPUJHPOUYWNWHZAKCDMZDSR",
    "RRARTVHZYYCEDXJQNQAINQVDJCZCZLCQWQQIKUYMYMOVMNCBVY",
    "ABTCRRUXVGYLZILFLOFYVWFFBZNFWDZOADRDCLIRFKBFBHMAXX"
    };

    //再进行递增序列的判断，先行，后列，最后斜线；先从上向下，再从左向右（没有竖直水平的反方向）
    int row = 0, col = 0, num = 0;
    long sum = 0;

    //行循环
    for (row = 0; row < 30; row++)
    {
        //列循环
        for (col = 0; col < 50; col++)
        {
            //开始进行判断，首先要创建用于判断的第二个字母
            //从上向下
            for (num = 1; num + row < 30; num++)
            {
                if (word[row + num][col] > word[row][col])
                    sum++;
            }

            //从左向右
            for (num = 1; num + col < 50; num++)
            {
                if (word[row][col + num] > word[row][col])
                    sum++;
            }

            //从左上向右下
            for (num = 1; num + row < 30 && num + col < 50; num++)
            {
                if (word[row + num][col + num] > word[row][col])
                    sum++;
            }

            //从左下向右上
            for (num = 1; row - num >= 0 && col + num < 50; num++)
            {
                if (word[row - num][col + num] != word[row][col])
                    //!=解析：1、当右上角大于左下角，从上到下看是递减，但是从左到右是递增，所以符合要求
                    //2、当右上角小于左下角，从上到下看是递增，所以符合要求。
                    sum++;
            }
        }
    }

    printf("%d", sum);
    return 0;
}