#include <iostream>
#include<algorithm>

using namespace std;

 int arr[100];

 int height(int);

int diameter(int n)
{
    if(arr[n]==NULL)
        return 0;

    int lheight=height(2*n);
    int rheight=height((2*n)+1);

    int ldiameter=diameter(2*n);
    int rdiameter=diameter((2*n)+1);

    return max(lheight+rheight+1,max(ldiameter,rdiameter));

}

int height(int n)
{
    if(arr[n]==NULL)
        return 0;

    return 1+max(height(2*n),height((2*n)+1));

}

int main()
{
   int i,j,n,t,p;

   cin>>t;

   for(p=0;p<t;p++)
   {
       cin>>n;
       for(i=1;i<=n;i++)
        cin>>arr[i];

       j=diameter(1);

       cout<<j<<"\n";

   }

    return 0;
}
