#include <iostream>
using namespace std;

int main() {

  // Write your code here
  int n;
  cin >> n;
  int i = 1;
  while (i <= n) {
    int spaces = 1;
    while (spaces <= n - i + 1) {
      cout << " ";
      spaces++;
    }
    int j = i;
    while (j >= 1) {
      cout << j;
      j--;
    }

     

    
        int k=2;
        while(k<=i){
            cout<<k;
            k++;
        }
        cout<<endl;
        i++;
    }

    cout << endl;
    i++;
  }
   

    
