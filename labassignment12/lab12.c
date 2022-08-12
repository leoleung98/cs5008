// name: Leo Liang
// email: liang.jiahao@northeastern.edu

#include<stdio.h>
#include<string.h>     

int compression(char arr[], int n, char res[]){
    int i;
    int count=1;//counter
    int index=0;//to store the result
    
    
    
    //insert your code here
    int j = 0;
    if (n==1){
        printf("%c\n",arr[0]);
        return 1;
    }
    for (i = 1; i < n ; i++){
        if (arr[i] == arr[index]) {
            count++;
        }
        else {
            res[++j] = arr[index];
            printf("%c",res[j]);
            if (count != 1) {
                res[++j] = count;
                printf("%d",res[j]);
                count = 1;//aaaabcaa
            }
            index = i;
        }
    }
    res[++j] = arr[index];
    printf("%c",res[j]);
    if (count != 1) {
        res[++j] = count;
        printf("%d",res[j]);
    }
    printf("\n");
    return j ;
}
 
int main()
{
    char a[]="aaaaaaaaaaaaaabbbbcccd";//
    char res[50];//a14b4c3d
    int r,n=strlen(a);//n is the size of input array
    r=compression(a,n,res);
    printf("length of the compressed string:%d\n",r);
    return 0;
}
