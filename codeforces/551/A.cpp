#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, x;
    vector <int> a, b;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> x;
        a.push_back(x);
        b.push_back(x);
    }

    sort(b.begin(), b.end());
    vector <int> :: iterator it, ip;
    for(it=a.begin(); it!=a.end()-1; it++)
    {
        int cnt=0;
       for(ip=b.begin(); ip!=b.end(); ip++)
       {
           if(*ip > *it)
            cnt++;
       }
       cout << cnt+1 << " ";
    }
    int cnt=0;
    for(ip=b.begin(); ip!=b.end(); ip++)
        if(*ip > *it)
           cnt++;
        cout << cnt+1 << endl;
    return 0;
}
