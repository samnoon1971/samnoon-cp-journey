#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string s;
    int sum=0;
    cin >> n;
    vector <string> v;
    for(int i=0; i<n; i++)
    {
        cin >> s;
        v.push_back(s);
    }
    vector <string> :: iterator it;
    for(it=v.begin(); it!=v.end(); it++)
     {
        s = *it;
        if(s=="Icosahedron")
            sum+=20;
        else if(s=="Dodecahedron")
            sum+=12;
        else if(s=="Octahedron")
            sum+=8;
        else if(s=="Cube")
            sum+=6;
        else
            sum+=4;
    }
    cout << sum << endl;
    return 0;
}
