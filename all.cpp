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
    cout<<"Enter case : ";
    cin>>a;
    container=n;
    if(a==1){

        GOTO:
        int x,f=0;
        cout<<"ENTER POSITION AFTER : ";
        cin>>x;
        int count=1;
        if(x==number)
        {
            node *temp=new node;
            cout<<"ENTER NUMBER : ";
            cin>>temp->info;
            t->next=temp;
            temp->next=NULL;
        }
        else{
        if(container!=NULL)
        {
        while(container!=NULL)
        {
            if(count==x)
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
        node *temp=new node;
        cout<<"ENTER NO TO ENTER AFTER "<<container->info<<endl;
        cin>>f;
        x1=container->next;
        container->next=temp;
        temp->info=f;
        temp->next=x1;
        }
        else
        {
            cout<<"POSITION NOT FOUND : \n0";
        goto GOTO;
        }

    }
    }
    else if(a==2)
    {
        GOTO1:
        int x,f=0;
        cout<<"ENTER POSITION BEFORE : ";
        cin>>x;
        int count=1;
        x=x-1;
        if(x==0)
        {
            node *temp=new node;
            int k1;
            cout<<"ENTER NUMBER : ";
            cin>>k1;
            temp->info=k1;
            temp->next=n;
            n=temp;
        }
        else{
if(container!=NULL)
    {
        while(container!=NULL)
        {
            if(container->info==x)
               {
                f=1;
                break;
               }
            container=container->next;
        }
    }
    if(f==1)
    {
        node *temp=new node;
        cout<<"ENTER NO TO ENTER AFTER "<<container->info<<endl;
        cin>>f;
        x1=container->next;
        container->next=temp;
        temp->info=f;
        temp->next=x1;
    }
    else
    {
        cout<<"POSITION NOT FOUND :";
        goto GOTO1;
    }
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
