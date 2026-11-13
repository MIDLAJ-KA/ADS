#include<stdio.h>
int q[100];
int front=-1;
int rear=-1;
int size;
void enqueue();
void dequeue();
void display();
int main(){
    int choice;
    printf("ENTER THE SIZE: ");
    scanf("%d",&size);
    while(1){
        printf("\n|---------------------|");
        printf("\n|---QUEUE OPERATION---|");
        printf("\n|1.ENQUEUE            |");
        printf("\n|2.DEQUEUE            |");
        printf("\n|3.DISPLAY            |");
        printf("\n|4.EXIT               |");
        printf("\n|---------------------|");
        printf("\nENTER YOUR CHOICE:");
        scanf("%d",&choice);
        if(choice==1)
            enqueue();
        else if(choice==2)
            dequeue();
        else if(choice==3)
            display();
        else if(choice==4){
            printf("\nEXITTING");
            break;
        }
        else
            printf("\nINVALID CHOICE");
    }
    return 0;
}


void enqueue(){
    int data;
    if(front == -1){
        printf("\nENTER THE ELEMENT:\n");
        scanf("%d",&data);
        front=0;
        rear=0;
        q[rear]=data;
    }
    else{
        if(rear==size-1)
            rear=0;
            else
                rear++;
            if(rear == front){
                printf("\nQUEUE OVERFLOW\n");
                if(rear==0)
                    rear=size-1;
                else
                    rear--;
            }
            else{
                printf("ENTER ELEMENT:\n");
                scanf("%d",&data);
                q[rear]=data;
            }
    }
}
void dequeue(){
    if(front==-1){
        printf("\nQUEUE UNDERFLOW");
    }
    else{
        printf("\nDELETED ELEMENT:%d",q[front]);
        if(front == rear){
            front=-1;
            rear=-1;
        }
        else if(front == size-1)
            front=0;
        else
            front++;
    }}
void display(){
    int i;
    if(front==-1)
        printf("\nQUEUE IS EMPTY");
    else{
        printf("\nQUEUE ELEMENTS:\n");
        i=front;
        while(1){
            printf("%d\n",q[i]);
            if(i == rear)
                break;
            if(i== size-1)
                i=0;
            else
                i++;
        }
    }
}

