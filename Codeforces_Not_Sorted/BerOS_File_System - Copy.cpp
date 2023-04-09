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

string st;
cin>>st;
int flag = 0, no = 1;
for(int i=0; i<st.size(); ++i)
{
    if(st[i]!='/' && flag == 1)
    {
        cout<<"/"<<st[i];
        flag = 0, no = 0;
    }
    else if(st[i]!='/' && flag == 0)
        cout<<st[i];
    else if(st[i] == '/' && flag == 0)
    {
        flag = 1;
    }
}

if(no)
    cout<<"/";

shesh;
