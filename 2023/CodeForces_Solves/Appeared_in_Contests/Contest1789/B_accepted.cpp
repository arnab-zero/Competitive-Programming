#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define spc " "
#define pb push_back
typedef long long int lli;

int main(void){
    fastio;

    int t;
    cin>>t;

    while(t--){
        int n;
        string st;
        cin>>n>>st;

        int p = n/2, found=0, gone=0, out=0;

        for(int i=0; i<p; ++i){
            if(st[i]!=st[n-i-1] && found==0){
                found=1;
            }
            else if(st[i]==st[n-i-1] && found == 1){
                gone=1;
            }
            else if(st[i]!=st[n-i-1] && gone==1){
                cout<<"No"<<endl;
                out=1;
                break;
            }
        }

        if(out)
            continue;

        cout<<"Yes"<<endl;
    }

    return 0;
}