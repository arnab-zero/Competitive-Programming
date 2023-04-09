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
    int  n;
    cin>>n;
    string st;
    cin>>st;

    int flag=0;

    if(st[0]!='m' and st[0]!='M'){
        cout<<"NO"<<endl;
        return;
    }

    for(int i=0; i<n; ++i){
        if(flag==0){
            if(st[i]=='e' or st[i]=='E'){
                    ++flag;
            }
            else if(st[i]!='m' and st[i]!='M'){
                cout<<"NO"<<endl;
                return;
            }
        }
        else if(flag==1){
            if(st[i]=='o' or st[i]=='O'){
                    ++flag;
            }
            else if(st[i]!='e' and st[i]!='E'){
                cout<<"NO"<<endl;
                return;
            }
        }
        else if(flag==2){
            if(st[i]=='w' or st[i]=='W'){
                    ++flag;
            }
            else if(st[i]!='o' and st[i]!='O'){
                cout<<"NO"<<endl;
                return;
            }
        }
        else if(flag==3){
            if(st[i]!='w' and st[i]!='W'){
                cout<<"NO"<<endl;
                return;
            }
        }
    }

    if(flag==3){
        cout<<"YES"<<endl;
        return;
    }
    else    
        cout<<"NO"<<endl;
}



shuru;
fastio;

int t;
cin>>t;

while(t--)
    solve();

shesh;