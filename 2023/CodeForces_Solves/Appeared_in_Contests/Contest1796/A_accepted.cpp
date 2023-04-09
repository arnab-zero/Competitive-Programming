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


shuru;
fastio;

string st;
for(int i=1; i<200; ++i){
    if(i%3==0 and i%5==0)
        st+='F', st+='B';
    else if(i%3==0)
        st+='F';
    else if(i%5==0)
        st+='B';
}

// cout<<st<<endl;

int t;
cin>>t;

while(t--){
    int n, i=0, j=0, yes=0;
    string input;
    cin>>n>>input;

    for(i=0; i<st.size(); ++i){
        if(st[i]==input[0]){
            for(j=0; j<n; ++j){
                if(st[i+j]!=input[j]){
                    break;
                }
            }
        }

        if(j==n){
            yes=1;
            break;
        }
    }

    if(yes){
        cout<<"YES"<<endl;
    }
    else 
        cout<<"NO"<<endl;
}


shesh;