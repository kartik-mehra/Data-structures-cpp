#include<iostream>
#include<string.h>
#include<string>
#include<stack>
using namespace std;
//check brackets balance
bool ArePair(char opening,char closing)
{
	if(opening == '(' && closing == ')') return true;
	else if(opening == '{' && closing == '}') return true;
	else if(opening == '[' && closing == ']') return true;
	return false;
}
bool AreParanthesesBalanced(char *exp)
{
	stack<char>  S;
	for(int i =0;i<strlen(exp);i++)
	{
		if(exp[i] == '(' || exp[i] == '{' || exp[i] == '[')
			S.push(exp[i]);
		else if(exp[i] == ')' || exp[i] == '}' || exp[i] == ']')
		{
			if(S.empty() || !ArePair(S.top(),exp[i]))
				return false;
			else
				S.pop();
		}
	}
	return S.empty() ? true:false;
}
//

class node
{

public:
    int count=0;
    int info,i=0;
    node *next;
    node()
    {
        next=NULL;
    }
    node *top=NULL,*peek,*start,*top2;

void push(char n)
{
    node* p=new node();
     p->info=(char)n;
     if(top==NULL)
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
     count++;
}
void pop()
{
    node *t=start;
    char l=t->info;
    cout<<l<<" ";
    start=t->next;
}
char rem()
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
    return p->info;
}
};

main()
{
	char a[100];
	cin>>a;
	if(AreParanthesesBalanced(a))
    {
        node s,p;
        for(int i=0;a[i]!='\0';i++)
        {
            if(a[i]=='*' || a[i]=='+' || a[i]=='-' || a[i]=='/' || a[i]=='(')
            {
                if(s.top!=NULL)
                {
                char temp=s.top->info;
                s.push(a[i]);
                if((s.top->info=='+' || s.top->info=='-') && (temp=='*' || temp=='/'))
                {
                    p.push(s.rem());
                }
                }
                else
                {
                    s.push(a[i]);
                }
            }
            else if(a[i]!=')')
            {
                p.push(a[i]);
            }
            else
            {
                p.push(s.rem());
            }
        }
        int j=s.count;
        for(int i=0;i<=j;i++)
        {
            char a=s.rem();
            if(a!='(')
            {
                p.push(a);
            }
        }
        for(int i=0;i<=p.count;i++)
        {
        p.pop();
        }
    }
    else
    {
        cout<<"NOT BALANCED";
    }
}


