#include <iostream>

void increment(int* numPtr){
    *numPtr = *numPtr + 1;
}

void reverseArray(int arr[], int size){
    int start = 0;
    int end = size - 1;

    // Swap elements using a temporary variable
    while(start < end){
        int temp{arr[start]};
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }
}

int main(){
    using namespace std;

    int num{56};

    //debug
    cout << num << endl;

    increment(&num);// Passing the address of num

    // The function modified the actual data at that address, not a copy.
    cout << num << endl;

    //part 2
    int numbers[] = {1,2,3,4,5};
    int size{5};

    
    cout << "Original" << endl;
    for(int i = 0; i < size; i++){
        cout << numbers[i] << " ";
    }
    cout << endl;

    reverseArray(numbers, size);


    //using swap function, we change from first to second and then move on to the value.
    cout << "Reversed" << endl;
    for(int i = 0; i < size; i++){
        cout << numbers[i] << " ";
    }

    return 0;
}