#include<stdio.h>
#include <iostream>
using namespace std;
 //can use class or struct
struct Node{
  public:
  int data;
  Node* next;

  public:
  Node(int data1, Node* next1){
    data = data1;
    next = next1;
  }

};


int main(){
  int arr[] = {2, 4, 5};
   Node* y = new Node(arr[0], nullptr);
   cout << y <<endl;
   //cout << y.data; could not find this its only stores pointer to memory location


  // creating an object can print data or pointer address
   Node x = Node(arr[1], nullptr);
   cout<<x.data<<endl;
   cout<<x.next;
}
