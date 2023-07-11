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

Node* findIntersection(Node *firstHead, Node *secondHead)
{
    //Write your code here
    Node* temp1 = firstHead;
    Node* temp2 = secondHead;

    while(true){
        if(temp1 == NULL){
            temp1 = secondHead;
        }
        if(temp2 == NULL){
            temp2 = firstHead;
        }

        temp1 = temp1->next;
        temp2 = temp2->next;

        if(temp1 == temp2){
            return temp1;
        }
    }
}
