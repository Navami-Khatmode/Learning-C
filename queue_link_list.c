#include<stdio.h>
#include<stdlib.h>
#define MAX_SIZE 20
//Implementation of queue using link list
struct node{
    int data;
    struct node*next;
};
struct node *front, *rear = NULL;
//IMPORTANT OBSERVARION : WHILE IMPLEMENTATION OF QUEUE USING LINK LIST WE NEEDN'T CHECK FOR EMPTY CASE
//AS IT'S DYNAMIC MEMORY ALLOCATION ONLY WHEN A NEWNODE IS ALLOCATED ONLY THEN WE CHECK IS THAT'S POSSIBLE OR NOT!!!
//hence the below code snippet is not required
// int isfull(){
//     return rear==NULL;
// }
int isempty(){
    return front==NULL;
}
void enqueue(int x){
    struct node *newnode;
    newnode = (struct node*)malloc(sizeof(struct node));
    if(newnode==NULL){
        printf("Queue is full\n");
    }
    newnode->data = x;
    newnode->next = NULL;
    if(front==NULL){ //no element in the queue
        front = rear = newnode;
    }
    else{
        rear->next = newnode;
        rear = newnode;
    }

}
int dequeue(){
    struct node*temp;
    if(front == NULL){
        printf("Queue is empty\n");
    }
    else{
        temp = front;
        front = temp->next;
        if(front == NULL){
            rear = NULL;
        }
        int deleted_data = temp->data;
        free(temp);
        return deleted_data;
        
    }
}
int peek(){
    if(front==NULL){
        printf("Queue is empty\n");
    }
    else{
        return front->data;
    }
}
void display(){
    if(front==NULL){
        printf("Queue is empty\n");
    }
    else{
        while(front!=NULL){
            printf("%d ", front->data);
            front = front->next;
        }
    }
}
int main(){
    enqueue(10);
    int ans = peek();
    printf("First element %d\n", ans);
    enqueue(20);
    enqueue(33);
    enqueue(19);
    enqueue(7);
    enqueue(26);
    enqueue(8);
    display();
    

    return 0;
}