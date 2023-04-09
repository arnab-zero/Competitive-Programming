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
    string st;
    cin>>n>>st;

    int a[26];

    for(int i=0; i<26; ++i){
        a[i] = -1;
    }

    for(int i=0; i<n; ++i){
        //char ch = st[i];
        if(a[st[i]-'a'] == -1){
            a[st[i]-'a'] = i;
        }
        else{
            if((i-a[st[i]-'a'])%2 == 1){
                cout<<"NO"<<endl;
                return;
            }
            else
                a[st[i]-'a'] = i;
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