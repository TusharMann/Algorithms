#include <iostream>

using namespace std;

int main()
{
    int n,k,i,j,temp;
    int arr[1000];
    cin>>n>>k;

    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for(j=0;j<k;j++)
    {
        temp=arr[0];

        for(i=0;i<n-1;i++)
        {
            arr[i]=arr[i+1];
        }

        arr[n-1]=temp;

    }

    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";

    }

    return 0;
}
