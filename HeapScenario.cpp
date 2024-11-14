#include <iostream>

#include "LinkedHeap.h"

using namespace std;

int main(){

    int arrSize = 0;
    cout << "Input # of Elements: ";
    cin >> arrSize;


    int arr[arrSize];
    linkedHeap heapMax = linkedHeap();

    for(int i = 0; i < arrSize; i++){
       heapMax.insertHeap((rand() % 100) + 1);

    }

   for(int i = arrSize - 1; i >= 0; i--){
        arr[i] = heapMax.popHeap();
   }

   cout << "Sorted data:\n";

   for(int i = 0; i < arrSize; i++){
       cout << arr[i] << " ";

    }

    return 0;

}
