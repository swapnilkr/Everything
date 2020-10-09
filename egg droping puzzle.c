# https://www.facebook.com/hitesh.parashar.908/posts/109877327552355
# submitted by hitesh parashar

#include<stdio.h>
#define MAX_VAL 9999
int max(int a, int b) {
   return (a > b)? a: b;
}
int eggTrialCount(int eggs, int floors) { //minimum trials for worst case
   int minTrial[eggs+1][floors+1]; //to store minimum trials for i-th egg
   and jth floor
   int res, i, j, k;
   for (i = 1; i <= eggs; i++) { //one trial to check from first floor, and
      no trial for 0th floor
      minTrial[i][1] = 1;
      minTrial[i][0] = 0;
   }
   for (j = 1; j <= floors; j++) //when egg is 1, we need 1 trials for
      each floor
      minTrial[1][j] = j;
   for (i = 2; i <= eggs; i++){ //for 2 or more than 2 eggs
      for (j = 2; j <= floors; j++) { //for second or more than second
         floor
         minTrial[i][j] = MAX_VAL;
         for (k = 1; k <= j; k++) {
            res = 1 + max(minTrial[i-1][k-1], minTrial[i][j-k]);
            if (res < minTrial[i][j])
               minTrial[i][j] = res;
         }
      }
   }
   return minTrial[eggs][floors]; //number of trials for asked egg and
   floor
}
int main () {
   int egg, maxFloor;
   printf("Enter number of eggs: ");
   scanf("%d", &egg);
   printf("Enter max Floor: ");
   scanf("%d", &maxFloor);
   printf("Minimum number of trials: %d", eggTrialCount(egg, maxFloor));
}
