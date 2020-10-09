#include<stdio.h>
void main()
{int n,i,p,j,t,a[100];
 printf("Enter the size of the array:");
 scanf("%d",&n);
 printf("Enter the elements:");
 for(i=0;i<n;i++)
    scanf("%d",&a[i]);
 for(i=0;i<n;i++)
 {  p=i;
    for(j=i+1;j<n;j++)
       {if(a[i]>a[j])
         {t=a[i];
          a[i]=a[j];
          a[j]=t;
         }
        else
            continue;
 }
     }
 for(i=0;i<n;i++)
    printf("%d",a[i]);
}
