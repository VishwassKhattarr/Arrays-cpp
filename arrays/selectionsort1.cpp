#include<iostream>
using namespace std;
void selectionSort(int input[], int n){  //void kara kyuki fucntion ke changes main mein reflect hote h array mein
//find min element
for(int i=0;i<n-1;i++){
int min=input[i] , minindex=i;
for(int j=i+1;j<n;j++){
    if(input[j]<min){
        min=input[j];
        minindex=j;
    }
}
int temp=input[i];
input[i]=input[minindex];
input[minindex]=temp;

}
}
int main(){
    int input[]={3,6,4,5,7,8};
    selectionSort(input,6);
    for (int i=0;i<6;i++){
        cout<<input[i]<<" ";
    }
    
}