//Problem title: Football

#include <bits/stdc++.h>
using namespace std;

#define shuru int main(void){
#define shesh return 0;}
#define RZ return 0;
#define vi vector<int>
#define pii pair<int,int>
#define pb push_back
#define pob pop_back
#define mpr make_pair
#define lp(n) for(int i=0; i<n; ++i)
#define spc " "
#define nl cout<<endl
typedef long long int lli;

shuru;

int n, goal, conc;
cin>>n>>goal>>conc;

if(n==1){
    if(goal==conc)
        cout<<1<<endl;
    else cout<<0<<endl;
    cout<<goal<<":"<<conc<<endl;
    RZ;
}

if(n-goal-conc<0)
    cout<<0<<endl;
else 
    cout<<n-goal-conc<<endl;

if(goal<=conc){
    for(int i=0; i<n-1; ++i)
    {
        if(goal)
        {
            cout<<1<<":"<<0;
            --goal;
        }
        else if(conc)
        {
            cout<<0<<":"<<1;
            --conc;
        }
        else
            cout<<0<<":"<<0;
        nl;
    }
}
else{
    for(int i=0; i<n-1; ++i)
    {
        if(conc)
        {
            cout<<0<<":"<<1;
            --conc;
        }
        else if(goal)
        {
            cout<<1<<":"<<0;
            --goal;
        }
        else
            cout<<0<<":"<<0;
        nl;
    }
}

cout<<goal<<":"<<conc<<endl;

shesh;

