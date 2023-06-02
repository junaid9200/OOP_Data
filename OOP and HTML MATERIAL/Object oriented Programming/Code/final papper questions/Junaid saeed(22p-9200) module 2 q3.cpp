#include <iostream>
using namespace std;

class DynamicArray {
private:
    int* arr;     // Pointer to the dynamic array
    int size;    

public:
    // Default constructor
    DynamicArray() : arr(), size(0) {}

    // Parameterized constructor
    DynamicArray(int initialSize) : size(initialSize) {
        arr = new int[size];
    }

    // Copy constructor
    DynamicArray(DynamicArray& other) : size(other.size) {
        arr = new int[size];
        for (int i = 0; i < size; i++) {
            arr[i] = other.arr[i];
        }
    }

    // Destructor
    ~DynamicArray() {
        delete[] arr;
    }

    // Add an element to the array
    void addElement(int element) {
        int* tempArr = new int[size + 1];
        for (int i = 0; i < size; i++) {
            tempArr[i] = arr[i];
        }
        tempArr[size] = element;

        delete[] arr;
        arr = tempArr;
        size++;
    }

    // Get the element at a specific index
    int getElementAt(int index) 
	 {
        if (index >= 0 && index < size) {
            return arr[index];
        }
    }

    // Get the size of the array
    int getSize()
	 {
        return size;
    }
};

int main() {
    // Create a dynamic array with initial size of 3
    DynamicArray arr1(3);

    
    arr1.addElement(10);
    arr1.addElement(20);
    arr1.addElement(30);

    // Access elements
    cout<<"----------------------------------------"<<endl;
    cout << "Element at index 0: " << arr1.getElementAt(0) << endl;
    cout << "Element at index 1: " << arr1.getElementAt(1) << endl;
    cout << "Element at index 2: " << arr1.getElementAt(2) << endl;

    // Create a new array using the copy constructor
    DynamicArray arr2(arr1);

    // Add an element to arr1
    arr1.addElement(40);

    // Access elements in arr2
    cout << "Element at index 3 in arr2: " << arr2.getElementAt(3) << endl;
     cout<<"---------------------------------------"<<endl;

}

