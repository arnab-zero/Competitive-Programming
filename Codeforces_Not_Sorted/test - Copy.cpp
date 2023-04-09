// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

typedef long long int lli;

lli modPow(lli n, lli p, lli x){
    if(p == 1){
        return n%x;
    }
    
    if(p%2)
        return (modPow(n, p/2, x) * modPow(n, p/2 + 1, x))%x;
    else 
        return (modPow(n, p/2, x) * modPow(n, p/2, x))%x;
}


int main() {
    lli n, p, x;
    cin>>n>>p>>x;
   
    cout<<n<<"^"<<p<<" mod "<<x<<" = "<<modPow(n, p, x)<<endl;
   
    return 0;
}