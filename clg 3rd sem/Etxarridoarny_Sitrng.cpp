#include<bits/stdc++.h> 
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;


#define ll 		long long
#define lll 		__int128_t
#define imx 		__INT_MAX__
#define imn 		__WINT_MIN__
#define fast 		ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define pb 		push_back
#define f(i, a, b) 	for (ll i = a; i < b; i++)
#define vi 		vector<int>
#define er(a) 		ll a; cin>>a;
#define ee(a,b) 	ll a,b; cin>>a>>b;
#define eee(a,b,c) 	ll a,b,c; cin>>a>>b>>c;
#define vll(v,n) 	vector<ll> v(n); f(i,0,n) cin>>v[i];
#define aa(arr,n) 	ll arr[n]; f(i,0,n) cin>>arr[i];
#define ss(s) 		string(s); cin >> (s);
#define vvll 		vector<vector<ll>>
#define sz(s) 		s.size()
#define mod 		1000000007
#define fr 		first
#define sd 		second
#define inf 		10e15
#define all(x) 		(x).begin(), (x).end()
#define pii 		pair<int, int>
#define mii 		map<int,int>
#define fs(x,y)  	fixed<<setprecision(y)<<x
#define nl 		cout<<endl;
#define R 		return
#define B 		break
#define C 		continue
#define YS 		cout<<"YES"<<"\n"
#define NS 		cout<<"NO"<<"\n"
#define Ys 		cout<<"Yes"<<"\n"
#define Ns 		cout<<"No"<<"\n"
#define lcm(a,b) 	(a/__gcd(a,b))*b
#define prnt(a) 	for(auto e:a)cout<<e<<" ";
const 	 		int N = 1e5 + 5;


void solve() {
    
    ee(n,m);
    vector<string> dic(n),tst(m);
    for (ll i = 0; i < n; i++)
    {   
        ss(s);
        string p;
        p.push_back(s[0]);
        p.push_back(s[s.size()-1]);
        dic.pb(p);
    }
    for (ll i = 0; i < m; i++)
    {   
        ss(s);
        string p;
        p.push_back(s[0]);
        p.push_back(s[s.size()-1]);
        tst.pb(p);
    }
    
    ll flag=0;
    // cout<<strcmp(dic[0],tst[1]);nl;
    cout<<dic[2];
    for (ll i = 0; i < m; i++)
    {
        for (ll j = 0; j < n; j++)
        {
            if (dic[j]==tst[i])
            {
                flag++;
            }
        }
    }
    // cout<<flag<<endl;
}


int main(){
    fast;

    int t; cin>>t; while(t--) {
    solve();
    }

return 0;
}




// ---------------------- Final Approach ---------------------------
/*
    => 
    ee(n,m);
    set<string> d;
    for (ll i = 0; i < n; i++)
    {
        ss(s);
        string p;
        p.push_back(s[0]);
        p.push_back(s[s.size()-1]);
        d.insert(p);
    }
    ll flag=0;
    for (ll i = 0; i < m; i++)
    {
        ss(s1);
        string p2;
        p2.push_back(s1[0]);
        p2.push_back(s1[s1.size()-1]);
        if (d.find(p2)!=d.end())
        {
            flag++;
        }
        
    }
    cout<<flag<<endl;
*/


// ---------------------- Brute Force Approach ---------------------
/*
    =>     ee(n,m);
    vector<pair<char,char>> dic(n),tst(m);
    for (ll i = 0; i < n; i++)
    {   
        ss(s);
        string p;
        // p.push_back(s[0]);
        // p.push_back(s[s.size()-1]);
        dic.pb({s[0],s[s.size()-1]});
    }
    for (ll i = 0; i < m; i++)
    {   
        ss(s);
        string p;
        // p.push_back(s[0]);
        // p.push_back(s[s.size()-1]);
        tst.pb({s[0],s[s.size()-1]});
    }
    ll flag=0;
    // cout<<strcmp(dic[0],tst[1]);nl;
    // cout<<dic[0];
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < m; j++)
        {
            if ((dic[i].first==tst[j].first) && (dic[i].second==tst[j].second))
            {
                flag++;
            }
            
        }
        
    }
    cout<<flag<<endl;
*/

