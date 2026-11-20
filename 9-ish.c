
#include <stdio.h>

int countZero(int arr[], int size) {
    int count = 0;

    for(int i = 0; i < size; i++) {
        if(arr[i] == 0) {
            count++;
        }
    }

    return count;
}

int main() {
    int nums[5] = {4, 0, 7, 0, 3};

    printf("Nollar soni: %d", countZero(nums, 5));

    return 0;
}
