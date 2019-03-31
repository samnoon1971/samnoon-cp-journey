#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll product(ll n)
{
    ll cnt=1;
    while(n)
    {
        cnt*=(n%10);
        n/=10;
    }
    return cnt;
}
int main()
{
    ll n;
    cin >> n;
    ll cnt=1;
    string s=to_string(n);
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='0')
            continue;
        string k=s;
        k[i] = k[i]-1;
        for(int j=i+1; j<s.size(); j++)
        {
            k[j] = '9';
        }
        ll cnt=0;
        for(int j=0; j<s.size(); j++)
        {
            cnt=cnt*10+k[j]-'0';
        }
        if(product(cnt)>product(n))
        {
            n=cnt;
        }
    }
    cout << product(n) << endl;
    return 0;
}
