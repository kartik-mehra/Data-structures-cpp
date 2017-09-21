#include<iostream>
using namespace std;
class node
{
public:
    char info;
    node *next;
    node()
    {
        next=NULL;
    }
};
main()
{
    node *x1=new node;
    char a;
    cin>>a;
    x1->info=a;
    node *container;
    node *t;
    t=x1;
    node *n;
    n=x1;
    container=n;
    while(a!='0')
    {
        x1 = new node;
        char a;
        cin>>a;
        if(a=='0')
        {
            break;
        }
        x1->info=a;
        t->next=x1;
        t=t->next;
    }
    int co=0;
    if(container!=NULL)
    {
        while(container!=NULL)
        {
            co=0;
            t=container->next;
            if(container->info!='1')
                {
            while(t!=NULL)
            {
                if(container->info==t->info && t->info!='1' && container->info!='1')
                {
                    co++;
                    t->info='1';
                   /* node *te=n;
                    while(te!=t)
                    {
                        if(te->next==t)
                        {
                            break;
                        }
                        te=te->next;
                    }
                    te->next=t->next;*/
                }
                t=t->next;
            }
            if(co==1)
            {
                cout<<container->info;
            }
                }
            container=container->next;
        }
    }
}
