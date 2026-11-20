
#include <stdio.h>

int countNegative(int arr[], int size) {
    int count = 0;

    for(int i = 0; i < size; i++) {
        if(arr[i] < 0) {
            count++;
        }
    }

    return count;
}

int main() {
    int nums[5] = {4, -10, 7, -2, 3};

    printf("Manfiy sonlar soni: %d", countNegative(nums, 5));

    return 0;
}
