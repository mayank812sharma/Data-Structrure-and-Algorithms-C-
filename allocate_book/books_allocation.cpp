#include <iostream>
using namespace std;
bool is_solution_exist(int arr[], int no_of_books, int number_of_student, int mid)
{
  int current_no_of_student = 1;
  int page_sum = 0;
  for (int i = 0; i < no_of_books; i++)
  {
    if (page_sum + arr[i] <= mid)
    {
      page_sum += arr[i];
    }
    else
    {
      current_no_of_student++;
      if (current_no_of_student > number_of_student || arr[i] > mid)
      {
        return false;
      }
      page_sum = arr[i];
    }
  }
  return true;
}
int main()
{
  int n;
  cout << "Enter the number of books -> ";
  cin >> n;

  int m;
  cout << "Enter the number of students -> ";
  cin >> m;

  int arr[1000];
  cout << "Enter the array -> ";
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  int sum = 0;
  for (int i = 0; i < n; i++)
  {
    sum += arr[i];
  }

  int start = 0;
  int end = sum;
  int mid = start + (end - start) / 2;
  int ans = -1;
  while (start <= end)
  {
    if (is_solution_exist(arr, n, m, mid))
    {
      ans = mid;
      end = mid - 1;
    }
    else
    {
      start = mid + 1;
    }
    mid = start + (end - start) / 2;
  }

  cout<<"The maximum number of pages assigned to each student (minimum) is "<<ans<<endl;

  return 0;
}