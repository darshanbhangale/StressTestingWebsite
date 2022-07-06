//2019B4A80800G
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef vector<int>  vi;
typedef set<int> si;
const int imax=INT_MAX;
const int imin=INT_MIN;
const long long int llmax=LLONG_MAX;
const long long int llmin=LLONG_MIN;
#define pb push_back
#define rep(i,a,b) for(long long int i=a;i<b;i++)
#define nl cout<<"\n";
#define mp make_pair
#define all(x) (x).begin(),(x).end() 
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
#define uid(a, b) uniform_int_distribution<int>(a, b)(rng)
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
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
queue<int> permutation_n(int n,int root){
    set<int> used;
    vector<int> rtr;
    queue<int> ans;
    for(int jj=0;jj<n;jj++){    
        int x=uid(1,n);
        while(used.count(x)==1){
            x=uid(1,n);
        }
        used.insert(x);
        rtr.pb(x);
    }
    rep(i,0,n){
        if(rtr[i]!=root){
            ans.push(rtr[i]);
        }
    }
    return ans;

}
void tree(int n,int root,int children){
    queue<int> sequence=permutation_n(n,root);
    queue<int> q;
    q.push(root);
    int left=n-1;
    while(!sequence.empty()){
        int x=uid(1,min(left,children));
        left-=x;
        int node=q.front();
        q.pop();
        rep(i,0,x){
            cout<<node<<" "<<sequence.front();nl
            q.push(sequence.front());
            sequence.pop();
        }
    }
    return;
}
int int_n(int a,int b){
    int n=uid(a,b);
    return n;
}
void int_same_a(int n,int a,int b){
    while(n--){
        cout<<uid(a,b)<<" ";
    }
    nl
}
void int_diff_a(int n,int a,int b){
    set<int> used;
    if(b-a+1 <n){
        cout<<"ERROR:- range change kar\n";
        return;
    }
    while(n--){
        int x=uid(a,b);
        while(used.count(x)){
            x=uid(a,b);
        }
        used.insert(x);
        cout<<x<<" ";
    }
    nl
}
string rstring(ll n,char a,char b){
    ll m=n;
    int end=b-a;
    string rtr="";
    while(m--){
        char p=uid(0,end)+a;
        rtr+=p;
    }
    cout<<rtr;nl
    return rtr;
}


int main()
{
ios_base::sync_with_stdio(0);
cin.tie(0);cout.tie(0);

int a=uid(1,10),b=uid(1,10);
cout<<a<<" "<<b;
nl































return 0;
}