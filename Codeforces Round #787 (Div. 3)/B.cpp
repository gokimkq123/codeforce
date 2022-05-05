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
        int n,ans = 0;
 
        cin >> n;
 
        vc v(n);
 
        for(auto &i : v)
            cin >> i;
 
        if(n == 1){
            cout << "0\n";
            continue;
        }
 
 
        while(1){
            int zero = 0;
            bool key = false;
 
            for(int i=0;i<n-1;i++){
                if(v[i] >= v[i+1]) v[i] /= 2,ans++;
            }
 
            for(auto &i : v)
                if(i == 0) zero++;
 
            for(int i=0;i<n-1;i++){
                if(v[i] >= v[i+1]) break;
 
                if(i == n - 2) key = true;
            }
 
            if(zero >= 2){
                cout << "-1\n";
                break;
            }
            if(key){
                cout << ans << "\n";
                break;
            }
 
        }
    }
}
 
