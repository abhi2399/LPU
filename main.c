#include<stdio.h>
#include<unistd.h>
int main(){
int num,i,j,x,y,z,m=0;
int temp=0;
printf("Enter number of processes\n");
scanf("%d",&num);
int a1[num],a2[num],a3[num];
int pri[num],pro[num],bt[num],at[num],rt[num];
for(i=0;i<num;i++)
{
printf("\n\nEnter process name for process %d = ",i+1,"\n");
printf("P");
scanf("%d",&pro[i]);
printf("\n\nEnter priority for this process ");
scanf("%d",&pri[i]);
printf("\n\nEnter burst time for this process ");
scanf("%d",&bt[i]);
}
for(i=0;i<num-1;i++)
{
for(j=0;j<(num-i-1);j++)
{
if(pri[j]>pri[j+1]){
temp=pri[j];
pri[j]=pri[j+1];
pri[j+1]=temp;

temp=pro[j];
pro[j]=pro[j+1];
pro[j+1]=temp;

temp=bt[j];
bt[j]=bt[j+1];
bt[j+1]=temp;
}}
}
for(i=0;i<num;i++)
{
printf("Process P%d",pro[i]);
printf(" with priority %d",pri[i]);
printf(" has burst time %d",bt[i]);
printf("\n\n");
}
printf("\nEnter the number of processes you want to process in queue 1 :\n");
scanf("%d",&x);
printf("Enter the number of processes you want to process in queue 2 :\n");
scanf("%d",&y);
printf("Enter the number of processes you want to process in queue 3 :\n");
scanf("%d",&z);
for(i=0;i<m;i++){
a1[m]=pri[i];
m=m+1;
}
printf("_______________________________________________\n");
printf("|	QUEUE 1     Priority  Burst time  |\n");
printf("|_____________________________________________|\n");
for(i=0;i<m;i++){
printf("	  P%d		   ",pro[i]);
printf("%d		",pri[i]);
printf("%d\n",bt[i]);
}
printf("_______________________________________________\n\n");
for(i=x;i<y+x;i++){
a2[m]=pri[i];
m=+1;
}
printf("\n");
printf("_______________________________________________\n");
printf("|	QUEUE 2		Priority  Burst time  |\n");
printf("|_____________________________________________|\n");
for(i=x;i<y+x;i++){
printf("	  P%d		   ",pro[i]);
printf("%d     ",pri[i]);
printf("%d\n",bt[i]);
}
printf("_______________________________________________\n\n");
for(i=y+x;i<z+y+x;i++){
a3[m]=pri[i];
m=m+1;
}
printf("\n");
printf("_______________________________________________\n");
printf("|	QUEUE 3		Priority  Burst time  |\n");
printf("|_____________________________________________|\n");
for(i=y+x;i<z+x+y;i++){
printf("	  P%d		   ",pro[i]);
printf("%d     ",pri[i]);
printf("%d\n",bt[i]);
}
printf("_______________________________________________\n");
printf("\n");
int tq,t,remain,flag=0;
int waiting_time=0,turn_time=0;
remain=x;
printf("\n\nWELCOME TO QUEUE 1... LETS DO ROUND ROBIN SCHEDULING...\n\n");
for(i=0;i<x;i++){
printf("Enter arrival time for P%d =",pro[i]);
scanf("%d",&at[i]);
rt[i]=bt[i];
}
printf("Enter Time Quantum = ");
scanf("%d",&tq);
printf("\n\nProcess\t|Turnaround time|Waiting time\n\n");
for(t=0,i=0;remain!=0;)
{
if(rt[i]<=tq && rt[i]>0)
{
t=t+rt[i];
rt[i]=0;
flag=1;
}
else if(rt[i]>0)
{
rt[i]=rt[i]-tq;
t=t+tq;
}
if(rt[i]==0 && flag==1)
{
remain--;
printf("P%d\t|\t%d\t|\t%d\n",i+1,t-at[i],t-at[i]-bt[i]);
waiting_time=waiting_time+t-at[i]-bt[i];
turn_time=turn_time+t-at[i];
flag=0;
}
if(i==x-1)
i=0;
else if(at[i+1]<=t)
i++;
else
i=0;
}
printf("\n\nAverage waiting time= %f sec\n",waiting_time*1.0/x);
printf("\nAverage turnaround time= %f sec\n",turn_time*1.0/x);
printf("\n\n-------------------------------------------------------------\n\n");
printf("\n\nWELCOME TO QUEUE 2... LETUS DO PRIORITY QUEUE SCHEDULING..\n");
int wtime[num],ttime[num];int avg_wt,avg_tat,total=0;
wtime[x]=0;
for(i=x+1;i<y+x;i++){
wtime[i]=0;
for(j=x;j<i;j++)
wtime[i]=wtime[i]+bt[j];
total=total+wtime[i];
}
avg_wt=total*1.0/y;
total=0;
printf("\nProcess\t\tBurst Time\tWaiting Time\tTurnaround Time");
for(i=x;i<y+x;i++)
{
ttime[i]=bt[i]+wtime[i];
total=total+ttime[i];
printf("\nP%d\t\t%d\t\t%d\t\t%d",i+1,bt[i],wtime[i],ttime[i]);
}
avg_tat=total/y;
printf("\n\nAverage waiting time= %f sec\n",avg_wt*1.0);
printf("\nAverage turnaround time= %f sec\n",avg_tat*1.0);

printf("\n\n-------------------------------------------------------------\n\n");
printf("\n\nWelcome to QUEUE 3... let us do FCFS scheduling\n");
int wt[num],tat[num]; int avwt=0,avtat=0;
wt[y+x]=0;
for(i=y+x+1;i<z+x+y;i++){
wt[i]=0;
for(j=y+x;j<i;j++)
wt[i]=wt[i]+bt[j];
}
printf("\nProcess\t\tBurst Time\tWaiting Time\tTurnaround Time");
for(i=y+x;i<y+x+z;i++)
{
tat[i]=bt[i]+wt[i];
avwt=avwt+wt[i];
avtat=avtat+tat[i];
printf("\nP%d\t\t%d\t\t%d\t\t%d",i+1,bt[i],wt[i],tat[i]);
}

printf("\n\nAverage waiting time= %f sec\n",avwt*1.0/z);
printf("\nAverage turnaround time= %f sec\n",avtat*1.0/z);

}
