#ifndef HEADERS_TARGIL4_H
#define HEADERS_TARGIL4_H

#include <string>
using namespace std;

//Test
void Targil4();

//Classes
class Node {
public:
    static int idGen;

    Node();
    Node(string name, double account);
    ~Node();
    void setName(string name_str);
    void setAccount(double account_instance);
    void setNext(Node *node);
    int getId();
    Node *getNext();
    string getName() const;
    double getAccount() const;
private:
    int id;
    string name;
    double account;
    Node *Next;
};

class Queue {
public:
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
