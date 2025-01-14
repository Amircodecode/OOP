#include <iostream>
using namespace std;

class Myclass {
    public:
        Myclass(int size) {
            this->arr = new int[size];
            cout << "enter " << size << " elements " << endl;
            for (int i = 0; i < size; i++) {
                cout << "enter " << i + 1 << " number: ";
                cin >> arr[i];
            }
            for(int i = 0; i < size; i++) {
                cout << arr[i];
            }
        }
    private:
        int *arr;


};


int main() {

    Myclass arr1(2);

    return 0;
}