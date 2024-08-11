#include<iostream>
#include<climits>
using namespace std;
int main(){
       int n;
    cin>>n;
    int input[50];
    for(int i=0;i<n;i++){
        cin>>input[i];
    }
    int max= INT_MIN;
    for(int j=1;j<n;j++){
           if(max<input[j]){
            max=input[j];
           }
    }
    cout<<max;
    cout<<input;
}