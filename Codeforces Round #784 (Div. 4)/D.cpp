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
        int R = 0, B = 0, W = 0;
        bool on = true;
        string s;
        cin >> n >> s;
 
        for(int i=0;i<n;i++){
           if(s[i] == 'R') R++;
           else if(s[i] == 'B') B++;
 
           if(s[i] == 'W'){
               if(R == 0 && B == 0 ) continue;
 
               if((R && !B) || (!R && B))  break;
               else if(i != n-1) R = B = 0;
           }
        }
 
        if((R && !B) || (!R && B)) cout << "NO\n";
        else if(on) cout << "YES\n";
 
    }
}

