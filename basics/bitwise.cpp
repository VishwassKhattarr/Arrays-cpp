#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i=n;
    while(i>=1){
        int k=1;
        while(k<=n){
            cout<<i;
            i--;
            k--;
        }
        cout<<endl;
        i--;

    }

}