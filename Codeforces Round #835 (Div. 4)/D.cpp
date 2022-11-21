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
 
    cin >> t;
 
    while(t--){
        int n, left = 1, right = 0, temp, ans = 0;
 
        cin >> n;
        vc v(n + 1);
        v[n] = INF;
 
        for(int i=0;i<n;i++)
            cin >> v[i];
 
 
        for(int i=0;i<n;i++){
            if(v[i] == v[i+1]) continue;
            else if(v[i] < v[i+1]){
                if(left == 1) ans++, left = 0;
                else left = 0;
            }
            else if(v[i] > v[i+1]) left = 1;
 
        }
 
        if(ans == 1) cout << "YES\n";
        else cout << "NO\n";
 
    }
 
}
