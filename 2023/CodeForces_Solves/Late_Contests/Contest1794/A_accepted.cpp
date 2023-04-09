#include <bits/stdc++.h>
using namespace std;
 
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
typedef long long int lli;
 
int main(void){
    fastio;

    int t;
    cin>>t;

    while(t--){
        int a, b, yesa1=0, yesa2 = 0, yesb1=0, yesb2=0;
        string sa, sb;
        cin>>a>>b>>sa>>sb;

        for(int i=1; i<a; ++i){
            if(sa[i] == sa[i-1] && !yesa1){
                yesa1=1;
            }
            else if(sa[i] == sa[i-1] && yesa1)
                yesa2=1;
        }

        if(yesa1 && yesa2){
            cout<<"NO"<<endl;
            continue;
        }

        for(int i=1;  i<b;  ++i){
            if(sb[i] == sb[i-1] && !yesb1){
                yesb1=1;
            }
            else if(sb[i] == sb[i-1] && yesb1)
                yesb2=1;
        }

        if(yesb1 && yesb2){
            cout<<"NO"<<endl;
            continue;
        }
        else if((yesa1 or yesa2) and (yesb1 or yesb2)){
            cout<<"NO"<<endl;
            continue;
        }

        if(!yesa1 and !yesa2 and !yesb1 and !yesb2){
            cout<<"YES"<<endl;
            continue;
        }

        if(sa[a-1] == sb[b-1]){
            cout<<"NO"<<endl;
        }
        else 
            cout<<"YES"<<endl;
    }

    return 0;
}