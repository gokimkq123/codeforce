#include <bits/stdc++.h>
#define all(v) v.begin(), v.end()
#define INF 2e9
#define F first
#define S second
using namespace std;
 
typedef long long l;
typedef pair<int,int> p;
typedef tuple<int,int,int> tu;
typedef vector<bool> vc;
 
int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
 
    int t,n,a;
 
    cin >> t;
 
    while(t--){
        bool on = false;
        cin >> n;
 
        vc v,temp;
 
        for(int i=0;i<n;i++) {
            cin >> a;
 
            if(a % 2 == 0) v.push_back(true);
            else v.push_back(false);
        }
        temp = v;
 
        for(int i=0;i<n-1;i++)
            if(v[i] != v[i+1]){
                on = true;
                break;
            }
 
        if(!on){
            cout << "YES\n";
            continue;
        }
        else on = false;
 
        for(int i=0;i<n;i+=2)
            v[i] = !v[i];
 
        for(int i=0;i<n-1;i++)
            if(v[i] != v[i+1]){
                on = true;
                break;
            }
 
        if(!on){
            cout << "YES\n";
            continue;
        }
        else on = false;
 
        for(int i=1;i<n;i+=2)
            temp[i] = !temp[i];
 
        for(int i=0;i<n-1;i++)
            if(temp[i] != temp[i+1]){
                on = true;
                break;
            }
 
        if(!on) cout << "YES\n";
        else cout << "NO\n";
    }
}

