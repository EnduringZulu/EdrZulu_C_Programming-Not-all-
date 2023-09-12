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
    printf("No.2\n");
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
    /*
    *
   * *
  * * *
 * * * *
* * * * *
    */
    printf("No.3\n");
    int k=n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=k-1;j++){
            printf(" ");
        }
        for(int j=1;j<=i;j++){
            printf("* ");
        }
        printf("\n");
        k--;
    }
}

void No4(int n){
    /*
     * * * * *
     * * * *
     * * *
     * *
     *
     */
    printf("No.4\n");
    int k=n;
    for(int i=0;i<n;i++){
        for(int j=0;j<k;j++){
            printf("* ");
        }
        printf("\n");
        k--;
    }
}

void No5(int n){
    printf("No.5\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(j>=i){
                printf("* ");
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
}


int main(){
    int n;
    scanf("%d",&n);
    No1(n);
    printf("\n");
    No2(n);
    printf("\n");
    No3(n);
    printf("\n");
    No4(n);
    printf("\n");
    No5(n);
    return 0;
}