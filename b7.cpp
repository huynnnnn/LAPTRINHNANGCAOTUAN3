#include<bits/stdc++.h>
#define For(i, x, y) for(int i = x; i <= y; i++)
#define Forn(i, x, y) for(int i = x; i >= y; i--)
using namespace std;
string s;
int countAlpha = 0, countNumber = 0, countOther = 0;
int main()
{

    getline(std::cin, s);
    For(i, 0, s.length() - 1)
    {
        if(('a' <= s[i] && s[i] <= 'z') || ('A' <= s[i] && s[i] <= 'Z'))
            countAlpha ++;
        else
            if('0' <= s[i] && s[i] <= '9')
                countNumber ++;
            else
                countOther ++;
    }
    cout << countAlpha << ' ' << countNumber << ' ' << countOther;
}
