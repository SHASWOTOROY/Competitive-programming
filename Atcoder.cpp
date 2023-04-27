https://atcoder.jp/contests/abc298/tasks/abc298_c


#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
const long long MOD=1000000007;
#define yes cout<<"YES\n";
#define no cout<<"NO\n"
#define pi acos(-1)
#define ff     first
#define ss    second
typedef long long ll;
typedef vector<ll> vec;
typedef vector<string> vecs;
typedef pair<ll, ll> pll;
typedef vector<pair<ll, ll>> vp;
typedef set<ll> st;
typedef set<pair<ll, ll>> sp;
typedef multiset<ll> mst;
typedef multiset<pair<ll, ll>> mstp;
typedef map<ll, ll> mp;
typedef map<char, ll> mpc;
#define up(v, x) upper_bound(v.begin(), v.end(), x)-v.begin()
#define lb(v, x) lower_bound(v.begin(), v.end(), x)-v.begin()

#define all(a) (a).begin(),(a).end()
#define rall(a) (a).rbegin(),(a).rend()
#define sz(x) (int)x.size()
#define sqr(a) ((a) * (a))
#define sharowcin() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
#define file() freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#define dbg(args...) do {cerr << #args << " : "; faltu(args); } while(0)
template < typename T, typename ... hello>void faltu( T arg, const hello &... rest)
{
    cerr << arg << ' ';
    faltu(rest...);
}
//inline void normal(ll &a) { a %= MOD; (a < 0) && (a += MOD); }
//inline ll modMul(ll a, ll b) { a %= MOD, b %= MOD; normal(a), normal(b); return (a*b)%MOD; }
//inline ll modAdd(ll a, ll b) { a %= MOD, b %= MOD; normal(a), normal(b); return (a+b)%MOD; }
//inline ll modSub(ll a, ll b) { a %= MOD, b %= MOD; normal(a), normal(b); a -= b; normal(a); return a; }
//inline ll modPow(ll b, ll p) { ll r = 1; while(p) { if(p&1) r = modMul(r, b); b = modMul(b, b); p >>= 1; } return r; }
//inline ll modInverse(ll a) { return modPow(a, MOD-2); }
//inline ll modDiv(ll a, ll b) { return modMul(a, modInverse(b)); }
// arr n-1 last and 1 start compare previous arr[i+1]>arr[i] min num of moves to make a to b b-(a%b)

ll getmodex(ll a, ll  b)
{
    if(b==0) return 1;
    if(b%2==0)
    {
        auto t=getmodex(a,b/2)%MOD;
        return (t*t)%MOD;
    }
    return(a * getmodex(a,b-1)%MOD)%MOD;
}//
bool cmp1(ll x1, ll x2)
{
    return x1>x2;
}
bool cmp2(pair<int,int>& x1, pair<int,int> & x2)
{
    return x1.ss<x2.ss;
}
bool cmp3(pair<int,int> & x1, pair<int,int>& x2)
{
    if ( x1.ff == x2.ff ) return x1.ss<x2.ss;
    return x1.ff < x2.ff;
}
//--------------------------------- START ------------------------------------------//

const ll N=1e7;
vec v[N];
void solve()
{


    ll n;
    ll q;
    cin>>n>>q;
    vector<multiset<ll>>ms(n+1);
    map<ll,set<ll>>s;
    while(q--)
    {
        ll x;
        cin>>x;
        if(x==1)
        {
            ll i,j;
            cin>>i>>j;
            ms[j].insert(i);
            s[i].insert(j);
        }
        else if(x==2)
        {
            ll y;
            cin>>y;
            for(auto x:ms[y])
            {
                cout<<x<<" ";
            }
            cout<<endl;
        }
        else if(x==3)
        {
            ll k;
            cin>>k;
            for(auto x:s[k])
            {
                cout<<x<<" ";
                cout<<endl;
            }

        }

    }


}




int main()
{
    //sharowcin();
    int t;
//    cin>>t;
//    while(t--)
//    {
//        solve();
//
//    }
    solve();
    //main();


    //for(int i=1;i<=t;i++) cout<<"Case "<<i<<": ",solve();ll n;



}


