#include<bits/stdc++.h>
#define For(i, x, y) for(int i = x; i <= y; i++)
#define Forn(i, x, y) for(int i = x; i >= y; i--)
using namespace std;
int main()
{
    string s;
    int d = 0;
    getline(std::cin, s);
    s = ' ' + s;
    For(i, 1, s.length() - 1)
        if(s[i - 1] == ' ' && s[i] != ' ')
            d ++;
    cout << d;
}
