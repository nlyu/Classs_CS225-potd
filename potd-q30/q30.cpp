#include <iostream>
using namespace std;

class Stack{
    private:
        struct node{
            int val;
            node * next;
        };
        node * head;
        int size;
    public:
        Stack();
        ~Stack();
        int getSize();
        bool isEmpty();
        void push(int value);
        int pop();
        void print();
};

Stack::Stack(){
    head = NULL;
    size = 0;
}

Stack::~Stack(){
    node * curr = head;
    node * now;
    while(curr != NULL){
        now = curr;
        curr = curr->next;
        free(now);
    }
}

int Stack::getSize(){
    return size;
}

bool Stack::isEmpty(){
    if(size == 0){
        return true;
    }
    return false;
}

void Stack::push(int value){
    node * curr, *next;
    curr = new node();
    size++;
    curr->val = value;
    if(head == NULL){
        head = curr;
        return;
    }
    next = head;
    head = curr;
    curr->next = next;
}

int Stack::pop(){
    if(head == NULL){
        size = 0;
        return 0;
    }
    int result = head->val;
    node * next = head->next;
    free(head);
    head = next;
    size--;
    return result;
}

void Stack::print(){
    node * curr = head;
    while(curr != NULL){
        cout<<curr->val<<" ";
        curr = curr->next;
    }
    cout<<"print end"<<endl;
}

int main(){
    Stack a;
    a.push(1);
    a.push(2);
    a.push(3);
    a.print();
    cout << "popped " << a.pop() << endl;
    cout << "size: " << a.getSize() << endl;
    cout << "is empty " << a.isEmpty() << endl;
    a.print();
    
    return 0;
}
