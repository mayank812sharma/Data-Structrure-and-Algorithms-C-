#include <iostream>
using namespace std;

int search(int arr[], int start,int end, int key)
{
  int ans = -1;
  int mid = start + (end - start) / 2;
  while (start <= end)
  {
    if (arr[mid] == key)
    {
      ans = mid;
      return ans;
    }
    else if (arr[mid] > key)
    {
      end = mid - 1;
    }
    else
    {
      start = mid + 1;
    }
    mid = start + (end - start) / 2;
  }

  return ans;
}

int pivote(int arr[], int n)
{
  int start = 0;
  int end = n - 1;
  int mid = start + (end - start) / 2;
  while (start < end)
  {
    if (arr[mid] > arr[0])
    {
      start = mid + 1;
    }
    else
    {
      end = mid;
    }
    mid = start + (end - start) / 2;
  }
  return start;
}

int main()
{
  int n;
  cout << "Enter the size of the array -> ";
  cin >> n;
  int arr[1000];
  cout << "Enter the array -> ";
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  int key;
  cout << "Enter the number which you want to search -> ";
  cin >> key;

  if (key > arr[0])
  {
    cout << "The number is present at -> " << search(arr, 0, pivote(arr, n) - 1, key) << endl;
  }
  else if (key < arr[0])
  {
    cout << "The number is present at -> " << search(arr, pivote(arr, n), n-1, key) << endl;
  }

  return 0;
}