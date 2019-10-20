#include<iostream>
using namespace std;
int stk[20],top=-1;
void push(int stk[],int n)
{
    int val;
    cout<<"enter value to be inserted in stack";
    cin>>val;
    if(top==n-1)
    {
        cout<<"stack overflow";
    }
    else
    {
       stk[top+1]=val;
       top++;
    }
}
void pop(int stk[],int n)
{
    if(top==-1)
    {
        cout<<"stack underflow";
    }
    else
    {
        top=top-1;
    }
}
void display()
{
for(int i=0;i<=top;i++)
{
    cout<<stk[i]<<endl;
}
}
main()
{
int n,a;
cin>>n;
cout<<"enter 1 to insert 2 to delete 3 to display";
cin>>a;
while(a!=0)
{
switch(a)
{
case 1:
    push(stk,n);
    break;
case 2:
    pop(stk,n);
    break;
case 3:
     display();
    break;
}
cout<<"enter 1 to insert 2 to delete and 3 for display";
cin>>a;
}

}
