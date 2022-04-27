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
        cin >> n;
        cout << "Division ";
 
        if(n <= 1399) cout << "4\n";
        else if(1400 <= n && n <= 1599) cout << "3\n";
        else if(1600 <= n && n <= 1899) cout << "2\n";
        else cout << "1\n";
    }
}
