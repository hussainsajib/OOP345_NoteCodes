// Linked Lists - Additing objects to a chain
// chain.cpp
#include <iostream>
struct Element{
    int data;
    Element* next;
    Element(int d, Element* n) : data(d), next(n){}
};

int main(){
    Element* head = nullptr;
    // Add one element at a time to the head of the chain
    head = new Element(3, head);
    head = new Element(5, head);
    head = new Element(9, head);
    head = new Element(8, head);

    // Display elements from head to tail
    for(Element* p = head; p; p = p->next){
        std::cout << p->data << ' ';
    }
    std::cout << std::endl;
    
    // Deallocate memory one element at a time
    while(Element* p = head){
        head = head->next;
        delete p;
    }
    
}