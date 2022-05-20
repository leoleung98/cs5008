//Leo Liang
//liang.jiahao@northeastern.edu
#include<stdio.h>
int main()
{
    int a,b,c, choice;
    
    printf("Enter your choice\n");
    printf(" 1.addition\n 2. Subtraction\n 3. Multiplication\n 4. Division\n");
    scanf("%d",&choice);
    
    printf("Enter a and b values");
    scanf("%d %d", &a, &b);
    
    switch(choice){
	case 1 :
		printf("Addition\n");
		c=a+b;
		printf("Sum = %d\n",c);
		break;
	case 2 :
		printf("Subtraction\n");
		c=a-b;
                printf("Sub = %d\n",c);
                break;
	case 3 :
		printf("Multiplication\n");
                c=a*b;
                printf("Mul = %d\n",c);
                break;
	case 4 :
		printf("Division\n");
		if(b==0){
			printf("Value for b can't be 0");
			break;
		}
                c=a/b;
                printf("Div = %d\n",c);
                break;
	}
           
    return 0;
}
