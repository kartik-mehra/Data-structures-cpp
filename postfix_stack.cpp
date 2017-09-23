#include<iostream>
#include<string.h>
#include<string>
using namespace std;
int count=0;
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
    cout<<p->info<<" ";
}
void rem(char *a)
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

    count--;
    }
    else
    {
        p=top;
    }
    peek=top;
    top->next=NULL;
    //cout<<peek->info<<"PEE"<<endl;
            if(strcmp(a,"+")==0)
            {
               top->info=top->info+p->info;
            }
            else if(strcmp(a,"-")==0)
            {
                top->info=top->info-p->info;
            }
            else if(strcmp(a,"*")==0)
            {
                top->info=top->info*p->info;
            }
            else if(strcmp(a,"/")==0)
            {
                top->info=top->info/p->info;
            }

}
void peek_ele()
{
    cout<<peek->info;
}
main()
{
	char a[1000],b[100][10];
	cin.getline(a,100);
    int k=0,j=0;
    //loop to convert string into char array of number and char
	for(int i=0;a[i]!='\0';i++)
    {
        if(a[i]!=' ')
        {
            b[j][k]=a[i];
            k++;
        }
        else
        {
            b[j][k]='\0';
            //cout<<b[j]<<"_";
            j++;
            k=0;
        }
    }
    b[j][k]='\0';
    //
    int i=0;
	//loop to check if char array is number or char
	while(strcmp(b[i],")"))
    {
        if(b[i][0]>='0' && b[i][0]<='9')
        {
            int num=0;
            int y=1;
            int t;
           for(int j=strlen(b[i])-1;j>=0;j--)
           {
               t=b[i][j]-'0';
               num=num+t*y;
               y*=10;
           }
           count++;
           push(num);
        }
        else
        {
            //count is decreasing after every operation
            rem(b[i]);
        }
        i++;
    }
    //printing
    for(int i=0;i<count;i++)
    {
        pop();
    }
    /*top=top2;
    //cout<<peek->info;
    peek_ele();
    rem();
    pop();*/
}

