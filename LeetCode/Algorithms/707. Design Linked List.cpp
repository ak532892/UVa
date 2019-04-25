class MyLinkedList;
class Node {
private:
    int val;
    int index;
    Node *next;
public:
    Node(): val(0), index(0), next(0){};
    Node(int num, int ind): val(num), index(ind), next(0){};
    friend class MyLinkedList;
};
class MyLinkedList {
private:
    Node *head;
    int size;
public:
    /** Initialize your data structure here. */
    MyLinkedList():head(0), size(0){};
    
    /** Get the value of the index-th node in the linked list. If the index is invalid, return -1. */
    int get(int index) {
        Node *current(head);
        int isValid = (0 <= index && index < size);
        while(isValid && current->index != index)
            current = current->next;
        return isValid ? current->val : -1;
    }
    
    /** Add a node of value val before the first element of the linked list. After the insertion, the new node will be the first node of the linked list. */
    void addAtHead(int val) {
        if(head == NULL){
            Node *newNode = new Node(val, 0);
            head = newNode;
            ++size;
        }
        else{
            Node *newNode = new Node(val, 0);
            newNode->next = head;
            head = newNode;
            newNode = newNode->next;
            while(newNode){
                ++newNode->index;
                newNode = newNode->next;
            }                
            ++size;
        }
    }
    
    /** Append a node of value val to the last element of the linked list. */
    void addAtTail(int val) {
        if(!head)
            addAtHead(val);
        else{
            Node *current = head;
            while(current->next)
                current = current->next;
            Node *newNode = new Node(val, size);
            ++size;
            current->next = newNode;
        }
    }
    
    /** Add a node of value val before the index-th node in the linked list. If index equals to the length of linked list, the node will be appended to the end of linked list. If index is greater than the length, the node will not be inserted. */
    void addAtIndex(int index, int val) {
        if(index <= 0)
            addAtHead(val);
        else if(index == size)
            addAtTail(val);
        else if(0 <= index && index < size){
            Node *pre, *current(head);
            while(current->index != index){
                pre = current;
                current = current->next;
            }
            Node *newNode = new Node(val, index);
            pre->next = newNode;
            newNode->next = current;
            while(current){
                ++current->index;
                current = current->next;
            }
            ++size;
        }
    }
    
    /** Delete the index-th node in the linked list, if the index is valid. */
    void deleteAtIndex(int index) {
        int isValid = (0 <= index && index < size);
        if(isValid){
            if(!index){
                Node *delNode = head, *current;
                if(head->next){
                    head = head->next;
                    current = head;
                    while(current){
                        --current->index;
                        current = current->next;
                    }
                }
                else
                    head = NULL;
                //delete delNode;
                --size;
            }
            else{
                Node *pre, *current(head);
                while(current->index != index){
                    pre = current;
                    current = current->next;
                }
                Node *delNode = current;
                pre->next = current->next;
                current = current->next;
                //delete delNode;
                while(current){
                    --current->index;
                    current = current->next;
                }
                --size;
            }
        }
    }
};
/*
struct, deque
 bug test case 
["MyLinkedList","addAtIndex","get","deleteAtIndex"]
[[],[-1,0],[0],[-1]]
*/
/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */