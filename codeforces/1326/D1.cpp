#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define debug(x) std:: cout << "Paisi : " << x << endl

vector <int> prefix_function(string s)
{
    int n = s.size();
    vector <int> vec(n);
    for (int i = 1; i < n; i++)
    {
        int j = vec[i-1];
        while (j > 0 && s[i] != s[j])
            {
                j = vec[j-1];
            }
        if (s[i] == s[j])
            {
                j++;
            }
        vec[i] = j;
    }
    return vec;
}
int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        int n = s.size();
        string pref;
        int k = 0, lb = 0, ub = n-1;
        for(int i=0; i<n/2; i++)
        {
            if(s[i]!=s[n-i-1])
                break;
            k++;
            pref += s[i];
            lb++;
            ub--;
        }
        string a;
        for(int i=lb; i<=ub; i++)
        {
            a+=s[i];
        }
        string b = a;
        reverse(b.begin(), b.end());
        a = a + "+-" + b;
        vector <int> va = prefix_function(a);
        a.clear();
        int x = *va.rbegin();
        for(int i=ub; i>=lb; i--)
        {
            a+=s[i];
        }
        b = a;
        reverse(b.begin(), b.end());
        a = a + "-+" + b;
        va = prefix_function(a);
        int y = *va.rbegin();
        string c;
        if(x>y)
        {
            for(int i=lb; i<x+lb; i++)
            {
                c+=s[i];
            }
        }
        else
        {
            for(int i=ub-y+1; i<=ub; i++)
            {
                c+=s[i];
            }
        }
        string suf = pref;
        reverse(suf.begin(), suf.end());
        pref += c + suf;
        cout << pref << endl;

    }
    return 0;
}
