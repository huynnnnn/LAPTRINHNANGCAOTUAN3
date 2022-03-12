#include<bits/stdc++.h>
#define For(i, x, y) for(int i = x; i <= y; i++)
#define Forn(i, x, y) for(int i = x; i >= y; i--)
#define F false
#define T true
using namespace std;
string s;
int countAlpha = 0, countNumber = 0, countOther = 0;
void fix(int i)
{
    s[i]     = 'Z';
    s[i + 1] = 'e';
    s[i + 2] = 'u';
    s[i + 3] = 's';
    return;
}
void findZeus()
{
    bool ok[1000];
    ok['Z'] = F, ok['e'] = F, ok['u'] = F, ok['s'] = F;
    For(i, 0, s.length() - 5)
    {
        For(j, 0, 3)
            ok[s[i + j]] = T;
        if(ok['Z'] == T && ok['e'] == T && ok['u'] == T && ok['s'] == T)
        {
            fix(i);
            i = i + 4;
        }
        ok['Z'] = F, ok['e'] = F, ok['u'] = F, ok['s'] = F;
    }
    return;
}
int main()
{
    getline(std::cin, s);
    findZeus();
    cout << s;
}
