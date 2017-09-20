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
    int number;
    cout<<"ENTER NUMBER OF ELEMENTS TO ENTER : ";
    cin>>number;
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
    for(int i=0;i<number-1;i++)
    {
        x1 = new node;
        int a;
        cout<<"Enter "<<i+2<<" ELEMENT : ";
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
    int f=0,count=1;
    cout<<"ENTER POSITION : ";
    cin>>a;
    if(a==1)
    {
    if(container!=NULL)
    {
        while(container!=NULL && count!=2)
        {
            container=container->next;
            count++;
        }
    }
    n=container;
    }
    else if(a==number)
    {
        if(container!=NULL)
    {
        while(container!=NULL && count!=number-1)
        {
            container=container->next;
            count++;
        }
    }
    container->next=NULL;

    }
    else{
    if(container!=NULL)
    {
        while(container!=NULL)
        {
            if(container->info==a)
               {
                f=1;
                break;
               }
            container=container->next;
            count++;
        }
    }
    x1=container;
    container=n;
    count=0;
    if(container!=NULL)
    {
        while(container!=NULL)
        {
            if(container->info==a-1)
               {
                f=1;
                break;
               }
            container=container->next;
            count++;
        }
    }
    if(f==1)
    {
        container->next=x1->next;
    }
    else
    {
        cout<<"POSITION NOT FOUND :";

    }
    }
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
