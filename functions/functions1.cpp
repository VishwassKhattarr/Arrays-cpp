#include<iostream>
using namespace std;
int main(){
    int n,r;
    cin>>n>>r;
    int fact_n=1;
    int i=1;
    while(i<=n){
        fact_n=fact_n*i;               //very long code
        i++;                           //code bulky for no reason
    }                                  //debugging hard
    int fact_r=1;                      //poor readability 
    i=1;
    while(i<=r){
        fact_r=fact_r*i;
        i++;
    }
    int fact_n_r=1;
    i=1;
    while(i<=n-r){
        fact_n_r=fact_n_r*i;
        i++;
    }
    cout<<fact_n/(fact_r*fact_n_r);

}