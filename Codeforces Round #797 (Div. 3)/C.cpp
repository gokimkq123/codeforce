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
    int f,s;
};
 
int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
 
    int t;cin >> t;
 
    while(t--){
        struct List num[2*100000+1];
        int n;
 
        cin >> n;
 
        for(int i=0;i<n;i++)
            cin >> num[i].s;
        for(int i=0;i<n;i++)
            cin >> num[i].f;
 
        int start = num[0].s, end = num[0].f;
        cout << num[0].f - num[0].s << " ";
 
        for(int i=1;i<n;i++){
            if(num[i].s <= end){
                cout << num[i].f - end << " ";
                start = min(num[i].s,start);
                end = max(num[i].f,end);
            }
            else{
                start = num[i].s;
                end = num[i].f;
                cout << end - start << " ";
            }
        }
        cout << "\n";
    }
}
