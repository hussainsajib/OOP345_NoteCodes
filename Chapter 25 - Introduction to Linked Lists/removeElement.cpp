// Lined Lists - Removing Elements from a chain
// removeElement.cpp
#include <iostream>
struct Element{
    int data;
    Element* next;
    Element(int d, Element* n) : data(d), next(n){}
};

int main(){
    Element* head = nullptr;

    // Add one element at a time to the head of the list
    head = new Element(3, head);
    head = new Element(5, head);
    head = new Element(9, head);
    head = new Element(8, head);

    // Remove first two elements
    Element* remove = head;
    head = head->next;
    delete remove;
    remove = head;
    head = head->next;
    delete remove;

    // Display elements from head to tail
    for(Element* p = head; p; p = p->next){
        std::cout << p->data << ' ';
    }
    std::cout << std::endl;
    
    // Deallocate on element at a time
    while(Element* p = head){
        head = head->next;
        delete p;
    }
}