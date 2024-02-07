#include<bits/stdc++.h>

using namespace std;

int BinarySearch(double A[],int low,int high,int key)
{
    if(low>high)
        return -1;

    int mid=ceil((low+high)/2);

    if(A[mid]==key)
        return mid;
    else if(key<A[mid])
    {
        high=mid-1;
        BinarySearch(A,low,high,key);
    }
    else if(key>A[mid])
    {
        low=mid+1;
        BinarySearch(A,low,high,key);
    }
}

double greatest_triple(double x,double y,double z)
{
    if(x>=y && x>=z)
        return x;
    else if(y>=x && y>=z)
        return y;
    else if(z>=x && z>=y)
        return z;
}

double greatest_dual(double x,double y)
{
    return (x>y?x:y);
}


int main()
{
    int n,l,i,j,k,x,sf=0,s,e;
    double length=0,temp_length=0,start_l=0,end_l=0;
    cin>>n>>l;
    double ar[n];
    for(i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    sort(ar,ar+n);

    s=BinarySearch(ar,0,n-1,0);
    e=BinarySearch(ar,0,n-1,l);

    for(i=0;i<n-1;i++)
    {
        temp_length=ar[i+1]-ar[i];

        if(temp_length>length)
            length=temp_length;
    }
    length=length/2.0;

    if(s==-1 && e==-1)
    {
        end_l=l-ar[n-1];
        length=greatest_triple(ar[0],length,end_l);
    }
    else if(s==-1)
    {
        length=greatest_dual(ar[0],length);
    }
    else if(e==-1)
    {
        end_l=l-ar[n-1];
        length=greatest_dual(length,end_l);
    }

    ///cout<<length<<endl;
    printf("%lf \n",length);

    return 0;
}

