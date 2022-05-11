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
        int sum = 0;
        string s;
 
        cin >> s;
 
        if(s[0] + s[1] + s[2] == s[3] + s[4] + s[5]) cout << "YES\n";
        else cout <<"NO\n";
 
    }
}
