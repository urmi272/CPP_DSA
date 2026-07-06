#include<iostream>
#include <vector>
using namespace std;

class Node{
    public:
    int data; //data of the node
    Node* next; //pointer to the next node in the linked list

    public: //constructor to initialize the data and next pointer of the node
    Node(int data1, Node* next1){
        data = data1;
        next = next1;
    }
    //constructor to initialize the next pointer of the node with default value of nullptr
    Node(int data1){
        data = data1;
        next = nullptr;
    }
};

Node* convertArrToLinkedList(vector<int> nums){
    Node* head = new Node(nums[0]); //assigning the first element of the array to the head of the linked list
    Node* mover = head; //creating a pointer to traverse the linked list
    for(int i = 1; i < nums.size(); i++){
        mover->next = new Node(nums[i]); //creating a new node with the current element of the array and assigning it to the next pointer of the current node
        mover = mover->next;
    }
    return head;
}
void printLL(Node* head){
    Node* temp = head;
    //to traverse the ll
    while(temp != nullptr){
        cout << temp->data << " "; //printing elements
        temp = temp->next;
    }
    cout << endl;
}

int lenghtOfLL(Node* head){
    int cnt = 0;
    Node* temp = head;
    while(temp != nullptr){
        temp = temp->next;
        cnt++;
    }
    return cnt;
}

int checkIfPresent(Node* head, int key){
    Node* temp = head;
    while(temp != nullptr){
        if(temp->data == key){
            return 1; // Element found
        }
        temp = temp->next;
    }
    return 0; // Element not found
}

Node* removesHead(Node* head){
    if (head == nullptr) return head;

    Node* temp = head;
    head = head -> next; // Move head to the next node
    delete temp; // Free the memory of the old head
    return head; // Return the new head of the list

}

Node* removesTail(Node* head){
    if (head == nullptr || head->next == nullptr) {
        delete head; // If the list is empty or has only one node, delete it and return nullptr
        return nullptr;
    }
    Node* temp = head; //we dont want to alter the head
    while(temp->next->next != nullptr){
        temp = temp->next;
    }
    delete temp->next;
    temp->next = nullptr;

    return head;
}

Node* removeK(Node* head, int k){
    if (head == nullptr) return head;

    if (k == 1) {
        Node* temp = head;
        head = head->next; // Move head to the next node
        delete temp; // Free the memory of the old head
        return head; // Return the new head of the list
    }
    int cnt = 0;
    Node* temp = head;
    Node* prev = nullptr;
    while(temp != nullptr){
        cnt++;
        if (cnt == k) {
            prev->next = prev->next->next; // Bypass the node to be deleted
            delete temp; // Free the memory of the deleted node
            break;
        }
        prev = temp;
        temp = temp->next;
    }
    
    return head; // If k is out of bounds, return the original list
}

Node* removeEle(Node* head, int ele){
    if (head == nullptr) return head;

    if (head-> data == ele) {
        Node* temp = head;
        head = head->next; // Move head to the next node
        delete temp; // Free the memory of the old head
        return head; // Return the new head of the list
    }
    
    Node* temp = head;
    Node* prev = nullptr;
    while(temp != nullptr){
        if (temp->data == ele) {
            prev->next = prev->next->next; // Bypass the node to be deleted
            delete temp; // Free the memory of the deleted node
            break;
        }
        prev = temp; // Update the previous pointer
        temp = temp->next; // Move to the next node
    }
    
    return head; // If k is out of bounds, return the original list
}

Node* insertAtHead(Node* head, int ele){
    Node* temp = new Node(ele, head); // Create a new node with the given element
    return temp; // Return the temp
}

Node* insertAtTail(Node* head, int ele){
    Node* temp = new Node(ele); // Create a new node with the given element
    if (head == nullptr) return temp; // If the list is empty, return the new node as the head
    
    Node* mover = head; // Create a pointer to traverse the list
    while (mover->next != nullptr) {
        mover = mover->next; // Move to the end of the list
    }
    mover->next = temp; // Link the last node to the new node
    return head; // Return the head of the list
}

int main(){
    vector<int> list = {1,2,3,4,5,6,7,8,9};
    Node* head = convertArrToLinkedList(list);
    
    //cout<< head->data << endl;

    head = removesHead(head);
    cout << "Elements of the linked list after removing head: "; 
    printLL(head);
    head = removesTail(head);
    cout << "Elements of the linked list after removing tail: ";
    printLL(head);
    head = removeK(head, 2);
    cout << "Elements of the linked list after removing kth element: "; 
    printLL(head);
    cout << "Removing element 5 from the linked list: ";
    head = removeEle(head, 5);
    printLL(head);
    cout << "New Length of the linked list: " << lenghtOfLL(head) << endl;
    cout << "Is 3 present in the linked list? " << checkIfPresent(head, 3) << endl;
    head = insertAtHead(head, 10);
    cout << "Elements of the linked list after inserting 10 at head: ";
    printLL(head);
    head = insertAtTail(head, 11);
    cout << "Elements of the linked list after inserting 11 at tail: "; 
    printLL(head);
    
    // Node* y = new Node(list[0]); //creating a node with data 1
    // cout << y << endl; //address of the node
    // cout << y->data << endl; //data of the node
}