#include <iostream>
#include<string.h>

using namespace std;

int main()
{
    string arr[1000][100],brr[1000][100];
    int i,j;
    int n,k,crr[1000];
    for(i=0;i<1000;i++)
    {
        crr[i]=0;
    }
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>arr[i][0];
    }

    cin>>k;
    for(i=0;i<k;i++)
    {
        cin>>brr[i][0];
    }

    for(i=0;i<k;i++)
    {
        for(j=0;j<n;j++)
        {

            if(arr[j][0]==brr[i][0])
                crr[i]++;

        }

    }

    for(i=0;i<k;i++)
    {
        cout<<crr[i]<<endl;

    }


    return 0;
}
