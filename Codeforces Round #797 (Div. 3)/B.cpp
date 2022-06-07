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
 
struct List{
    int a,b,mi;
};
 
int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
 
    int t;cin >> t;
 
    while(t--){
        struct List num[5*10000+1];
        bool key = false;
        int n;
        cin >> n;
 
        for(int i=0;i<n;i++)
            cin >> num[i].a;
        for(int i=0;i<n;i++){
            cin >> num[i].b;
            num[i].mi = num[i].a - num[i].b;
        }
 
        if(n == 1){
            if(num[0].a - num[0].b < 0) cout << "NO\n";
            else cout << "YES\n";
            continue;
        }
 
        sort(num,num+n,[](const List &u,const List &v){
            if(u.mi == v.mi) return u.b > v.b;
 
            return u.mi > v.mi;
        });
 
        for(int i=0;i<n-1;i++){
            if(num[i].mi < 0 || num[i+1].mi < 0){
                key = true;
                break;
            }
 
            if(num[i].mi == num[i+1].mi) continue;
 
            if(num[i].mi != num[i+1].mi){
                if(!num[i+1].b) continue;
                else if(num[i+1].b){
                    key = true;
                    break;
                }
            }
        }
 
 
 
        if(key) cout << "NO\n";
        else cout << "YES\n";
    }
}
 
