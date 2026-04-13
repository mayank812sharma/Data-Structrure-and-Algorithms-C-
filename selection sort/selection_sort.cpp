#include<iostream>
using namespace std;
void selection_sort(int arr[],int n){
  
  for(int i=0;i<n-1;i++){
    int min_index=i;
    for(int j=i+1;j<n;j++){
      if(arr[min_index]>arr[j]){
        min_index=j;
      }

    }
    swap(arr[i],arr[min_index]);
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

selection_sort(arr,n);

for(int i=0;i<n;i++){
  cout<<arr[i]<<" ";

}
cout<<endl;






  return 0;
}