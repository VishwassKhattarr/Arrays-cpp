#include<iostream>
using namespace std;
int length(char input[]){
    int count=0;
    for(int i=0;input[i]!='\0';i++){
        count++;
    }
    return count;
}
int main(){
    char name[100];
    cout<<"enter your name ";
    cin>>name;
    // name[8]='x';
    // name[7]='d';
    // name[1]='\0';
    cout<<"Name: "<<name<<endl;
    cout<<"length of string is: "<<length(name);
}