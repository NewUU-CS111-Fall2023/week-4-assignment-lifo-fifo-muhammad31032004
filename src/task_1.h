class Node {
public:
    int data;
    Node* next;
    
    Node(int val){
        this->data = val;
        this->next = NULL;
    }
};

class Stack{
    Node* head;
public:
    Stack(){
        this->head = NULL;
    }
    void push(int val){
        Node* tmp = new Node(val);
        tmp->data = val;
        tmp->next = this->head;
        this->head = tmp;
    }
};
