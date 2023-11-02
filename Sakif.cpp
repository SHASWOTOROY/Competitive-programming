#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<vi> vvi;
typedef vector<vll> vvll;
typedef vector<string> vs;
typedef pair<int, int> pi;
typedef pair<ll, ll> pll;
typedef vector<pair<int, int>> vpi;
typedef vector<pair<ll, ll>> vpll;
typedef set<int> si;
typedef set<ll> sll;
typedef set<pair<int, int>> spi;
typedef set<pair<ll, ll>> spll;
typedef multiset<int> msi;
typedef multiset<ll> msll;
typedef multiset<pair<int, int>> mspi;
typedef multiset<pair<ll, ll>> mspll;
typedef map<int, int> mpi;
typedef map<ll, ll> mpll;
typedef tree<ll, null_type, less<ll>, rb_tree_tag,
tree_order_statistics_node_update> ordered_set; //
find_by_order, order_of_key, less, greater,less_equal
typedef tree<ll, null_type, less_equal<ll>, rb_tree_tag,
tree_order_statistics_node_update> ordered_multiset;
#include<iomanip>
#define
fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.
tie(NULL);
#define e "\n"
#define yes cout<<"Yes"<<e;
#define no cout<<"No"<<e;
#define pb
push_back
#define ff
first
#define ss
second
#define sz
size()
#define mod 1000000007 //1e9+7
#define fr(i,a,b) for(ll i=a;i<b;i++)
#define fr2(i,a,b) for(ll i=a;i>=b;i--)
#define coutv(v) for(auto it:v)cout<<it<<' ';cout<<e
#define cinv(v) for(auto &it:v)cin>>it
#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()
#define Ceil(x,y) ((x+y-1)/y) // x/y
#define INF (1LL<<62)
const double PI = acos(-1);
const ll infll = LLONG_MAX;
const ll mn = LLONG_MIN;
const int inf = INT_MAX;
bool cmp1(ll x1, ll x2) { return x1>x2; }
bool cmp2(pair<ll,ll> x1, pair<ll,ll> x2) {
return x1.ss<x2.ss; }
bool cmp3(pair<ll,ll> x1, pair<ll,ll> x2) {
if ( x1.ff == x2.ff ) return x1.ss<x2.ss;
return x1.ff > x2.ff; }
void solve() { }
int main() {
fastio
int t=1, tc=1;
cin>>t;
while(t--) {
ll n; cin>>n;
//solve();
tc++;
}
//cout<<"Case "<<tc<<": "<<ans<<e;
return 0; }
