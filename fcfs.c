#include<stdio.h>
void main()
{
int i,j,l,s;
float z,x;
printf("enter the number of process       :");
scanf("%d",&l);
int a[20][3];
for(i=0;i<l;i++)
{
    printf("enter the arrival time of process %d       :",i);

    scanf("%d",&a[i][1]);
    printf("enter the burst time of process %d         :",i);
    scanf("%d",&a[i][2]);
    a[i][0]=i;

}a[0][0]=0;
s=l;
i=0;
while(l>=0){
     for(i=0;i<l;i++){
    if(a[i][1]>a[i+1][1])
    {
        int t1,t2,t3;
        t1=a[i][0];
        t2=a[i][1];
        t3=a[i][2];
        a[i][0]=a[i+1][0];
        a[i][1]=a[i+1][1];
        a[i][2]=a[i+1][2];
        a[i+1][0]=t1;
        a[i+1][1]=t2;
        a[i+1][2]=t3;


    }
    }
    l--;}
int wt[s],tat[s],w,t,c[s];
w=t=0;
wt[0]=0;


for(i=0;i<s;i++)
{if(wt[i]<a[i][1])
    wt[i+1]=a[i][1]+a[i][2];
    else
        wt[i+1]=wt[i]+a[i][2];
}





for(i=0;i<s;i++)
{
    tat[i]=wt[i]+a[i][2];
}
printf("_______________________________________________________________\n");
printf("process \t AT \t BT \t WT \t TAT  \n");

printf("_______________________________________________________________\n");

for(i=0;i<s;i++)
{
    printf(" P%d \t \t %d \t %d \t %d \t %d \n",a[i][0],a[i][1],a[i][2],wt[i],tat[i]);

   w=w+wt[i];
    t=tat[i]+t;
}
printf("\n \n ");
printf("  ");
for(i=0;i<s;i++)
    printf("---------------");

printf("\n");
printf("  |");
for(i=0;i<s;i++)
    printf("      p%d      |",a[i][0]);

printf("\n");
printf("   ");

for(i=0;i<s;i++)
printf("---------------");
printf("               ");

printf("\n  0");

for(i=0;i<s;i++)
    printf("              %d",wt[i+1]);


printf("\n \n ");

z=w/s;
x=t/s;
printf("AVERAGE WAITING TIME    = %f \n",z);
printf("AVERAGE TURN AROeUND TIME   = %f",x);
}
