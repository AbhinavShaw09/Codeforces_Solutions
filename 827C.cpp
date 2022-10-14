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
        char arr[8][8];
        char color = 'B';
        for(int i=0; i<8; i++)
        {
            for(int j=0; j<8;j++) {
                cin>>arr[i][j];
            }
        }
        for(int i=0; i<8; i++)
        {
            int c=0;
            for(int j=0; j<8;j++) {
                if(arr[i][j] != 'R'){
                    break;
                }
                c++;
            }
            if(c == 8)
            {
                color = 'R';
                break;
            }
        }
        cout<<color<<endl;
        
    }
    return 0;
}