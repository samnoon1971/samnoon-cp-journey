#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string s;
    cin >> n >> s;
    vector <int> vec;
    if(n==1)
    {
        cout << "Yes" << endl;
        return 0;
    }
    for(char i='a'; i<='z'; i++)
    {
        int x = count(s.begin(), s.end(), i);
        if(x)
            vec.push_back(x);
    }
    sort(vec.rbegin(), vec.rend());
    if(vec[0]>1)
        cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}
