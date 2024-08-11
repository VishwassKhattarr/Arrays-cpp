#include<bits/stdc++.h>
using namespace std;
int main(){
    string word;
    cin>>word;
    //word.substr(index,length)
    // cout<<word.substr(0,3);
    for(int l=0;l<word.size();l++){
        for(int r=l;r<word.size();r++){
            int index=l;
            int length=(r-l+1);
            cout<<word.substr(index,length)<<endl;;
        }
    }
}