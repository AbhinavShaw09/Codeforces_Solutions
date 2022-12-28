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
    str s;
    cin>>s;
    str ans;
    int i=0;
    int n=s.size();
    for(;i<n;i++) {
        if(s[i]=='h')
        {
            ans.push_back('h');
            i++;
            break;
        }
    }
    for(;i<n;i++) {
        if(s[i]=='e')
        {
            ans.push_back('e');
            i++;
            break;
        }
    }
    for(;i<n;i++) {
        if(s[i]=='l')
        {
            ans.push_back('l');
            i++;
            break;
        }
    }
    for(;i<n;i++) {
        if(s[i]=='l')
        {
            ans.push_back('l');
            i++;
            break;
        }
    }
    for(;i<n;i++) {
        if(s[i]=='o')
        {
            ans.push_back('o');
            i++;
            break;
        }
    }
    if(ans=="hello")
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}
