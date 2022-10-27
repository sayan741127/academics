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
    er(n);
    ll index[1010];
    memset(index,-1,sizeof(index));
    //এখানে আমি সর্বোচ্চ দৈর্ঘ্যের array বানালাম এবং সমস্ত জায়গায় -1  বসালাম।
    for (ll i = 0; i < n; i++)
    {
        er(x);
        index[x]=i; // যে এলিমেন্ট আমি পাব,তার ইনডেক্সের জায়গায়, আমি তার ইনডেক্স রাখবো।
    }
    ll ans=-1;

    //এখানে আমি array এর ইনডেক্সের জায়গায়, 
    // ইনডেক্সের array বানাচ্ছি।
    // এবং সেই array te আমি ওই এলিমেন্টের ইন্ডেক্স রাখছি।

    for (ll i = 1; i <= 1001; i++)
    {
        for (ll j = 1; j <= 1001; j++)
        {
            if (index[i]> -1 && index[j]> -1 && __gcd(i,j)==1) // jodi array te index thake,
                                                                // to ami deoa condition check korchi
            {
                ans=max(ans,index[i]+index[j]+2);
            }
            
        }
        
    }
    cout<<ans<<endl;
    
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
    =>     int idx[1010];
    memset(idx, (-1), sizeof(idx));

    memset হলেও এমন একটি সেট, যাতে সমস্ত এলিমেন্ট একই থাকে।
    অর্থাৎ, সেটে সমস্ত এলিমেন্ট ৫ হবে যদি একটি পাঁচ থাকে।
    এক্ষেত্রে index নামক array তে 1010 টি -1 থাকবে।

    int n; cin >> n;
    for(int i=1; i<=n; i++)
    {
        int x;
        cin >> x;
        idx[x] = i;
    }
    
    int ans = (-1);
    for(int i=1; i<=1000; i++)
    {
        for(int j=1; j<=1000; j++)
        {
            if((idx[i]>(-1) && idx[j]>(-1)) && (__gcd(i,j)==1))
                ans = max(ans,(idx[i]+idx[j]));
        }
    }
    
    cout << ans << endl;

    2<= n <= 2*10^5
    যেহেতু n= 10^5 হলে, 
    দুটি for loop মোট 10^10 পর্যন্ত চলবে,
    এবং টাইম লিমিট এক্সিট করে যাবে, 
    তাই আমাকে array এর ইনডেক্স অনুযায়ী চলতে হবে। 
    1<= a<=1000 হওয়ায়,
    মোট 10^6  পর্যন্ত loop চলবে।
    এক্ষেত্রে সময়ের সীমা অতিক্রম করবে না।

*/


// ---------------------- Brute Force Approach ---------------------
/*
    =>     er(n);
    ll a[n+1];
    for (ll i = 1; i <= n; i++)
    {
        cin>>a[i];
    }
 
    ll flag=0,mx=-1;
    for (ll i = 1; i <= n; i++)
    {
        for (ll j = 1; j <= n; j++)
        {
            if (__gcd(a[i],a[j])==1)
            {
                
                flag=i+j;
                mx=max(mx,flag);
            }
            
        }
        
    }

    cout<<mx<<endl;
*/

