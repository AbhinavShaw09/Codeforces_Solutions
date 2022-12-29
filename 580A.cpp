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

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    int a[n];
    int ans = 1,j=1;
    for(int i=0; i<n; i++) cin>>a[i];
    for(int i=0; i<n-1; i++)
    {
        if(a[i]>a[i+1])
        {
            ans = max(ans,j);
            j=1;
        }
        else
        {
            j++;
            ans = max(ans,j);
        }
       
    }
    cout<<ans<<endl;
    return 0;
}
