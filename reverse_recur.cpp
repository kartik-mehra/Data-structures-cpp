#include<iostream>
using namespace std;
class node
{
public:
    int info;
    node *next;
};
void print_rev(node *p)
{
    if(p->next!=NULL)
    {
        print_rev(p->next);
    }
        cout<<p->info<<" ";
}
node* insert(int n)
{
    node *t;
    node *p=new node;
    cout<<"ENTER "<<n<<" ELEMENT ";
    cin>>p->info;
    p->next=NULL;
    if(n>1)
    {
        t=insert(n-1);
        p->next=t;
    }
        return p;
}
main()
{
    node *x,*container,*xx,*x2,*nm;
	int c;
	cout<<"ENTER NUMBER OF ELEMENTS : ";
	cin>>c;
	container=insert(c);
	//x=new node;
	//x->inf=0;
//	nm=xx=x2=contaner=x;
	/*for(int i=0;i<c;i++)
	{
		int a;
		cout<<"enter the elements\n";
		cin>>a;
		if(i==0)
		{
			x=new node;
			x->info=a;
			x->next=NULL;
			xx=x2=container=x;
		}
		else{
		x=new node;
		x->info=a;
		x->next=NULL;
		xx->next=x;
		xx=xx->next;
	}
	}*/
    print_rev(container);
}
