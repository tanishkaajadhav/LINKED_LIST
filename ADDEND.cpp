// Add multiple nodes at the end of the Linked List

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

    void AddAtEnd()
    {
        int n, val;
        cout << "Enter number of nodes to add at end: ";
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cout << "Enter value for node " << i + 1 << ": ";
            cin >> val;
            Node *newNode = new Node(val);
            if (!head)
                head = newNode;
            else
            {
                Node *temp = head;
                while (temp->next)
                    temp = temp->next;
                temp->next = newNode;
            }
        }
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
    list.AddAtEnd();
    list.Display();

    return 0;
}

/*
OUTPUTS
Enter number of nodes to add at end: 3
Enter value for node 1: 10
Enter value for node 2: 20
Enter value for node 3: 30
Linked List elements:
10 20 30
*/