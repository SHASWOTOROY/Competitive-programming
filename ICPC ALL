///////////////////////////////////////////////////////////////////////////////////////TEMPLATE////////////////////////////////////////////////////////////////
#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
const long long MOD=998244353;
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
ll getmodex(ll a, ll  b,ll MOD)
{
    if(b==0) return 1;
    if(b%2==0)
    {
        auto t=getmodex(a,b/2,MOD)%MOD;
        return (t*t)%MOD;
    }
    return(a * getmodex(a,b-1,MOD)%MOD)%MOD;
}//
bool cmp1(ll x1, ll x2)
{
    return x1>x2;
}
bool cmp2(pair<int,int>& x1, pair<int,int> & x2)
{
    return x1.first<x2.first;
}
bool cmp3(pair<int,int> & x1, pair<int,int>& x2)
{
    if ( x1.ff == x2.ff ) return x1.ss<x2.ss;
    return x1.ff < x2.ff;
}
//--------------------------------- START ------------------------------------------//
void solve()
{
    

}

int main()
{
    sharowcin();

    ll t;
    cin>>t;
    while (t--)
    {
        solve();
    }

    //for(int i=1;i<=t;i++) cout<<"Case "<<i<<": ",solve();ll n;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<bits/stdc++.h>

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;
typedef long long ll;
typedef vector<ll> vec;
typedef vector<string> vecs;
typedef pair<ll, ll> pll;
typedef vector<pair<int, int>> vp;
typedef set<ll> st;
typedef set<pair<ll, ll>> sp;
typedef multiset<ll> mst;
typedef multiset<pair<ll, ll>> mstp;
typedef map<ll, ll> mp;
typedef map<char, ll> mpc;
ll getdiv(ll mid,ll n, ll m)
{

    ll count=0;
    for(ll i=1; i<=n; i++)
    {
        count+=min(m,mid/i);
    }
    return count;
}
int main()
{
    ll n;
    cin>>n;
    ll count=0;
    vec v;
    for(ll i=1; i*i<=n; i++)
    {
        if(n%i==0)
        {
            count++;
            v.push_back(i);
            if(i*i!=n)
            {
                count++;
                v.push_back(n/i);
            }
        }
    }
    cout<<count<<endl;
    for(auto xx:v)
    {
        cout<<xx<<" ";
    }
}


//////////////// harmonic series num of dividor 1 to n////////////


#include<bits/stdc++.h>

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;
typedef long long ll;
typedef vector<ll> vec;
typedef vector<string> vecs;
typedef pair<ll, ll> pll;
typedef vector<pair<int, int>> vp;
typedef set<ll> st;
typedef set<pair<ll, ll>> sp;
typedef multiset<ll> mst;
typedef multiset<pair<ll, ll>> mstp;
typedef map<ll, ll> mp;
typedef map<char, ll> mpc;
const ll mx=1e7+123;
ll divx[mx];
ll getdiv(ll mid,ll n, ll m)
{

    ll count=0;
    for(ll i=1; i<=n; i++)
    {
        count+=min(m,mid/i);
    }
    return count;
}
int main()
{
    ll n;
    cin>>n;
    for(ll i=1; i<=n; i++)
    {
        for(ll j=i; j<=n; j=j+i)
        {
            divx[j]++;
        }
    }
    for(ll i=1; i<=n; i++)
    {
        cout<<i<<" "<<divx[i]<<endl;
    }

}


#include<bits/stdc++.h>
using namespace std;
const long long mx=1e7+123;
vector<long long>divi[mx];
void getdiv(long long n)
{
    for(long long i=1; i<=n; i++)
    {
        for(long long j=i; j<=n; j=j+i)
        {
            divi[j].push_back(i);
        }
    }

    for(long long i=0; i<divi[n].size(); i++)
    {
        cout<<divi[n][i]<<" ";
    }
}
int main()
{
    long long n;
    cin>>n;
    getdiv(n);


}

//////////////// harmonic series num of dividor 1 to n////////////
#include<bits/stdc++.h>

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;
typedef long long ll;
typedef vector<ll> vec;
typedef vector<string> vecs;
typedef pair<ll, ll> pll;
typedef vector<pair<int, int>> vp;
typedef set<ll> st;
typedef set<pair<ll, ll>> sp;
typedef multiset<ll> mst;
typedef multiset<pair<ll, ll>> mstp;
typedef map<ll, ll> mp;
typedef map<char, ll> mpc;
const ll mx=1e7+123;
ll divx[mx];
ll getdiv(ll mid,ll n, ll m)
{

    ll count=0;
    for(ll i=1; i<=n; i++)
    {
        count+=min(m,mid/i);
    }
    return count;
}
int main()
{

    for(ll i=1; i<=1e7; i++)
    {
        for(ll j=i; j<=1e7; j=j+i)
        {
            divx[j]++;
        }
    }
    ll n;
    cin>>n;
    ll sum=0;
    for(ll i=1; i<=n; i++)
    {
        sum+=i*divx[i];
    }
    cout<<sum<<endl;


}

//////////////// harmonic series num of dividor 1 to n////////////


#include<bits/stdc++.h>

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;
typedef long long ll;
typedef vector<ll> vec;
typedef vector<string> vecs;
typedef pair<ll, ll> pll;
typedef vector<pair<int, int>> vp;
typedef set<ll> st;
typedef set<pair<ll, ll>> sp;
typedef multiset<ll> mst;
typedef multiset<pair<ll, ll>> mstp;
typedef map<ll, ll> mp;
typedef map<char, ll> mpc;
const ll mx=1e6+1;
vec v[mx];
ll getdiv(ll mid,ll n, ll m)
{

    ll count=0;
    for(ll i=1; i<=n; i++)
    {
        count+=min(m,mid/i);
    }
    return count;
}
int main()
{
    ll lim=1e5;
    for(ll i=1; i<=lim; i++)
    {
        for(ll j=i; j<=lim; j=j+i)
        {
            v[j].push_back(i);
        }
    }
    ll n;
    cin>>n;
    for(ll i=1; i<=n; i++)
    {
        cout<<i<<" ";
        for(auto xx:v[i])
        {
            cout<<xx<<" ";

        }
        cout<<endl;
    }
    //cout<<sum<<endl;


}

//////////////// harmonic series num of dividor 1 to n////////////

#include<bits/stdc++.h>

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;
typedef long long ll;
typedef vector<ll> vec;
typedef vector<string> vecs;
typedef pair<ll, ll> pll;
typedef vector<pair<int, int>> vp;
typedef set<ll> st;
typedef set<pair<ll, ll>> sp;
typedef multiset<ll> mst;
typedef multiset<pair<ll, ll>> mstp;
typedef map<ll, ll> mp;
typedef map<char, ll> mpc;
const ll mx=1e6+1;
ll sumofv[mx];
ll getdiv(ll mid,ll n, ll m)
{

    ll count=0;
    for(ll i=1; i<=n; i++)
    {
        count+=min(m,mid/i);
    }
    return count;
}
int main()
{
    ll lim=1e6;
    ll sum=0;
    for(ll i=1; i<=lim; i++)
    {
        for(ll j=i; j<=lim; j=j+i)
        {
            sumofv[j]+=i;
        }
    }
    ll n;
    cin>>n;
    cout<<sumofv[n]<<endl;
    //cout<<sum<<endl;


}

//////////////// harmonic series num of dividor 1 to n////////////


#include<bits/stdc++.h>

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;
typedef long long ll;
typedef vector<ll> vec;
typedef vector<string> vecs;
typedef pair<ll, ll> pll;
typedef vector<pair<int, int>> vp;
typedef set<ll> st;
typedef set<pair<ll, ll>> sp;
typedef multiset<ll> mst;
typedef multiset<pair<ll, ll>> mstp;
typedef map<ll, ll> mp;
typedef map<char, ll> mpc;
const ll mx=1e8+1;
bitset<mx>isprime;
//bool isprime[mx];
vector<ll>prime;
void getprime(ll n)
{

    for(ll i=3; i<=n; i+=2)
    {
        isprime[i]=0;
    }
    for(ll i=3; i<=sqrt(n); i+=2)
    {
        if(isprime[i]==0)
        {
            for(ll j=i+i; j<=n; j=j+i)
            {
                isprime[j]=1;
            }
        }
    }
    prime.push_back(2);
    for(ll i=3; i<=n; i+=2)
    {
        if(isprime[i]==0)
        {
            prime.push_back(i);
        }
    }

}

int main()
{
    ll n;
    cin>>n;
    getprime(n);
    for(auto xx:prime)
    {
        cout<<xx<<" ";
    }
    cout<<endl;

    //cout<<sum<<endl;


}

//////////////// harmonic series num of dividor 1 to n////////////

#include<bits/stdc++.h>

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;
typedef long long ll;
typedef vector<ll> vec;
typedef vector<string> vecs;
typedef pair<ll, ll> pll;
typedef vector<pair<int, int>> vp;
typedef set<ll> st;
typedef set<pair<ll, ll>> sp;
typedef multiset<ll> mst;
typedef multiset<pair<ll, ll>> mstp;
typedef map<ll, ll> mp;
typedef map<char, ll> mpc;
const ll mx=1e8+1;
bitset<mx>isprime;
//bool isprime[mx];
vector<ll>prime;
void getprime(ll n)
{

    for(ll i=3; i<=n; i+=2)
    {
        isprime[i]=0;
    }
    for(ll i=3; i<=sqrt(n); i+=2)
    {
        if(isprime[i]==0)
        {
            for(ll j=i+i; j<=n; j=j+i)
            {
                isprime[j]=1;
            }
        }
    }
    prime.push_back(2);
    for(ll i=3; i<=n; i+=2)
    {
        if(isprime[i]==0)
        {
            prime.push_back(i);
        }
    }

}
vector<ll>factorize(ll n)
{
    vector<ll>res;
    for(auto p:prime)
    {
        if(1LL*p*p>n)break;
        if(n%p==0)
        {
            while(n%p==0)
            {
                res.push_back(p);
                n=n/p;
            }
        }
    }
    if(n>1)
    {
        res.push_back(n);
    }
    return res;
}
int main()
{
    ll lim=1e3;
    getprime(lim);
    ll n;
    cin>>n;
    vec ans=factorize(n);
    for(auto xx:ans)
    {
        cout<<xx<<" ";
    }
    cout<<endl;
    //cout<<sum<<endl;


}

//////////////// harmonic series num of dividor 1 to n////////////


#include<bits/stdc++.h>

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;
typedef long long ll;
typedef vector<ll> vec;
typedef vector<string> vecs;
typedef pair<ll, ll> pll;
typedef vector<pair<int, int>> vp;
typedef set<ll> st;
typedef set<pair<ll, ll>> sp;
typedef multiset<ll> mst;
typedef multiset<pair<ll, ll>> mstp;
typedef map<ll, ll> mp;
typedef map<char, ll> mpc;
const ll mx=1e8+1;
bitset<mx>isprime;
//bool isprime[mx];
vector<ll>prime;
void getprime(ll n)
{

    for(ll i=3; i<=n; i+=2)
    {
        isprime[i]=0;
    }
    for(ll i=3; i<=sqrt(n); i+=2)
    {
        if(isprime[i]==0)
        {
            for(ll j=i+i; j<=n; j=j+i)
            {
                isprime[j]=1;
            }
        }
    }
    prime.push_back(2);
    for(ll i=3; i<=n; i+=2)
    {
        if(isprime[i]==0)
        {
            prime.push_back(i);
        }
    }

}
vector<ll>factorize(ll n)
{
    vector<ll>res;
    for(auto p:prime)
    {
        if(1LL*p*p>n)break;
        if(n%p==0)
        {
            while(n%p==0)
            {
                res.push_back(p);
                n=n/p;
            }
        }
    }
    if(n>1)
    {
        res.push_back(n);
    }
    return res;
}
int main()
{
    ll lim=1e5;
    getprime(lim);
    ll n;
    cin>>n;
    vec ans=factorize(n);
    ll mxno=0;
    set<ll>st;
    for(auto xx:ans)
    {
        st.insert(xx);
        mxno=max(mxno,xx);
    }
    if(st.size()==1)cout<<-1<<endl;
    cout<<mxno<<endl;

    main();
    //cout<<sum<<endl;


}


#include<bits/stdc++.h>
using namespace std;
const long long mx=1e7+123;
vector<long long>prime;
bool comp[mx+5];
long long ans[mx];
#define ll long long
void genprime(long long n)
{
    comp[1]=true;
    for(long long i=2; i*i<=n; i++)
    {
        if(comp[i]==0)
        {
            for(long long j=i+i; j<=n; j=j+i)
            {
                comp[j]=1;
            }
        }
    }
    for(long long i=1; i<=n; i++)
    {
        if(comp[i]==0)
        {
            prime.push_back(i);
        }
    }

}
long long NOD(long long val)
{
    long long res=1;
    for(auto u:prime)
    {
        if(u*u>val)break;
        long long count=1;
        while(val%u==0)
        {
            val=val/u;
            count++;

        }
        res=res*count;
    }
    if(val>1)res=res*2;
    return res;

}

int main()
{
    long long lim=1e6;
    genprime(lim);

    long long n;
    cin>>n;
    cout<<NOD(n)<<endl;




}


#include<bits/stdc++.h>

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;
typedef long long ll;
typedef vector<ll> vec;
typedef vector<string> vecs;
typedef pair<ll, ll> pll;
typedef vector<pair<int, int>> vp;
typedef set<ll> st;
typedef set<pair<ll, ll>> sp;
typedef multiset<ll> mst;
typedef multiset<pair<ll, ll>> mstp;
typedef map<ll, ll> mp;
typedef map<char, ll> mpc;
const ll mx=1e8+1;
bitset<mx>isprime;
//bool isprime[mx];
vector<ll>prime;
void getprime(ll n)
{

    for(ll i=3; i<=n; i+=2)
    {
        isprime[i]=0;
    }
    for(ll i=3; i<=sqrt(n); i+=2)
    {
        if(isprime[i]==0)
        {
            for(ll j=i+i; j<=n; j=j+i)
            {
                isprime[j]=1;
            }
        }
    }
    prime.push_back(2);
    for(ll i=3; i<=n; i+=2)
    {
        if(isprime[i]==0)
        {
            prime.push_back(i);
        }
    }

}
long long SOD(ll n)
{
    ll sod=1;
    for(auto p:prime)
    {
        if(1LL*p*p>n)break;
        if(n%p==0)
        {
            ll sum=1;
            ll a=1;
            while(n%p==0)
            {
                a*=p;
                sum+=a;
                n=n/p;
            }
            sod*=sum;
        }

    }
    if(n>1)
    {
        sod*=(n+1);
    }
    return sod;
}
int main()
{
    ll lim=1e5;
    getprime(lim);
    ll n;
    cin>>n;
    cout<<SOD(n)<<endl;


}

//////////////// harmonic series num of dividor 1 to n////////////


#include<bits/stdc++.h>

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;
typedef long long ll;
typedef vector<ll> vec;
typedef vector<string> vecs;
typedef pair<ll, ll> pll;
typedef vector<pair<int, int>> vp;
typedef set<ll> st;
typedef set<pair<ll, ll>> sp;
typedef multiset<ll> mst;
typedef multiset<pair<ll, ll>> mstp;
typedef map<ll, ll> mp;
typedef map<char, ll> mpc;
const ll mx=1e8+1;
bitset<mx>isprime;
//bool isprime[mx];
vector<ll>prime;
int main()
{
    ll lim=1e6;
    getprime(lim);

    ll n;
    cin>>n;
    ll sumofdiv=0;
    for(ll i=1; i<=n; i++)
    {
        sumofdiv+=(n/i);
    }
    cout<<sumofdiv<<endl;

    //main();
    //cout<<sum<<endl;


}



#include<bits/stdc++.h>

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;
typedef long long ll;
typedef vector<ll> vec;
typedef vector<string> vecs;
typedef pair<ll, ll> pll;
typedef vector<pair<int, int>> vp;
typedef set<ll> st;
typedef set<pair<ll, ll>> sp;
typedef multiset<ll> mst;
typedef multiset<pair<ll, ll>> mstp;
typedef map<ll, ll> mp;
typedef map<char, ll> mpc;
const ll mx=1e8+1;
bitset<mx>isprime;
//bool isprime[mx];
vector<ll>prime;
int main()
{
    //ll lim=1e6;
    //getprime(lim);

    ll n;
    cin>>n;
    ll snod=0;
    ll lim=sqrt(n);
    for(ll i=1; i<=lim; i++)
    {
        ll val=(n/i)-i;
        cout<<i<<" "<<val<<endl;
        snod+=val;
    }
    snod*=2;
    snod+=lim;
    cout<<snod<<endl;


    //main();
    //cout<<sum<<endl;


}



#include<bits/stdc++.h>

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;
typedef long long ll;
typedef vector<ll> vec;
typedef vector<string> vecs;
typedef pair<ll, ll> pll;
typedef vector<pair<int, int>> vp;
typedef set<ll> st;
typedef set<pair<ll, ll>> sp;
typedef multiset<ll> mst;
typedef multiset<pair<ll, ll>> mstp;
typedef map<ll, ll> mp;
typedef map<char, ll> mpc;
const ll mx=1e8+1;
bitset<mx>isprime;
//bool isprime[mx];
vector<ll>prime;
void getprime(ll n)
{

    for(ll i=3; i<=n; i+=2)
    {
        isprime[i]=0;
    }
    for(ll i=3; i<=sqrt(n); i+=2)
    {
        if(isprime[i]==0)
        {
            for(ll j=i+i; j<=n; j=j+i)
            {
                isprime[j]=1;
            }
        }
    }
    prime.push_back(2);
    for(ll i=3; i<=n; i+=2)
    {
        if(isprime[i]==0)
        {
            prime.push_back(i);
        }
    }

}
const ll mx1=1e7+123;
vec facto[mx1];

int main()
{
    ll lim=1e6;
    getprime(lim);
    for(auto p:prime)
    {
        for(ll i=p; i<=lim; i+=p)
        {
            ll n=i;
            while(n%p==0)
            {
                facto[i].push_back(p);
                n=n/p;
            }
        }

    }
    ll n;
    cin>>n;
    for(auto x:facto[n])
    {
        cout<<x<<" ";
    }
    cout<<endl;

}

#include<bits/stdc++.h>

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;
typedef long long ll;
typedef vector<ll> vec;
typedef vector<string> vecs;
typedef pair<ll, ll> pll;
typedef vector<pair<int, int>> vp;
typedef set<ll> st;
typedef set<pair<ll, ll>> sp;
typedef multiset<ll> mst;
typedef multiset<pair<ll, ll>> mstp;
typedef map<ll, ll> mp;
typedef map<char, ll> mpc;
const ll mx=1e8+1;
bitset<mx>isprime;
//bool isprime[mx];
vector<ll>prime;
void getprime(ll n)
{

    for(ll i=3; i<=n; i+=2)
    {
        isprime[i]=0;
    }
    for(ll i=3; i<=sqrt(n); i+=2)
    {
        if(isprime[i]==0)
        {
            for(ll j=i+i; j<=n; j=j+i)
            {
                isprime[j]=1;
            }
        }
    }
    prime.push_back(2);
    for(ll i=3; i<=n; i+=2)
    {
        if(isprime[i]==0)
        {
            prime.push_back(i);
        }
    }

}
ll PHI (ll n)
{
    ll phi=n;
    for(auto p:prime)
    {
        if(1LL*p*p>n)break;
        if(n%p==0)
        {
            while(n%p==0)
            {
                n=n/p;
            }
            phi/=p;
            phi*=(p-1);
        }
    }
    if(n>1)
    {
        phi/=n;
        phi*=(n-1);
    }
    return phi;
}
int main()
{
    ll lim=1e6;
    getprime(lim);
    ll n;
    cin>>n;
    cout<<PHI(n)<<endl;
    //cout<<sum<<endl;


}

#include<bits/stdc++.h>

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;
typedef long long ll;
typedef vector<ll> vec;
typedef vector<string> vecs;
typedef pair<ll, ll> pll;
typedef vector<pair<int, int>> vp;
typedef set<ll> st;
typedef set<pair<ll, ll>> sp;
typedef multiset<ll> mst;
typedef multiset<pair<ll, ll>> mstp;
typedef map<ll, ll> mp;
typedef map<char, ll> mpc;
#define fastio  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main()
{
    //fastio;

     ll n;
     cin>>n;
     ll count=0;
     ll ground=5;
     while(ground<=n){
        count+=(n/ground);
        ground*=5LL;
     }
    cout<<count<<endl;




    //main();

}


#include<bits/stdc++.h>

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;
typedef long long ll;
typedef vector<ll> vec;
typedef vector<string> vecs;
typedef pair<ll, ll> pll;
typedef vector<pair<int, int>> vp;
typedef set<ll> st;
typedef set<pair<ll, ll>> sp;
typedef multiset<ll> mst;
typedef multiset<pair<ll, ll>> mstp;
typedef map<ll, ll> mp;
typedef map<char, ll> mpc;
const ll mx=1e8+1;
bitset<mx>isprime;
//bool isprime[mx];
vector<ll>prime;
void getprime(long long n)
{
    isprime[1]=true;
    for(long long i=2; i*i<=n; i++)
    {
        if(isprime[i]==0)
        {
            for(long long j=i+i; j<=n; j=j+i)
            {
                isprime[j]=1;
            }
        }
    }
    //prime.push_back(2);
    for(long long i=1; i<=n; i++)
    {
        if(isprime[i]==0)
        {
            prime.push_back(i);
        }
    }
}

vp factorize(ll n)
{
    vp v;
    for(auto p:prime)
    {
        if(1LL*p*p>n)break;
        if(n%p==0)
        {
            ll count=0;
            while(n%p==0)
            {
                n=n/p;
                count++;
            }
            v.push_back({p,count});
        }
    }
    if(n>1)
    {
        v.push_back({n,1});
    }
    return v;
}
int main()
{
    ll lim=1e6;
    getprime(lim);
    ll t;
    cin>>t;
    while(t--)
    {
        ll p,q;
        cin>>p>>q;
        if(p%q!=0)
        {
            cout<<p<<endl;
        }
        else
        {
            vp ans=factorize(q);
            ll mxno=1;
            for(auto xx:ans)
            {
                ll tmp=p;
                while(tmp%xx.first==0)
                {
                    tmp/=xx.first;
                }
                //cout<<p<<endl;
                ll c=pow(xx.first,xx.second-1);
                tmp*=c;
                mxno=max(mxno,tmp);
            }
            cout<<mxno<<endl;
        }

    }
}



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<bits/stdc++.h>

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;
typedef long long ll;
typedef vector<ll> vec;
typedef vector<string> vecs;
typedef pair<ll, ll> pll;
typedef vector<pair<int, int>> vp;
typedef set<ll> st;
typedef set<pair<ll, ll>> sp;
typedef multiset<ll> mst;
typedef multiset<pair<ll, ll>> mstp;
typedef map<ll, ll> mp;
typedef map<char, ll> mpc;
#define fastio  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main()
{
   //bruteforce///
  // subarray sum equal to k of find mxlength
    ll n,k;
    cin>>n>>k;
    vec v(n);
    for(ll i=0;i<n;i++){
          cin>>v[i];
    }
    ll len=0;
    ll mxno=0;
    for(ll i=0;i<n;i++){
         for(ll j=i; j<n;j++){
             ll sum=0;
             for(ll k=i;k<=j;k++){
                 sum+=v[k];
             }
             if(sum==k){
              len=max(len,j-i+1);
             }
         }
    }
    cout<<len<<endl;

  / optimal but not//

    ll n,k;
    cin>>n>>k;
    vec v(n);
    for(ll i=0; i<n; i++)
    {
        cin>>v[i];
    }
    ll len=0;
    ll mxno=0;
    for(ll i=0; i<n; i++)
    {
        ll sum=0;
        for(ll j=i; j<n; j++)
        {
            sum+=v[j];
            if(sum==k)
            {
                len=max(len,j-i+1);
            }
        }
    }
    cout<<len<<endl;

   ll n,k;
   cin>>n>>k;

   vec v(n);
   for(ll i=0;i<n;i++){
       cin>>v[i];
   }

   ll mxlen=0;
   ll sum=0;
   mp m;
   for(ll i=0;i<n;i++){
       sum+=v[i];
       if(sum==k){
         mxlen=max(mxlen,i+1);
       }
       ll rem=sum-k;
       if(m.find(rem)!=m.end()){
          ll len=i-m[rem];
          mxlen=max(mxlen,len);
       }
       if(m.find(sum)==m.end()){
          m[sum]=i;
       }
   }
   cout<<mxlen<<endl;
   main();

    ll n,k;
    cin>>n>>k;
    vec v(n);

    for(ll i=0;i<n;i++){
        cin>>v[i];
    }
    ll l=0,r=0;
    ll sum=v[0];
    ll mxnlen=0;
    while(r<n){
        while(l<=r && sum>k){
            sum-=v[l];
            l++;
        }
        if(sum==k){
             mxnlen=max(mxnlen,r-l+1);
        }
        r++;
        if(r<n)sum+=v[r];
    }
    cout<<mxnlen<<endl;

}


#include<bits/stdc++.h>

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;
typedef long long ll;
typedef vector<ll> vec;
typedef vector<string> vecs;
typedef pair<ll, ll> pll;
typedef vector<pair<int, int>> vp;
typedef set<ll> st;
typedef set<pair<ll, ll>> sp;
typedef multiset<ll> mst;
typedef multiset<pair<ll, ll>> mstp;
typedef map<ll, ll> mp;
typedef map<char, ll> mpc;
const ll mx=1e8+1;
bitset<mx>isprime;
#define fastio  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main()
{
    //fastio;
    // number of subarray sun eual sumx
    ll n,sumx;
    cin>>n>>sumx;

    vec v(n);
    for(ll i=0; i<n; i++)
    {
        cin>>v[i];
    }
    vec pref(n+2);
    pref[0]=v[0];
    for(ll i=1; i<=n; i++)
    {
        pref[i]=pref[i-1]+v[i];
    }
    mp m;
    m[0]=1;
    ll ans=0;
    for(ll i=0; i<n; i++)
    {
        ans+=(m[pref[i]-sumx]);
        m[pref[i]]+=1;
    }
    cout<<ans<<endl;


    //main();

}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<bits/stdc++.h>
using namespace std;
const long long mx=1e6+123;
typedef vector<long long>vec;
bool vis[mx+3];
//vec vv1[mx+3];
#define ll long long
typedef vector<pair<ll, ll>> vp;
vec vv1[mx];
int main()
{
    ll n,m;
    cin>>n>>m;
    for(ll i=1; i<=m; i++)
    {
        ll u,v,w;
        cin>>u>>v;
        vv1[u].push_back(v);
        vv1[v].push_back(u);
    }
    for(ll i=1; i<=n; i++)
    {
        cout<<i<<" ";
        for(auto xx:vv1[i])
        {
            cout<<xx<<" ";
        }
        cout<<endl;

    }
   ;
    //main();
}


#include<bits/stdc++.h>
using namespace std;
const long long mx=1e6+123;
typedef vector<long long>vec;
bool vis[mx+3];
//vec vv1[mx+3];
#define ll long long
typedef vector<pair<ll, ll>> vp;
vp vv1[mx];
int main()
{
    ll n,m;
    cin>>n>>m;
    for(ll i=1; i<=m; i++)
    {
        ll u,v,w;
        cin>>u>>v>>w;
        vv1[u].push_back({v,w});
        vv1[v].push_back({u,w});
    }
    for(ll i=1; i<=n; i++)
    {
        cout<<i<<" ";
        for(auto xx:vv1[i])
        {
            cout<<xx.first<<" "<<xx.second<<" ";
        }
        cout<<endl;

    }

    //main();
}



#include<bits/stdc++.h>

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;
typedef long long ll;
const ll mx=30;
char cx[mx][mx];
ll cnt=0;
ll m,n;
ll dx[]= {+1, -1, 0, 0};
ll dy[]= {0, 0, -1, +1};
bool vis[mx][mx];
void dfs(ll x, ll y)
{
    vis[x][y]=1;
    cnt++;

    for(ll i=0; i<4; i++)
    {
        ll x1=x+dx[i];
        ll y1=y+dy[i];

        if(x1>=1 && x1<=n && y1>=1 && y1<=m && !vis[x1][y1] && cx[x1][y1]!='#')
        {
            dfs(x1,y1);
        }
    }

    //return;
}
int main()
{
    ll t;
    cin>>t;
    for(ll i=1; i<=t; i++)
    {
        memset(vis,0,sizeof(vis));

        cnt=0;

        ll x, y;
        cin>>m>>n;


        for(ll i=1; i<=n; i++)
        {
            for(ll j=1; j<=m; j++)
            {
                cin>>cx[i][j];

                if(cx[i][j]=='@')
                {
                    x=i,y=j;
                }
            }

        }
        dfs(x,y);
        cout<<"Case "<< i <<": "<<cnt<<endl;
    }



}


#include<bits/stdc++.h>

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;
typedef long long ll;
typedef tree<pair<ll,ll>, null_type, less<pair<ll,ll>>, rb_tree_tag, tree_order_statistics_node_update> pbds;
typedef tree<ll, null_type, greater<ll>, rb_tree_tag, tree_order_statistics_node_update> pbdsx;
typedef tree<ll, null_type, less<ll>, rb_tree_tag, tree_order_statistics_node_update> pbds1;// find_by_order, order_of_key, less, greater,less_equal
typedef tree<ll, null_type, less_equal<ll>, rb_tree_tag, tree_order_statistics_node_update> ordered_multiset;

typedef vector<ll> vec;
typedef vector<string> vecs;
typedef pair<ll, ll> pll;
typedef vector<pair<int, int>> vp;
typedef set<ll> st;
typedef set<pair<ll, ll>> sp;
typedef multiset<ll> mst;
typedef multiset<pair<ll, ll>> mstp;
typedef map<ll, ll> mp;
typedef map<char, ll> mpc;
const ll mx=1e6+1;
bitset<mx>isprime;
#define fastio  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
vec vv1[mx];
bool visited[mx];
void dfs(ll u){
  visited[u]=1;
  for(auto x: vv1[u]){
     if(visited[x]==0){
        dfs(x);
     }
  }
  return;

}
int main()
{
    //fastio;
    ll n,e;
    cin>>n>>e;
    for(ll i=1;i<=e;i++){
        ll u,v;
        cin>>u>>v;
        vv1[u].push_back(v);
        vv1[v].push_back(u);
    }
    ll count=0;
    for(ll i=1;i<=n;i++){
        if(visited[i]==0){
            dfs(i);
            count++;
        }
    }
    cout<<"Connected component of a graph"<<count<<endl;


}




#include<bits/stdc++.h>

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;
typedef long long ll;
typedef tree<pair<ll,ll>, null_type, less<pair<ll,ll>>, rb_tree_tag, tree_order_statistics_node_update> pbds;
typedef tree<ll, null_type, greater<ll>, rb_tree_tag, tree_order_statistics_node_update> pbdsx;
typedef tree<ll, null_type, less<ll>, rb_tree_tag, tree_order_statistics_node_update> pbds1;// find_by_order, order_of_key, less, greater,less_equal
typedef tree<ll, null_type, less_equal<ll>, rb_tree_tag, tree_order_statistics_node_update> ordered_multiset;

typedef vector<ll> vec;
typedef vector<string> vecs;
typedef pair<ll, ll> pll;
typedef vector<pair<int, int>> vp;
typedef set<ll> st;
typedef set<pair<ll, ll>> sp;
typedef multiset<ll> mst;
typedef multiset<pair<ll, ll>> mstp;
typedef map<ll, ll> mp;
typedef map<char, ll> mpc;
const ll mx=1e6+1;
bitset<mx>isprime;
#define fastio  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
vec vv1[mx];
bool visited[mx];
ll cnt=0;
void dfs(ll u){
  visited[u]=1;
  cnt++;
  for(auto x: vv1[u]){
     if(visited[x]==0){
        dfs(x);
     }
  }
  return;

}
int main()
{
    //fastio;
    ll n,e;
    cin>>n>>e;
    for(ll i=1;i<=e;i++){
        ll u,v;
        cin>>u>>v;
        vv1[u].push_back(v);
        vv1[v].push_back(u);
    }
    ll ans=0;
    for(ll i=1;i<=n;i++){
        if(visited[i]==0){
            cnt=0;
            dfs(i);
            ans=max(ans,cnt);
        }
    }
    cout<<" Maximum Size of Connected component of a graph "<<ans<<endl;


}
/// Bipertite Graph///////////////////


#include<bits/stdc++.h>

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;
typedef long long ll;
typedef tree<pair<ll,ll>, null_type, less<pair<ll,ll>>, rb_tree_tag, tree_order_statistics_node_update> pbds;
typedef tree<ll, null_type, greater<ll>, rb_tree_tag, tree_order_statistics_node_update> pbdsx;
typedef tree<ll, null_type, less<ll>, rb_tree_tag, tree_order_statistics_node_update> pbds1;// find_by_order, order_of_key, less, greater,less_equal
typedef tree<ll, null_type, less_equal<ll>, rb_tree_tag, tree_order_statistics_node_update> ordered_multiset;

typedef vector<ll> vec;
typedef vector<string> vecs;
typedef pair<ll, ll> pll;
typedef vector<pair<int, int>> vp;
typedef set<ll> st;
typedef set<pair<ll, ll>> sp;
typedef multiset<ll> mst;
typedef multiset<pair<ll, ll>> mstp;
typedef map<ll, ll> mp;
typedef map<char, ll> mpc;
const ll mx=2e4+1;
bitset<mx>isprime;
#define fastio  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
vec vv1[mx];
ll cnt=0,cnt1=0;
bool visited[mx];
bool isnode[mx];
void dfs(ll u, ll col)
{

    visited[u]=1;
    if(col==1)cnt1++;

    cnt++;

    ll tmp=0;
    if(col==1)tmp=2;
    else tmp=1;

    for(auto x: vv1[u])
    {
        if(visited[x]==0)
        {
            dfs(x,tmp);
        }
    }
    return;

}
int main()
{
    //fastio;

    ll t;
    cin>>t;
    while(t--)
    {
        for(ll i=0;i<mx;i++){
            vv1[i].clear();
            isnode[i]=0;
            visited[i]=0;
        }

        ll m;
        cin>>m;
        for(ll i=1; i<=m; i++)
        {
            ll u,v;
            cin>>u>>v;
            vv1[u].push_back(v);
            vv1[v].push_back(u);

            isnode[u]=1;
            isnode[v]=1;
        }
        ll ans=0;
        for(ll i=1;i<=mx;i++){
            if(isnode[i]==1 and visited[i]==0){
                cnt=0;cnt1=0;
                dfs(i,1);
                ans+=max(cnt1,cnt-cnt1);
            }
        }
        cout<<ans<<endl;
    }

}
//////// single source shortest path///////////////


#include<bits/stdc++.h>

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;
typedef long long ll;
typedef tree<pair<ll,ll>, null_type, less<pair<ll,ll>>, rb_tree_tag, tree_order_statistics_node_update> pbds;
typedef tree<ll, null_type, greater<ll>, rb_tree_tag, tree_order_statistics_node_update> pbdsx;
typedef tree<ll, null_type, less<ll>, rb_tree_tag, tree_order_statistics_node_update> pbds1;// find_by_order, order_of_key, less, greater,less_equal
typedef tree<ll, null_type, less_equal<ll>, rb_tree_tag, tree_order_statistics_node_update> ordered_multiset;

typedef vector<ll> vec;
typedef vector<string> vecs;
typedef pair<ll, ll> pll;
typedef vector<pair<int, int>> vp;
typedef set<ll> st;
typedef set<pair<ll, ll>> sp;
typedef multiset<ll> mst;
typedef multiset<pair<ll, ll>> mstp;
typedef map<ll, ll> mp;
typedef map<char, ll> mpc;
const ll mx=1e4+1;
bitset<mx>isprime;
#define fastio  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
vec vv1[mx+2];
bool visited[mx+2];
ll dis[mx+2];

void dfs(ll u, ll d)
{

    visited[u]=1;

    dis[u]=d;

    for(auto x:vv1[u])
    {
        if(visited[x]==0)
        {
            dfs(x,d+1);
        }
    }
}
int main()
{
    ll n,e;
    cin>>n>>e;
    for(ll i=1; i<=e; i++)
    {
        ll u,v;
        cin>>u>>v;
        vv1[u].push_back(v);
        vv1[v].push_back(u);
    }
    ll x;
    cin>>x;
    dfs(x,0);
    for(ll i=1; i<=n; i++)
    {
        cout<<x<<" "<<i<<" "<<dis[i]<<"\n";
    }


}


/// Bishu and his gf/////////
#include<bits/stdc++.h>

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;
typedef long long ll;
typedef tree<pair<ll,ll>, null_type, less<pair<ll,ll>>, rb_tree_tag, tree_order_statistics_node_update> pbds;
typedef tree<ll, null_type, greater<ll>, rb_tree_tag, tree_order_statistics_node_update> pbdsx;
typedef tree<ll, null_type, less<ll>, rb_tree_tag, tree_order_statistics_node_update> pbds1;// find_by_order, order_of_key, less, greater,less_equal
typedef tree<ll, null_type, less_equal<ll>, rb_tree_tag, tree_order_statistics_node_update> ordered_multiset;

typedef vector<ll> vec;
typedef vector<string> vecs;
typedef pair<ll, ll> pll;
typedef vector<pair<int, int>> vp;
typedef set<ll> st;
typedef set<pair<ll, ll>> sp;
typedef multiset<ll> mst;
typedef multiset<pair<ll, ll>> mstp;
typedef map<ll, ll> mp;
typedef map<char, ll> mpc;
const ll mx=1e4+1;
bitset<mx>isprime;
#define fastio  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
vec vv1[mx+2];
bool visited[mx+2];
ll dis[mx+2];

void dfs(ll u, ll d)
{

    visited[u]=1;

    dis[u]=d;

    for(auto x:vv1[u])
    {
        if(visited[x]==0)
        {
            dfs(x,d+1);
        }
    }
}
int main()
{
    ll n,e;
    cin>>n;
    e=n-1;
    for(ll i=1; i<=e; i++)
    {
        ll u,v;
        cin>>u>>v;
        vv1[u].push_back(v);
        vv1[v].push_back(u);
    }
    ll t;
    cin>>t;
    ll mino=LONG_MAX;
    ll ans=0;
    dfs(1,0);
    while(t--)
    {
        ll x;
        cin>>x;
        if(dis[x]<mino){
            mino=dis[x];
            ans=x;
        }
        else if(dis[x]==mino){
            ans=min(ans,x);
        }
    }

    cout<<ans<<endl;
}


/// Tree or not/////////

#include<bits/stdc++.h>

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;
typedef long long ll;
typedef tree<pair<ll,ll>, null_type, less<pair<ll,ll>>, rb_tree_tag, tree_order_statistics_node_update> pbds;
typedef tree<ll, null_type, greater<ll>, rb_tree_tag, tree_order_statistics_node_update> pbdsx;
typedef tree<ll, null_type, less<ll>, rb_tree_tag, tree_order_statistics_node_update> pbds1;// find_by_order, order_of_key, less, greater,less_equal
typedef tree<ll, null_type, less_equal<ll>, rb_tree_tag, tree_order_statistics_node_update> ordered_multiset;

typedef vector<ll> vec;
typedef vector<string> vecs;
typedef pair<ll, ll> pll;
typedef vector<pair<int, int>> vp;
typedef set<ll> st;
typedef set<pair<ll, ll>> sp;
typedef multiset<ll> mst;
typedef multiset<pair<ll, ll>> mstp;
typedef map<ll, ll> mp;
typedef map<char, ll> mpc;
const ll mx=1e6+1;
bitset<mx>isprime;
#define fastio  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
vec vv1[mx];
bool visited[mx];
void dfs(ll u){
  visited[u]=1;
  for(auto x: vv1[u]){
     if(visited[x]==0){
        dfs(x);
     }
  }
  return;

}
int main()
{
    //fastio;
    ll n,e;
    cin>>n>>e;
    for(ll i=1;i<=e;i++){
        ll u,v;
        cin>>u>>v;
        vv1[u].push_back(v);
        vv1[v].push_back(u);
    }
    ll count=0;
    for(ll i=1;i<=n;i++){
        if(visited[i]==0){
            dfs(i);
            count++;
        }
    }
    if(count==1 and e==n-1){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }


}

//check  bipertite or not
#include<bits/stdc++.h>

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;
typedef long long ll;
typedef tree<pair<ll,ll>, null_type, less<pair<ll,ll>>, rb_tree_tag, tree_order_statistics_node_update> pbds;
typedef tree<ll, null_type, greater<ll>, rb_tree_tag, tree_order_statistics_node_update> pbdsx;
typedef tree<ll, null_type, less<ll>, rb_tree_tag, tree_order_statistics_node_update> pbds1;// find_by_order, order_of_key, less, greater,less_equal
typedef tree<ll, null_type, less_equal<ll>, rb_tree_tag, tree_order_statistics_node_update> ordered_multiset;

typedef vector<ll> vec;
typedef vector<string> vecs;
typedef pair<ll, ll> pll;
typedef vector<pair<int, int>> vp;
typedef set<ll> st;
typedef set<pair<ll, ll>> sp;
typedef multiset<ll> mst;
typedef multiset<pair<ll, ll>> mstp;
typedef map<ll, ll> mp;
typedef map<char, ll> mpc;
const ll mx=1e6+1;
bitset<mx>isprime;
#define fastio  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
vec vv1[mx];
bool visited[mx];
ll colour[mx];
bool dfs(ll u, ll col){
  visited[u]=1;
  colour[u]=col;
  for(auto x: vv1[u]){
     if(visited[x]==0){
        if(dfs(x,col^1)==false) return false;

     }
     else{
        if(colour[u]==colour[x])return false;
     }
  }
  return true;

}
int main()
{
    fastio;
    ll n,e;
    cin>>n>>e;
    for(ll i=1;i<=e;i++){
        ll u,v;
        cin>>u>>v;
        vv1[u].push_back(v);
        vv1[v].push_back(u);
    }
    bool check=dfs(1,1);
    if(check==true){
        cout<<"YES Bipertite"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

}




/// Bipertite or not////
#include<bits/stdc++.h>

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;
typedef long long ll;
typedef tree<pair<ll,ll>, null_type, less<pair<ll,ll>>, rb_tree_tag, tree_order_statistics_node_update> pbds;
typedef tree<ll, null_type, greater<ll>, rb_tree_tag, tree_order_statistics_node_update> pbdsx;
typedef tree<ll, null_type, less<ll>, rb_tree_tag, tree_order_statistics_node_update> pbds1;// find_by_order, order_of_key, less, greater,less_equal
typedef tree<ll, null_type, less_equal<ll>, rb_tree_tag, tree_order_statistics_node_update> ordered_multiset;

typedef vector<ll> vec;
typedef vector<string> vecs;
typedef pair<ll, ll> pll;
typedef vector<pair<int, int>> vp;
typedef set<ll> st;
typedef set<pair<ll, ll>> sp;
typedef multiset<ll> mst;
typedef multiset<pair<ll, ll>> mstp;
typedef map<ll, ll> mp;
typedef map<char, ll> mpc;
const ll mx=1e6+1;
bitset<mx>isprime;
#define fastio  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
vec vv1[mx];
bool visited[mx];
ll colour[mx];
bool dfs(ll u, ll col)
{
    visited[u]=1;
    colour[u]=col;
    for(auto x: vv1[u])
    {
        if(visited[x]==0)
        {
            if(dfs(x,col^1)==false) return false;

        }
        else
        {
            if(colour[u]==colour[x])return false;
        }
    }
    return true;

}
int main()
{
    //fastio;
    ll t;
    cin>>t;
    for(ll i=1;i<=t;i++)
    {
        for(ll i=0;i<mx;i++){
            vv1[i].clear();
            colour[i]=0;
            visited[i]=0;
        }
        ll n,e;
        cin>>n>>e;
        for(ll i=1; i<=e; i++)
        {
            ll u,v;
            cin>>u>>v;
            vv1[u].push_back(v);
            vv1[v].push_back(u);
        }
        bool ans;
        for(ll i=1;i<=n;i++){
            if(visited[i]==0){
                ans=dfs(i,1);
            }
            if(ans==false)break;
        }
        if(ans==true)
        {
            cout<<"Scenario #"<<i<<":"<<endl;
            cout<<"No suspicious bugs found!"<<endl;
        }
        else
        {
            cout<<"Scenario #"<<i<<":"<<endl;
            cout<<"Suspicious bugs found!"<<endl;
        }
    }

}



/////BFS.////

#include<bits/stdc++.h>

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;
typedef long long ll;
typedef vector<ll> vec;
typedef vector<string> vecs;
typedef pair<ll, ll> pll;
typedef vector<pair<int, int>> vp;
typedef set<ll> st;
typedef set<pair<ll, ll>> sp;
typedef multiset<ll> mst;
typedef multiset<pair<ll, ll>> mstp;
typedef map<ll, ll> mp;
typedef map<char, ll> mpc;
const ll mx=1e5+1;
bitset<mx>isprime;
vec vv1[mx];
ll level[mx];
void bfs(ll s)
{
    memset( level, -1, sizeof(level));
    level[s]=0;
    queue<ll>q;
    q.push(s);
    while(!q.empty())
    {
        ll xx=q.front();
        q.pop();
        for(auto v:vv1[xx])
        {
            if(level[v]==-1)
            {
                level[v]=level[xx]+1;
                q.push(v);
            }
        }
    }



}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        for(ll i=0;i<mx;i++){
            vv1[i].clear();
        }
        ll n,m;
        cin>>n>>m;
        for(ll i=0; i<m; i++)
        {
            ll u,v;
            cin>>u>>v;
            vv1[u].push_back(v);
            vv1[v].push_back(u);
        }
        bfs(1);
        cout<<level[n]<<endl;


    }
    // main();

}


