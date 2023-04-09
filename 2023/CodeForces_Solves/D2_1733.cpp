#include <bits/stdc++.h>
using namespace std;

#define shuru int main(void){
#define shesh return 0;}
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define vi vector<int>
#define pii pair<int,int>
#define pb push_back
#define mpr make_pair
#define lp(n) for(int i=0;i<n;++i)
#define spc " "
typedef long long int lli;

void solve(){

    lli n, x, y, count=0, on=0, yes=0;
    cin>>n>>x>>y;
    string a, b;
    cin>>a>>b;

    vi pos;
    for(int i=0; i<n; ++i){
        if(a[i]!=b[i]){
            ++count;
            if(on){
                ++yes;
                on=0;
            }
            else 
                on=1;
        }
        else 
            on=0;
    }

    if(count & 1){
        cout<<-1<<endl;
        return;
    }

    if(x>=y){
        if(x>2*y)
            cout<<2*yes*y+((count-2*yes)/2)*y<<endl;
        else 
            cout<<yes*x+((count-2*yes)/2)*y<<endl;
        return;
    }
    else{
        if(count==2)
            cout<<x<<endl;
        else {
            

        }

    }

}



shuru;
fastio;

int t;
cin>>t;

while(t--)
    solve();

shesh;