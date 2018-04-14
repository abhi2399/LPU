#include<stdio.h>
#include<unistd.h>
int main()
{
  int num,i,j,x,y,z,m=0;
  int temp=0;
  printf("Enter number of processes\n");
  scanf("%d",&num);
  int a1[num],a2[num],a3[num];
  int pri[num],pro[num],bt[num],at[num],rt[num];
  for(i=0;i<num;i++)
  {
    printf("Enter process name for process %d = ",i+1,"\n");
    printf("P");
    scanf("%d",&pro[i]);
    printf("\nEnter priority for this process= ");
    scanf("%d",&pri[i]);
    printf("\n\nEnter he burst time for this process= ");
    scaanf("%d",&bt[i]);
  }  
}
