#include <bits/stdc++.h>
#include <vector>
using namespace std;
#define apura ios::sync_with_stdio(false);
#define compila cin.tie(NULL);
#define LSOne(S) ((S) & -(S))
#define SQ(x) (x)*(x)
#define all(x) x.begin(),x.end()
#define ll long long
typedef vector<int> vi;
typedef vector<string> vs;
typedef vector<ll> vll;
#define print(x) for(auto a:x){cout << a << " ";}cout << "\n"
#define dbg(x) cerr << (#x) << " is " << (x) << endl
#define input(arr,x) for(int i = 0; i < x; ++i) cin >> arr[i]
const int MAX = (1e6)+1;
const int MIN = -1e4-1;


void solve(){
    char i; cin >> i;
    int a,b; cin >> a >> b;
    if(i == 'k'){
        int ans1 = 0;
        ans1 += ((a&1) ? (a/2 + 1) : a/2 ) * ((b & 1) ? b/2 + 1 : b/2);
        ans1 += ((a&1) ? a - (a/2 + 1) : a - a/2) * ((b & 1) ? b - (b/2 + 1) : b - b/2);
        cout << ans1 << endl;
    }
    else if(i == 'r')
        cout << min(a,b) << endl;
    else if(i == 'K'){
        int ans = 1; 
        ans *= a&1 ? a/2 + 1 : a/2;
        ans *= b&1 ? b/2 + 1 : b/2;
        cout << ans << endl;
    }
    else{
        cout << max(a,b)  - 1 << endl;
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int TT; cin >> TT;
    for(int  i = 0; i < TT; i++)
        solve();
    

}