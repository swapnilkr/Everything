#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()

{

int queue[20],n,head,i,j,k,seek=0,max,diff,temp,queue1[20],queue2[20],r[20],t1=0,t2=0;

float avg;

printf("Enter the max range:\n");

scanf("%d",&max);

printf("Enter the size of queue request:\n");

scanf("%d",&n);
printf("Enter the initial head position:\n");

scanf("%d",&head);


printf("Enter the queue of disk positions to be read:\n");

for(i=1;i<=n;i++)

{

scanf("%d",&temp);

if(temp>=head)

{

queue1[t1]=temp;

t1++;

}

else

{

queue2[t2]=temp;

t2++;

}

}

for(i=0;i<t1-1;i++)

{

for(j=i+1;j<t1;j++)

{

if(queue1[i]>queue1[j])

{

temp=queue1[i];

queue1[i]=queue1[j];

queue1[j]=temp;

}

}

}

for(i=0;i<t2-1;i++)

{

for(j=i+1;j<t2;j++)

{

if(queue2[i]<queue2[j])

{

temp=queue2[i];

queue2[i]=queue2[j];

queue2[j]=temp;

}

}

}

for(i=1,j=0;j<t1;i++,j++)

queue[i]=queue1[j];

queue[i]=max-1;

for(i=t1+2,j=0;j<t2;i++,j++)

queue[i]=queue2[j];

queue[i]=0;

queue[0]=head;
printf("\nRequests are in the order:\n");

for(j=0;j<=n+1;j++)

{

diff=abs(queue[j+1]-queue[j]);

seek+=diff;

r[j]=queue[j+1];

}
printf("%d\t",head);
            for(i=0;i<=n;i++)
            {
                printf("%d\t",r[i]);
            }

printf("\nTotal seek time is %d\n",seek);

avg=seek/(float)n;

printf("Average seek time is %f\n",avg);

return 0;

}
