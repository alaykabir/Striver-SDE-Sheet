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

bool detectCycle(Node *head)
{
	//	Write your code here
    Node* slow = head;
    Node* fast = head;
    while(true){

        if(slow == NULL || slow->next == NULL) return false;
        if(fast == NULL || fast->next == NULL) return false;

        slow = slow->next;
        fast = fast->next->next;

        if(slow == fast) return true;
    }
}
