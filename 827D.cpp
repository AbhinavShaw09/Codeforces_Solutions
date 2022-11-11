#include<bits/stdc++.h>
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
        cin >> n;
       vector<int>b(1001,-1);
        int a[n+1];
        int mx=-1;
        for(int i=1; i<=n; i++)
        {
            cin >> a[i];
            b[a[i]]=i;
        }
        for(int i=1;i<1001;i++)
        {
            for(int j=1;j<1001;++j)
            {
                if(b[i]!=-1 and b[j]!=-1)
                {
                    if(__gcd(i,j)==1){
                        mx=max(mx,b[i]+b[j]);
                    }
                }
            }
        }
        cout<<mx<<endl;
    }
    return 0;
}
