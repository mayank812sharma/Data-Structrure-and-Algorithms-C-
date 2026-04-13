#include<iostream>
using namespace std;
bool is_solution(int arr[],int n,int m,int mid){
  int cow_no=1;
  int last_stall=arr[0];
  for(int i=-0;i<n;i++){
    if(arr[i]-last_stall>=mid){
      cow_no++;
      if(cow_no==m){
        return true;
      }
      last_stall=arr[i];
    }

  }
  return false;
}
int main(){
  int n;
  cout<<"Ehter the no of stalls -> ";
  cin>>n;

  int m;
  cout<<"Enter the number of cows -> ";
  cin>>m;
  int arr[1000];
  cout<<"Enter the position of stalls -> ";
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }

  int maxi=0;
  for(int i=0;i<n;i++){
    maxi=max(maxi,arr[i]);
  }

  int start=0;
  int end=maxi;
  int mid=start+(end-start)/2;
  int ans=-1;
  while(start<=end){
    if(is_solution(arr,n,m,mid)){
      ans=mid;
      start=mid+1;
    }
    else{
      end=mid-1;
    }
    mid=start+(end-start)/2;
  }

  cout<<"The final answer would be -> "<<ans<<endl;





  return 0;
}