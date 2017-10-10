#include <iostream>
using namespace std;
class node
{
    public:
    int data;
    node *left;
    node *right;

    node *insert(node *root,int val)
    {
        if(root==NULL)
        {
            root = new node();
            root->left=root->right=NULL;
            root->data=val;
            return root;
        }
        else
        {
        if(root->data>=val)
        {
            root->left=insert(root->left,val);
        }
        else
        {
            root->right=insert(root->right,val);
        }
        return root;
        }
    }
    void pre(node *root,int *b,int &i)
    {
        if(root==NULL)
            return;

        b[i]=root->data;
        i=i+1;
        //cout<<root->data<<" ";
        root->pre(root->left,b,i);
        root->pre(root->right,b,i);

        }
};
int main() {
    int q;
    cin>>q;

    while(q--)
    {
        node *start=NULL;
        int n;
        cin>>n;
        int *a,*b,add=0;
        a = new int[n];
        b = new int[n];
        for(int i=0;i<n;i++)
        {
            int t;
            cin>>t;
            a[i]=t;
            start=start->insert(start,t);
        }
        start->pre(start,b,add);
        int f=0;
        for(int i=0;i<n;i++)
        {
           // cout<<b[i]<<" ";
            if(a[i]!=b[i])
            {
                f=1;
                break;
            }
        }

        if(f==0)
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }

        delete a;
        delete b;
    }
    return 0;
}
