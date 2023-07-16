#include<bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n,s,r;
    cin>>n>>s>>r;
    int arr[n] = {0};
    arr[0] = s-r;
    int j = 1;
    for(int i=1;i<n;++i)
    {
      arr[i] = r/(n-i);
      r -= r/(n-i); 
    }
    for(int i=0;i<n;++i) cout<<arr[i]<<" ";
    cout<<endl;
  }
  return 0;
}
