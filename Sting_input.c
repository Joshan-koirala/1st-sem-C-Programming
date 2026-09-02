#include <stdio.h>

// Function to find the minimum element in a 2D array
int findMin(int arr[][3], int rows, int cols) {
    int i,j, min = arr[0][0];  // Assume the first element is the minimum initially

    // Loop through the 2D array to find the minimum element
    for ( i = 0; i < rows; i++) {
        for ( j = 0; j < cols; j++) {
            if (arr[i][j] < min) {
                min = arr[i][j];  // Update min if current element is smaller
            }
        }
    }

    return min;  // Return the minimum value
}

int main() {
    int rows , cols ,i,j;
    printf("Enter the rows and columns size of 2D array:\n ");
    scanf("%d %d",&rows,&cols);
    int arr[rows][cols];
    // Input the elements of the 2D array
    printf("Enter the elements of the 2D array (%dx%d):\n", rows, cols);
    for ( i = 0; i < rows; i++) {
        for ( j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    // Call the function to find the minimum element
    int minElement = findMin(arr, rows, cols);

    // Output the minimum element
    printf("The minimum element in the 2D array is: %d\n", minElement);

    return 0;
}

