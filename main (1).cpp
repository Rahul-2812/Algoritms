/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

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
