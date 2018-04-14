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
           
  printf("\n Enter the number of process you want to process in queue 1 :\n");
  scanf("%d"&x);
  printf("Enter the number of process you wnat to process in queue 2:\n");
  scanf("%d",&y);
  printf("Enter the number of process you want to process in queue 3:\n");
  scanf("%d",&z);
    
           #for Queue 1
           
           for(i=0;i<x;i++)
           {a1[m]=pro[i];
            m=m+1;
           }
           printf("---------------------------------------");
           printf("| Queue 1    Priority  Burst time  |");
           printf("--------------------------------------");
           for(i=0;i<x;i++)
           {
           printf("   P%d        ",pro[i]);
           printf("%d        ",pri[i]);
           printf("%d",bt[i]);
           }
           printf("--------------------------------------");
           
            #for Queue 2
           
           for(i=x;i<y+x;i++)
           {a1[m]=pro[i];
            m=m+1;
           }
           printf("---------------------------------------");
           printf("| Queue 2    Priority  Burst time  |");
           printf("--------------------------------------");
           for(i=x;i<y+x;i++)
           {
           printf("   P%d        ",pro[i]);
           printf("%d        ",pri[i]);
           printf("%d",bt[i]);
           }
           printf("--------------------------------------");
           
           #for Queue 3
           
           for(i=y+x;i<z+y+x;x++)
           {
             a1[m]=pro[i];
             m=m+1;
           }
           printf("---------------------------------------");
           printf("| Queue 1    Priority  Burst time  |");
           printf("--------------------------------------");
           for(i=y+x;i<z+y+x;i++)
           {
           printf("   P%d        ",pro[i]);
           printf("%d        ",pri[i]);
           printf("%d",bt[i]);
           }
           printf("--------------------------------------");
           printf("\n");
           
           int tq,t,remain,flag=0;
           int waiting=0,turn=0;
           remain=a;
           printf("\n\n Welcome to QUEUE 1.. LETS DO ROUND ROBIN SCHEDULING...\n\n");
           for(i=0;i<a;i++)
           {
             printf("Enter arrival time for P%d =",pro[i]);
             scanf("%d",&tq);
             printf("\n\n Process\t |Turnaround time |Waiting tme \n\n");
             for(t=0,i=0;remain!=0;)
             {if(rtr[i]<=tq && rt[i]>0)
             {t=t+rt[i];
              rt[i]=0;
              flag=1;
             }
              else if(rt[i]>0)
              {
                rt[i]=rt[i]-tq;
                t=t+tq;
           }
              if(rt[i]==0 && flag==1)
              {remain--;
               printf("P%d\t|\t%d\t|\t%d\n",i+1,t-at[i],t-at[i]-bt[i]);
               waiting=waiting+t-at[i]-bt[i];
               turn=turn+t-at[i];
               flag=0;
              }
              if(i==a-1)
                i=0;
              else if(at[i+1]<=t)
                i++;
              else
                i=0;
             }
             printf("\\n\nAverage waiting time= %f sec\n",waiting*1.0/a);
             pritf("\n Average turnaround time=%f sec\n",turn*1.0/a);
             printf("------------------------------------------------------")
           
           
}
