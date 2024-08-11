#include<bits/stdc++.h>
using namespace std;
int main(){
      string a;
      string check;
      cin>>a;
      cin>>check;
      int l=0;
      int r=check.size()-1;
      while (r<a.size())
      {
        /* code */
        bool flag=true;
        for(int i=0;i<check.size();i++){
             if(a[i]!=check[i]){
                flag=false;
             }
        }
        if(flag==true){
            cout<<l<<" "<<r;
        }
        l++;
        r++;
      }
      
}