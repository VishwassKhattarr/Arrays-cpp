#include<iostream>
using namespace std;
int main(){
    char input[3];
    // cin>>input;
    // cin.getline(input,1);
    cin.getline(input,10,'c');
    cout<<input;
}

