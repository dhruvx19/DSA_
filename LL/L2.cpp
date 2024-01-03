#include<iostream>
using namespace std;

struct Node{
    public:
    int data;
    Node* next;

    public:
    Node(int data1, Node* next1){
        data = data1;
        next = next1;
    }

    public:
    Node(int data1){
        data = data1;
        next = nullptr;
    }

};


void print(Node* head){
    while(head != NULL){
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}


Node* convertArr2LL(int arr[], int size) {
     Node* head = new Node(arr[0]);
     Node* mover = head;
     for(int i=1;i<size; i++){
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = mover->next;
     }
     return head;
}



Node* removeHead(Node* head){
    if(head == NULL) return head;
    Node* temp = head;
    head = head->next;
    delete temp;
    return head;
}

int main(){
    int numbers[] = {1,4,5,7,8,9};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    
    Node* head = convertArr2LL(numbers, size);
    
    head = removeHead(head);
    print(head);

}