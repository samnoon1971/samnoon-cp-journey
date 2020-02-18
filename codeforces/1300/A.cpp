#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, cnt = 0;
        cin >> n;
        int sum = 0, a[n], prod = 1;
        for(int i=0; i<n; i++)
        {
            cin >> a[i];
            if(a[i]==0)
                cnt++;
            sum += a[i];
        }
        sum += cnt;
        cout << cnt + (sum==0) << endl;
    }
    return 0;
}
