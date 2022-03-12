#include<bits/stdc++.h>
#define For(i, x, y) for(int i = x; i <= y; i++)
#define Forn(i, x, y) for(int i = x; i >= y; i--)
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n + 2], b[n + 2];
    For(i, 1, n)
        cin >> a[i];
    bool tg = true;
    For(i, 1, n)
    {
        cin >> b[i];
        if(a[i] != b[i])
            tg = false;
    }
    if(tg == true)
        cout << "YES";
    else
        cout << "NO";
}
