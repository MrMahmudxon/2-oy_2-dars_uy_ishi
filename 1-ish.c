
#include <stdio.h>

void printArray(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        printf("%d\n", arr[i]);
    }
}

int main() {
    int nums[5] = {4, 10, 7, 2, 3};

    printArray(nums, 5);

    return 0;
}
