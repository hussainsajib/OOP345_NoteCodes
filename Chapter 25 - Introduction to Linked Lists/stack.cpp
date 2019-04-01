// Linked Lists - Stack
// stack.cpp
#include <iostream>
class Data{
    int data;
public:
    Data(int d = 0) : data(d){}
    int out() const { return data; }
};

struct Node{
    Data data;
    Node* next;
    Node(const Data& d, Node* n): data(d), next(n){}
};

class Stack{
    Node* head;
public:
    Stack() : head(nullptr){}
    ~Stack(){
        while(Node* p = head){
            head = head->next;
            delete p;
        }
    }
    void push(int d){
        head = new Node(d, head);
    }
    Data pop(){
        Data data;
        if(head){
            Node* p = head;
            data = head->data;
            head = head->next;
            delete p;
        }
        return data;
    }
    bool empty(){ return head == nullptr; }    
};

int main(){
    Stack s;
    s.push(3);
    s.push(5);
    s.push(9);
    s.push(8);

    // Remove first node
    s.pop();

    // Pop data off Stack
    while(!s.empty()){
        std::cout << s.pop().out() << ' ';
    }
    std::cout << std::endl;
}