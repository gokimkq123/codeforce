#include <bits/stdc++.h>
#define all(v) v.begin(), v.end()
#define INF 2e9
using namespace std;
 
typedef long long ll;
typedef pair<int,int> pa;
typedef tuple<int,int, int> tu;
typedef vector<int> vc;
 
int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
 
    int t;
 
    auto Count = [&](vc &v){
        int zero = 0, n = (int)v.size();
        ll cnt = 0;
        for(int i=n-1;i>=0;i--){
            if(v[i] == 0) zero++;
            else if(v[i] == 1)  cnt += zero;
        }
 
        return cnt;
    };
 
    cin >> t;
 
    while(t--){
        int n, one = -1, zero = -1;
        ll ans = -1;
 
        cin >> n;
        vc v(n);
 
        for(int i=0;i<n;i++){
            cin >> v[i];
 
            if(v[i] == 0 && zero == -1) zero = i;
            else if(v[i] == 1) one = i;
        }
 
        auto temp = v;
 
        ans = Count(v);
        if(one != -1) temp[one] = 0;
        ans = max(ans, Count(temp));
 
        auto temp2 = v;
        if(zero != -1) temp2[zero] = 1;
        ans = max(ans, Count(temp2));
 
        cout << ans << "\n";
 
    }
 
}
