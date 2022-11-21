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
        int n, FMax = -1, SMax = -1, idx;
 
        cin >> n;
        vc v(n);
 
        for(auto &i : v)
            cin >> i;
 
        vector<pa> temp;
 
        for(int i=0;i<n;i++)
            temp.emplace_back(v[i],i);
        sort(all(temp));
 
        for(int i=0;i<n;i++){
            if(temp[n - 1].second == i) cout << v[i] - temp[n - 2].first << " ";
            else cout << v[i] - temp[n - 1].first << " ";
        }
        cout << "\n";
    }
 
}
