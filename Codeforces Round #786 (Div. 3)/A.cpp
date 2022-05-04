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
        int x,y;

        cin >> x >> y;

        auto solve = [=]() -> p{
            p ans = {0,0};

            for(int i=1;i<=y;i++){
                for(int j=1;j<=y;j++){
                    if(x * pow(i,j) == y){
                        ans.F = j, ans.S = i;
                        return ans;
                    }
                    else if(pow(i,j) > y) break;
                }
            }
            return ans;
        };

        p ans = solve();

        cout << ans.F << " " << ans.S << "\n";
    }
}


