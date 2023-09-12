#include <stdio.h>

void No1(int n){
    /*
No.1
*
* *
* * *
* * * *
* * * * *
*/
    printf("No.1\n");
    //int n;
    for (int i = 0; i < n;i++){
        for(int j = 0; j < n; j++){
            if(i>=j){
                printf("* ");
            }
        }
        printf("\n");
    }
}

void No2(int n){
    /*
    No.2
        *
      * *
    * * *
  * * * *
* * * * *
    */
    //int n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i+j>=n-1){
                printf("* ");
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
}

void No3(int n){
    // int n;
    // i+j>=n-1 && j-i<=n-1
    int k=n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(j>=k-1){
                printf("* ");
            }
            else{
                printf(" ");
            }
        }
        k--;
        printf("\n");
    }
}


int main(){
    No1(5);
    printf("\n");
    No2(5);
    printf("\n");
    No3(10);
    return 0;
}