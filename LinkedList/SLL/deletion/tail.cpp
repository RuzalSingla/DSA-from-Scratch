#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = nullptr;
    }

    Node(int val, Node *n)
    {
        data = val;
        next = n;
    }
};

void print(Node *head)
{
    Node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "nullptr" << endl;
}

Node *Deletetail(Node *head)
{

    if (head == nullptr)
    {
        return nullptr;
    }

    if (head->next == nullptr)
    {
        free(head);
        return nullptr;
    }

    Node *temp = head;

    while (temp->next->next != nullptr)
    {
        temp = temp->next;
    }

    temp->next = nullptr;
    return head;
}
int main()
{
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    cout << "Original list: ";
    print(head);
    head = Deletetail(head);
    cout << "After deleting tail: ";
    print(head);

    return 0;
}