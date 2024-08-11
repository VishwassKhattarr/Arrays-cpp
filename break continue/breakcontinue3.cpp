#include<iostream>
using namespace std;
int main(){
    bool divided=false;

        int n;
        cin>>n;
        for(int i=2;i<n;i++){
            if(n%i==0){
                divided=true;
                break;
            }

        }
        if(divided){
            cout<<"not prime"<<endl;

        }else{
            cout<<"prime"<<endl;
        }
}