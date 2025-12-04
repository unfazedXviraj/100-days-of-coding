#include <stdio.h>

int main() {
    int n, k;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &k);

    if (k > n || k <= 0) {
        printf("Invalid input: k must be between 1 and n\n");
        return 0;
    }

    // For each window of size k
    for (int i = 0; i <= n - k; i++) {
        int maxVal = arr[i];
        for (int j = i + 1; j < i + k; j++) {
            if (arr[j] > maxVal) {
                maxVal = arr[j];
            }
        }
        printf("%d", maxVal);
        if (i != n - k) {
            printf(" ");
        }
    }

    return 0;
}
