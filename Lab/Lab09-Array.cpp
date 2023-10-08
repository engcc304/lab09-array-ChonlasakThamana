/*
    จงเขียนโปรแกรมรับค่าจากผู้ใช้เข้าไปใส่ในอาเรย์และแสดงผลลัพธ์ออกมาทั้งหมดที่เป็นจำนวนเฉพาะเท่านั้น (ค่าที่ไม่ใช่จำนวนเฉพาะแสดงเครื่องหมาย # แทน)

    Test case:
        Enter N :
            6
        Enter value[0] :
            19
        Enter value[1] :
            18
        Enter value[2] :
            27
        Enter value[3] :
            15
        Enter value[4] :
            4
        Enter value[5] :
            2
    Output:
        Index:  0  1  2  3  4  5
        Array:  # 19  #  #  #  2
*/
#include <stdio.h>

// Function to check if a number is prime
int isPrime(int n) {
    if (n <= 1)
        return 0; // Not prime
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return 0; // Not prime
    }
    return 1; // Prime
}

int main() {
    int N;
    printf("Enter N: ");
    scanf("%d", &N);

    int arr[N];

    // Input values into the array
    for (int i = 0; i < N; i++) {
        printf("Enter value[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    // Check for prime numbers and replace non-prime numbers with '#'
    for (int i = 0; i < N; i++) {
        if (!isPrime (arr[i]) ) {
            arr[i] = -1; // Replace non-prime numbers with -1
        }
    }

    // Display the results
    printf("Index:   ");
    for (int i = 0; i < N; i++) {
        printf("%d   ", i);
    }
    printf("\nArray:  ");
    for (int i = 0; i < N; i++) {
        if (arr[i] == -1) {
            printf("#   ");
        } else {
            printf("%d   ", arr[i]);
        }
    }
    printf("\n");

    return 0;
}
