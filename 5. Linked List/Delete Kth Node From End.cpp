/*
Following is the class structure of the Node class:

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
    }
    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }
};
*/

Node* removeKthNode(Node* head, int K)
{
    Node* hero = head;

    while(K--) hero = hero->next;

    Node* ans = head;

    if(hero == NULL)
    {
        ans = ans->next;
        return ans;
    }

    while(hero != NULL && hero->next != NULL)
    {
        hero = hero->next;
        ans = ans->next;
    }

    ans->next = ans->next->next;

    return head;
}
