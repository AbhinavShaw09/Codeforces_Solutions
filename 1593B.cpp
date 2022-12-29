#include <bits/stdc++.h>
using namespace std;

#define l1 long long
#define endl "\n"
#define pb push_back 
#define setbits(x) __builtin_popcount(x)
#define lb lower_bound
#define ub upper_bound
#define str string
const  l1 int INF=1e18+1;
const  l1 int mod=1e9+7;
const string c[] = {"00","25","50","75"};



int solve(string& n,string& e)
{
    int j = n.length()-1;
    int ans = 0;
    while(j>=0 and e[1]!=n[j]){
        j--;
        ans++;
    }
    if(j<0)
    {
        return INT_MAX;
    }
    j--;
    while(j>=0 and e[0]!=n[j]){
        j--;
        ans++;
    }
    return j<0?INT_MAX:ans;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        str n;
        cin>>n;
        int ans=INT_MAX;
        for(auto e:c)
            ans = min(ans,solve(n,e));
        cout<<ans<<endl;
    }
    return 0;
}
