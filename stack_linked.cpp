#include<iostream>

using namespace std;
struct node
{
	int data;
	struct node* next;
};

node* head;

void push(int  no);
void pop();
void print();

int main()
{
		int no,type;
	cout<<"type 1 for push and 2 for pop and -1 for print"<<endl<<"enter value of type=";
	cin>>type;
	
	
	while(type!=-1)
	{
		if(type==1)
	{
		cout<<"enter number=";
		cin>>no;
	push(no);
     	
}
	else if (type==2)
	pop();
	cout<<"enter value of type=";
	cin>>type;
    }
    print();
}

void push(int no)
{
	node* tail=new node();
	node* temp;
	
	tail->data=no;
	tail->next=NULL;
	
	if(head==NULL)
	{
		head=tail;
	}
	else
	{
		temp=head;
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		temp->next=tail;
	}
}

void pop()
{
	node* temp=head;
	if(head==NULL)
	cout<<"underflow";
	while(temp->next->next!=NULL)
	{
		temp=temp->next;
	}
	temp->next=NULL;
}

void print()
{
	node* temp=head;
 	while(temp!=NULL)
 	{
 		cout<<temp->data<<" ";
 		temp=temp->next;
	 }
}

