#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, key, i;
    int *arr;

    
    printf("Enter number of elements: ");
    scanf("%d", &n);

    arr = (int *)malloc(n * sizeof(int));

    if (arr == NULL) {
        printf("Memory allocation failed!");
        return 0;
    }

   
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter key element to search: ");
    scanf("%d", &key);

    
    for (i = 0; i < n; i++) {
        if (arr[i] == key) {
            printf("Key element %d found at index %d\n", key, i + 1);
            free(arr);  
            return 0;
        }
    }

    printf("Key element %d not found in the array\n", key);

    
    free(arr);

    return 0;
}