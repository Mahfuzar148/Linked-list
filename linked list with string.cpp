#include <iostream>
#include <string>
using namespace std;

typedef struct node Node;
struct node {
    string data;
    Node* next;
};

Node* create_node(string item) {
    Node* tmp = new Node;
    tmp->data = item;
    tmp->next = nullptr;
    return tmp;
}

void print(Node* head) {
    Node* tmp = head;
    while (tmp != nullptr) {
        cout << tmp->data << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

/**void sort_linked_list(Node* head) {
    if (!head)
        return;

    Node *current, *next1;
    bool swapped;

   /** do {
        swapped = false;
        current = head;

        while (current->next != nullptr) {
            next1 = current->next;

            if (current->data > next1->data) {
                string tmp = current->data;
                current->data = next1->data;
                next1->data = tmp;
                swapped = true;
            }
            current = current->next;
        }
    } while (swapped);

}
*/
void sort_linked_list(Node* head)
{
    Node *current,*next1;
    current = head;
    while(current!=NULL)
    {
        next1 = current->next;
        while(next1!=NULL)
        {
            if(current->data>next1->data)
            {
                string tmp;
                tmp = current->data;
                current->data = next1->data;
                next1->data = tmp;
            }
            next1 = next1->next;
        }
        current = current->next;
    }
}

int main() {
    cout << "Insert values, otherwise type '-1': " << endl;
    string data;
    cin >> data;

    Node* head = create_node(data);
    Node* tmp = head;

    while (true) {
        cin >> data;
        if (data == "-1") {
            break;
        }
        tmp->next = create_node(data);
        tmp = tmp->next;
    }

    sort_linked_list(head);
    print(head);

   /** // Clean up memory
    Node* current = head;
    while (current != nullptr) {
        Node* temp = current;
        current = current->next;
        delete temp;
    }*/

    return 0;
}
