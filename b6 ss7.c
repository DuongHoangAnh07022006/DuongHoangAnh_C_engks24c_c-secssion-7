#include <stdio.h>

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    for (int i = 0; i < 5; i++) {
        if (arr[i] % 2 != 0) {
            arr[i] += 2; 
        } else {
            arr[i] += 3; 
        }
    }

    printf("mang sau khi thay doi:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

