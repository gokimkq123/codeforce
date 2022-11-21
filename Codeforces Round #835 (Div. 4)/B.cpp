#include <bits/stdc++.h>
#define all(v) v.begin(), v.end()
#define INF 2e9
using namespace std;
 
typedef long long ll;
typedef pair<int,int> pa;
typedef tuple<int,int, int> tu;
typedef vector<char> vc;
 
int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
 
    int t;
 
    string s = "abcdefghijklmnopqrstuvwxyz";
 
    cin >> t;
 
    while(t--){
        int n, ans = -1;
 
        cin >> n;
        vc v(n);
 
        for(auto &i : v)
            cin >> i;
 
        for(auto &i : v){
            for(int j=0;j<s.size();j++)
                if(s[j] == i) ans = max(ans,j + 1);
        }
 
        cout << ans << "\n";
    }
 
}
