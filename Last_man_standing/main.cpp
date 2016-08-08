#include <iostream>

using namespace std;

int main()
{
   int t;
   cin>>t;

   while(t--)
   {
      int arr[10000],brr[10000],i,n,m,j;
      cin>>n;

      for(i=1;i<=n;i++)
        arr[i]=brr[i]=i;

        m=n/2;

        while(m>0)
        {

            for(i=1,j=2;i<=m;i++,j=j+2)
            {
                brr[i]=brr[j];
            }
            m=m/2;
        }

        for(i=1;i<=n;i++)
        {
            if(arr[i]==brr[1])
                cout<<i;

        }



   }

    return 0;
}
