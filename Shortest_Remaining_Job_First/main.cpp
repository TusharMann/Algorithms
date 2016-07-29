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
