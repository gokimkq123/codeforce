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
        int a,b,c,x,y;
 
        cin >> a >> b >> c >> x >> y;
 
        x -= a, y -= b;
 
        if(x < 0) x = 0;
        if(y < 0) y = 0;
 
        if(x + y <= c) cout << "YES\n";
        else cout << "NO\n";
    }
}
 
