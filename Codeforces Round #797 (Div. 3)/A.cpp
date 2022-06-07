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
 
    int t;cin >> t;
 
    while(t--){
        int n,h1,h2,h3;
        cin >> n;
 
        h3 = (n - 3) / 3;
        int remain = n - h3;
 
        if(remain % 2 == 0) h1 = (remain + 2) / 2,h2 = n - (h1 + h3);
        else h2 = (remain - 1) / 2, h1 = (remain + 1) / 2;
        cout << h2 << " " << h1 << " " << h3 << "\n";
    }
}
