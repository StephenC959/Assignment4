#ifndef ARRAYHEAP_H_INCLUDED
#define ARRAYHEAP_H_INCLUDED

class arrHeap{

private:
    int arr[15] = {-1};
    int arrSize = 0;


public:
    //constructor declarations
    arrHeap();
    arrHeap(int n);

    //functions
    int popHeap();
    void insertHeap(int n);
    void peekHeap();
    void heapify(int n);




};

#endif // ARRAYHEAP_H_INCLUDED
