
#include <stdio.h>

int countAboveAverage(int arr[], int size) {
    int sum = 0;
    
    for(int i = 0; i < size; i++) {
        sum += arr[i];
    }

    float average = (float)sum / size;

    int count = 0;

    for(int i = 0; i < size; i++) {
        if(arr[i] > average) {
            count++;
        }
    }

    return count;
}

int main() {
    int nums[5] = {4, 10, 7, 2, 3};

    printf("O'rtachadan katta sonlar: %d", countAboveAverage(nums, 5));

    return 0;
}
