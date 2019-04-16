#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int n;
    cin >> n;
    set <int> ms;
    for(int i=0; i<n; i++)
    {
        int x;
        cin >> x;
        ms.insert(x);
    }
    if(ms.size()==1)
    {
        cout << 0 << endl;
        return 0;
    }
    else if(ms.size()>3)
    {
        cout << -1 << endl;
        return 0;
    }
    else
    {
        if(ms.size()==2)
        {
            set <int> :: iterator it=ms.begin();
            int sum1=*it;
            ms.erase(it);
            it=ms.begin();
            int sum2=*it;
            int sum=sum2-sum1;
            if(sum%2)
               cout << sum << endl;
            else
                cout << sum/2 << endl;
            return 0;
        }
        else
        {
            set <int> :: iterator it=ms.begin();
            int cnt1=*it;
            ms.erase(it);
            it=ms.begin();
            int cnt2=*it;
            ms.erase(it);
            it=ms.begin();
            int cnt3=*it;
            int sum1=cnt2-cnt1, sum2=cnt3-cnt2;
            if(sum1!=sum2)
                cout << -1 << endl;
            else
                cout << sum1 << endl;
            return 0;
        }
    }
}
