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
    str s,t;
    cin>>s>>t;
    int w=0;
    int i=s.size()-1;
    int j=t.size()-1;
    while(true){
        if(j>=0 and i>=0 and s[i]==t[j])
        {
            w++;
            i--;j--;
        }
        else
            break;
    }
    cout<<s.size()+t.size()-2*w<<endl;
    return 0;
}
