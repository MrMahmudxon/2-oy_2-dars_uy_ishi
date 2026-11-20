
#include <stdio.h>

int sumOdd(int arr[], int size) {
    int sum = 0;

    for(int i = 0; i < size; i++) {
        if(arr[i] % 2 != 0) {
            sum += arr[i];
        }
    }

    return sum;
}

int main() {
    int nums[5] = {4, 10, 7, 2, 3};

    printf("Toq sonlar yig'indisi: %d", sumOdd(nums, 5));

    return 0;
}
