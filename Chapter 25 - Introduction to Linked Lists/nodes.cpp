// Linked Lists - Nodes
// nodes.cpp
#include <iostream>

class Data {
    int data;
public:
    Data(int d) : data(d){}
    int out() const { return data; }
};

struct Node{
    Data data;
    Node* next;
    Node(const Data& d, Node* n) : data(d), next(n){}
};

int main(){
    Node* head = nullptr;

    // Add one nodes at a time to the head of the list
    head = new Node(3, head);
    head = new Node(5, head);
    head = new Node(9, head);
    head = new Node(8, head);

    // Remove the head node
    Node* remove = head;
    head = head->next;
    delete remove;

    // Display elements from head to tail
    for(Node* p = head; p; p = p->next){
        std::cout << p->data.out() << ' ';
    }
    std::cout << std::endl;

    //Deallocate one node at a time
    while(Node* p = head){
        head = head->next;
        delete p;
    }

    
}