#include <iostream>

using namespace std;

int hsize;

void max_heap(int arr[],int n)
{
    int left=n*2;
    int right=(n*2)+1;
    int largest,temp;

    if(left<=hsize && arr[left]>arr[n])
        largest=left;
    else
        largest=n;
    if(right<=hsize && arr[right]>arr[largest])
        largest=right;

    if(largest!=n)
    {
        temp=arr[n];
        arr[n]=arr[largest];
        arr[largest]=temp;

        max_heap(arr,largest);
    }

}

void build_heap(int arr[],int n)
{
    hsize=n;
    for(int i=n/2;i>0;i--)
        max_heap(arr,i);


}

int main()
{
    int arr[100],i,n;
    cout<<"\nEnter the size of array ";
    cin>>n;
    cout<<"\nEnter the elements in array ";
    for(i=1;i<=n;i++)
    {
        cout<<"\nEnter any number ";
        cin>>arr[i];
    }

    build_heap(arr,n);

    for(i=n;i>1;i--)
    {
        int temp;
        temp=arr[1];
        arr[1]=arr[i];
        arr[i]=temp;

        hsize--;
        max_heap(arr,1);


    }

    cout<<"\nSorted array is ";
    for(i=1;i<=n;i++)
        cout<<"\t"<<arr[i];


    return 0;
}
