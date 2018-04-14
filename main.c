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
  
  #for taking input
  
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
  
  #for sorting the priority
  for(i=0;i<n-1;i++)
  {
    for(j=0;j<(n-i-1);j++)
    {
      if(pri[j]>pri[j+1])
      {
        temp=pri[j];
        pri[j]=pri[j+1];
        pri[j+1]=temp;
        
        temp=pro[j];
        pro[j]=pro[j+1];
        pro[j+1]=temp;
        
        temp=bt[j];
        bt[j]=bt[j+1];
        bt[j+1]=temp;
      }
    }
  }
  #process after the sorting
  
  for(i=0;i<num;i++)
  {
    printf("Process p%d,pro[i]);
    printf("with priority %d,pri[i]);
    printf("has burst time %d",bt[i]);
    printf("\n\n");       
}
