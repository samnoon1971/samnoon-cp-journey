#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector <int> vec;
    int n;
    cin >> n;
    int a, b, c, d;
    for(int i=0; i<n; i++)
    {
        cin >> a >> b >> c >> d;
        int x=a+b+c+d;
        vec.push_back(x);
    }
    int abc = 0;
    int t = vec[0];
    sort(vec.rbegin(), vec.rend());
    vector<int>::iterator it;
    for(it=vec.begin(); it!=vec.end(); it++)
    {
        abc++;
        if(*it==t)
            break;
    }
    cout << abc << endl;
    return 0;
}
