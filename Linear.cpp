#include<iostream>
#include<conio.h>
using namespace std;
int main()
{

    int se,n,i,flag=0;
    cout<<"\n Enter no. of elements in Array: ";
    cin>>n;
    int arr[n];
    cout<<"\n Enter elements in Array: ";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"\n Enter element u want to search in array. ";
    cin>>se;
    for(i=0;i<n;i++)
    {
        if(arr[i]==se)
        {
            cout<<"\n Elements found in array at "<<i<<" position.";
            flag=1;

        }

    }
    if(flag!=1)
    {
       cout<<"\n Element not found.";
    }
    return 0;
}
