#ifndef HEADERS_TARGIL4_H
#define HEADERS_TARGIL4_H

#include <string.h>

//Test
void Targil4();

//Classes
class Node {
public:
    static int idGen;

    Node();
    Node(const char* name, double account);
    ~Node();
    void setName(char *name_instance);
    void setAccount(double account_instance);
    void setNext(Node *node);
    int getId() const;
    Node *getNext();
    char* getName() const;
    double getAccount() const;
private:
    int id;
    char name[30]{};
    double account;
    Node *Next;
};

class Queue {
public:
    Queue();
    Queue(Node *start_node, Node *end_node);
    ~Queue();
    Node* getStart();
    void setStart(Node *node);
    Node* getEnd();
    void setEnd(Node *node);
    void addNode(Node* node);
    Node popFirstNode();
    int isEmpty();
    void printQueue(Queue* queue);
private:
    Node *start, *end;
};


#endif //HEADERS_TARGIL4_H
