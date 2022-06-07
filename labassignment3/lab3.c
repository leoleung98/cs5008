//Leo Liang
//liang.756@northeastern.edu

#include <stdio.h>
#define MAX 8
int main()
{
    int arr[MAX] = {80,35,56,45,10,90,12,67};
    int i,j,temp;
    
    //insert your code here
    FILE *fp1 = fopen ("input.txt", "w");
    if (fp1 == NULL){
        printf("Error opening the file %s", "input.txt");
        return -1;
    }
    else{
        for (i = 0; i < MAX; i++){
            fprintf(fp1, "%d\n", arr[i]);
        }
    }
    
    
    for (i=0; i < MAX-1; i++){
        j = i + 1;
        temp = arr[j];
        while(j>0 && temp<arr[j-1]){
            arr[j]=arr[j-1];
            j--;
        }
        arr[j]=temp;
    }

    FILE *fp2 = fopen ("sorted.txt", "w");
    if (fp2 == NULL){
        printf("Error opening the file %s", "sorted.txt");
        return -1;
    }
    else{
        for (int i = 0; i < MAX; i++){
            fprintf(fp2, "%d\n", arr[i]);
        }
    }
    
    // close the file fp1
    fclose(fp1);
    // close the file fp2
    fclose(fp2);
    
    return 0;
}
