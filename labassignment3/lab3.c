//Leo Liang
//liang.756@northeastern.edu

#include <stdio.h>
#define MAX 8
int main()
{
    int arr[MAX] = {80,35,56,45,10,90,12,67};
    int i,j,temp;
    
    //insert your code here
    FILE *fp1;
    FILE *fp2;
    fp1 = fopen ("input.txt", "w");
    if (fp1 == NULL)
    {
        printf("Error opening the file %s", "input.txt");
        return -1;
    }
    for (i = 0; i < MAX; i++){
        fprintf(fp1, "%d\n", arr[i]);
        }
    
    for (i=0; i < MAX; i++){
        temp = i;
        for (j=i+1; j < MAX; j++){
            if (arr[j]<arr[temp]){
                temp=j;
            }
        }
        int smallest = arr[temp];
        arr[temp]=arr[i];
        arr[i]=smallest;
    }

    fp2 = fopen ("sorted.txt", "w");
    if (fp2 == NULL)
    {
        printf("Error opening the file %s", "sorted.txt");
        return -1;
    }
    for (int i = 0; i < MAX; i++){
        fprintf(fp2, "%d\n", arr[i]);
        }
    // close the file fp1
    fclose(fp1);
    // close the file fp1
    fclose(fp2);
    
    return 0;
}
