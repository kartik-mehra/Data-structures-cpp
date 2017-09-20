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
    x4->next=n;*/
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
    t->next=n;
    /*x1=new node;
    cout<<"ENTER LAST ITEM = ";
    cin>>x1->info;
    t->next=x1;
    x1->next=n;*/
    container=n;
    int f=0,count=1;
    cout<<"ENTER POSITION : ";
    cin>>a;
    if(a==1)
    {

        int c1=1;
        while((container!=n || c1==1) && count!=2)
        {
            if(container==n)
            {
                c1=0;
            }
            container=container->next;
            count++;
        }
    n=container;
    t->next=n;
    }
    else if(a==number)
    {

        int c1=1;
        while((container!=n || c1==1) && count!=number-1)
        {
            if(container==n)
            {
                c1=0;
            }
            container=container->next;
            count++;
        }

    container->next=n;

    }
    else{

        int c1=1;
        while(container!=n || c1==1)
        {

            if(container==n)
            {
                c1=0;
            }
            if(count==a)
               {
                f=1;
                break;
               }
            container=container->next;
            count++;

    }
   // cout<<container->info;
    x1=container;
    container=n;
    count=1;
         c1=1;
        while(container!=n || c1==1)
        {
            if(container==n)
            {
                c1=0;
            }
            if(count==a-1)
               {
                f=1;
                break;
               }
            container=container->next;
            count++;
        }
       // cout<<container->info;
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

        int c1=1;
        while(container!=n || c1==1)
        {
            if(container==n)
            {
                c1=0;
            }
            cout<<container->info<<endl;
            container=container->next;
        }

}
