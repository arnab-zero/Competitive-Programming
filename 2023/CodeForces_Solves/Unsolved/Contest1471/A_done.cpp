#include <bits/stdc++.h>
using namespace std;

#define shuru int main(void){
#define shesh return 0;}
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define vi vector<int>
#define pii pair<int,int>
#define pb push_back
#define mpr make_pair
#define lp(x,n,d) for(int i=x;i<n;i+=d)
#define spc " "
typedef long long int lli;

void solve(){

    lli n, x, mini=0, maxi=0;
    cin>>n>>x;
    lp(0,n,1){
        lli temp;
        cin>>temp;
        if(temp%x)
            maxi += (temp/x + 1);
        else 
            maxi += temp/x;

        mini+=temp;
    }

    if(mini%x)
        mini = mini/x + 1;
    else 
        mini /= x;

    cout<<mini<<spc<<maxi<<endl;
}



shuru;
fastio;

int t;
cin>>t;

while(t--)
    solve();

shesh;