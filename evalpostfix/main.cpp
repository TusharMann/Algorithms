#include <iostream>
#include<ctype.h>
#include<math.h>

using namespace std;

int a[20],top=-1;

void pop(char ch)
{
    int x;
    switch(ch)
    {
    case '+':x=a[top]+a[top-1];
            a[--top]=x;
            break;


    case '-':x=a[top]-a[top-1];
            a[--top]=x;
            break;


    case '*':x=a[top]*a[top-1];
            a[--top]=x;
            break;


    case '/':x=a[top]/a[top-1];
            a[--top]=x;
            break;


    case '%':x=a[top]%a[top-1];
            a[--top]=x;
            break;


    case '^':x=pow(a[top],a[top-1]);
            a[--top]=x;
            break;

    }

}

int main()
{
    char s[20];
    int i;

    cout<<"Enter any postfix expression ";
    cin>>s;

    for (i=0;s[i]!='\0';i++)
    {
        if(isdigit(s[i]))
        {
            a[++top]=int(s[i])-48;
        }

        else if(s[i]=='+' || s[i]=='-' || s[i]=='*' || s[i]=='/' || s[i]=='%' || s[i]=='^'  )
        {
            pop(s[i]);
        }


    }

    cout<<"The result of above postfix is "<<a[top];

    return 0;
}
