class Solution {
public:
    Node* insert(Node* head, int insertVal) {
        if (head == NULL) {
            Node* newNode = new Node(insertVal, NULL);
            newNode->next = newNode;
            return newNode;
        }
        
        Node* prev = head;
        Node* curr = head->next;
        bool insert = false;

        do{
            if (prev->val <= insertVal && insertVal <= curr->val) {
                break;
            } 
            
            if (prev->val > curr->val && (insertVal >= prev->val || insertVal <= curr->val)) {
                break;
            }

            prev = curr;
            curr = curr->next;
        } while (prev != head);

        prev->next = new Node (insertVal, curr);
        return head;
    }
};