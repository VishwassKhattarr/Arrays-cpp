#include<iostream>
using namespace std;
int* printDivisors(int n) {
    // Write your code here
    int a=n;
   
    for(int i=1;i<=n;i++){
        if(n%i==0){
            cout<<i<<" ";
        }
    }
   
}
int main(){
    printDivisors(20);
}