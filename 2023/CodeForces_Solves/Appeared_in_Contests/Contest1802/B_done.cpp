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
    int a[n];
    lp(0,n,1){
        cin>>a[i];
    }

    int maxi=0, fem = 0, mal = 0, emp=0, fc = 0, full=0;

    lp(0, n, 1){
        if(i!=0 and a[i]==2 and a[i-1]==2)
            continue;

        maxi = max(fem+mal,maxi);
        
        if(a[i]==1 and mal==0){
            mal=1;
            continue;
        }
        else if(a[i]==1 and emp>0){
            ++fc;
            --emp;
            continue;
        }
        else if(a[i]==1 and emp==0){
            ++fem, ++fc;
            continue;
        }

        if(a[i]==2){
            if(fc%2)
                full += fc/2, fc = 1;
            else 
                full += fc/2, fc = 0;
        }

        emp = fem - full - fc;
        //cout<<"res"<<spc<<maxi<<spc<<fem<<spc<<mal<<spc<<emp<<spc<<fc<<spc<<full<<endl;
    }

    maxi = max(fem+mal, maxi);
    //cout<<"res"<<spc<<maxi<<spc<<fem<<spc<<mal<<spc<<emp<<spc<<fc<<spc<<full<<endl;

    cout<<maxi<<endl;
}



shuru;
fastio;

int t;
cin>>t;

while(t--)
    solve();

shesh;