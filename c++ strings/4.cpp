#include<bits/stdc++.h>
using namespace std;
int main(){
    string a="abc";
    string b="cde";
    // add characters
    // push_back()
    a.push_back('$');
    cout<<a<<endl;;
    
    // insert()
    a.insert(2,"m");
    cout<<a<<endl;;

    //remove characters
    //pop_back()
    a.pop_back();
    cout<<a<<endl;

    //erase
    // starting from 1, 2nd character removed
    a.erase(1,2);
    cout<<a<<endl;

    //string addition
    string sum=a+b;
    cout<<sum<<endl;

    //append saves b string into a string content of a changes in a.append(b) 
    a.append(b);
    cout<<a<<" "<<b;

}