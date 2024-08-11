#include<iostream>
using namespace std;

int main() {
	// Write your code here
	int a,i=2,count=0;
    cin>>a;
	while(i<a){
		if(a%i==0){
			cout<<i<<endl;
            count++;
		
		}
        i++;
	}
	if(count==0){
        cout<<-1<<endl;
    }
}

