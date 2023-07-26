/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;

    Node() {}

    Node(int _val) {
        val = _val;
        next = NULL;
    }

    Node(int _val, Node* _next) {
        val = _val;
        next = _next;
    }
};
*/

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
            if (prev->val <= insertVal && insertVal <= curr->val)
                insert = true;
            else if (prev->val > curr->val){
                if (insertVal >= prev->val || insertVal <= curr->val)
                    insert = true;
            }
            if (insert){
                Node *kkt = new Node(insertVal, curr);
                prev->next = kkt;
                return head;
            }
            prev = curr;
            curr = curr->next;
        }while (prev != head);

        prev->next = new Node (insertVal, curr);
        return head;
    }
};