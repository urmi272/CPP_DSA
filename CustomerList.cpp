#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    
    public:
    Node(int data1){
        data = data1;
        next = nullptr;
    }
};

class CustomerList{
    private:
    Node* head;
    public:
    CustomerList(){
        head = nullptr;
    }

    void insertAtFront(int val){
        Node* newNode = new Node(val);
        newNode->next = head;
        head = newNode;
    }

    void RemoveFront(){
        if(head == nullptr) return;

        Node* temp = head;
        head = head ->next;
        delete temp;
    }

    void display(){
        Node* temp = head;
        while(temp != nullptr){
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main(){
    int n, id;
    CustomerList lst;
    cout << "Enter the number of customers: ";
    cin >> n;
    cout << "Enter customer ID: ";
    for(int i = 0; i < n; i++){
        cin >> id;
        lst.insertAtFront(id);
    }
    lst.RemoveFront();
    lst.display();

}