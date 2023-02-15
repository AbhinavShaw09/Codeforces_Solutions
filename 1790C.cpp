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
int a[101][101];
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        for(int i=0;i<n;i++) {
            for(int j=0;j<n-1;j++) {
                cin>>a[i][j];
            }
        }
        int c=0,s=0;
        map<int,int>mp;
        for(int i=0;i<n;i++) {
            mp[a[i][0]]++;
            if(c<mp[a[i][0]])
            {
                c=mp[a[i][0]];
                s=a[i][0];
            }
        }
        cout<<s<<' ';
        for(int j=0;j<n;++j)
        {
            if(a[j][0]!=s)
            {
                for(int i=0;i<n-1;++i)
                {
                    cout<<a[j][i]<<' ';
                }
                cout<<endl;
                break;
            }
        }
    }
    return 0;
}
