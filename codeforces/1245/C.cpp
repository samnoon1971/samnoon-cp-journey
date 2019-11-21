#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll N = 1e5+10, M = 1e9+7;
ll n;
string s;

int main()
{
    cin >> s;
    n=s.size();
    ll x=1, y=1, cnt=0;
    for(ll i=0; i<n; i++)
    {
        if(s[i]=='m' || s[i]=='w')
        {
            cout << 0 << endl;
            return 0;
        }
        if(s[i]==s[i+1] && (s[i]=='n' || s[i]=='u'))
        {
            cnt=(x+y)%M;
            x=y%M;
            y=cnt;
        }
        else
        {
            x=y%M;
            cnt=y%M;
        }
    }
    cout << cnt%M << endl;
    return 0;
}
