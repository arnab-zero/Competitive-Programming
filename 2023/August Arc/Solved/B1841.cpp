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

    int n, x;
    cin>>n;

    int first=-1, sec=-1, last=-1;
    string st="1";
    bool flag = false;
    
    lp(0,n,1){
        cin>>x;

        if(flag){
            if(sec<=x and x<=first and last<=x){
                last = x;
                st += "1";
            }
            else 
                st += "0";
            continue;
        }

        if(first==-1){
            first = x;
            last = x;
            continue;
        }

        if(x>=last and sec==-1){
            last = x;
            st += "1";
        }
        else if(x<=last and sec==-1){
            if(x<=first){
                sec = x;
                last = x;
                st += "1";
                flag = true;
            }
            else 
                st += "0";
        }
        else 
            st += "0";
    }

    cout<<st<<endl;
}



shuru;
fastio;

int t;
cin>>t;

while(t--)
    solve();

shesh;