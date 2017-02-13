#include <iostream>

using namespace std;

int main()
{
    int arr[10],mini,n,i;
    cout<<"\nEnter the size of array ";
    cin>>n;

    for(i=0;i<n;i++)
        cin>>arr[i];

    mini=arr[0];
    for(i=1;i<n;i++)
    {
       if(arr[i]<mini)
        mini=arr[i];

    }

    cout<<"\nMinimum is "<<mini;
    return 0;
}
