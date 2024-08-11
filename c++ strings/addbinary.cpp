#include<iostream>
#include<string.h>
using namespace std;
int last(string a){
    if(a.size()==0){
        return 0;
    }
    if(a.back()==0){
        return 0;
    }else{
        return 1;
    }
}
void remove(string &a){
    if(a.size()>0) a.pop_back();
}
int main(){
    string a;
    string b;
    cin>>a>>b;
    int c=0;
    int d=0;
    string res="";
    while(a.size()>0 || b.size()>0){
        int sum=last(a)+last(b)+c;
        d=sum%2;
        c=sum/2;
        if(d==0)
        res.push_back('0');
        else res.push_back('1');
        remove(a),remove(b);
    }
        if(c>0){
           if(c==0) res.push_back('0');
           else res.push_back('1');
        }
        while(res.size()>0){
            cout<<res.back();
            res.pop_back();
        }
    }
