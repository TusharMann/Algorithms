#include <iostream>

using namespace std;

int main()
{
    int arr[1000],n,i;
    //Enter the size of array
    cin>>n;

    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for(i=n-1;i>=0;i--)
    {
        cout<<arr[i]<<"\t";

    }
    return 0;
}
