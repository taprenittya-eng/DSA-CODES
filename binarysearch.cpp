#include <iostream>
using namespace std;
int main() {
   int arr[5]={1,2,3,4,5};
   int n=5,start=0,end=n-1;
   int key=2;
   while(start<=end){
       int mid=(start+end)/2;
       if(arr[mid]==key){
           cout<<"found at: "<<mid;
       }
       if(key>arr[mid]){
           start=mid+1;
       }else{
           end=mid-1;
       }
   }
    return 0;
}
