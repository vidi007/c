#include<iostream>
using namespace std;
int rear=-1,front=-1;
int size,num,que[20];
void insertatrear(int s)
	{
		//cout<<s;
		if(rear==(s-1))
		{
			cout<<"overflow";
		}
		else if(front==-1 && rear==-1)
		{
			front=0;
			rear=0;
			cout<<"enter value";
			cin>>num;
			que[rear]=num;
			
		}
		else{
		cout<<"enter value";
		rear++;
		cin>>num;
		que[rear]=num;
	}
	}
	void deletefromfront()
	{
	  if(front==-1)
	  {
	  	cout<<"underflow";
	  	
	  }
	  if(front==rear)
	  {
	  	front=-1;
	  	rear=-1;
	  }
	else
	{
		front++;
	}
}
	void deletefromrear()
	{
	
		if(front==-1)
	  {
	  	cout<<"underflow";
	  	
	  }
	  if(front==rear)
	  {
	  	front=-1;
	  	rear=-1;
	  }
	else
	{
		rear--;
	}
}
	void display()
	{
		for(int i=front;i<=rear;i++)
		{
			cout<<que[i]<<endl;
		}
	}
int main()
{
	int i;
	char b[20];
	cout<<"enter size";
	cin>>size;
	cout<<"enter i for input rest deque o for output rest. deque";
	cin>>b;
	int  a;
	cout<<"enter 1 for insert at rear 2 for delete from front 3 for delete from rear 4 for displayy"<<endl;
	cin>>a;
	while(a!=0)
	{
	
	switch(a)
	{
		case 1 :
			insertatrear(size);
			break;
		case 2:
			deletefromfront();
			break;
		case 3:
			deletefromrear();
			break;
		case 4:
			display();
			break;
	
			
	
	}
	cout<<"enter 1 for insert at rear 2 for delete from front 3 for delete from rear 4 for displayy"<<endl;
		cin>>a;	
}
	
	return 0;
}
