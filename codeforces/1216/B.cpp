#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
   int n;
   cin >> n;
   vector <pair<int, int> > vec(n);
   for(int i=0; i<n; i++)
   {
       int x;
       cin >> x;
       vec[i] = {x, i+1};
   }
   sort(vec.rbegin(), vec.rend());
   int sum = 0;
   for(int i=0; i<n; i++)
   {
       sum += (vec[i].first*i+1);
   }
   cout << sum << endl;
   for(auto i:vec)
   {
       cout << i.second << " ";
   }
   cout << endl;
   return 0;
}
