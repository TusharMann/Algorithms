#include <iostream>
#include<string>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,c[100],type[100][100],p[100],i,j,k,l,m;
        cin>>n;
        for(i=1;i<=n;i++)
        {
            cin>>c[i];
            for(j=1;j<=c[i];j++)
            {
                cin>>type[i][j];

            }
            j=c[i];
            for(k=1;k<=j;k++)
            {
               for(l=k+1;l<=j;l++)
               {
                   if(type[i][k]==type[i][l])
                   {
                       for(m=l;m<j;m++)
                       {
                           type[i][m]=type[i][m+1];

                       }
                       j--;
                       l--;
                   }

               }

            }
           // cout<<"Value of j "<<j<<endl;
            if(j==4)
            {
                p[i]=c[i]+1;
            }

            else if(j==5)
            {
                p[i]=c[i]+2;
            }
            else if(j==6)
            {

                p[i]=c[i]+4;
            }
            else
            {
                p[i]=c[i];
            }

           // cout<<"Points"<<p[i]<<" ";

        }

        int win=1,tie=0,max=p[1];
        for(k=2;k<=n;k++)
        {
            if(max<p[k])
            {
                win=k;
                tie=0;
                max=p[k];
            }
            else if(max==p[k])
            {
                tie=1;

            }


        }

        if(tie==1)
            cout<<"tie\n";
        else if(win==1)
            cout<<"chef\n";
        else
            cout<<win<<"\n";






    }

    return 0;
}
