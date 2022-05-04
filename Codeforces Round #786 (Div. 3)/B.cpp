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

unordered_map<string,int> Map;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    int cnt = 1;
    for(char i='a';i<='z';i++){
        for(int j='a';j<='z';j++){
            if(i == j) continue;
            string temp = "";
            temp += i, temp += j;
            Map[temp] = cnt++;
        }
    }

    int t;

    cin >> t;

    while(t--){
        string str;
        cin >> str;

        cout << Map[str] << "\n";
    }
}


