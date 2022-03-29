#include<iostream.h>
#include<conio.h>
int main()
{
clrscr();
int i,candidate[6],ballot,vote[6];
char opt;
for(i=0;i<=5;i++)
{
vote[i]=0;
}
do
{
cout<<"\nEnter the ballot number :";
cin>>ballot;
switch(ballot)
{
case 1:vote[1]++;
break;
case 2:vote[2]++;
break;
case 3:vote[3]++;
break;
case 4:vote[4]++;
break;
case 5:vote[5]++;
break;
default:vote[0]++;
}
cout<<"\nWant to vote again\n";
cin>>opt;
}
while(opt=='y');
for(i=1;i<=5;i++)
{
cout<<"\nNo:of votes for candidatedidate "<<i<<"="<<vote[i];
}
cout<<"\n Sploit ballots are "<<vote[0];
return 0;
}