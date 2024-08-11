#include <iostream>
using namespace std;
void reverse(int input[], int n)
{
    int i = 0, j = n - 1;
    while (i < j)
    {
        int temp = input[i];
        input[i] = input[j];
        input[j] = temp;
        i++;
        j--;
    }
     int k = 0;
    while (k < n)
    {
        cout << input[k];
        k++;
    }
}

int main()
{
    int a[5] = {1, 2, 3, 4, 5};
    int n = 5;
    reverse(a, n);
   
}