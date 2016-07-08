#include <iostream>

using namespace std;

void insertion(int arr[10],int n)
{
    int temp,i,j;

    for(i=2;i<=n;i++)
    {
        temp=arr[i];
        j=i-1;

        while(temp<arr[j]&&j>0)
        {
            arr[j+1]=arr[j];
            j=j-1;

        }
        arr[j+1]=temp;
    }

}

int main()
{
    int arr[10],i,n;
    cout<<"\nEnter the size of array ";
    cin>>n;

    for(i=1;i<=n;i++)
    {
        cout<<"\nEnter number ";
        cin>>arr[i];
    }

    insertion(arr,n);
    cout<<"\nArray in increasing order ";

    for(i=1;i<=n;i++)
    {
        cout<<"\t"<<arr[i];

    }
    return 0;
}
