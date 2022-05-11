#include <bits/stdc++.h>
#define all(v) v.begin(), v.end()
#define INF 2e9
#define F first
#define S second
using namespace std;
 
typedef long long l;
typedef pair<int,int> p;
typedef tuple<int,int,int> tu;
typedef vector<string> vc;
 
int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
 
    int t;
    cin >> t;
 
    while(t--){
        int n,m,ans = INF;
 
        cin >> n >> m;
 
        vc v(n);
 
        for(auto &i : v)
            cin >> i;
 
        sort(all(v));
 
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int sum = 0;
                for(int k=0;k<m;k++){
                    int one = int(v[i][k]), two = int(v[j][k]);
 
                    sum += abs((two - one));
                }
                ans = min(ans,sum);
            }
        }
 
        cout << ans << "\n";
    }
}
