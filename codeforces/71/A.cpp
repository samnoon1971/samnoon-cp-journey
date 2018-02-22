#include <iostream>
#include <string>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string a;
        cin >> a;
        int x=a.length();
        if(x<=10)
            cout << a << endl;
        else
            cout << a[0] << x-2 << a[x-1] << endl;

    }
    return 0;
}
