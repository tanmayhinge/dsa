#include <iostream>

using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

class LinkedList
{
private:
    Node *head;

public:
    LinkedList()
    {
        head = nullptr;
    }
    void insert(int x)
    {
        Node *temp = new Node;
        temp->data = x;
        if (isEmpty())
        {
            temp->next = nullptr;
        }
        else
        {
            temp->next = head;
        }
        head = temp;
    }
    void insertAtEnd(int x)
    {
        Node *temp = head;

        while (temp->next != nullptr)
        {
            temp = temp->next;
        }
        temp->next = new Node;
        temp->next->data = x;
    }

    void remove(int x)
    {
        Node *temp = head;
        Node *bridge = head->next;
        while (temp->next != nullptr)
        {
            if (temp->next->data == x)
            {
                bridge = bridge->next;
                Node *toDel = temp->next;
                temp->next = bridge;
                delete toDel;
            }
            temp = temp->next;
        }
    }

    Node* reverse()
    {
        Node *temp = head;
        Node* curr = nullptr;
        Node *prev = nullptr;

        while (temp->next != nullptr)
        {
            prev = temp;
            

            temp = temp->next;
        }
    }

    pair<Node *, int> find(int x)
    {
        Node *temp = head;
        int pos = 1;
        pair<Node *, int> ret;
        while (head != nullptr)
        {
            if (temp->data == x)
            {
                ret = make_pair(temp, pos);
                return ret;
            }
            temp = temp->next;
            pos += 1;
        }
        // making dummy pair ???

        cerr << "Not Found" << endl;
    }

    void printList()
    {
        if (!isEmpty())
        {
            Node *temp;
            for (temp = head; temp != nullptr; temp = temp->next)
            {
                std::cout << temp->data << " ";
            }
        }
        else
        {
            std::cout << "List is Empty" << std::endl;
        }
    }
    bool isEmpty()
    {
        return this->head == nullptr;
    }
    void traverseList()
    {
        Node *temp = head;
        while (temp != nullptr)
        {
            // do something over here. or else
            temp = temp->next;
        }
    }
};

int main()
{
    LinkedList l1;
    l1.insert(2);
    l1.insertAtEnd(888);
    l1.insert(3);
    l1.insert(4);
    l1.insertAtEnd(8828);

    cout << endl;
    l1.printList();

    // l1.remove(3);
    l1.reverse();
    cout << endl;

    // std::cout << "Found at position- " << l1.find(2).second << std::endl;
    l1.printList();
}