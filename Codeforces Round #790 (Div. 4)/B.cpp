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
        int n;
 
        cin >> n;
 
        vc v(n);
 
        for(auto &i : v)
            cin >> i;
 
        sort(all(v));
 
        int temp = v[0],ans = 0;
 
        for(int i=1;i<n;i++)
            ans += (v[i] - temp);
 
        cout << ans << "\n";
    }
}
