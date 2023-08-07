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
#define nl cout<<endl;
#define spc " "
typedef long long int lli;

void solve(){

    string st;
    cin>>st;
    int index=-1;

    int first = st[0] - '1' + 1;

    if(first > 4){
        cout<<1;
        lp(0,st.size(),1)
            cout<<0;
        nl;
        return; 
    }

    int increment = -1;
    bool nine = false;

    int a[st.size()];

    for(int i=0; i<=st.size(); ++i){
        if(st[st.size()-i-1] != '0')
            a[i] = st[st.size()-i-1]-'1'+1;
        else 
            a[i] = 0;
    }

    // for(int i=0; i<st.size(); ++i){
    //     cout<<a[i]<<spc;
    // }
    // cout<<endl;

    for(int i=0; i<st.size(); ++i){

        if(a[i]==9){
            increment = 1;
            nine = true;
            continue;
        }

        if(increment == 1){
            a[i] += increment;
            index = i;
        }
        
        if(a[i]>4){
            increment = 1;
            nine = false;
        }
        else {
            increment = 0;
            nine = false;
        }
    }

    if(a[st.size()-1] > 4){
        cout<<1;
        lp(0,st.size(),1)
            cout<<0;
        nl;
        return; 
    }

    for(int i=st.size()-1; i>=0; --i){
        if(i>=index){
            cout<<a[i];
        }
        else 
            cout<<0;
    }
    
    cout<<endl;
}



shuru;
fastio;

int t;
cin>>t;

while(t--)
    solve();

shesh;