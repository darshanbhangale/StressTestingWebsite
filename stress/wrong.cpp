//2019B4A80800G
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef vector<ll>  vi;
typedef set<ll> si;
const int imax=INT_MAX;
const int imin=INT_MIN;
const long long int llmax=LLONG_MAX;
const long long int llmin=LLONG_MIN;
#define pb emplace_back
#define rep(i,a,b) for(long long int i=a;i<b;i++)
#define nl cout<<"\n";
#define mp make_pair
#define all(x) (x).begin(),(x).end()
#define sall(x) sort((x).begin(),(x).end());
#define rall(x) sort((x).rbegin(),(x).rend()); 
#define fill(x, y) memset(x, y, sizeof(x))
#define ff first
#define ss second
#define deb1(x) cerr<<(#x)<<"-> "<<x<<endl;
#define deb2(x,y) cerr<<(#x)<<"-> "<<x<<"   "<<(#y)<<"-> "<<y<<endl;
#define deb3(x,y,z) cerr<<(#x)<<"-> "<<x<<"    "<<(#y)<<"-> "<<y<<"    "<<(#z)<<"-> "<<z<<endl;
#define deb4(x,y,z,w) cerr<<(#x)<<"-> "<<x<<"    "<<(#y)<<"-> "<<y<<"    "<<(#z)<<"-> "<<z<<"    "<<(#w)<<"-> "<<w<<  endl;
#define debv(v) for(int i=0;i<v.size();i++){cerr<<v[i]<<" ";}cerr<<endl;
#define debi(v,x) for(int i=0;i<v.size();i++){cerr<<v[i]<<" ";}cerr<<endl;for(int i=0;i<v.size();i++){cerr<<i+x<<" ";}cerr<<endl; 
#define yes cout<<"YES\n";
#define no cout<<"NO\n";
#define tcT template<typename T
#define tcTU template<typename T, typename U
#define everyone(a,dtype,op) calc_all_val(a, [](dtype t1, dtype t2) {return t1 op t2; });
#define inp(n,a) ll n;cin>>n;vector<ll> a(n);rep(i,0,n){cin>>a[i];}
#define inps(n,s) ll n;cin>>n;string s;cin>>s;
#define maxa(a,n) *max_element(a,a+n)
#define mina(a,n) *min_element(a,a+n)
#define maxv(v) *max_element(v.begin(), v.end())
#define minv(v) *min_element(v.begin(), v.end())
template<typename... TT>
void read(TT&... args){
    ((cin>>args),...);
}
template<typename... TT>
void write(TT&&... args){
    ((cout<<args<<" "),...);
}
template<typename... TT> 
 void deb(TT&&... args){
    ((cerr<<args<<"    "),...);
}
namespace binary_search_kar_jaldi{
    tcTU> T first_True(T lo,T hi, U F){
        hi++;assert(lo <=hi);
        while(lo<hi){
            T mid= lo+(hi-lo)/2;
            F(mid) ? hi=mid :lo =mid+1;
        }
        return lo;
    }
    tcTU> T last_True(T lo,T hi, U F){
        lo--;assert(lo<=hi);
        while(lo<hi){
            T mid=lo+(hi-lo+1)/2;
            F(mid) ? lo=mid : hi=mid-1;
        }
        return lo;
    }
}
tcT> T div_rounded_up(T a, T b) { return a/b+((a^b)>0&&a%b); }
tcT> T div_rounded_down(T a, T b) { return a/b-((a^b)<0&&a%b); }
template<class T, class F> T calc_all_val(vector<T> inp, F f)
{
    ll n=inp.size();
    T res=inp[0];
    assert(n>0);
    rep(i,1,n){
        res=f(inp[i],res);
    }
    return res;
}
tcT> bool kBIT(T num,int k){
    return ((num>>k)&1);
}

int main()
{
ios_base::sync_with_stdio(0);
cin.tie(0);cout.tie(0);


int a,b;cin>>a>>b;
cout<<a+b;nl

























return 0;
}