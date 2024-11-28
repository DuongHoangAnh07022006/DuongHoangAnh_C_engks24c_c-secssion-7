#include <stdio.h>
#include <stdlib.h>  

int main() {
    int n;
    int *arr;

    printf("Nhap v�o so phan tu cua mang: ");
    scanf("%d", &n);

    arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Kh�ng the cap ph�t bo nho.\n");
        return 1;
    }

    printf("Nhap vao cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        printf("Ph?n t? th? %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("C�c phan tu trong mang l�:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    free(arr);

    return 0;
}

