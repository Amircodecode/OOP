#include <iostream>
#include <vector>

using namespace std;

class ArrClass {
public:
    ArrClass(int initialSize) {
        size = initialSize;
        arr = new int[size];
        for (int i = 0; i < size; ++i) {
            cout << "Enter element " << i + 1 << ": ";
            cin >> arr[i];
        }
    }

    ~ArrClass() {
        delete[] arr;
        cout << "Destructor called. Array cleared." << endl;
    }

    void PrintArr() {
        cout << "Array elements:" << endl;
        for (int i = 0; i < size; ++i) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    void AddElement(int newElement) {
        int* temp = new int[size + 1]; 
        for (int i = 0; i < size; ++i) {
            temp[i] = arr[i]; 
        }
        temp[size] = newElement; 
        delete[] arr; 
        arr = temp; 
        size = size + 1; 
    }

    void DeleteElement(int index) {
        if (index < 0 || index >= size) {
            cout << "Invalid index." << endl;
            return;
        }

        int* temp = new int[size - 1]; 
        for (int i = 0; i < index; ++i) {
            temp[i] = arr[i]; 
        }

        for (int i = index; i < size - 1; ++i) {
            temp[i] = arr[i + 1]; 
        }
        delete[] arr; 
        arr = temp; 
        size--; 
    }

    void ChangeElement(int index, int newValue) {
        if (index < 0 || index >= size) {
            cout << "Invalid index." << endl;
            return;
        }
        arr[index] = newValue;
    }

private:
    int* arr;
    int size;
};

int main() {
    int initialSize;
    cout << "Enter initial array size: ";
    cin >> initialSize;
    ArrClass arr1(initialSize);

    int choice;
    do {
        cout << "\nChoose an operation:" << endl;
        cout << "1. Print array" << endl;
        cout << "2. Add element" << endl;
        cout << "3. Delete element" << endl;
        cout << "4. Change element" << endl;
        cout << "0. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                arr1.PrintArr();
                break;
            case 2: {
                int newElement;
                cout << "Enter the new element: ";
                cin >> newElement;
                arr1.AddElement(newElement);
                break;
            }
            case 3: {
                int index;
                cout << "Enter the index of the element to delete: ";
                cin >> index;
                arr1.DeleteElement(index);
                break;
            }
            case 4: {
                int index, newValue;
                cout << "Enter the index of the element to change: ";
                cin >> index;
                cout << "Enter the new value: ";
                cin >> newValue;
                arr1.ChangeElement(index, newValue);
                break;
            }
            case 0:
                break;
            default:
                cout << "Invalid choice." << endl;
        }
    } while (choice != 0);

    return 0;
}