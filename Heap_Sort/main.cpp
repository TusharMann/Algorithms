#include <iostream>

using namespace std;

int hsize;

void max_heap(int arr[],int n)
{
    int left=n*2;
    int right=(n*2)+1;
    int largest;

    if()

}

void build_heap(int arr[],int n)
{
    hsize=n;
    for(int i=n/2;i>0;i--)
        max_heap(arr[i],i);


}

int main()
{
    int arr[100],i,j,n;
    cout<<"\nEnter the size of array ";
    cin>>n;
    cout<<"\nEnter the elements in array ";
    for(i=1;i<=n;i++)
        cin>>arr[i];

    build_heap(arr,n);
    return 0;
}
