#include<iostream>
using namespace std;
int binarySearch(int nums[], int left, int right, int target) {
    
      // Write your code !!!!
   while(left<=right){
      int mid=(left+right)/2;
       if(nums[mid]>target){
          
           right=mid-1;
       }else if(nums[mid]<target){
           left=mid+1;
           

       }else{
           return mid;
       }
   }
   return -1;
     
      
}
int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int left = 0;
    int right =n-1;
    int target;
    cin>>target;


    int ans = binarySearch(arr, 0, n-1, target);


    cout<<ans;




    return 0;
}