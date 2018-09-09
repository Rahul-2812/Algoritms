
#include <iostream>

using namespace std;

int
main ()
{
  int i, j, size, temp;
  cout << "\n Enter no. size of array: ";
  cin >> size;
  int arr[size];
  cout << "\n Enter elements into an array: ";
  for (i = 0; i < size; i++)
    {
      cin >> arr[i];
    }
  for (i = 0; i < size; i++)
    {
      for (j = i + 1; j < size; j++)
	{
	  if (arr[i] > arr[j])
	    {
	      temp = arr[i];
	      arr[i] = arr[j];
	      arr[j] = temp;
	    }
	}
    }
  cout << "\n Sorted elemnts is: ";
  for (i = 0; i < size; i++)
    {
      cout << " " << arr[i];
    }


  return 0;
}
