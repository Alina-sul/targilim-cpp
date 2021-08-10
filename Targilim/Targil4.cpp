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
    strcpy(this->name,"");
    this->account = 0;
    this->Next = nullptr;
}

Node::Node(const char *name_s, double account_d) {
    this->id = idGen++;
    strcpy(this->name,name_s);
    this->account = account_d > 0 ? account_d : 0;
    this->Next = nullptr;
}

Node::~Node() = default;

void Node::setName(char *name_instance){
    strcpy(this->name,name_instance); //check
}

void Node::setAccount(double account_instance) {
    this->account += account_instance;
    if(this->account < 0) this->account = 0;
}

void Node::setNext(Node *node) {
    this->Next = node;
}

int Node::getId() const {
    return this->id;
}

Node *Node::getNext() {
    return this->Next;
}

char* Node::getName() const{
    return (char*)this->name;
}

double Node::getAccount() const{
    return this->account;
}

Queue::Queue() {
    this->start = nullptr;
    this->end = nullptr;
}

Queue::Queue(Node *start_node, Node *end_node) {
    this->start = start_node;
    this->end = end_node;
    this->start->setNext(end_node);
}

Queue::~Queue() = default;

Node* Queue::getStart() {
    return this->start;
}

void Queue::setStart(Node *node) {
    this->start = node;
}

Node* Queue::getEnd() {
    return this->end;
}

void Queue::setEnd(Node *node) {
    if(this->isEmpty())
        this->start = this->end = node;
    else {
        this->end->setNext(node);
    }
}

int Queue::isEmpty() {
    return !(this->start);
}

void Queue::addNode(Node* node) {
    if(this->isEmpty())
        this->start = this->end = node;
    else {
        this->end->setNext(node);
        setEnd(node);
    }
}

Node Queue::popFirstNode() {
    Node* temp = this->getStart();
    this->setStart(this->start->getNext());
    return *temp;
}


void Queue::printQueue(Queue *queue) {

    Node* temp = this->getStart();
    int count = 1;
    cout << "Queue: " << endl;
    while(temp != NULL) {

        cout << "* Node " << count << " :" << endl;
        cout << "   - Name: " << temp->getName() << endl;
        cout << "   - Account: " << temp->getAccount() << endl;
        cout << temp->getNext()->getName();
        temp = temp->getNext();

    }
}


void Targil4(){
    Node n1;
    Node n2("Dana",-30);

    n1.setAccount(400);
    n1.setName((char*)"Lily");

    n1.setNext(&n2);

    cout << "test node 1 *******" << endl;
    cout << "id: " << n1.getId() << endl;
    cout << "name: " << n1.getName() << endl;
    cout << "account: " << n1.getAccount() << endl;
    cout << "next: " << n1.getNext()->getId() << endl;

    cout << "test node 2 *******" << endl;
    cout << "id: " << n2.getId() << endl;
    cout << "name: " << n2.getName() << endl;
    cout << "account: " << n2.getAccount() << endl;
    cout << "next: " << n2.getNext() << endl;

    Queue q1(&n1,&n2);
    cout << "test q1 *******" << endl;
    q1.printQueue(&q1);
    cout << "test 'addNode' *******" << endl;
    Node n3("Eve", 50);
    q1.addNode(&n3);
    q1.printQueue(&q1);
    cout << "test 'getStart' *******" << endl;
    q1.getStart();
    cout << "test 'popFirstNode' *******" << endl;
    q1.popFirstNode();
    q1.printQueue(&q1);

}
