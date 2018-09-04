#include <bits/stdc++.h>
using namespace std;
int main()
{
    long n, k, x;
    cin >> n >> k;
    set <long> ms;
    for(int i=0; i<n; i++)
    {
        cin >> x;
        ms.insert(x);
    }
    vector <int> v;
    for(int i=1; k; i++)
    {
        if(!ms.count(i) && i<=k)
        {
            v.push_back(i);
            k-=i;
        }
        if(i>k)
            break;

    }
    cout << v.size() << endl;
    vector <int> :: iterator it;
    if(v.size()>0)
      {
          for(it=v.begin(); it!=v.end()-1; it++)
            cout << *it << " ";
        cout << *it << endl;
      }
    return 0;
}
