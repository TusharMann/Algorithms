#include <iostream>

using namespace std;

int main()
{
    int n,k,i,j,temp;
    int arr[100000];
    cin>>n>>k;

    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for(j=0,i=0;j<k;i++)
    {
        if(i==n-1)
        {
            j++;
            i=-1;
            arr[n-1]=temp;
        }

        if(i==0)
        {
            temp=arr[i];
        }

        arr[i]=arr[i+1];

    }

    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";

    }

    return 0;
}
