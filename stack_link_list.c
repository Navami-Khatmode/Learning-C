#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
};
struct node*top = NULL;
int isempty(){
    return top == NULL;
}
void push(int x){
    struct node*newnode;
    newnode = (struct node*)malloc(sizeof(struct node));
    if(newnode==NULL){
        printf("Stack is full\n");
    }
    else{
        newnode->data = x;
        newnode->next = top;
        top = newnode;
    }
}
//While deleting an element from stack we need to store in a temporary variable and free the memory used by it
void pop(){
    struct node*temp;
    if(top==NULL){
        printf("Stack is empty\n");
    }
    else{
        temp = top;
        top = temp->next;
        free(temp);
    }
}
int peek(){
    if(top==NULL){
        printf("Stack is empty\n");
    }
    else{
        return top->data;
    }
}
void display(){
    if(top==NULL){
        printf("Stack is empty\n");
    }
    else{
        while(top!=NULL){
            printf("%d ", top->data);
            top = top->next;
        }
    }
}
int main(){
    push(10);
    push(20);
    push(19);
    pop();
    push(34);
    push(22);
    pop();
    int x = peek();
    printf("Recent element %d\n", x);
    display();
    return 0;
}