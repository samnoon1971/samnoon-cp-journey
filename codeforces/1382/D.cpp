
#include<bits/stdc++.h>
#pragma GCC target ("avx2")
#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")
using namespace std;

#define          samnoon                ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define          ll                     long long
#define          ld                     long double
#define          ull                    unsigned long long ll
#define          pii                    pair < ll, ll>
#define          pll                    pair < ll, ll>
#define          MOD                    1000000007
#define          ff                     first
#define          ss                     second
#define          pb                     push_back
#define          eb                     emplace_back
#define          sc                     scanf
#define          pf                     prllf
#define          scin(x)                scanf("%d",&(x))
#define          scin2(x,y)             scanf("%d %d",&(x),&(y))
#define          scin3(x,y,z)           scanf("%d %d %d",&(x),&(y),&(z))
#define          scln(x)                scanf("%lld",&(x))
#define          scln2(x,y)             scanf("%lld %lld",&(x),&(y))
#define          scln3(x,y,z)           scanf("%lld %lld %lld",&(x),&(y),&(z))
#define          min3(a,b,c)            min(a,min(b,c))
#define          min4(a,b,c,d)          min(d,min(a,min(b,c)))
#define          max3(a,b,c)            max(a,max(b,c))
#define          max4(a,b,c,d)          max(d,max(a,max(b,c)))
#define          ms(a,b)                memset(a,b,sizeof(a))
#define          mp                     make_pair
#define          gcd(a, b)              __gcd(a,b)
#define          lcm(a, b)              ((a)*(b)/gcd(a,b))
#define          input                  freopen("input.txt","rt", stdin)
#define          output                 freopen("output.txt","wt", stdout)
#define          PI                     acos(-1.0)
#define          zero(a)                memset(a,0,sizeof a)
#define          all(v)                 v.begin(),v.end()
#define          Max(v)                 *max_element(all(v))
#define          Min(v)                 *min_element(all(v))
#define          Upper(c,x)             (upper_bound(c.begin(),c.end(),x)-c.begin())
#define          Lower(c,x)             (lower_bound(c.begin(),c.end(),x)-c.begin())
#define          Unique(X)              (X).erase(unique(all(X)),(X).end())
#define          no                     cout << "NO" << endl ;
#define          yes                    cout << "YES" << endl ;
#define          segment_tree           ll Lnode = node << 1 , Rnode = Lnode + 1 , mid = ( b + e ) >> 1 ;
#define          Count(C, x)             count(C.begin(), C.end(), x)
///sum accumulate( v.begin(), v.begin() + k, 0LL )///bool operator < ( const Node& p ) const{ return cost < p.cost ; }
///priority_queue<ll,vector<ll>,greater<ll> >pq;///std::set<ll, std::greater<ll> > Set;///string str = "abcdefghijklmnopqrstuvwxyz";///string s2 = "ABCDEFGHIJKLMNOPQRSTUVWXYZ" ;
///string s = bitset<64>( n ).to_string() ; ll val =  bitset< 64 >( s ).to_ullong() ;

///--------------Graph Moves--------------------------------------
const int fx[] = {+1,-1,+0,+0}; const int fy[] = {+0,+0,+1,-1};
//const ll fx[] = {+0,+0,+1,-1,-1,+1,-1,+1}; ///King's move ///const ll fy[] = {-1,+1,+0,+0,+1,+1,-1,-1}; ///king's Move
///const ll fx[] = {-2,-2,-1,-1,+1,+1,+2,+2}; ///knight's move ///const ll fy[] = {-1,+1,-2,+2,-2,+2,-1,+1}; ///knight's move
///---------------------------------------------------------------

/** Debugging Tool **/
#define error(args...) { string _s = #args; replace(_s.begin(), _s.end(), ',', ' '); stringstream _ss(_s); istream_iterator<string> _it(_ss); err(_it, args); }
void err(istream_iterator<string> it) {}
template<typename T, typename... Args>
void err(istream_iterator<string> it, T a, Args... args)
{
    cerr << *it << " = " << a << endl;
    err(++it, args...);
}
///

///--------------------**********----------------------------------
const ll N = 4100;
#define INF 2e9
#define EMPTY_VALUE -1
ll dp[N][N], a[N], index[N], n, m, cost;
vector <ll> vec;
ll solve(ll i, ll w)
{
    if(w < 0)
        return INF;
    if(i == m)
    {
        if(w == 0)
            return 0;
        return INF;
    }
    ll &ret = dp[i][w];
    if(ret != EMPTY_VALUE)
        return ret;
    ll res_1 = solve(i + 1, w - vec[i]);
    ll res_2 = solve(i+1, w);
    return ret = min(res_1, res_2);
}
int main()
{
    //samnoon;
    ll t;
    scln(t);
    //t = 1;
    while(t--)
    {
      scln(n);
      for(ll i=1; i<=2*n; i++)
      {
          scln(a[i]);
          index[a[i]] = i;
      }
      vec.clear();
      vec.push_back(0);
      ll lastPos = 2*n;
      for(ll i=2*n; i>0; i--)
      {
          if(index[i] <= lastPos)
          {
              vec.push_back(lastPos - index[i] + 1);
              lastPos = index[i] - 1;
          }
      }
      m = vec.size() - 1, cost = n;
      for(ll i=0; i<=m; i++)
      {
          for(ll j=0; j<=cost; j++)
          {
              dp[i][j] = EMPTY_VALUE;
          }
      }
      if(solve(0, cost) == INF)
      {
          cout << "NO" << endl;
      }
      else
      {
          cout << "YES" << endl;
      }
    }
    return 0;
}
