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
    int n;
    cin >> n;
    int arr[n + 1];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    int cnt = 1;
    int pill = 1;
    int hp = 1;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] != arr[i - 1])
        {
            cnt++;
            pill = 1;
        }
        if (arr[i] == arr[i - 1])
        {
            pill++;
            if (pill > hp)
            {
                hp = pill;
            }
        }
    }

    cout << hp << " " << cnt << endl;

    return 0;
}