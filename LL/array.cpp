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



int lengthOfLL(Node* head){
    int count = 0;
    Node* temp = head;
    while(temp){
        temp = temp->next;
        count++;
    }
    return count;
}


int checkNumber(Node* head, int val){
    Node* temp = head;
    while(temp){
        if(temp->data == val) {
            return 1;
        temp = temp->next;
        }
    }
    return 0;
}


int main() {
    int numbers[] = {2, 3, 5, 7};
        int size = sizeof(numbers) / sizeof(numbers[0]);
    

    Node* head = convertArr2LL(numbers, size);
    cout<< head->data <<endl;



    // Traversal LL
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }

    //Lengh Of LL
    //cout<<lengthOfLL(head)<<endl;


    //check number
    cout << checkNumber(head, 5);

   
}
