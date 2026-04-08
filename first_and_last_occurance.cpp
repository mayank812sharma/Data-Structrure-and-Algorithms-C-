#include <iostream>
using namespace std;
int first_occurence(int arr[], int n, int key)
{

  int start = 0;
  int end = n - 1;
  int mid = start + (end - start) / 2;
  int ans = -1;
  while (start <= end)
  {
    if (arr[mid] == key)
    {
      ans = mid;
      end = mid - 1;
    }
    else if (arr[mid] < key)
    {
      start = mid + 1;
    }
    else
    {
      end = mid - 1;
    }
    mid = start + (end - start) / 2;
  }
  return ans+1;
}

int last_occurence(int arr[], int n, int key)
{

  int start = 0;
  int end = n - 1;
  int mid = start + (end - start) / 2;
  int ans = -1;
  while (start <= end)
  {
    if (arr[mid] == key)
    {
      ans = mid;
      start = mid + 1;
    }
    else if (arr[mid] < key)
    {
      start = mid + 1;
    }
    else
    {
      end = mid - 1;
    }
    mid = start + (end - start) / 2;
  }
  return ans+1;
}

int main()
{
  int n;
  cout << "Enter The size of the array -> ";
  cin >> n;

  int arr[1000];
  cout << "Enter the array -> ";
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  int key;
  cout << "Enter the key which you want to search -> ";
  cin >> key;

  cout << "The first occurrence is at -> " << first_occurence(arr, n, key) << endl;
  cout << "The last occurrence is at -> " << last_occurence(arr, n, key) << endl;

  return 0;
}