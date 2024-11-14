#include <iostream>
#include "LinkedHeap.h"

using namespace std;

//constructor declarations
    linkedHeap::linkedHeap(){
        root = new Node();
    }
    linkedHeap::linkedHeap(int n, Node* l, Node* r){
        root = new Node(n, l, r);
    }
    //functions
    int linkedHeap::popHeap(){
        int temp = root -> data;

        root -> data = -1;
        heapify(root);
        return temp;

    }

    void linkedHeap::insertHeap(int n){
        if(root -> right != nullptr)
            root = new Node(n, root, root -> right);
        else
            root = new Node(n, root, root -> left);

        heapify(root);
    }
    void linkedHeap::peekHeap(){
        if(root -> data == -1)
            cout << "heap is empty";
        else
            cout << root -> data;

    }

    //use for class
    void linkedHeap::heapify(Node* iRoot){

        int largest = iRoot -> data;
        int temp;


        if(iRoot -> left != nullptr && iRoot -> left -> data > iRoot -> data){
            temp = iRoot -> data;
            iRoot -> data = iRoot -> left -> data;
            iRoot -> left -> data = temp;
            heapify(iRoot -> left);
        }

        if(iRoot -> right != nullptr && iRoot -> right -> data > iRoot -> data){
            temp = iRoot -> data;
            iRoot -> data = iRoot -> right -> data;
            iRoot -> right -> data = temp;
            heapify(iRoot -> right);
        }




    }
