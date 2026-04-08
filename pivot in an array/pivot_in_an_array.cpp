#include <iostream>
using namespace std;

int pivot(int arr[], int n)
{
  int start = 0;
  int end = n - 1;
  int mid = start + (end - start) / 2;

  // 1st line
  while (start < end)
  {
    if (arr[0] < arr[mid])
    {
      start = mid + 1;
    }

    // 2nd line
    else if (arr[0] > arr[mid])
    {
      if (arr[mid] < arr[mid + 1])
      {
        end = mid;
      }
    }
    mid=start+(end-start)/2;
  }

  return start;
}

int main()
{

  int n;
  cout << "Enter the size of the array -> ";
  cin >> n;
  int arr[100];
  cout << "Enter the array -> ";
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  cout << "THe pivot in the array is -> " << pivot(arr, n) + 1 << endl;

  return 0;
}