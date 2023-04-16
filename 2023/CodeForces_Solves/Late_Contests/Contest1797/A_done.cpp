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

    int a, b, c, d, row, col, res1, res2;
    cin>>row>>col>>a>>b>>c>>d;

    if(a==1 and b==1){
        res1 = 2;
    }
    else if(a==row and b==1){
        res1 = 2;
    }
    else if(a==1 and b==col){
        res1 = 2;
    }
    else if(a==row and b==col){
        res1 = 2;
    }
    else if(a==1 or a==row or b==1 or b==col){
        res1 = 3;
    }
    else  
        res1 = 4;

    if(c==1 and d==1){
        res2 = 2;
    }
    else if(c==row and d==col){
        res2 = 2;
    }
    else if(c==row and d==1){
        res2 = 2;
    }
    else if(c==1 and d==col){
        res2 = 2;
    }
    else if(c==1 or c==row or d==1 or d==col){
        res2 = 3;
    }
    else 
        res2 = 4;

    cout<<min(res1, res2)<<endl;
}



shuru;
fastio;

int t;
cin>>t;

while(t--)
    solve();

shesh;
