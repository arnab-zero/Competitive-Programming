#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main(void){
    fastio;

    int t;
    cin>>t;

    while(t--){
        int n;
        string s, rs;
        cin>>n>>s;

        int st=-1, en=-1, on=0, found=0;

        for(int i=0; i<n; ++i){
            if(s[i]=='0' and st==-1)
                continue;
            else if(s[i]=='1' and st ==-1){
                st = i;
            }

            if(s[i]=='0' and s[i-1]=='1'){
                en=i;
                on=1;
                found = 1;
            }
            else if(s[i]=='0' and on){
                en = i;
            }
             if(s[i]=='1' and s[i-1]=='0' and on){
                on=0;
            }
        }

        if(st==-1 or en == -1){
            cout<<s<<endl;
            continue;
        }

        for(int i=0; i<st; ++i){
            cout<<s[i];
        }

        if(found)
            cout<<'0';

        for(int i=en+1; i<n; ++i){
            cout<<s[i];
        }

        cout<<endl;
    }

    return 0;
}