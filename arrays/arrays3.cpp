#include<iostream>
using namespace std;
void fun(int input[], int n){
    for(int i=0;i<n;i++){
        cout<<input[i]<<" ";
    }
    cout << endl;
}
int main(){
    int n;
    cout<<"enter n:"<<endl;
    cin>>n;

    int input[100];
    cout<<"enter array elements"<<endl;
    // cout<<input<<endl; prints address
    for(int i=0;i<n;i++){
        cin>>input[i];
    }
    fun(input,n);
    

}

