#include <bits/stdc++.h>
using namespace std;

int main(void){
    int t, n;
    string st;
    cin>>t;

    while(t--){
        cin>>n>>st;
        int l=0, r=0, found = 0, rightIndex, leftIndex;

        for(int i=0; i<st.length(); ++i){
            if(st[i] == 'R' && !found)
            {
                rightIndex = i+1;
                found = 1;
            }

            if(st[i] == 'L' && found == 1)
            {
                leftIndex = i+1;
                found = 2;
            }

            if(st[i] == 'L')
                ++l;
            else
                ++r;
        }

        if(l==0 || r==0)
            cout<<"-1"<<endl;
        else if(found == 2)
            cout<<"0"<<endl;
        else 
            cout<<rightIndex-1<<endl;
    }

    return 0;
}