#include <iostream>

using namespace std;

int main()
{
   int t,k,n,p,i,j=0;
   int arr[1000],brr[1000];
   cin>>t;

   for(p=0;p<t;p++)
   {
       cin>>n>>k;

        for(i=1;i<=n;i++)
        {
            cin>>arr[i];
            brr[i]=0;
        }


        for(i=1;i<=n;i++)
        {
            if(arr[i]!=i)
            {
                brr[arr[i]]++;

            }

        }

        for(i=1;i<=n;i++)
        {
            if(brr[i]>=k)
                j++;

        }

        cout<<"\n"<<j;


   }

    return 0;
}
