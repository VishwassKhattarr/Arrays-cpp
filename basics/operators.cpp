#include<iostream>
using namespace std;
int main(){





int a,b;
cout<< "enter two numbers"<< endl;
cin>>a>>b;

bool isaequal = (a==b);
bool isAgreater = (a>b);
bool isAless = (a<b);
cout<<"are they equal"<< isaequal<<endl;
cout<<"is a greater"<< isAgreater<<endl;
cout<<"is a less"<< isAless<<endl;



cout<<"not equal"<<!isaequal<<endl;

bool third= isaequal && isAgreater;
bool fourth= isaequal||isAgreater;

cout<<third<<endl;
cout<<fourth<<endl;
}