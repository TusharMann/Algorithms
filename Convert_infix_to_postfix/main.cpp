#include <iostream>
#include<ctype.h>

using namespace std;

int top=-1;
char a[20];

void push(char s)
{
        a[++top]=s;
}

void pop()
{
    char ch;
    while(a[top]!='(' && top!=-1)
    {
        ch=a[top];
        top--;
        cout<<ch;
    }
    --top;
}

int com(char ch)
{
    if(ch=='(')
        return 0;

    if(ch=='+' || ch=='-')
        return 1;

    if(ch=='*'|| ch=='/' || ch=='%')
        return 2;

    if(ch=='^')
        return 3;
}

void pop1()
{
        char ch;
        ch=a[top];
        cout<<ch;
        top--;

}

int main()
{
    char s[20];
    int i;

    cout<<"Enter any infix expression ";
    cin>>s;
    cout<<endl;

    for(i=0;s[i]!='\0';i++)
    {
       if(isalpha(s[i]))
        cout<<s[i];

        else if(s[i]=='(')
                push(s[i]);

        else if(s[i]==')')
            pop();

        else
        {
            while(com(s[i])<=com(a[top]))
                  pop1();

            push(s[i]);
        }

    }

    while(top!=-1)
        pop1();


    return 0;
}
