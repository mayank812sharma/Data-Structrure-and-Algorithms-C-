#include<iostream>
using namespace std;
int peak(int arr[],int n){
  int start=0;
  int end=n-1;
  int mid=start+(end-start)/2;
  while(start<end){
    if(arr[mid]<arr[mid+1]){\
    start=mid+1;
    }
    else if(arr[mid]>arr[mid+1]){
      end=mid;
    }
    mid=start+(end-start)/2;
  }
  return start;
}

int main(){
int n;
cout<<"Enter the size of array -> ";
cin>>n;
int arr[1000];
cout<<"Enter the array -> ";
for(int i=0;i<n;i++){
  cin>>arr[i];
}
cout<<"index of peak is -> "<<peak(arr,n)+1<<endl;



  return 0;
}