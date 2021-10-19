#include <bits/stdc++.h>
using namespace std;
//creating a structure
struct node
{
    int data;
    struct node *link;
};
//function to count nodes in a list
void countnodes(struct node *head)
{
    int c = 0;

    struct node *ptr = head;
    if (head == NULL)
        cout << "linked list is empty";
    while (ptr != NULL)
    {
        c++;
        ptr = ptr->link;
    }
    cout << c;
}
//adding a node at the beginning of a list
void addatstart(struct node **head, int data)
{
    struct node *temp = new struct node;
    temp->data = data;
    temp->link = *head;
    *head = temp;
}
//printing a linked list
void prinnt(struct node *head)
{
    struct node *ptr = head;
    if (head == NULL)
        cout << "linked list is empty";
    while (ptr != NULL)
    {
        cout << ptr->data << " ";
        ptr = ptr->link;
    }
}
//adding a node at the end of a liknked list
void addatend(struct node *head, int data)
{
    struct node *ptr;
    ptr = head;

    struct node *temp = new struct node;
    temp->data = data;
    temp->link = NULL;
    while (ptr->link != NULL)
    {
        ptr = ptr->link;
    }
    ptr->link = temp;
}
//adding a node at any random position
void addatanyposition(struct node *head, int data, int pos)
{
    struct node *ptr = head;
    struct node *ptr2 = new struct node;
    ptr2->data = data;
    ptr2->link = NULL;

    pos--;
    while (pos < 1)
    {
        ptr = ptr->link;
        pos--;
    }
    ptr2->link = ptr->link;
    ptr->link = ptr2;
}
//deleting the first node
void deletingat1st(struct node **head)
{
    struct node *temp;
    temp = *head;
    if ((*head)->link == NULL)
        cout << "list is empty";
    *head = (*head)->link;
    delete (temp);
    temp = NULL;
}
//deleting the last node
void deletingatend(struct node **head)
{
    if ((*head) == NULL)
        cout << "LIST IS EMPTY";
    if ((*head)->link == NULL)
    {
        delete (*head);
        head = NULL;
    }
    else
    {
        struct node *temp;
        struct node *temp2;
        temp = (*head);
        temp2 = (*head);
        while (temp->link != NULL)
        {
            temp2 = temp;
            temp = temp->link;
        }

        delete (temp);
        temp2->link = NULL;
    }
}
//deleting the node at given position
void delete_pos(struct node **head, int pos)
{
    struct node *temp;
    struct node *temp2;
    temp = (*head);
    temp2 = (*head);
    if (*head == NULL)
        cout << "LIST IS ALREADY EMPTY";
    else if (pos == 1)
    {
        *head = temp2->link;
        delete (temp2);
        temp2 = NULL;
    }
    else
    {
        while (pos != 1)
        {
            temp = temp2;
            temp2 = temp2->link;
            pos--;
        }
        temp->link = temp2->link;
        delete (temp2);
        temp2 = NULL;
    }
}
//deleting the whole list
void deletethelist(struct node **head)
{
    struct node *temp;
    temp = (*head);
    while (temp != NULL)
    {
        temp = temp->link;
        delete (*head);
        *head = temp;
    }
}
//reversing the linked list
void reverse(struct node **head)
{
    struct node *prev, *current;
    prev = NULL;
    current = NULL;

    while ((*head) != NULL)
    {
        current = (*head)->link;
        (*head)->link = prev;
        prev = (*head);
        *head = current;
    }

    *head = prev;
}
int main()
{
    struct node *head = NULL;
    head = new struct node;
    head->data = 45;
    head->link = NULL;
    struct node *current = new struct node;
    current->data = 65;
    current->link = NULL;
    head->link = current;
    current = new struct node;
    current->data = 54;
    current->link = NULL;
    head->link->link = current;
    addatend(head, 453);
    addatstart(&head, 7);
    addatanyposition(head, 53, 4);
    countnodes(head);
    prinnt(head);
    cout << endl;
    reverse(&head);
    prinnt(head);
    cout << endl;
    deletingat1st(&head);
    prinnt(head);
    cout << endl;
    deletingatend(&head);
    prinnt(head);
    cout << endl;
    delete_pos(&head, 3);
    prinnt(head);
    deletethelist(&head);
    cout << endl;
    prinnt(head);
    return 0;
}