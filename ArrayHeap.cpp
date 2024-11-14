#include <iostream>
#include "ArrayHeap.h"

using namespace std;

//constructors
arrHeap::arrHeap(){}

arrHeap::arrHeap(int n){
   arr[0] = n;
   arrSize = 1;
}

//functions
int arrHeap::popHeap(){

    if(arrSize <= 0){
         cout << "Heap is empty";
         return -1;
    }
    int top = arr[0];
    arr[0] = arr[arrSize - 1];
    arr[arrSize - 1] = -1;
    arrSize--;


    heapify(0);
    return top;

}
void arrHeap::insertHeap(int n){

        if(arrSize >= 15){
            cout << "Heap is full";
            return;
        }


        arr[arrSize] = n;
        arrSize++;

        // Restore the heap
        int i = arrSize - 1;
        while (i > 0 && arr[(i - 1) / 2] < arr[i]) {
            swap(arr[i], arr[(i - 1) / 2]);
            i = (i - 1) / 2;
        }
}

void arrHeap::peekHeap(){
    if(arrSize <= 0){
        cout << "Heap is empty";
        return;
    }

    cout << arr[0];
}


//use for class
void arrHeap::heapify(int i){

    int largest = i;
    int left = 2 * largest + 1;
    int right = 2 * largest + 2;

    if(left < arrSize && arr[left] > arr[largest])
        largest = left;

    if(right < arrSize && arr[right] > arr[largest])
        largest = right;

    if(largest != i){
        swap(arr[i], arr[largest]);
        heapify(largest);

    }


}

