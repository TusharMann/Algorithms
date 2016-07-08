
#include<iostream>
#include<algorithm>
using namespace std;
struct job{
int a;
int b;
int w;
int id;
};
bool cmp(struct job j1,struct job j2)
{
return (j1.a<j2.a);
}
int main()
{
job j[100];
int t,i,n,tq;
float avg;
t=0;
cout<<"enter time quantum:";
cin>>tq;
cout<<"enter number of jobs:";
cin>>n;
for(i=0;i<n;i++)
{
cout<<"Enter Id:";
cin>>j[i].id;
cout<<"Enter Arrival Time:";
cin>>j[i].a;
cout<<"Enter Burst Time:";
cin>>j[i].b;
j[i].w=0;
}
sort(j,j+n,cmp);
bool val=true;
while(val==true)
{
for(i=0;i<n;i++)
{
 if(j[i].b!=0)
 j[i].w+=(t-j[i].a);
 if(j[i].b>=tq)
 {
 j[i].b-=tq;
 t+=tq;
 }
 else
 {
 t+=j[i].b;
 j[i].b=0;
 }
 j[i].a=t;
}
for(i=0;i<n;i++)
{
bool flag=true;
if(j[i].b!=0)
{
flag=false;
break;
}
if(flag==true)
val=false;
}
}
avg=0;
cout<<"ID\tWT\t"<<endl;
for(i=0;i<n;i++)
{
cout<<j[i].id<<"\t"<<j[i].w<<endl;
avg+=j[i].w;
}
avg=avg/n;
cout<<"Avg Time:"<<avg;
return 0;
}
