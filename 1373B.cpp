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
        str s;
        cin>>s;
        int c0=0;
        int c1=0;
        for(auto c:s){
            if(c=='0')
            {
                c0++;
            }
            else
                c1++;
        }
        if(min(c0,c1)%2==1)
        {
            cout<<"DA"<<endl;
        }
        else
        {
            cout<<"NET"<<endl;
        }
    }
    return 0;
}
