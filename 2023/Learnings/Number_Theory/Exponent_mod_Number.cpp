#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;

lli expo_mod_recursive(lli a, lli x, lli b){
    if(x==1)
        return a%b;
    else if(x & 1)
        return (expo_mod_recursive(a, 1, b)*expo_mod_recursive(a, x-1, b))%b;
    else if(x%2 == 1)
        return (expo_mod_recursive(a, x/2, b)*expo_mod_recursive(a, x/2, b))%b;
}

lli expo_mod_iterative(lli a, lli x, lli b){
    
}


int main(void){
    lli a, x, b;
    cin>>a>>x>>b;

    cout<<"(a^x)%b = "<<expo_mod_recursive(a,x,b)<<endl;

    return 0;
}