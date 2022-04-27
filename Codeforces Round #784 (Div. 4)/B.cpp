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
 
    int t,n;
 
    cin >> t;
 
    while(t--){
        unordered_map<int,int> arr;
        int a,on = 1;
        cin >> n;
 
        for(int i=0;i<n;i++){
            cin >> a;
            arr[a]++;
        }
 
        for(auto &i : arr){
            if(i.second >= 3){
                cout << i.first << "\n";
                on = 0;
                break;
            }
        }
        if(on) cout << "-1\n";
 
    }
}
