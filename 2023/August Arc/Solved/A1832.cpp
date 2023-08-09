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

    int count = 1, temp = 1, single = 0;

    lp(1,st.size(),1){
        if(st[i]!=st[i-1]){
            ++count;
            if(temp==1){
                single = 1;
            }
            temp = 1;
        }
        else {
            ++temp;
        }
    }

    // if(count==2){
    //     if(single){
    //         cout<<"NO"<<endl;
    //     }
    //     else 
    //         cout<<"YES"<<endl;
    // }
    // else {
    //     cout<<"YES"<<endl;
    // }

    if(temp==1){
        single = 1;
    }

    if(count==2 and single==1)
        cout<<"NO"<<endl;
    else if(count==1)
        cout<<"NO"<<endl;
    else 
        cout<<"YES"<<endl;
}



shuru;
fastio;

int t;
cin>>t;

while(t--)
    solve();

shesh;