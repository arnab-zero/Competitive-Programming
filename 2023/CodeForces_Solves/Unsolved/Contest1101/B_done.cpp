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

    string st;
    cin>>st;

    int br = -1, col = -1;

    for(int i=0; i<st.size(); ++i){

        if(br<0 and st[i]=='['){
            br = i;
        }
        else if(br>=0 and st[i]==':'){
            col=i;
            break;
        }
    }

    if(col<br){
        cout<<-1<<endl;
        return;
    }

    if(col<0 or br<0){
        cout<<-1<<endl;
        return;
    }

    int fb = 0, fc = 0;

    for(int i=st.size()-1; i>=0; --i){

        if(fb==0 and st[i]==']'){
            if(col>i){
                cout<<"-1"<<endl;
                //cout<<'g'<<endl;
                return;
            }
            else {
                fb = i;
            }
        }
        else if(fb>0 and st[i]==':'){
            if(col==i){
                cout<<"-1"<<endl;
                //cout<<'h'<<endl;
                return;
            }
            else{
                fc = i;
                break;
            }
        }
    }

    if(fb==0 or fc==0){
        cout<<"-1"<<endl;
        return;
    }

    int count = 0;

    for(int i=col; i<fc; ++i){
        if(st[i]=='|')
            ++count;
    }

    cout<<count+4<<endl;

}



shuru;
fastio;

solve();

shesh;