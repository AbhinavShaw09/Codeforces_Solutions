#include <bits/stdc++.h>
using namespace std;
////////////////////////////////////////////////////////////////////
#define l1 long long
#define endl "\n"
#define pb push_back 
#define ld long double
#define setbits(x) __builtin_popcount(x)
#define lb lower_bound
#define ub upper_bound
#define str string
const  l1 int INF=1e18+1;
const  l1 int mod=1e9+7;
///////////////////////////////////////////////////////////////////
void solve() {
    int n;
    cin>>n;
    str a;
    cin>>a;
    str ans="";
    for(int i=n-1;i>=0;--i)
    {
        if(a[i]=='0')
        {
            int k=(a[i-2]-'0')*10 +(a[i-1]-'0');
            ans+='a'+k-1;
            i-=2;
        }
        else{
            ans+='a'+(a[i]-'0')-1;
        }
    } 
    reverse(ans.begin(),ans.end());
    cout<<ans<<endl;
}
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    l1 int t;
    cin >> t;
    while (t--) {
        solve();
    }
}