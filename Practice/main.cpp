#include <iostream>

using namespace std;

int main()
{
    int i,j,k=0,p;

    for(i=1;i<=(9/2)+1;i++)
    {

        for(j=1;j<=(9-k)/2;j++)
        {
            cout<<"*";

        }

        for(p=1;p<=k;p++)
            cout<<" ";

        for(j=((9-k)/2)+k+1;j<=9;j++)
            cout<<"*";

        if(k==0)
            k++;
        else
            k=k+2;

        cout<<endl;

    }

    k=k-4;
     for(i=1;i<=9/2;i++)
    {

        for(j=1;j<=(9-k)/2;j++)
        {
            cout<<"*";

        }

        for(p=1;p<=k;p++)
            cout<<" ";

        for(j=((9-k)/2)+k+1;j<=9;j++)
            cout<<"*";

        if(k==1)
            k=0;
        else
            k=k-2;
        cout<<endl;

    }


    return 0;
}
