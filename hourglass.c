#include <stdio.h>
#include <string.h>
#include <time.h> 
#include <math.h>
#include <stdlib.h>

int main() {
    double time_spent = 0.0;
    // print time of running the code in c: https://www.techiedelight.com/find-execution-time-c-program/
    clock_t begin = clock();
    int i,j,k;
    int arr[6][6],temp=-9999,a,b;
    
    for(i=0;i<6;i++)
        for(j=0;j<6;j++)
            scanf("%d",&arr[i][j]);
   
    for(i=0;i<=3;i++)
        for(j=0;j<=3;j++)
        {
            a = arr[i][j]+arr[i][j+1]+arr[i][j+2]+arr[i+1][j+1]+arr[i+2][j]+arr[i+2][j+1]+arr[i+2][j+2];
            if(temp < a)
                temp = a ; 
        //printf("%d ---  %d*",a,temp);
        
        }
        printf("%d",temp);
     
    clock_t end = clock();
    time_spent += (double)(end - begin) / CLOCKS_PER_SEC;
    printf("The elapsed time is %f seconds", time_spent);   
    return 0;
}