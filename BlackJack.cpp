#include <bits/stdc++.h>
using namespace std;

#define shuru int main(void){
#define shesh return 0;}
#define vi vector<int>
#define pii pair<int,int>
#define pb push_back
#define pob pop_back
#define mpr make_pair
#define spc " "
#define nl cout<<endl
typedef long long int lli;

shuru;

int x;
cin>>x;
x-=10;

if(x<=0)
    cout<<0;
else if(x == 10)
    cout<<15;
else if(x>=1 && x<=11)
    cout<<4;
else if(x>=12)
    cout<<0;

shesh;