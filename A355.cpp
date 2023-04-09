#include <bits/stdc++.h>
using namespace std;

#define spc " "
#define tab "\t"

int main(void){
    int k, n;
    cin>>k>>n;
    // if(n==0){
    //     cout<<"0"<<endl;
    //     return 0;
    // }
    // int sum = n;
    // while(sum<k)
    //     sum *= 10;
    // int dig = sum/k;
    // for(int i=0; i<k-1; ++i)
    //     cout<<dig;
    // cout<<sum-dig*k<<endl;

    if(n==0){
        if(k == 1)
            cout<<"0"<<endl;
        else 
            cout<<"No solution"<<endl;
        return 0;
    }

    cout<<n;
    for(int i=0; i<k-1; ++i)
        cout<<"0";
    return 0;
}