#include <bits/stdc++.h>

using namespace std;

int main()
{
    multiset <string> s1, s2;
    int n;
    string x;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> x;
        s1.insert(x);
    }
    for(int i=0; i<n; i++)
    {
        cin >> x;
        s2.insert(x);
    }
    set <string> :: iterator it;
    for(it=s1.begin(); it!=s1.end(); it++)
    {
        if(s2.count(*it)!=0)
        {
            n--;
            s2.erase(s2.find(*it));
        }
    }
    cout << n << endl;
    return 0;
}
