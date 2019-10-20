#include<iostream>
using namespace std;
struct node{
	int data;
	node *next;
	node *prev;
};
class deque{
	public:
		node *front,*rear,*head;
		deque(){
			front=NULL;
			rear=NULL;
			head=NULL;
		}
		void InsertRear(int x)
		{
			node *temp=new node;
			if(front==NULL&&rear==NULL)
			{
				temp->data=x;
				temp->next=NULL;
				temp->prev=NULL;
				head=temp;
				front=temp;
				rear=temp;
			}
			else{
				node *temp1=head;
				while(temp1->next!=NULL)
				{
					temp1=temp1->next;
				}
				temp1->next=temp;
				temp->data=x;
				temp->next=NULL;
				temp->prev=rear;
				rear=temp;
			}
			return;
		}
		void deleteRear(){
			node *temp=head;
			while(temp->next->next!=NULL)
			{
				temp=temp->next;
			}
			rear=temp;
			rear->next=NULL;
		}
		/*void InsertFront(int x)
		{
			node *temp=new node;
			temp->data=x;
			temp->next=head;
			temp->prev=NULL;
			head=temp;
		}*/
		void deleteFront(){
			head=head->next;
		}
		void display(){
			node *temp=head;
			while(temp->next!=NULL)
			{
				cout<<temp->data<<" ";
				temp=temp->next;
			}
			cout<<temp->data<<" ";
		}
};
main(){
	deque d;
	int b,size,val;
	char a;
	cout<<"enter the size of the queue";
	cin>>size;
	cout<<"enter I for input restricted queue and O for output retricted quuee";
	cin>>a;
	if(a=='I')
    {
	cout<<"enter 1 for insert at rear 2 for delete from front 3 for delete from rear 4 for displayy"<<endl;
	cin>>b;
	while(b!=0)
	{
	switch(b)
	{
		case 1 :
		    cout<<"enter alue to insert"<<endl;
		    cin>>val;
			d.InsertRear(val);
			break;
		case 2:
			d.deleteFront();
			break;
		case 3:
			d.deleteRear();
			break;
		case 4:
			d.display();
			break;



	}
	cout<<"enter 1 for insert at rear 2 for delete from front 3 for delete from rear 4 for displayy"<<endl;
		cin>>b;
}
	/*d.InsertRear(1);
	d.InsertRear(2);
	d.InsertRear(3);
	d.InsertRear(4);
	d.deleteRear();
	d.deleteFront();
	d.InsertFront(1);
	d.display();*/
}
}