/// Cycle detection///////

#include<bits/stdc++.h>

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;
typedef long long ll;
typedef tree<pair<ll,ll>, null_type, less<pair<ll,ll>>, rb_tree_tag, tree_order_statistics_node_update> pbds;
typedef tree<ll, null_type, greater<ll>, rb_tree_tag, tree_order_statistics_node_update> pbdsx;
typedef tree<ll, null_type, less<ll>, rb_tree_tag, tree_order_statistics_node_update> pbds1;// find_by_order, order_of_key, less, greater,less_equal
typedef tree<ll, null_type, less_equal<ll>, rb_tree_tag, tree_order_statistics_node_update> ordered_multiset;

typedef vector<ll> vec;
typedef vector<string> vecs;
typedef pair<ll, ll> pll;
typedef vector<pair<int, int>> vp;
typedef set<ll> st;
typedef set<pair<ll, ll>> sp;
typedef multiset<ll> mst;
typedef multiset<pair<ll, ll>> mstp;
typedef map<ll, ll> mp;
typedef map<char, ll> mpc;
const ll mx=1e6+1;
bitset<mx>isprime;
#define fastio  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
vec vv1[mx];
bool visited[mx];
bool dfs(ll u, ll par)
{
    visited[u]=1;
    for(auto x: vv1[u])
    {
        if(visited[x]==0)
        {
            if(dfs(x,u)==true) return true;

        }
        else
        {
            if(u!=par)return true;
        }
    }
    return false;

}
int main()
{
    //fastio;

    ll n,e;
    cin>>n>>e;
    for(ll i=1; i<=e; i++)
    {
        ll u,v;
        cin>>u>>v;
        vv1[u].push_back(v);
        vv1[v].push_back(u);
    }
    bool ans=dfs(1,-1);
    if(ans==true)
    {
        cout<<"Cycle"<<endl;
    }
    else
    {
        cout<<"Not cycle"<<endl;
    }



}

/// Diameter of a tree/////////
#include<bits/stdc++.h>
using  namespace  std;

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>

#define faster  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

#define sq(x)   (x)*(x)
#define PI      acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl      '\n'

typedef long long int ll;
typedef unsigned long long int  llu;

int mx=-(INT_MAX),nod;
int vis[10001],dis[10001];
vector<int>v[10001];
void dfs(int node,int d)
{
	vis[node]=1;
	dis[node]=d;
	if(dis[node]>mx)
	{
		mx=dis[node];
		nod=node;
	}
	for(int child: v[node])
	{
		if(vis[child]==0)
		{
			dfs(child,dis[node]+1);
		}
	}
}
int main()
{
	int n,m,x,y,i;
	cin>>n>>m;
	while(m--)
	{
		cin>>x>>y;
		v[x].push_back(y);
		v[y].push_back(x);
	}
	dfs(1,0);
	cout<<mx<<" "<<nod<<nl;
	mx=-1;
	for(i=1;i<=n;i++)vis[i]=0;
	dfs(nod,0);
	cout<<mx<<" "<<nod<<nl;
	cout<<mx<<nl;
	return 0;
}



/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

