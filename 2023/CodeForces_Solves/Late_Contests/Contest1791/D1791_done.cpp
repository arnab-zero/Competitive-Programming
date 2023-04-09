#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main(void){
    fastio;

    int t;
    cin>>t;

    while(t--){
        int n;
        string st;
        cin>>n>>st;

        int a[26] = {0};
        int ca=0;

        for(int i=0; i<n; ++i){
            if(a[st[i]-'a']==0)
                ++ca;
            ++a[st[i]-'a'];
        }

        int b[26] = {0};
        int cb=0;

        int maxi=0;

        for(int i=0; i<n; ++i){
            if(a[st[i]-'a']==1){
                --ca;
                a[st[i]-'a']=0;
            }
            else  
                --a[st[i]-'a'];

            if(b[st[i]-'a']==0){
                ++cb;
                b[st[i]-'a']=1;
            }

            if(ca+cb > maxi)
                maxi=ca+cb;
        }
        
        cout<<maxi<<endl;
    }

    return 0;
}