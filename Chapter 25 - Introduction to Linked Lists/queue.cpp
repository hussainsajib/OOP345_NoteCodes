// Linked Lists - Queue
// queue.cpp
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
    Node(const Data& d, Node* n) : data(d), next(n){}
};

class Queue{
    Node* head;
    Node* tail;
public:
    Queue() : head(nullptr), tail(nullptr){}
    ~Queue(){
        Node* current;
        while( current = head){
            head = head->next;
            delete current;
        }
    }
    void push(int d){
        Node* p = new Node(d, 0);
        if(head){
            tail->next = p;
        }
        else {
            head = p;
        }
        tail = p;
    }
    Data pop(){
        Data data;
        if(head){
            Node* p = head;
            data = head->data;
            head = head->next;
            delete p;
            if(!head) {
                tail = nullptr;
            }
        }
        return data;
    }
    bool empty(){ return head == nullptr; }
};

int main(){
    Queue q;
    // push data into the queue
    q.push(3);
    q.push(5);
    q.push(9);
    q.push(8);

    //Remove first Node
    q.pop();

    //pop data off the queue
    while(!q.empty()){
        std::cout << q.pop().out() << ' ';
    }
    std::cout << std::endl;
}