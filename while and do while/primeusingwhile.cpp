#include<iostream>
using namespace std;
int main(){
    int num=12;
    bool isprime=true;
    int d=2;
    while(d<=num-1){
        if(num%d==0){
            isprime=false;
            break;
        }
        d++;

    }

 int currentnumber =2;
    while(currentnumber<=num){
        isprime=true;
        d=2;
        while(d<=currentnumber-1){
            if(currentnumber % d ==0){
                isprime=false;
                break;

            }
            d++;

        }
        cout<<currentnumber<<"  "<<isprime<<endl;
        currentnumber=currentnumber+1 ;


    }
}
    