#include<iostream>
using namespace std;
void bubble_sort(int arr[],int n){
  for(int i=0;i<n-1;i++){
    bool is_swaped=false;
    for(int j=0;j<n-i-1;j++){
      if(arr[j]>arr[j+1]){
        swap(arr[j],arr[j+1]);
        is_swaped=true;
      }
    }
    if(is_swaped==false){
      return;
    }
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

  bubble_sort(arr,n);

  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;




  return 0;
}