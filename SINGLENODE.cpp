// Create a single node of the Linked List

#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = nullptr;
    }
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

    void CreateNode()
    {
        int val;
        cout << "Enter value for single node: ";
        cin >> val;
        head = new Node(val);
        cout << "Node created with value " << val << "\n";
    }

    void Display()
    {
        if (!head)
        {
            cout << "List is empty\n";
            return;
        }
        Node *temp = head;
        cout << "Linked List elements:\n";
        while (temp)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << "\n";
    }
};

int main()
{
    LinkedList list;
    list.CreateNode();
    list.Display();

    return 0;
}

/*
OUTPUTS
Enter value for single node: 10
Node created with value 10
Linked List elements:
10

*/