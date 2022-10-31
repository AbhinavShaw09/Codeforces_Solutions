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
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        int a[n];
        int b[n];
        bool f=true;
        for(int i=0; i<n; i++) cin>>a[i];
        for(int i=0; i<n; i++) cin>>b[i];
        sort(a,a+n);
        sort(b,b+n);
        for(int i=0;i<n;i++)
        {
            if(a[i]!=b[i] and (a[i]+1)!=b[i])
            {
                f=false;
                break;
            }
        }
        if(f) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
