#include <stdio.h>
#include <stdlib.h>  

int main() {
    int n;
    int *arr;

    printf("Nhap vào so phan tu cua mang: ");
    scanf("%d", &n);

    arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Không the cap phát bo nho.\n");
        return 1;
    }

    printf("Nhap vao cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        printf("Ph?n t? th? %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Các phan tu trong mang là:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    free(arr);

    return 0;
}

