#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector <int> v;
    int n;
    cin >> n;
    int x;
    for(int i=0; i<n; i++)
    {
        cin >> x;
        v.push_back(x);
    }
    int cnt = count(v.begin(), v.end(), 1);
    int ab[cnt]={0};
    int k=-1;
    vector <int> :: iterator it;
    for(it=v.begin(); it!=v.end(); ++it)
    {
        if(*it==1)
            {
                k++;
                ab[k]++;
            }
        else
        {
            ab[k]++;
        }

    }
    cout << cnt << endl;
    for(int i=0; i<cnt-1; i++)
    {
        cout << ab[i] << " ";
    }
    cout << ab[cnt-1] << endl;
    return 0;
}
