/****************************************************************

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


*****************************************************************/

Node *firstNode(Node *head)
{
    //    Write your code here.
    Node* slow = head;
    Node* fast = head;
    while(true){
        if(fast == NULL || fast->next == NULL) return NULL;

        slow = slow->next;
        fast =fast->next->next;

        if(slow == fast) break;
    }

    Node* ans = head;
    while(true){
        if(slow == ans) return ans;
        slow = slow->next;
        ans = ans->next;
    }
}
