#include <iostream>
using namespace std;

class Myclass {
    public:
        Myclass(int size) {
            this->Size = size;
            this->arr = new int[size];
            cout << "enter " << size << " elements " << endl;
            for (int i = 0; i < size; i++) {
                cout << "enter " << i + 1 << " number: ";
                cin >> arr[i];
            }
            for(int i = 0; i < size; i++) {
                cout << arr[i] << endl;
            }
        }

        void PrintArr() {
            cout << "the array consist of " << Size << " elements " << endl;
            for (int i = 0; i < Size; i++) {
                cout << arr[i] << endl;
            }
        }

        ~Myclass() {
            cout << "the destructor was called " << this << endl;
            delete[] arr;
            cout << "the array was cleared" << endl;
        }
    private:
        int *arr;
        int Size;


};


int main() {
    int size;
    cout << "enter the size: ";
    cin >> size;
    Myclass arr1(size);
    int operation;
    do {
        cout << "you can " << endl <<
                "1. modify the arr" << endl <<
                "2. modify the arr" << endl << 
                "if you want to exit enter 0" << endl;
        cout << ">";
        cin >> operation;
            

    } while(operation == 0);

    return 0;
}