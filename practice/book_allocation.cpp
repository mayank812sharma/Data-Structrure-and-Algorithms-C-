#include<iostream>
using namespace std;
bool is_solution(int arr[],int n,int m,int mid){
  int page_sum=0;
  int current_student=1;
  for(int i=0;i<n;i++){
    if(page_sum+arr[i]<=mid){
      page_sum+=arr[i];
    }
    else{
      current_student++;
      if(current_student>m || arr[i]>mid){
        return false;
      }
      page_sum=arr[i];
    }
  }
  return true;
}
int main(){
int n;
cout<<"Enter the number of books -> ";
cin>>n;
int m;
cout<<"Enter the number of student -> ";
cin>>m;
int arr[1000];
cout<<"Enter the array -> ";
for(int i=0;i<n;i++){
  cin>>arr[i];
}

int sum=0;
for(int i=0;i<n;i++){
  sum+=arr[i];
}

int ans=-1;
int start=0;
int end=sum;

int mid=start+(end-start)/2;

while(start<=end){
  if(is_solution(arr,n,m,mid)){
    ans=mid;
    end=mid-1;
  }
  else{
    start=mid+1;
  }
  mid=start+(end-start)/2;
}

cout<<"The final answer would be -> "<<ans<<endl;




  return 0;
}