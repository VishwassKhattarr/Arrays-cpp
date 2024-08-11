#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){
    string word;
    cin>>word;
    sort(word.begin()+1,word.end());
    cout<<word;
}