//Leo Liang
//liang.jiahao@northeastern.edu

/*C Program to read and print the employee details using structure and dynamic memory allocation*/
#include <stdio.h>
#include <stdlib.h>
/*structure to hold the details of an employee*/
typedef struct employee
{
    int empId;
    char Name[100];
    char Designation[100];
    char Dept[10];

}employee_t;
/* Read the employee details using scanf*/
void readData(int n, employee_t* s)
{
	for(int i=0; i < n;i++) {
		printf("Enter the employeeID, Name, designation and Department of Employee %d: \n", i+1);
		scanf("%d",&s[i].empId);
		scanf("%s",s[i].Name);
		scanf("%s",s[i].Designation);
		scanf("%s",s[i].Dept);
		printf("\n");
	}
	return;  
}
/* Function to print the employee details*/
void display(int n, employee_t * s)
{
	for(int i=0; i < n; i++){
		printf("The details of Employee %d:\n",i+1);
		printf("empId: %d\n",s[i].empId);
		printf("Name: %s\n",s[i].Name);     
		printf("designation: %s\n",s[i].Designation);     
		printf("Dept: %s\n\n",s[i].Dept);     
	}   
 	return;   
}

/*----------Main Program--------*/
int main()
{
int n ;
printf("Enter the number of employees: ");
scanf("%d",&n);
printf("\n");    
employee_t e[n];
readData(n,&(e[n]));
display(n,&(e[n]));
return 0;
}

