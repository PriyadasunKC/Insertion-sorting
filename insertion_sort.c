#include <stdio.h>

int main()
{
    int arr [5] = {2,5,8,6,0};
    int size = 5;
    int key = 0;
    int sortedFirst = 0;
    
    for(int k = 1; k< size;k++){
        key = arr[k];
        sortedFirst = k-1;
        
        while(sortedFirst >= 0 && key < arr[sortedFirst]){
            arr[sortedFirst+1] = arr[sortedFirst];
            sortedFirst = sortedFirst -1;
        }
        arr[sortedFirst+1] = key;
    }
    
    for(int p = 0; p <size;p++){
        printf("%d ",arr[p]);
    }
    return 0;
}
