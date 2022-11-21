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
        vc v(3);
 
        for(auto &i : v)
            cin >> i;
 
        sort(all(v));
 
        cout << v[1] << "\n";
    }
 
}
