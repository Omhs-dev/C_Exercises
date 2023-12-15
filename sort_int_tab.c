void	sort_int_tab(int *tab, unsigned int size)
{
    int tmp;
    unsigned int i;
    
    i = 0;
    while (i < (size - 1))
    {
        if (tab[i] > tab[i + 1])
        {
            tmp = tab[i];
            tab[i] = tab[i + 1];
            tab[i + 1] = tmp;
            i = 0;
        }
        else
            i++;
    }
}

#include <stdio.h>

// Function to print the elements of an integer array
void print_array(int *arr, unsigned int size) {
    for (unsigned int i = 0; i < size; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int myArray[] = {3, 1, 4, 2, 8, -1};
    unsigned int arraySize = sizeof(myArray) / sizeof(myArray[0]);
    printf("Original array: ");
    print_array(myArray, arraySize);
    sort_int_tab(myArray, arraySize);
    printf("Sorted array: ");
    print_array(myArray, arraySize);
    return 0;
}
