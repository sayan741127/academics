#include<bits/stdc++.h> 
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;


#define __int128_t long long
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define pb push_back
#define f(i, a, b) for (__int128_t i = a; i < b; i++)
#define vi vector<int>
#define er(a) __int128_t a; cin>>a;
#define ee(a,b) __int128_t a,b; cin>>a>>b;
#define eee(a,b,c) __int128_t a,b,c; cin>>a>>b>>c;
#define vll(v,n) vector<__int128_t> v(n); f(i,0,n) cin>>v[i];
#define aa(arr,n) __int128_t arr[n]; f(i,0,n) cin>>arr[i];
#define ss(s) string(s); cin >> (s);
#define vvll vector<vector<__int128_t>>
#define sz(s) s.size()
#define mod 1000000007
#define fr first
#define sd second
#define inf 10e15
#define all(x) (x).begin(), (x).end()
#define pii pair<int, int>
#define mii map<int,int>
#define fs(x,y)  fixed<<setprecision(y)<<x
#define nl cout<<endl;
#define R return
#define B break
#define C continue
#define YS cout<<"YES"<<"\n"
#define NS cout<<"NO"<<"\n"
#define Ys cout<<"Yes"<<"\n"
#define Ns cout<<"No"<<"\n"
const int N = 1e5 + 5;


void solve() {
    er(n);
    map<__int128_t,__int128_t> m;
    for (__int128_t i = 1; i <=n-1; i++)
    {   
        er(x);
        m[x]++;
    }
    for (__int128_t i = 1; i <=n; i++)
    {
        if (m[i]==0)
        {
            cout<<i<<endl;
            R;
        }
        
    }
    
    
    
}


int main(){
    fast;

    // int t; cin>>t; while(t--) {
    solve();
    // }

return 0;
}