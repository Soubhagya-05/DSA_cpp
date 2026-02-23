#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }

    ~Node() {
        if (next != NULL) {
            delete next;
            next = NULL;
        }
    }
};

class List {
    Node* Head;
    Node* Tail;

public:
    List() {
        Head = NULL;
        Tail = NULL;
    }

    ~List() {
        if (Head != NULL) {
            delete Head;
            Head = NULL;
        }
    }

    void push_front(int val) {
        Node* newNode = new Node(val);

        if (Head == NULL) {
            Head = Tail = newNode;
        } else {
            newNode->next = Head;
            Head = newNode;
        }
    }

    void push_back(int val) {
        Node* newNode = new Node(val);

        if (Head == NULL) {
            Head = Tail = newNode;
        } else {
            Tail->next = newNode;
            Tail = newNode;
        }
    }

    void insert(int val, int pos) {
        if (pos == 0) {
            push_front(val);
            return;
        }

        Node* temp = Head;
        for (int i = 0; i < pos - 1 && temp != NULL; i++) {
            temp = temp->next;
        }

        if (temp == NULL) return;

        Node* newNode = new Node(val);
        newNode->next = temp->next;
        temp->next = newNode;

        if (newNode->next == NULL) {
            Tail = newNode;
        }
    }

    void pop_front() {
        if (Head == NULL) return;

        Node* temp = Head;
        Head = Head->next;
        temp->next = NULL;
        delete temp;

        if (Head == NULL) {
            Tail = NULL;
        }
    }

    void pop_back() {
        if (Head == NULL) return;

        if (Head->next == NULL) {
            delete Head;
            Head = Tail = NULL;
            return;
        }

        Node* temp = Head;
        while (temp->next->next != NULL) {
            temp = temp->next;
        }

        delete temp->next;
        temp->next = NULL;
        Tail = temp;
    }

    void print_list() {
        Node* temp = Head;
        while (temp != NULL) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL\n";
    }
    int search(int key){
        Node* temp = Head;
        int idx = 0;
        while (temp !=NULL){
            if (temp->data == key){
                return idx;
            }
            temp = temp->next;
            idx++;
        }
        return -1;
    }
    int helper(int temp, int key ){
        if (temp == NULL){
            return -1;
        }
        if (temp-> data== key){
            return 0;
        }
        int idx = helper(temp->next, key);
        if (idx == -1){
            return -1;
        }
        return idx+1;
    }
    int search_id(int key ){
        return helper(temp, key );
    }
};

int main() {
    List ll;
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);
    ll.push_back(4);
    ll.pop_back();

    ll.print_list();
    cout << ll.search(4)<< endl;
}
