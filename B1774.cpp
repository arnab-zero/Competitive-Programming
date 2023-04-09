#include <bits/stdc++.h>
using namespace std;

#define shuru int main(void){
#define shesh return 0;}
#define RZ return 0;
#define vi vector<int>
#define pii pair<int,int>
#define pb push_back
#define pob pop_back
#define mpr make_pair
#define lp(n) for(int i=0; i<n; ++i)
#define spc " "
#define nl cout<<endl
typedef long long int lli;



shuru;

int t, n, m, k;
cin>>t;

while(t--){
    cin>>n>>m>>k;
    int segment, out = 0, x, ma = 0;

    if(n%k!=0)
        segment = n/k + 1;
    else 
        segment = n/k;

    for(int i=0; i<m; ++i){
        cin>>x;
        if(out)
            continue;
        if(x > segment || x==0)
        {
            cout<<"NO"<<endl;
            out = 1;
        }
        if(n%k != 0 && x == segment)
            ++ma;
        if(ma>(n%k))
        {
            cout<<"NO"<<endl;
            out = 1;
        }
    }

    if(out)
        continue;
    
    cout<<"YES"<<endl;
}

shesh;

