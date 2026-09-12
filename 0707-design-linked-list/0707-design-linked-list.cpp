class MyLinkedList {
public:

    class Node {
    public:
        int val;
        Node* next;

        Node(int val) {
            this->val = val;
            next = NULL;
        }
    };

    Node* head;
    Node* tail;
    int size;

    MyLinkedList() {
        head = NULL;
        tail = NULL;
        size = 0;
    }

    int get(int index) {
        if (index < 0 || index >= size)
            return -1;

        Node* temp = head;

        for (int i = 0; i < index; i++)
            temp = temp->next;

        return temp->val;
    }
    
    void addAtHead(int val) {
        Node* newNode = new Node(val);

        if (head == NULL) {
            head = newNode;
            tail = newNode;
        }
        else {
            newNode->next = head;
            head = newNode;
        }

        size++;
    }
    
    void addAtTail(int val) {
        Node* newNode = new Node(val);

        if (head == NULL) {
            head = newNode;
            tail = newNode;
        }
        else {
            tail->next = newNode;
            tail = newNode;
        }

        size++;
    }
    
    void addAtIndex(int index, int val) {
        if (index < 0 || index > size)
            return;

        if (index == 0) {
            addAtHead(val);
            return;
        }

        if (index == size) {
            addAtTail(val);
            return;
        }

        Node* temp = head;

        for (int i = 0; i < index - 1; i++)
            temp = temp->next;

        Node* newNode = new Node(val);

        newNode->next = temp->next;
        temp->next = newNode;

        size++;
    }
    
    void deleteAtIndex(int index) {
        if (index < 0 || index >= size)
            return;

        if (index == 0) {
            Node* temp = head;
            head = head->next;

            delete temp;
            size--;

            if (size == 0)
                tail = NULL;

            return;
        }

        Node* temp = head;

        for (int i = 0; i < index - 1; i++)
            temp = temp->next;

        Node* del = temp->next;

        temp->next = del->next;

        if (del == tail)
            tail = temp;

        delete del;
        size--;
    }
};