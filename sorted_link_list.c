#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;
};
void output(struct node*head){
    while(head!=NULL){
        printf("%d\t", head->data);
        head = head->next;
    }
}
struct node* sort(struct node* head, int x){
    struct node* temp;
    struct node* prev;
    struct node* current;
    temp = (struct node*)malloc(sizeof(struct node));
    temp->data = x;
    if(head==NULL){
        head = temp;
        temp->next = NULL;
    }

    else{
        current = head;
        prev = NULL;
        while(current->data<x){
            prev = current;
            current = current->next;
            if(current == NULL)
                break;
        }
        if(current == NULL){
            temp->next = NULL;
            prev->next = temp;
        }
        else{
            temp->next = current;
            if(prev==NULL)
                head = temp;
            else{
                prev->next = temp;
            }

        }
         
        
    }
   return head;

}


int main(){
    struct node* newnode;
    struct node* head;
    struct node* temp;
    head = NULL;
    for(int i = 1;i<=10;i++){
    newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = i+1;
    newnode->next = NULL;   
    if(head==NULL){
        head = temp = newnode;
    }
    else{
        temp->next = newnode;
        temp = newnode;
    }

}

sort(head, 3);
output(head);


return 0;
}