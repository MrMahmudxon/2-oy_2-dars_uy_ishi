
#include <stdio.h>

void multiplyArray(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        arr[i] = arr[i] * 2;
        printf("%d\n", arr[i]);
    }
}

int main() {
    int nums[5] = {4, 10, 7, 2, 3};

    multiplyArray(nums, 5);

    return 0;
}
