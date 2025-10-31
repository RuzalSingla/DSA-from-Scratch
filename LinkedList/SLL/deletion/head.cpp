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

Node *DeleteHead(Node *head)
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
    head = head->next;
    free(temp);
    return head;
}

int main()
{

    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);

    Node *newHead = DeleteHead(head);

    while (newHead != nullptr)
    {
        cout << newHead->data << " -> ";
        newHead = newHead->next;
    }

    return 0;
}