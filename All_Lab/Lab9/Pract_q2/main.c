// #Extra Practices to Define Many Functions

// ## Instructions

// Please write function prototypes and functions for the following questions.

// 1. Write a function `sum` that takes two integers as arguments and returns their sum.
// 2. Write a function `square` that takes a single integer as an argument and returns its square.
// 3. Write a function `array_sum` that takes an integer array and its size as arguments and returns the sum of all the elements in the array.
// 4. Write a function `array_average` that takes an integer array and its size as arguments and returns the average of all the elements in the array.
// 5. Write a function `max` that takes two integers as arguments and returns the larger of the two.
// 6. Write a function `max_index` that takes an integer array and its size as arguments and returns the index of the largest element in the array.
// 7. Write a function `is_even` that takes a single integer as an argument and returns true if the integer is even, and false otherwise.
// 8. Write a function `is_prime` that takes a single integer as an argument and returns true if the integer is prime, and false otherwise. Hint: The is_prime function is used to determine whether an input number is a prime number.  
//     - It returns 1 (i.e., true) when the input is a prime.
//     - It returns 0 (i.e., false) when the input is not a prime.
// 9. Write a function `power` that takes two integers as arguments and returns the result of raising the first integer to the power of the second integer. *You must **not** use `math.h`.*
#include <assert.h>
#include <stdio.h>

// TODO: Place the function prototypes here
int sum(int a, int b);
int square(int a);
int array_sum(int a[], int b);
float array_average(int a[], int b);
int max(int a, int b);
int max_index(int a[], int b);
int is_even(int a);
int is_prime(int a);
int power(int a,int b);
    // ======================
    // DO NO MODIFY
    int main(void){
    // // Test 1
    assert(sum(2, 3) == 5);
    assert(sum(-2, 5) == 3);
    assert(sum(0, 0) == 0);
    printf("Q1: Passed\n");

    // // Test 2
    assert(square(4) == 16);
    assert(square(-3) == 9);
    assert(square(0) == 0);
    printf("Q2: Passed\n");

    // // Test 3
    int arr1[] = {1, 2, 3, 4, 5};
    assert(array_sum(arr1, 5) == 15);
    int arr2[] = {0, -2, 3, 5};
    assert(array_sum(arr2, 4) == 6);
    int arr3[] = {0};
    assert(array_sum(arr3, 1) == 0);
    printf("Q3: Passed\n");

    // // Test 4
    int arr4[] = {1, 2, 3, 4, 5};
    assert(array_average(arr4, 5) == 3.0);
    int arr5[] = {0, -2, 3, 5};
    assert(array_average(arr5, 4) == 1.5);
    int arr6[] = {0};
    assert(array_average(arr6, 1) == 0.0);
    printf("Q4: Passed\n");

    // // Test 5
    assert(max(2, 3) == 3);
    assert(max(-2, 5) == 5);
    assert(max(0, 0) == 0);
    printf("Q5: Passed\n");

    // // Test 6
    int arr7[] = {1, 2, 3, 4, 5};
    assert(max_index(arr7, 5) == 4);
    int arr8[] = {0, -2, 3, 5};
    assert(max_index(arr8, 4) == 3);
    int arr9[] = {0};
    assert(max_index(arr9, 1) == 0);
    printf("Q6: Passed\n");

    // // Test 7
    assert(is_even(2) == 1);
    assert(is_even(5) == 0);
    assert(is_even(0) == 1);
    printf("Q7: Passed\n");

    // // Test 8
    assert(is_prime(2) == 1);
    assert(is_prime(7) == 1);
    assert(is_prime(9) == 0);
    printf("Q8: Passed\n");

    // // Test 9
    assert(power(2, 3) == 8);
    assert(power(-2, 5) == -32);
    assert(power(0, 0) == 1);
    printf("Q9: Passed\n");

    return 0;
}
// ======================

// TODO: Place the functions here
int sum(int a, int b){
    return a+b;
}
int square(int a){
    return a*a;
}
int array_sum(int a[], int b){
    int res=0;
    for(int i=0;i<b;i++){
        res+=a[i];
    }
    return res;
}
float array_average(int a[], int b){
    float res = 0;
    for (int i = 0; i < b; i++)
    {
        res += a[i];
    }
    return res/b;
}
int max(int a,int b){
    if(a>b)return a;
    return b;
}
int max_index(int a[],int b){
    int num,max=-9999;
    for(int i=0;i<b;i++){
        if(a[i]>max){
            num=i;
        }
    }
    return num;
}
int is_even(int a){
    if(a%2==0)return 1;
    return 0;
}
int is_prime(int a){
    int count=0;
    for(int i=2;i<=a;i++){
        if(a%i==0){
            count++;
        }
    }
    if(count==1)return 1;
    return 0;
}
int power(int a,int b){
    if(b>=1){
        return a*power(a,b-1);
    }return 1;
}