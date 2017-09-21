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
    int count;
    cout<<"ENTER NUMBER OF ELEMENTS TO ENTER : ";
    cin>>count;
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
    node *container,*c2;
    node *t;
    t=x1;
    node *n;
    n=x1;
    for(int i=0;i<count-1;i++)
    {
        x1 = new node;
        int a;
        cout<<"Enter "<<i+2<<" ELEMENT : ";
        cin>>a;
        x1->info=a;
        t->next=x1;
        t=t->next;
        if(i==0)
        {
            c2=x1;
        }
    }
    t->next=NULL;
    container=n;
    //cout<<c2->info<<" "<<container->info;
   if(container!=NULL)
    {
        while(container!=NULL)
        {
            c2=container->next;
            while(c2!=NULL)
            {
            if(container->info>c2->info)
            {
                //cout<<container->info<<" "<<c2->info<<'\n';
                int t=container->info;
                container->info=c2->info;
                c2->info=t;
                //cout<<container->info<<" "<<c2->info<<'\n';
            }
            c2=c2->next;
            }
            container=container->next;
        }
    }
   c2=container=n;
   cout<<"AFTER SORTING : \n";
    if(c2!=NULL)
    {
        while(c2!=NULL)
        {
            cout<<c2->info<<" ";
            c2=c2->next;
        }
    }
    }
