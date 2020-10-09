#include<stdio.h>
void main()
{
    int n,i,j,k=1,t,b=0,min,tp[20],bt[20],wt[20],at[20],pr[20],tat[20],p[20];
    float awt=0,atat=0;
    printf("Enter no. of processes:");
    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
        printf("Process:");
        scanf("%d",&p[i]);
        printf("Arrival Time:");
        scanf("%d",&at[i]);
        printf("Burst Time:");
        scanf("%d",&bt[i]);
        printf("Priority:");
        scanf("%d",&pr[i]);

    }
    for(i=0;i<n;i++)
    {
       for(j=0;j<n;j++)
       {
           if(at[i]<at[j])
           {
               t=at[j];
               at[j]=at[i];
               at[i]=t;

               t=bt[j];
               bt[j]=bt[i];
               bt[i]=t;

               t=p[j];
               p[j]=p[i];
               p[i]=t;
           }

       }

    }
    for(j=0;j<n;j++)
    {
        b=b+bt[j];
        min=bt[k];
        for(i=k;i<n;i++)
        {
            min=pr[k];
            if(b>=at[i])
            {
                if(pr[i]<min)
                {
                    t=at[k];
                    at[k]=at[i];
                    at[i]=t;

                    t=bt[k];
                    bt[k]=bt[i];
                    bt[i]=t;

                    t=pr[k];
                    pr[k]=pr[i];
                    pr[i]=t;

                    t=p[k];
                    p[k]=p[i];
                    p[i]=t;
                }
            }
        }
        k++;
    }
    tp[0]=0;
     printf("\nProcess\tBurst Time \t Arrival Time\t Priority\tWaiting Time\tTurnaround Time ");
     for(i=0; i<n; i++)
     {
         wt[i]=0;
         tat[i]=0;
         tp[i+1]=tp[i]+bt[i];
         wt[i]=tp[i]-at[i];
         tat[i]=wt[i]+bt[i];
         awt=awt+wt[i];
         awt=awt+wt[i];
         atat=atat+tat[i];
         printf("\n%d\t\t%d\t\t%d\t\t%d\t\t%d\t\t%d\n",i+1,bt[i],at[i],pr[i],wt[i],tat[i]);
     }
    printf("\n\nGantt Chart");
    printf("\n");
    printf("  ");
    for(i=0;i<n;i++)
         printf("|\tp%d\t",p[i]);

    printf("|");

    printf("\n");

    for(i=0;i<n;i++)
         printf("%d\t\t",tp[i]);
    printf("\n");

    awt=awt/n;
    atat=atat/n;
    printf("\n\nAverage Waiting Time=%f",awt);
    printf("\nAverage Turnaround Time=%f\n",atat);
}
