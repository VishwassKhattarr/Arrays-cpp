#include<bits/stdc++.h>
using namespace std;
int main(){
    string name;
    cin>>name;
    // cout<<name[8];
    cout<<name.at(0)<<endl;

    // for(int i=0;i<name.size();i++){
    //     cout<<name.at(i)<<'\n';
    // }
    for(char ch : name){
        cout<<ch<<endl;;
    }
}