
#include <stdio.h>

int sumEven(int arr[], int size) {
    int sum = 0;

    for(int i = 0; i < size; i++) {
        if(arr[i] % 2 == 0) {
            sum += arr[i];
        }
    }

    return sum;
}

int main() {
    int nums[5] = {4, 10, 7, 2, 3};

    printf("Juft sonlar yig'indisi: %d", sumEven(nums, 5));

    return 0;
}
