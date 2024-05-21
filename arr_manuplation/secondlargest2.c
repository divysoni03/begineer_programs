#include<>

void secondLargestElement(int arr[], int size) {
    int i, max = arr[0], smax = arr[0];

    for(i=0; i<size; i++) {
        printf("%d\t%d\n", smax, max);
        if(max < arr[i]) {
            smax = max;
            max = arr[i];
        } else if(smax < arr[i] && smax != max) {
            smax = arr[i];
        }
    }

    printf("\nSecond largest element is %d", smax);
}
