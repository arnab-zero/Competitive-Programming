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

    lp(0, n, 1)
        cin>>a[i];
    
    lp(0, n, 1)
        cin>>b[i];

    bool flag = 0;

    lp(0, n-1, 1){
        if(a[i]>b[i] and b[i]<=a[n-1]){
            b[i] = a[i];
        }
        else if(a[i]>a[n-1] and b[n-1]>=a[i]){
            int temp = b[n-1];
            b[n-1] = a[n-1];
            a[n-1] = temp;
            flag = 1;
        }
    }

    lp(0, n-1, 1){
        if(b[i]>b[n-1] and flag==1){
            cout<<"No"<<endl;
            return;
        }
        else if(b[i]>b[n-1] and flag==0){
            int temp = b[n-1];
            b[n-1] = a[n-1];
            a[n-1] = temp;
            flag = 1;

            if(b[i] > b[n-1]){
                cout<<"No"<<endl;
                return;
            }
        }
    }

    lp(0, n-1, 1){
        if(a[i]>a[n-1]){
            cout<<"No"<<endl;
            return;
        }
    }

    cout<<"Yes"<<endl;
}



shuru;
fastio;

int t;
cin>>t;

while(t--)
    solve();

shesh;