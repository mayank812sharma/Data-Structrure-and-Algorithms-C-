#include<iostream>
using namespace std;
int sqrt(int n){
  int ans;
  int start=0;
  int end=n-1;
  int mid=start+(end-start)/2;
  while(start<=end){
    int mid_square=mid*mid;
    
    if(mid_square<n){
      ans=mid;
      start=mid+1;
    }
    else if(mid_square>n){
      end=mid-1;
    }
    else{
      return mid;
    }

    mid=start+(end-start)/2;
  }
  return ans;
}

double final_ans(int n,int temp,int precison){
  double factor=1;
  double ans;
  for(int i=0;i<precison;i++){
    factor/=10;
    // ans=temp+factor;
    for(double j=temp;j*j<n;j+=factor){
      ans=j;
    }
  }
  return ans;
}

int main(){
int n;
cout<<"Enter the number whose square root you have to find -> ";
cin>>n;


// cout<<"The square root of the number is -> "<<sqrt(n)<<endl;

float temp=0.1;
int temp_ans=sqrt(n);
int precision;
cout<<"Upto how much precision do you want the ans -> ";
cin>>precision;

cout<<"The most precise answer would be -> "<<final_ans(n,temp_ans,precision)<<endl;





  return 0;
}