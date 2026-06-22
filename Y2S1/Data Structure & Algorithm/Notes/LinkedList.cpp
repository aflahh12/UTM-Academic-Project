#include <iostream>
#include <string>

using namespace std;

class Node {
    public:
        int data;
        Node *next; // next is the Node class itself

    ~Node() {
        cout << "Destroy Node " << data << "\n";
    }
};


// Main function section
int main() {
    Node n1, *head = NULL;

    // assign n1 node with value of 10
    n1.data = 10;
    // make head store the address of n1 (point to node 10)
    head = &n1;
    

    cout << "n1 address = " << &n1 << "\n";
    cout << "n1.data = " << n1.data << "\n";
    cout << "head = " << head << "\n";

    // dynamically create node-20 that pointed by n1's next
    Node *n2 = new Node();
    n2->data = 20;
    n1.next = n2;
    

    cout << "n1.next = " << n1.next << "\n";
    cout << "n1.next->data = " << n1.next->data << "\n";

    // dynamically create node-30 that pointed by node-20's next
    cout << "head->data = " << head->data <<"\n";
    cout << "head->next->data =" << head->next->data << "\n";
    
    Node *n3 = new Node();
    cout << "n3 = " << n3 << "\n";
    
    n2->next = n3;
    
    cout << "head->data = "<< head->data << "\n";
	cout << "head->next->data =" << head->next->data << "\n"; 
    
    
    // make node-30's next point to null
	n3->next = NULL;

    //cout << "n1.next->next = " << n1.next->next << "\n";
    //cout << "n1.next->next->data = " << n1.next->next->data << "\n";
    //cout << "n1.next->next->next = " << n1.next->next->next << "\n";

    Node *n = head;
    while (n != NULL) {
        cout << n->data << "\n";
        n = n->next;
    }

    // need to manually delete node-20 and node-30 since 
    // they are created dynamically (new Node)

    // delete node-30 first or will lost the node-20
	delete head->next->next;

    // then delete node-20
	delete head->next;

    // no need to manually delete node-10 as it's declare as normal Node class via n1 variable
}