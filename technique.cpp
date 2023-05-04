#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace std;
typedef long long ll;
typedef vector<ll> vec;
typedef priority_queue<pair<ll, ll>> q;
typedef vector<pair<ll, ll>> vp;
typedef map<ll, ll> mp;
using namespace __gnu_pbds;
#define mod 1000000007 // 1e9+7

// inline void normal(ll &a) { a %= mod; (a < 0) && (a += mod); }
// inline ll modMul(ll a, ll b) { a %= mod, b %= mod; normal(a), normal(b); return (a*b)%mod; }
// inline ll modAdd(ll a, ll b) { a %= mod, b %= mod; normal(a), normal(b); return (a+b)%mod; }
// inline ll modSub(ll a, ll b) { a %= mod, b %= mod; normal(a), normal(b); a -= b; normal(a); return a; }
// inline ll modPow(ll b, ll p) { ll r = 1; while(p) { if(p&1) r = modMul(r, b); b = modMul(b, b); p >>= 1; } return r; }
// inline ll modInverse(ll a) { return modPow(a, mod-2); }
// inline ll modDiv(ll a, ll b) { return modMul(a, modInverse(b)); }

bool com(pair<ll, ll> &a, pair<ll, ll> &b)
{
    return a.first > b.first;
}
mp m;
ll c = 0;
void add(ll x)
{
    if (m[x] == 0)
        c--;
    m[x]++;
}
void remove(ll x)
{
    m[x]--;
    c++;
}

int main()
{

    // cout<<v[0].first<<" "<<v[0].second<<endl;
    ll n;
    cin >> n;
    vec v(n), pref(n + 5);
    for (auto &x : v)
    {
        cin >> x;
    }
    for (ll i = 1; i <= n; i++)
    {
        pref[i] = pref[i - 1] + v[i - 1];
    }
    ll t;
    cin >> t;
    while (t--)
    {
        ll l, r;
        cin >> l >> r;
        cout << pref[r] - pref[l - 1] << endl;
    }
//////////////////////////////////////////////////
     ll n;
    cin >> n;
    vec v(n), pref(n + 5);
    for (auto &x : v)
    {
        cin >> x;
    }
    for (ll i = 1; i <= n; i++)
    {
        pref[i] = pref[i - 1] + v[i - 1];
    }
     // odd length subarray sum;
     ll ans=0;
     for(ll i=1;i<=n;i+=2){
        for(ll l=i;l<=n;l++){
            ans+=pref[l]-pref[l-i];
        }
     }
     cout<<ans<<endl;

    // main();
}



