#include <iostream>
#include <string>
using namespace std;
int main()
{
    string a;
    cin >> a;

    int cnt=0;
    int x=a.length();
    for(int i=0; i<x; i++)
    {
        char c=a[i];
        int j=0, k=0;
        while(j<x)
        {
           if(c==a[j])
            {
            j++;
            k++;
            }
            if(k==7)
            {
                cnt=1;
                break;
            }
            if(c!=a[j])
                {
                    c=a[j];
                    k=0;
        }

    }
    if(cnt==1)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}
}
