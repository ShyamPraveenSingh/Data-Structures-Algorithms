#include<stdio.h>


int binarySearch(int arr[], int lo, int hi, int x){
    if (hi>=lo){
        int mid = lo + (hi - lo) / 2;
        if (arr[mid] == x)
            return mid;


        if (arr[mid] > x)
            return binarySearch(arr, lo, mid-1, x);
        

        return binarySearch(arr, mid+1, hi, x);
        
    return -1;
    }
}


int main(void)
{
    int n, x, arr[50];

    printf("\nEnter the number of elements: ");
    scanf("%d",&n);
    for (int i=0; i<n; ++i){
        printf("\nEnter the %d element: ", i+1);
        scanf("%d",&arr[i]);
    }
    printf("\nEnter the element to search: ");
    scanf("%d",&x);

    int result = binarySearch(arr, 0 , n-1, x);
    (result == -1) ? printf("\nElement not present in the array\n")
                   : printf("\nElement present at index %d\n", result);

    return 0;
}
