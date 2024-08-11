#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){
    string word;
    cin>>word;
    for(int i=0;i<word.size();i++){
        for(int j=i;j<word.size();j++){
            cout<<word[j];
        }
        cout<<endl;
    }
}