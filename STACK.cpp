#include<iostream>
#include<conio.h>
using namespace std;
#define MAX 10
int stack[MAX];
int top=-1,value;
void push();
void pop();
int peep();
void display();
int main()
{
    int choice;
    do
    {

        cout<<"\n *******  MAIN MENU  **********";
        cout<<"\n 1.PUSH\n 2.POP\n 3.PEEP\n 4.DISPLAY\n 5.EXIT";
        cout<<"\n ******************************";
        cout<<"\n Enter your choice: ";
        cin>>choice;
        switch(choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            peep();
            break;
        case 4:
            display();
            break;
        case 5:
            cout<<"\n Exit";
            break;
        default:
            cout<<"\n Enter a valid choice(1/2/3/4/5) ";

        }
    }
    while(choice!=5);

    return 0;

}
void push()
{
    if(top>=MAX-1)
    {
        cout<<"\n Stack Overflow";
    }
    else
    {
        cout<<"\n Enter value you want to enter: ";
        cin>>value;
        top++;
        stack[top]=value;
    }
}
void pop()
{
    if(top<=-1)
    {
        cout<<"\n Stack Underflow";
    }
    else
    {
        cout<<"\n Popped element is: "<<stack[top];
        top--;
    }
}
int peep()
{
    if(top==-1)
    {
        cout<<"\n Stack is empty";
        return -1;
    }
    else{
        return (stack[top]);
    }
}
void display()
{
    if(top<=-1)
    {

        cout<<"\n Stack is empty";
    }
    else
    {
        for(int i=top;i>=0;i--)
        {
            cout<<stack[i];
        }
    }
}
