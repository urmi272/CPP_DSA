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

int lenghtOfLL(Node* head){
    int cnt = 0;
    //to traverse the ll
    Node* temp = head;
    while(temp != nullptr){
        cout << temp->data << " ";
        temp = temp->next;
        cnt++;
    }
    return cnt;
}
int main(){
    vector<int> list = {1,2,3,4,5};
    Node* head = convertArrToLinkedList(list);
    
    //cout<< head->data << endl;
    
    cout << "Length of the linked list: " << lenghtOfLL(head) << endl;
    
    // Node* y = new Node(list[0]); //creating a node with data 1
    // cout << y << endl; //address of the node
    // cout << y->data << endl; //data of the node
}