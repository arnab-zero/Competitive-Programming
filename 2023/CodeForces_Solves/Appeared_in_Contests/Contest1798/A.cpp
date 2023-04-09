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

    int n;
    cin>>n;
    int a[n], b[n];
    lp(0,n,1){
        cin>>a[i];
    }

    lp(0,n,1){
        cin>>b[i];
    }

    lp(0,n,1){
        if(a[i]>a[n-1]){
            if(b[i]<=a[n-1]){
                int temp = b[i];
                b[i]=a[i];
                a[i]=temp;
            }
            else {
                cout<<"NO"<<endl;
                return;
            }
        }
    }

    lp(0, n, 1){
        if(b[i]>b[n-1]){
            cout<<"NO"<<endl;
            return;
        }
    }

    cout<<"YES"<<endl;
}



shuru;
fastio;

int t;
cin>>t;

while(t--)
    solve();

shesh;