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
    int n, k, count=0;
    string st;
    cin>>n>>k>>st;

    int chars[26] = {0}, up[26] = {0}, low[26] = {0};

    for(int i=0; i<n; ++i){
        if('A'<=st[i] and st[i]<='Z'){
            ++up[st[i]-'A'];
            ++chars[st[i]-'A'];
        }
        else{
            ++low[st[i]-'a'];
            --chars[toupper(st[i])-'A'];
        }
    }

    for(int i=0; i<26; ++i){
        count += min(up[i], low[i]);
        int temp = (chars[i]<0)?(-chars[i]):(chars[i]);

        if(k==0 or chars[i]==0)
            continue;
        
        if(temp/2<k){
            count += temp/2;
            k -= temp/2;
        }
        else {
            count += k;
            k = 0;
        }
    }

    cout<<count<<endl;
}



shuru;
fastio;

int t;
cin>>t;

while(t--)
    solve();

shesh;