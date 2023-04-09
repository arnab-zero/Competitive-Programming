#include <bits/stdc++.h>
using namespace std;
int main(void){
    string st;
    cin>>st;
    
    int one=0, two =0, three=0;
    for(int i=0; i<st.length(); ++i){
        if(st[i] == '1')
            ++one;
        else if(st[i] == '2')
            ++two;
        else if(st[i] == '3')
            ++three;
    }
    
    if(one)
    {
        cout<<"1";
        --one;
    }
    else if(two)
    {
        cout<<"2";
        --two;
    }
    else 
    {
        cout<<"3";
        --three;
    }
    
    for(int i=0; ; ++i){
        if(one)
        {
            cout<<"+1";
            --one;
        }
        else if(two)
        {
            cout<<"+2";
            --two;
        }
        else if(three) {
            cout<<"+3";
            --three;
        }
        else 
            break;
    }
    
    return 0;
}