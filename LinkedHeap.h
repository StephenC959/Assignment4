#ifndef LINKEDHEAP_H_INCLUDED
#define LINKEDHEAP_H_INCLUDED

class Node{

public:
//data
    int data = -1;
    Node* left = nullptr;
    Node* right = nullptr;


//constructors
    Node(){}
    Node(int n, Node* l, Node* r){
      data = n;
      left = l;
      right = r;
    }


};

class linkedHeap{




private:
    Node* root;
    int heapSize = 0;

public:
    //constructor declarations
    linkedHeap();
    linkedHeap(int n, Node* l, Node* r);

    //functions
    int popHeap();
    void insertHeap(int n);
    void peekHeap();

    //use for class
    void heapify(Node* iRoot);


};

#endif // LINKEDHEAP_H_INCLUDED
