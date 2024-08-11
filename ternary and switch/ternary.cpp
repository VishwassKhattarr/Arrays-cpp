#include<iostream>
using namespace std;
int main(){
int n1=5,n2=10,n3=15,ans;
ans=(n1>n2)?(n1>n3?n1:n3):(n2>n3?n2:n3);
cout<<ans+5;

}