#include<bits/stdc++.h>
using namespace std;
int main(){
    string a,b;
    cin>>a>>b;
    if(a<b) cout<<"a<b";  //first unequal character is compared
    else cout<<"a>b";

    // if(a==b) cout<<"equal";            //==
    // else cout<<"not equal";

    //< or > --> gives dictionary order
    //abcef
    //abdez
    // so abcez<abdef
}