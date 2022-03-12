#include<bits/stdc++.h>
#define For(i, x, y) for(int i = x; i <= y; i++)
#define Forn(i, x, y) for(int i = x; i >= y; i--)
using namespace std;
string s;
int main()
{
    getline(std::cin, s);
    int l = s.length();
    if(l < 6 || l > 15)
    {
        cout << "Invalid username.";
        exit(0);
    }
    if('0' <= s[0] && s[0] <= '9')
    {
        cout << "Invalid username.";
        exit(0);
    }
    For(i, 0, l - 1)
    {
        if(s[i] < '0' || ('9' < s[i] && s[i] < 'A') || ('Z' < s[i] && s[i] < 'a') || 'z' < s[i])
        {
            cout << "Invalid username.";
            exit(0);
        }
    }
    cout << "Valid username.";

}
