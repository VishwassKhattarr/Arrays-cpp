#include<iostream>
using namespace std;
int main(){
    int i=1;
    int sum=0;
    while(i<=10){
        if(i==5){
            i++;
            continue;
        }
        sum=sum+i;
        i++;

    }
    cout<<sum<<endl;

}