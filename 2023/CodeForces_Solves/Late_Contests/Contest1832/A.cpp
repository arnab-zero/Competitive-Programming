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

    int count = 1;

    bool isPalindrome = true;

    for(int i=0; i<st.size()/2; ++i){
        if(st[i] != st[st.length()-i]){
            isPalindrome = false;
            break;
        }
    }

    sort(st.begin(), st.end());

    bool odd = false;

    vector<int> v(26, 0);

    for(int i=0; i<st.length(); ++i){

        if(i!=0 and st[i]!=st[i-1]){
            ++count;
        }

        ++v[st[i]-'a'];

    }

    if(count == 1){
        cout<<"NO"<<endl;
        return;
    }

    //if(count == 2 and )

    for(int i=0; i<26; ++i){
        if(!odd and v[i]%2)
            odd = true;
        else if(odd and v[i]%2){
            cout<<"NO"<<endl;
            return;
        }
    }


}



shuru;
fastio;

int t;
cin>>t;

while(t--)
    solve();

shesh;