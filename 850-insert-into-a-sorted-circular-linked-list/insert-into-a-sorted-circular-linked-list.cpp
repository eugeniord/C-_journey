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
        if (head->next == head) {
            Node* newNode = new Node(insertVal, head);
            head->next = newNode;
            return head;
        }
        Node* prev = head;
        Node* curr = head->next;
        bool insert = false;

        do{
            if (prev->val <= insertVal && insertVal <= curr->val) {
                break;
            } else if (prev->val > curr->val &&
                (insertVal >= prev->val || insertVal <= curr->val)) {
                break;
            }
            prev = curr;
            curr = curr->next;
        } while (prev != head);

        prev->next = new Node (insertVal, curr);
        return head;
    }
};