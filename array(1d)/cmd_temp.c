#include <stdio.h>
#include <stdlib.h>

void display(int a[], int size);
void insert(int a[], int size);
int linearsearch(int a[], int size, int key);
int binarysearch(int a[], int size, int key);
void bubblesort(int a[], int size);

int main(int argc, char *argv[]) {
    int n, result, key;
    int a[100];

    if (argc > 1) {
        n = atoi(argv[1]);
    }
	else
	{
        printf("Enter the number of elements: ");
        scanf("%d", &n);
    }

    printf("Enter the data:\n");
    insert(a, n);
    printf("The data are:\n");
    display(a, n);
    printf("After sorting, the array is:\n");
    bubblesort(a, n);
    display(a, n);
    printf("Enter the search value: ");
    scanf("%d", &key);

    result = binarysearch(a, n, key);
    if (result >= 0) {
        printf("%d is found at position %d\n", key, result);
    } else {
        printf("Value not found\n");
    }

    return 0;
}

void insert(int a[], int n) {
	int i;
    for ( i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
}

void display(int a[], int n) {
	int i;
    for ( i = 0; i < n; i++) {
        printf("a[%d] = %d\n", i, a[i]);
    }
}

int linearsearch(int a[], int n, int key) {
	int i;
    for ( i = 0; i < n; i++) {
        if (a[i] == key) {
            return i;
        }
    }
    return -1;
}

int binarysearch(int a[], int n, int key) {
    int low = 0, high = n - 1, mid;
    while (low <= high) {
        mid = (low + high) / 2;
        if (a[mid] == key) {
            return mid;
        } else if (a[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return -1;
}

void bubblesort(int a[], int n) {
    int temp,i,j;
    for ( i = 0; i < n - 1; i++) {
        for ( j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

