/*
 * @Node: Contains user account details
 * @Queue: Queue of nodes
 *
 */

#include "Targil4.h"
#include <iostream>

using namespace std;

int Node::idGen = 1;

Node::Node() {
    this->id = idGen++;
    this->name = "*empty"; // CHECK why strcpy
    this->account = 0;
    this->Next = nullptr;
}

Node::Node(string name, double account) {
    this->id = idGen++;
    this->name = name; // CHECK why strcpy
    this->account = account > 0 ? account : 0;
    this->Next = nullptr;
}

Node::~Node() = default;

void Node::setName(string name_instance){
    this->name = std::move(name_instance); //check
}

void Node::setAccount(double account_instance) {
    this->account += account_instance;
    if(this->account < 0) this->account = 0;
}

void Node::setNext(Node *node) {
    this->Next = node;
}

int Node::getId() {
    return this->id;
}

Node *Node::getNext() {
    return this->Next;
}

string Node::getName() const{
    return this->name;
}

double Node::getAccount() const{
    return this->account;
}

Queue::Queue() {

}

Queue::Queue(Node *begin, Node *end) {

}

Queue::~Queue() {

}

void Queue::addNode() {

}

void Queue::popFirstNode() {

}

void Queue::getFirstNode() {

}


void Targil4(){
    Node n1;
    Node n2("Dana",-40);

    n1.setAccount(400);
    n1.setName("Lily");

    n2.setNext(&n1);


    cout << "test n1*******" << endl;
    cout << "id: " << n1.getId() << endl;
    cout << "name: " << n1.getName() << endl;
    cout << "account: " << n1.getAccount() << endl;

    cout << "test n2*******" << endl;
    cout << "id: " << n2.getId() << endl;
    cout << "name: " << n2.getName() << endl;
    cout << "account: " << n2.getAccount() << endl;
    cout << "next: " << n2.getNext()->getId();

}
