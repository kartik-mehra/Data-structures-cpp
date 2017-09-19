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
node *x,*container,*xx,*x2,*nm;
	int c;
	cout<<"ENTER NUMBER OF ELEMENTS : ";
	cin>>c;
	//x=new node;
	//x->inf=0;
//	nm=xx=x2=contaner=x;
	for(int i=0;i<c;i++)
	{
		int a;
		cout<<"enter the elements\n";
		cin>>a;
		if(i==0)
		{
			x=new node;
			x->info=a;
			xx=x2=container=x;
		}
		else{

		x=new node;
		x->info=a;
		xx->next=x;
		xx=xx->next;
	}
	}
	//cout<<x2->info<<xx->info;
	xx->next=container;
	c=1;
	while(container!=x2 || c==1)
    {
        if(container==x2)
        {
            c=0;
        }
        cout<<container->info<<" ";
        container=container->next;
    }
}
