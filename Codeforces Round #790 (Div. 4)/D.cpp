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
 
l n,m,board[201][201],sum;
 
void LU(int x,int y){
    if(x < 0 || y < 0) return;
    sum += board[x][y];
    LU(x-1,y-1);
}
void RU(int x,int y){
    if(x < 0 || y >= m) return;
    sum += board[x][y];
    RU(x-1,y+1);
}
void LD(int x,int y){
    if(x >= n || y < 0) return;
    sum += board[x][y];
    LD(x+1,y-1);
}
void RD(int x,int y){
    if(x >= n || y >= m) return;
    sum += board[x][y];
    RD(x+1,y+1);
}
 
int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
 
    int t;
    cin >> t;
 
    while(t--){
        l ans = -1;
        cin >> n >> m;
 
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++)
                cin >> board[i][j];
        }
 
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                sum += board[i][j];
                LU(i-1,j-1), RU(i-1,j+1), LD(i+1,j-1),RD(i+1,j+1);
                ans = max(ans,sum);
                sum = 0;
            }
        }
        cout << ans << "\n";
 
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++)
                board[i][j] = 0;
        }
    }
}

