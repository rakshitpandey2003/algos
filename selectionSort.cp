
#include<iostream>
#include<algorithm>
using namespace std;

void
selectionSort (int arr[], int n)
{
  int pos = 0;
  for (int i = 0; i < n; i++)
    {
      pos = i;
      for (int j = i + 1; j < n; j++)
	{
	  if (arr[j] < arr[pos])
	    pos = j;
	}
      swap (arr[pos], arr[i]);
    }
}

int
main ()
{
  int arr[] = { 5, 1, 4, 2, 8, 3, 6, 7, 9, 0 };
  int n = sizeof (arr) / sizeof (arr[0]);
  selectionSort (arr, n);
  cout << "Sorted array: \n";
  for (int i = 0; i < n; i++)
    {
      cout << arr[i];
    }
  return 0;
}
