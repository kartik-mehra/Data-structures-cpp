#include<iostream>
using namespace std;
void fun(int p)
{
    cout<<p<<" ";
}
main()
{
    //int a[]={40,60,50,33,55,11};
    int t[100]={0};
    int a[]={50,33,44,22,77,35,60,40};
    int coun=8;
    t[1]=a[0];
    int j=1;
    int k=0;
    while(j<=coun)
    {
    int i=1,k=1;
    while(t[k]!=0)
    {
        if(t[k]>=a[j])
        {
            k=2*(k);
        }
        else
        {
            k=(2*k)+1;
        }
    }
    t[k]=a[j];
    //cout<<k<<" ";
    j++;
    }
    for(int i=1;i<=99;i++)
    {
        if(t[i]!=0)
        {
            cout<<t[i]<<" position is "<<i<<endl;
        }
    }
    int b[100];
    int i=0;
    k=1;
    int l=0;
    int p=t[k];
    label:
    if(l<j-1)
    {
    fun(p);
    if(t[(2*k)+1]!=0)
    {
        b[i]=(2*k)+1;
        i++;
    }
    if(t[2*k]!=0)
    {
        p=t[2*k];
        k=2*k;
        l++;
        goto label;
    }
    else
    {
        i--;
        p=t[b[i]];
        k=b[i];
        l++;
        goto label;
    }
    }





}
