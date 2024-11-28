#include <stdio.h>
#include <stdbool.h>

int main() {
    int n;
    printf("Nhap vao so phan tu cua mang: ");
    scanf("%d", &n);

    int arr[n];

    printf("Nhap vao cac phan tu cua mang (tat ca phai l� so le):\n");
    for (int i = 0; i < n; i++) {
        bool validInput = false;
        while (!validInput) {
            printf("Phan tu thu %d: ", i + 1);
            scanf("%d", &arr[i]);
            if (arr[i] % 2 != 0) {
                validInput = true; 
            } else {
                printf("Gi� tri phai l� so le. Vui l�ng nh?p l?i.\n");
            }
        }
    }

    printf("C�c phan tu trong mang l�:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

