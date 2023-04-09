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
    string sa, sb;
    cin>>sa>>sb;

    if(sa[0]==sb[0]){
        cout<<"YES"<<endl;
        cout<<sa[0]<<"*"<<endl;
        return;
    }
    else if(sa[sa.size()-1]==sb[sb.size()-1]){
        cout<<"YES"<<endl;
        cout<<"*"<<sa[sa.size()-1]<<endl;
        return;
    }

    int start=0, found=0;
    for(start=0; start<max(sa.size(),sb.size()); ++start){
        for(int j=0; j<min(sa.size(),sb.size()); ++j){
            if(sa.size()>=sb.size() and sa[start]==sb[j] && sa[start+1]==sb[j+1]){
                cout<<"YES"<<endl;
                cout<<"*"<<sa[start]<<sa[start+1]<<"*"<<endl;
                return;
            }
            else if(sb.size()>=sa.size() and sb[start]==sa[j] && sb[start+1]==sa[j+1]){
                cout<<"YES"<<endl;
                cout<<"*"<<sb[start]<<sb[start+1]<<"*"<<endl;
                return;
            }
        }
    }

    cout<<"NO"<<endl;
}



shuru;
fastio;

int t;
cin>>t;

while(t--)
    solve();

shesh;