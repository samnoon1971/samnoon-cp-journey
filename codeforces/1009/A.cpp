#include <bits/stdc++.h>
using namespace std;

int main()
{
    queue <int> qa, qb;
    int n, m, x;
    cin >> n >> m;
    for(int i=0; i<n; i++)
    {
        cin >> x;
        qa.push(x);
    }
    for(int i=0; i<m; i++)
    {
        cin >> x;
        qb.push(x);
    }
    int sum=0;
    while(!qb.empty() && !qa.empty())
    {
        if(qb.front() >= qa.front())
        {
            sum++;
            qb.pop();
        }
            qa.pop();
    }
    cout << sum << endl;
    return 0;
}
