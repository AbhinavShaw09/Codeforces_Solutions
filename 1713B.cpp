#include <bits/stdc++.h>
using namespace std;
#define l1 long long
void solve() {
   int n;
   cin>>n;
   vector<int>ans;
   for(int i=0; i<n; i++)
   {
        cin>>ans[i];
   }
   if(n==1)
   cout<<0<<"\n";
    int mn=INT_MAX;
   for(int i=0; i<n-1; i++)
   {
       mn=min(mn,ans[i]);
   } 
   int mx=INT_MAX;
   for(int i=1; i<n; i++)
   {
      mx=max(mx,ans[i]);
   } 
   int dif=0;
   for(int i=1; i<n; i++)
   {
        dif=max(dif,ans[i-1]-ans[i]);
   }
   cout<<max(dif,ans[n-1]-mn,mx-ans[0])<<"\n";
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