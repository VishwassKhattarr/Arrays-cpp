#include<bits/stdc++.h>
using namespace std;
int main(){
    string line;
    getline(cin,line);
    string word="";
    for(int i=0;i<line.size();i++){
        if(line[i]==' '){
            reverse(word.begin(),word.end());
            cout<<word<<" ";
            word="";
        }else{
            word.push_back(line[i]);
        }
    }
    if(word != ""){
        reverse(word.begin(),word.end());
        cout<<word<<" ";
    }
    return 0;
  

}