#include <iostream>

using namespace std;

int m;

void fibonacci(int a,int b,int n)
{
    if(n<m)
    {
    cout<<"\t"<<a+b;
    int c=a;
    a=b;
    b=c+b;
    n++;
    fibonacci(a,b,n);

    }


}

int main()
{
    cout<<"\nEnter the number of terms for fibonacci series ";
    cin>>m;
    cout<<"\t0\t1";

    fibonacci(0,1,2);

    return 0;
}
