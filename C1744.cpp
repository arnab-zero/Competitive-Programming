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

int t, n;
char ch;
string st;

cin>>t;

while(t--){
    cin>>n>>ch>>st;
    
    if(ch == 'g')
    {
        cout<<0<<endl;
        continue;
    }

    int start = 0, mag = 0, temp = 0, on = 0;

    for(int i=0; i<n; ++i)
    {
        if(st[i] == 'g')
        {
            start = i;      //start = first appearance of g
            break;
        }
    }

    for(int i=0; i<n; ++i)
    {
        if(st[i] == 'g')
        {
            if(i!=0 && st[i-1]!='g')
                ++temp;
            if(temp > mag)
                mag = temp;     // mag = max time record, temp = counting while traversing
            temp = 0, on = 0;
            continue;
        }

        if(!on && st[i] == ch)
        {
            on = 1;
            continue;
        }

        if(on)
            ++temp;
    }

    int ltf;

    if(on)
        ltf = temp + start + 1;
    else 
    ltf = 0;

    if(mag > ltf)
        cout<<mag<<endl;
    else 
        cout<<ltf<<endl;

}

shesh;