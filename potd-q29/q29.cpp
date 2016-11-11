#include <iostream>
using namespace std;

struct node{
    int val;
    node * next;
};

void printList(node * head){
    while(head){
        cout << head->val << " ";
        head = head->next;
    }
}

node *createList(int arr[], int size){
    node * ret = new node;
    ret->val = arr[0];
    node * temp = ret;
    for(int i = 1; i < size; i ++){
        temp->next = new node;
        temp = temp->next;
        temp->val = arr[i];
    }
    temp->next = NULL;
    return ret;
}

void insert(node** sorted, node* newnode){
    //head special case
    if(*sorted == NULL || newnode->val < (*sorted)->val){
        newnode->next = *sorted;
        *sorted = newnode;
        return;
    }
   
    node* current = *sorted;
    while(current->next!=NULL && current->next->val < newnode->val){
         current = current->next;
    }

    newnode->next = current->next;
    current->next = newnode; 
}

void sortList(node** n){
    node* curr = *n;
    node* sort = NULL;
    
    while(curr != NULL){
        node* next = curr->next;
        insert(&sort, curr);
        curr = next;
    }
    *n = sort;
}


int main(){
    int arr[6] = {1, 3, 3, 5, 1, 5};
    node * n = createList(arr, 6);
    printList(n);
    cout << endl;
    sortList(&n);
    printList(n);
    return 0;
}
