#include<bits/stdc++.h>
#define For(i, x, y) for(int i = x; i <= y; i++)
#define Forn(i, x, y) for(int i = x; i >= y; i--)
using namespace std;
int main()
{
    int n;
    bool tg = true;
    cin >> n;
    int a[n + 3];
    For(i, 1, n)
        cin >> a[i];
    For(k, 1, n/2)
        if(a[k] != a[n + 1 - k])
            tg = false;
    if(tg == true)
        cout <<  "Symmetric array.";
    else
        cout << "Asymmetric array.";
}
