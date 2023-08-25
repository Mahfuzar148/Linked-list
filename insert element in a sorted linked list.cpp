#include<bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};

Node* create_linkedlist1() {
    cout << "Number of elements: ";
    int n;
    cin >> n;
    
    if (n <= 0) {
        return nullptr;
    }
    
    int val;
    cin >> val;
    Node* head = new Node(val);
    Node* tmp = head;

    for(int i = 1; i < n; i++) {
        cin >> val;
        tmp->next = new Node(val);
        tmp = tmp->next;
    }
    
    return head;
}

void print_linkedlist1(Node* head) {
    Node* tmp = head;
    while(tmp != nullptr) {
        cout << tmp->data << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

void insert_sorted(Node*& head, int num) {
    Node* tmp = new Node(num);

    if (head == nullptr || num < head->data) {
        // Handle the case where the value is less than all existing elements
        tmp->next = head;
        head = tmp;
    } else if (num > head->data) {
        // Handle the case where the value is greater than all existing elements
        Node* tmp1 = head;

        // Traverse while there's a next node and the next node's data is less than the new value
        while (tmp1->next != nullptr && num > tmp1->next->data) {
            tmp1 = tmp1->next;
        }

        tmp->next = tmp1->next;
        tmp1->next = tmp;
    } else {
        // Handle the case where the value is equal to the head's value
        tmp->next = head->next;
        head->next = tmp;
    }
}

int main() {
    Node* head = create_linkedlist1();
    print_linkedlist1(head);

    cout << "Insert a value in a sorted array: ";
    int num;
    cin >> num;

    insert_sorted(head, num);
    
    cout << "Element after inserting: ";
    print_linkedlist1(head);

    // Free memory
    while (head != nullptr) {
        Node* tmp = head;
        head = head->next;
        delete tmp;
    }

    return 0;
}
