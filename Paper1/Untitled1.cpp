
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
/* A linked list node */
class Node {
public:
int data;
Node* npx;
Node(int x) {
this->data = x;
this->npx = nullptr;
}
};
Node* XOR(Node* x, Node* y)
{
return reinterpret_cast<Node*>(
reinterpret_cast<uintptr_t>(x)
^ reinterpret_cast<uintptr_t>(y));
}
Node *insert(Node *head, int data) {
Node *new_node = new Node(data);
new_node->npx = head;
if (head != NULL) head->npx = XOR(new_node, head->npx);
return new_node;
}
vector<int> printList(Node *head) {
Node *curr = head;
Node *prev = NULL;
Node *next;
vector<int> vec;
while (curr != NULL) {
vec.push_back(curr->data);
next = XOR(prev, curr->npx);
prev = curr;
curr = next;
}
return vec;
}
// Driver Code
int main()
{
Node* head = NULL;
int n;
cin>>n;
while(n--) {
int x;
cin>>x;
head = insert(head,x);
}
vector<int> smartList = printList(head);
for(auto a:smartList) {
cout<<a<<" ";
}
return 0;
}

