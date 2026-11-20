
#include <stdio.h>

void printPositive(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        if(arr[i] > 0) {
            printf("%d\n", arr[i]);
        }
    }
}

int main() {
    int nums[5] = {4, -10, 7, -2, 3};

    printPositive(nums, 5);

    return 0;
}
