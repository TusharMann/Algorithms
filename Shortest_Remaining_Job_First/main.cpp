#include<iostream>
#include<algorithm>
using namespace std;
struct job
{
int id;
int art,brt,rt;
int ct,tat,wt;
};
bool cmp(struct job x,struct job y)
{
  return(x.art<y.art);

}
int main()
{
 int n,i,smallest,remain=0,time;
 float tot=0,wait=0,turn=0;
 float avgtat,avgwt;
 job j[10];
 cout<<"\nEnter number of jobs:";
 cin>>n;
 for(i=1;i<=n;i++)
 {
  j[i].id=i;
 cout<<"\nEnter arrival time of the process p"<<i<<" ";
 cin>>j[i].art;
 cout<<"\nEnter burst time of the process p"<<i<<" ";
 cin>>j[i].brt;
 j[i].rt=j[i].brt;

 }
 sort(j+1,j+n+1,cmp);

 j[9].rt=9999;


 for(time=0;remain!=n;time++)
 {
     smallest=9;
