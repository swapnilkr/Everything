//https://www.facebook.com/Ashi.Sk99/posts/1430832100447900
//subscribed by Code House

#include<stdio.h>
int main(){
    int num=0,lastnum=0,rev=0,temp=0;
     printf("Enter the number to check it's palindrome or not : \n");
    scanf("%d",&num);
    temp=num;
while(num>0){
    lastnum=temp%10;
     temp=temp/10;
    
    rev=rev*10+lastnum;
   // printf("The reverse number is now %d\n",rev);
    //printf("The last number is now %d\n",lastnum);
   
    }


printf("The reverse number of the following is : %d\n",rev );
if(num==rev){
    printf("%d is a palindrom number .\n",rev);
}
    else{
        printf("%d is not a palindrome number.\n",rev);
    }

}