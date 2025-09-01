#include<stdio.h>

void quickSort(int *a, int low, int high);

int main() {
    int n, a[100];

    scanf("%d", &n);  // Input size

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);  // Input elements
    }

    quickSort(a, 0, n - 1);

    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}

void quickSort(int *a, int low, int high) {
    if (low < high) {
        int pivot = a[low]; // Initially Low is 0, High is N-1 Choosing Pivot
        int i = low + 1, j = high; // Partitioning starts We choose the left and right indexes 
        while (i <= j) { // To ensure no crossover till swaping, Means till we are done with all elements beign swapped and the pivot in the correct position we cannot move the right index over the left index.
            while (i <= high && a[i] <= pivot) i++; // 
//   Loop for traversing till we get a Larger value of element at arr[low] 
// i<= high ensures i never goes out of bounds and 
// a[i] <= pivot is the condition when we don't have to swap, means don't have to stop.
// When the above while condition becomes false we have found a element to swap, but we have to found the element to be swapped to
            while (j >= low && a[j] > pivot) j--;
// When this condition runs means we have a element to swap, now we find a element smaller.
// When this condition runs means we are traversing elements larger than pivot
//When the condition becomes false we are at the element to swap.
            if (i < j) {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }

        // Swap pivot into the correct place
        int temp = a[low];
        a[low] = a[j];
        a[j] = temp;

        quickSort(a, low, j - 1);
        quickSort(a, j + 1, high);
    }
}