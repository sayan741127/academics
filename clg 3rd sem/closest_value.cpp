#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

#define ll long long
#define lll __int128_t
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define pb push_back
#define f(i, a, b) for (ll i = a; i < b; i++)
#define vi vector<int>
#define er(a) \
    ll a;     \
    cin >> a;
#define ee(a, b) \
    ll a, b;     \
    cin >> a >> b;
#define eee(a, b, c) \
    ll a, b, c;      \
    cin >> a >> b >> c;
#define vll(v, n)    \
    vector<ll> v(n); \
    f(i, 0, n) cin >> v[i];
#define aa(arr, n) \
    ll arr[n];     \
    f(i, 0, n) cin >> arr[i];
#define ss(s)  \
    string(s); \
    cin >> (s);
#define vvll vector<vector<ll>>
#define sz(s) s.size()
#define mod 1000000007
#define fr first
#define sd second
#define inf 10e15
#define all(x) (x).begin(), (x).end()
#define pii pair<int, int>
#define mii map<int, int>
#define fs(x, y) fixed << setprecision(y) << x
#define nl cout << endl;
#define R return
#define B break
#define C continue
#define YS cout << "YES" \
                << "\n"
#define NS cout << "NO" \
                << "\n"
#define Ys cout << "Yes" \
                << "\n"
#define Ns cout << "No" \
                << "\n"
const int N = 1e5 + 5;

ll temp=INT_MAX;


ll binarySearch(ll arr[], ll end, ll st, ll x, ll temp)
{
    if (st >= end)
    {
        int mid = end + (st - end) / 2;
        if (arr[mid] == x)
            return mid;

        if (arr[mid] > x)
            return binarySearch(arr, end, mid - 1, x);

        return binarySearch(arr, mid + 1, st, x);
    }

    return temp;
}

void solve()
{
    er(n);
    aa(arr, n);
    sort(arr, arr + n);
    er(x);

    ll result = binarySearch(arr, 0, n - 1, x);
    (result == -1)
        ? cout<<"Element is not present in array"
        : cout<<"Element is present at index"<< result;
}

int main()
{
    fast;

    // int t; cin>>t; while(t--) {
    solve();
    // }

    return 0;
}