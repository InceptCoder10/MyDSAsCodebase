#include<iostream>
using namespace std;

void bubblesort(int n,int a[])
{
    for (int i = 0; i < n-1; i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            if(a[j+1]<a[j])
            {
                int temp=a[j+1];
                a[j+1]=a[j];
                a[j]=temp;
            }
        }
    }
    // return a[n];
}

int main()
{
    int n;
    cout<<"Enter the number of elements";
    cin>>n;
    int* a = new int[n];
     
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the "<<i<<"th element :";
        cin>>a[i];
        cout<<endl;
    }
    bubblesort(n,a);

    cout<<"Sorted Array using BubbleSort";
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<endl;
    }
    
    return 0;
}