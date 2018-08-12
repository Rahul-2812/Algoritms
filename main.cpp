#include<iostream>
using namespace std;

# define max 100
int main()
{
    int arr[max];
    int i,n,selement;
    cout<<"Enter No. of elements u want to enter: ";
    cin>>n;
    cout<<"Enter elements: ";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter elements u want to search: ";
    cin>>selement;
    for(i=0;i<n;i++)
    {
        if(arr[i]==selement)
        {
            cout<<"Element is found."<<"at"<<i<<"positon.";
            break;
        }
    }
    return 0;
}