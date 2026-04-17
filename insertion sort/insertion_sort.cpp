#include<iostream>
using namespace std;
void insertion_sort(int arr[],int n){

  for(int i=1;i<n;i++){
    int temp=arr[i];
    int j;
    for(j=i-1;j>=0;j--){
      if(arr[j]<=temp){
        break;
      }
      else{
        arr[j+1]=arr[j];
      }

    }
    arr[j+1]=temp;
  }

  
}
int main(){
 int n;
 cout<<"Enter the size of the array -> ";
 cin>>n;

 int arr[1000];
 cout<<"Enter the array -> ";
 for(int i=0;i<n;i++){
  cin>>arr[i];
 }

 insertion_sort(arr,n);

  for(int i=0;i<n;i++){
  cout<<arr[i]<<" ";
 }
 cout<<endl;




  return 0;
}