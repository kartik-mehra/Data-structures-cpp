#include<iostream>
using namespace std;
class node
{
    public:
    int d;
    node *l;
    node *r;
    friend node* insert(node *root,int d);
    friend void in(node *root);
    friend void mirror(node *root);
};
node *insert(node *root,int d)
{
    if(root==NULL)
    {
        node *t =new node();
        t->d=d;
        t->l=NULL;
        t->r=NULL;
        return t;
    }
    if(d<root->d)
    {
        root->l=insert(root->l,d);
    }
    else
    {
        root->r=insert(root->r,d);
    }
    return root;
}
void in(node *root)
{
    if(root!=NULL)
    {
        in(root->l);
        cout<<root->d<<"\n";
        in(root->r);
    }
}
void mirror(node *root)
{
    if(root!=NULL)
    {
        mirror(root->l);
        mirror(root->r);
        node *t=root->l;
        root->l=root->r;
        root->r=t;
    }
}
int main() {
    int n;
    node *start=NULL;
    cin>>n;
    while(n!=-1){

        start=insert(start,n);
        cin>>n;
    }
    in(start);
    mirror(start);
    in(start);
    return 0;
}
