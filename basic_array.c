#include <stdio.h>
int main()
{
    int arr[100];
    int n;

    printf("\nEnter the number of array elements: ");
    scanf("%d",&n);

    for (int i=0; i<n;++i){
        printf("\nEnter %d element: ",(i+1));
        scanf("%d",&arr[i]);
    }
    printf("\n");
    for (int i = 0; i<n; ++i ){
        printf("%d\t", arr[i]);
    }
    printf("\n");
    return 0;
}