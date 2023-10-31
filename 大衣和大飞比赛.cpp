#include <iostream>
#include <vector>
using namespace std;
int main()
{
    long N = 0, a = 0, b = 0, ma = 0, mb = 0;
    char end = 0;
    cin >> N;
    vector<long> A;
    for (long n = 0; n < N; ++n)
    {
        long inp = 0;
        cin >> inp;
        if (inp != 0)
            a++;
        else
            a = 0;
        if (ma < a)
            ma = a;
        A.push_back(inp);
    }
    vector<long> B;
    for (long n = 0; n < N; ++n)
    {
        long inp = 0;
        cin >> inp;
        if (inp != 0)
            b++;
        else
            b = 0;
        if (mb < b)
            mb = b;
        B.push_back(inp);
    }
    if (ma > mb)
        cout << 'Y';
    else if (ma < mb)
        cout << 'F';
    else if (ma == mb)
        cout << 'P';
    return 0;
}