#include <bits/stdc++.h>
#define ll long long int
#define INF 2e18
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    ll x = 0;
    ll cnt = 0;
    ll time = d;
    bool flag = false;
    if (a == 0)
    {
        cout << 0 << endl;
    }
    else
    {
        while (time--)
        {
            cnt++;
            a += b;
            x += c;
            ll z = d * x;
            if (z > a)
            {
                flag = true;
                break;
            }
        }
        if (flag == true)
        {
            cout << cnt << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }

    return 0;
}