#include <bits/stdc++.h>
#define all(v) v.begin(), v.end()
#define INF 2e9
#define F first
#define S second
using namespace std;
 
typedef long long l;
typedef pair<int,int> p;
typedef tuple<int,int,int> tu;
typedef vector<int> vc;
 
int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
 
    int t;
    cin >> t;
 
    while(t--){
        int n,q,x,dp[500000];
 
        cin >> n >> q;
 
        vc v(n);
 
        for(auto &i : v)
            cin >> i;
 
        sort(all(v),[](int a,int b){
            return a > b;
        });
 
        dp[0] = v[0];
 
        for(int i=1;i<n;i++)
            dp[i] = dp[i-1] + v[i];
 
        while(q--){
            cin >> x;
 
            int ans = lower_bound(dp,dp+n,x) - dp;
 
            if(ans + 1 > n) cout << "-1\n";
            else cout << ans + 1 << "\n";
        }
    }
}
