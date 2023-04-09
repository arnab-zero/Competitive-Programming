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

    string st;
    cin>>st;

    sort(st.begin(), st.end());

    int cnt = 1;

    lp(1,st.size(),1){
        if(st[i]!=st[i-1])
            ++cnt;
    }

    if(cnt == 1)
        cout<<-1<<endl;
    else if(cnt==2){
        int h=1; 
        lp(1,st.size(),1){
            if(st[i]!=st[i-1])
                break;
            ++h;
        }
        if(h==1 or h==3)
            cout<<6<<endl;
        else 
            cout<<4<<endl;  
    }
    else if(cnt==3)
        cout<<4<<endl;
    else if(cnt==4)
        cout<<4<<endl;


}



shuru;
fastio;

int t;
cin>>t;

while(t--)
    solve();

shesh;