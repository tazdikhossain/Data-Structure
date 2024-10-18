#include<iostream>
using namespace std;

struct Node{
    int value;
    Node* next;
};

class Linkedlist{
    Node* head;
};


public:
    Linkedlist():head(){}

    void insertAtStart(int value)
    {
        Node* newNode = new Node();
        newNode->value = value;
        newNode->next = head;
        head = newNode;
    }

    void insertAtEnd(int value)
    {
        Node* newNode = new Node();
        newNode->value = value;
        newNode->next = NULL;
    }

    void deleteFromStart()
    {
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    void deleteFromEnd()
    {
        if(!head->next)
        {
            delete head;
            head = NULL;
            return
        }
    }



int main()
{
    Linkedlist list;

    list.insertAtStart(1);

    list.insertAtEnd(10);

    list.deleteFromStart();
    list.display();

    list.deleteFromEnd();
    list.display();

    return 0;
}


