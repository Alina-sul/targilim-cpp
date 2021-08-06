#ifndef HEADERS_TARGIL4_H
#define HEADERS_TARGIL4_H

#include <string>
using namespace std;

class Node {
    Node();
    Node( string name, double account);
    ~Node();
    void setName() const;
    void setAccount() const;
    Node *getNext();
    void setNext(Node*);
    string getName();
    double getAccount();
private:
    static int id;
    string name;
    double account;
    Node *Next;
};

class Queue {
    Queue();
    Queue( Node* begin, Node* end);
    ~Queue();
    void addNode();
    void popFirstNode();
    void getFirstNode();
    void isEmpty();
    void printQueue();
private:
    Node *begin, *end;
};


#endif //HEADERS_TARGIL4_H
