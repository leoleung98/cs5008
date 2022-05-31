//enter your email and name here
//C program to implement queue using arrays

#include <stdio.h>
#define N 8 //Max. capacity of Queue

int arr[N];
int rear=-1;
int front=-1;
int size;

/*----To check if the queue is empty-------*/
int isempty()
{   
    if(rear==-1)
        
        return 1;
    else
        return 0;
}
/*-----To check if the queue is full----------*/
int isfull()
{
    
    if(rear==N-1){
        return 1;
    }
    return 0;
 
}
/*---- To see the data at the front of the queue---*/
int peek()
{
    if(isempty()){
        printf("Queue is empty.\n");
        return -1;

    }
    return arr[0];
    }
/*---To insert the elements into the queue------*/
void enqueue(int data)
{
 //insert your code here
 if(isfull()==1){
     printf("Queue is full, %d can't be added into the queue\n",data);
     return ;
 }
 else{
     arr[++rear]=data;
 }
}
/*----Function to remove the elements from the queue----*/
int dequeue()
{   
    //insert your code here
    if (isempty()==1){
        printf("Queue is empty.\n");
        return -1;
    }
    else{
        int number =arr[front+1];
        for (int i = 0;i <rear;i++){
            arr[i]=arr[i+1];
        }
        rear--;
        return number;
    }
}
/*---Function to display the elements of the queue-------*/
void display()
{
    int i;
    if(isempty())
    {
        printf("Queue is empty\n");
        return;
     }
    else {
        
        for(i=front+1; i<=rear; i++)
        {
            printf("%d ",arr[i]);
        }

    }}
/*-----Main program-----*/
int main()
    {
/* insert 8 items */
enqueue(1);
enqueue(2);
enqueue(3);
enqueue(4);
enqueue(5);
enqueue(6);
enqueue(7);
enqueue(8);
display();
printf("\n");
enqueue(9);
for(int i=0;i<N-1;i++){
    printf("dequeued element is: %d\n",dequeue()); 
    }
display();
printf("\n");
printf("The element at the front of the queue is: %d\n",peek());
return 0;
    }

