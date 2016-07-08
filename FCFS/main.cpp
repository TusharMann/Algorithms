#include<iostream>
#include<algorithm>
using namespace std;
struct job
{
int id;
int art,brt,ct,tat,wt;
};
bool cmp(struct job x,struct job y)
{
  return(x.art<y.art);

}
int main()
{
 int n,i;
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

 }
 sort(j+1,j+n+1,cmp);

 for(i=1;i<=n;i++)
 {
     if(tot<j[i].art)
    {
        tot=j[i].art;
    }

     tot+=j[i].brt;
     j[i].ct=tot;
     j[i].tat=j[i].ct-j[i].art;
     j[i].wt=j[i].tat-j[i].brt;
     turn+=j[i].tat;
     wait+=j[i].wt;

 }

 avgtat=turn/n;
 avgwt=wait/n;

 cout<<"\nAverage turn around time="<<avgtat;
 cout<<"\nAverage waiting time="<<avgwt;


  return 0;
}
