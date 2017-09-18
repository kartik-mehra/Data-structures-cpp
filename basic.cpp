#include<iostream>
using namespace std;
class node
{
public:
    int info;
    node *next;
};
main()
{
    node *x1=new node;
    //node *x2=new node;
    //node *x3=new node;
    //node *x4=new node;
    int a;
    cout<<"ENTER 1 ELEMENT = ";
    cin>>a;
    x1->info=a;
    /*x1->next=x2;
    x2->info=10;
    x2->next=x3;
    x3->info=8;
    x3->next=x4;
    x4->info=6;
    x4->next=NULL;*/
    node *container;
    node *t;
    t=x1;
    node *n;
    n=x1;
    for(int i=0;i<5;i++)
    {
        x1 = new node;
        int a;
        cin>>a;
        x1->info=a;
        t->next=x1;
        t=t->next;
    }
    t->next=NULL;
    /*x1=new node;
    cout<<"ENTER LAST ITEM = ";
    cin>>x1->info;
    t->next=x1;
    x1->next=NULL;*/
    container=n;
    if(container!=NULL)
    {
        while(container!=NULL)
        {
            cout<<container->info<<endl;
            container=container->next;
        }
    }
}
