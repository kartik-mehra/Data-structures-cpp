#include<iostream>
using namespace std;
class node
{
public:
    int info;
    node *next;
    node()
    {
        next=NULL;
    }
}*top=NULL,*peek,*start,*top2;
int i=0;
void push(int n)
{
    node* p=new node();
     p->info=n;
     if(i==0)
     {
         i++;
         top = p;
         start=p;
         return;
     }
     top->next=p;
     top=p;
     top2=peek=top;
     top->next=NULL;
}
void pop()
{
    node *t=start,*p;
    if(t!=top)
    {
        while(t->next!=top)
    {
        if(t->next==top)
        {
            break;
        }
        t=t->next;
    }
    p=t->next;
    top=t;
    }
    else
    {
        p=top;
    }
    cout<<p->info;
}
void rem()
{
    node *t=start,*p;
    if(t!=top)
    {
        while(t->next!=top)
    {
        if(t->next==top)
        {
            break;
        }
        t=t->next;
    }
    p=t->next;
    top=t;
    }
    else
    {
        p=top;
    }
    peek=top;
}
void peek_ele()
{
    cout<<peek->info;
}
main()
{
	push(4);
	push(3);
	push(2);
    push(1);
    for(int i=0;i<4;i++)
    {
        pop();
    }
    top=top2;
    //cout<<peek->info;
    peek_ele();
    rem();
    pop();
}
