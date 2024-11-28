#include <stdio.h>

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int hasEvenNumber = 0;

    printf("Các phan tu la so chan trong mang là:\n");
    for (int i = 0; i < 5; i++) {
        if (arr[i] % 2 == 0) {
            printf("%d ", arr[i]);
            hasEvenNumber = 1;
        }
    }

    if (!hasEvenNumber) {
        printf("Mang không chua so chan.");
    }

    printf("\n");
    return 0;
}

