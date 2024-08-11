#include<bits/stdc++.h>
using namespace std;
int main(){
    string text;
    string pat;
    cin>>text;
    cin>>pat;
    int pos=text.find(pat); //only looks for the first match
    
    if(text.find(pat)==string::npos){
            cout<<"no match";
    }else{
        cout<<"match found at index"<<text.find(pat);
    }
}