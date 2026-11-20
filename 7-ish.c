
#include <stdio.h>

int countLess(int arr[], int size, int son) {
    int count = 0;

    for(int i = 0; i < size; i++) {
        if(arr[i] < son) {
            count++;
        }
    }

    return count;
}

int main() {
    int nums[5] = {4, 10, 7, 2, 3};

    printf("Natija: %d", countLess(nums, 5, 5));

    return 0;
}
