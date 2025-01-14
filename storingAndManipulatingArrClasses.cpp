#include <iostream>
using namespace std;

class ArrClass {
    public:
        ArrClass(int size) {
            this->Size = size;
            this->arr = new int[size];
            cout << "enter " << size << " elements " << endl;
            for (int i = 0; i < size; i++) {
                cout << "enter " << i + 1 << " number: ";
                cin >> arr[i];
            }
        }

        void PrintArr() {
            cout << "the array consist of " << Size << " elements " << endl;
            for (int i = 0; i < Size; i++) {
                cout << "the " << i + 1 << " element is: " << arr[i] << endl;
            }
        }

        void changeNum(int index, int changedNum) {
            index = index - 1;
            if (index >= 0 && index <= Size) {
                arr[index] = changedNum;
            }


        }
        ~ArrClass() {
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
    ArrClass arr1(size);
    bool stop = false;
    int operation;
    do {
        cout << "You can " << endl <<
                "1. print the array" << endl <<
                "2. change the number" << endl << 
                "if you want to exit enter 0" << endl;
        cout << ">";
        cin >> operation;
        if (operation == 0) {
            stop == true;
        }

        if (operation == 1) {
            arr1.PrintArr();
        }

        if (operation == 2) {
            arr1.PrintArr();
            int index;
            cout << "which eleent you want to change: ";
            cin >> index;
            int changedNum;
            cout << "to what number ? ";
            cin >> changedNum;
            arr1.changeNum(index, changedNum);
        }
            

    } while((stop == true));

  
    

    return 0;
}