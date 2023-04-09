#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
typedef long long int lli;

void solve(){
    int a, b, c, d, res=0;
    cin>>a>>b>>c>>d;

    (a>=d)?({
        res+=2*d;
        a-=d;
        d=0;
    }):({
        res+=2*a;
        d-=a;
        a=0;
    });

    (b>=c)?({
        res+=2*c;
        b-=c;
        c=0;
    }):({
        res+=2*b;
        c-=b;
        b=0;
    });

    if(!a and (b or c or d)){
        cout<<res+1<<endl;
        return;
    }

    int rem=0;
    if(b)
        rem=b;
    else if(c)
        rem=c;
    
    if(a>=rem){
        cout<<res+a+rem<<endl;
        return;
    }
    else{
        cout<<res+2*a+1<<endl;
        return;
    }
}

int main(void){
    fastio;

    int t;
    cin>>t;
    
    while(t--){
        solve();
    }

    return 0;
}