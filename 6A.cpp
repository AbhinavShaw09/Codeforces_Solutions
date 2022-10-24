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
bool tri(int a,int b,int c)
{
    return (a+b>c and b+c>a and c+a>b);
}
bool seg(int a,int b,int c)
{
    return (a+b==c or b+c==a or a+c==b);
} 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    bool t=0;
    bool s=0;
    int a,b,c,d;
    cin >>a>>b>>c>>d;
    t=t||tri(a,b,c);
    t=t||tri(a,b,d);
    t=t||tri(b,c,d);
    t=t||tri(a,c,d);

    s=s||seg(a,b,c);
    s=s||seg(a,b,d);
    s=s||seg(b,c,d);
    s=s||seg(a,c,d);
    
    if(t)
    {
        cout<<"TRIANGLE"<<endl;
    }
    else if(s)
    {
        cout<<"SEGMENT"<<endl;
    }
    else
    {
        cout<<"IMPOSSIBLE"<<endl;
    }
    return 0;
}
