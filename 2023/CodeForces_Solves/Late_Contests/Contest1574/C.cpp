#include <bits/stdc++.h>
using namespace std;

#define shuru int main(void){
#define shesh return 0;}
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define vi vector<int>
#define pii pair<int,int>
#define pb push_back
#define mpr make_pair
#define lp(x,n,d) for(lli i=x;i<n;i+=d)
#define spc " "
typedef long long int lli;

void solve(){

    lli n, d, sum=0, mini = INT_FAST16_MAX;
    cin>>n>>d;

    int a[n];
    lp(0,n,1){
        cin>>a[i];
        sum += a[i];
    }

    sort(a, a+n);

    while(d--){

        lli x, y, ind;
        cin>>x>>y;

        lp(0,n,1){
            if(a[i] > x){
                ind = i;
                break;
            }
        }

        mini = min((y-sum+a[ind]), (x+y-sum));

        cout<<mini<<endl;
    }

}



shuru;
fastio;

int t;
cin>>t;

solve();

shesh;