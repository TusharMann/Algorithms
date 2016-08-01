#include <iostream>

using namespace std;

bool findWordInAGrid(char grid[128][128], int m, int n, char word[32])
{
    int i,j,k,l,p=0;
    char wo=word[0];
    for(i=0;i<m;i++)
    {

        for(j=0;j<n;j++)
        {
            if(grid[i][j]==wo)
            {
                k=i;
                l=j;
                p=1;

            }

        }
    }

    if(p==0)
        return false;

    else{

        for(i=1;word[i]!='\0';i++)
        {



        }


    }


}

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
