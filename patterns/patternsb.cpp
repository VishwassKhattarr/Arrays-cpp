#include<iostream>
using namespace std;

int main() {
	// Write your code here
	int basicsalary, da,allow,hra,pf,totalsalary,c;
	char a;
	cin>> basicsalary>>a;
	if(a==65){
		allow=1700;
		totalsalary=(1.59*basicsalary)+allow;
		c=totalsalary*1000;
		if(c%1000<500){
			cout<<totalsalary<<endl;
		}else{
			cout<<totalsalary+1<<endl;
		}
	
	}else if(a==66){
                           allow=1500;
		totalsalary=(1.59*basicsalary)+allow;
				c=totalsalary*1000;
		if(c%1000<500){
			cout<<totalsalary<<endl;
		}else{
			cout<<totalsalary+1<<endl;
		}
	}else{
		allow=1300;
		totalsalary=(1.59*basicsalary)+allow;
				c=totalsalary*1000;
		if(c%1000<500){
			cout<<totalsalary<<endl;
		}else{
			cout<<totalsalary+1<<endl;
		}
	}

	
}
