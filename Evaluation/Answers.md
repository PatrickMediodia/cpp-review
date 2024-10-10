```
// Online C++ compiler to run C++ program online
#include <iostream>

class DynamicArray {
    public:
        // constructor
        DynamicArray(int size) {
            int* intArr_ = new int[size];
        }

        // destructor
        ~DynamicArray() {
            delete[] intArr_;
        }

        void printArray() {
            
        }

    private:
        int* intArr_;
};

int main() {
    DynamicArray dynamicArray(5);

    return 0;
}
```