#include<bits/stdc++.h>
#define For(i, x, y) for(int i = x; i <= y; i++)
#define Forn(i, x, y) for(int i = x; i >= y; i--)
using namespace std;
string s;
int main()
{
    getline(std::cin, s);
    int j = 0;
    while(s[j] == ' ')
    {
        cout << s[j];
        j ++;
    }

    For(i, j, s.length() - 1)
    {
        if(s[i - 1] == ' ' && s[i] == ' ');
        else
            cout << s[i];
    }
}
