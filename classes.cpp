#include <iostream>
#include <string>
using namespace std;

// class Human {

//     public:
//         int age;
//         int weight;
//         string name;
    
//         void Print() {

//             cout << "name: " << name << 
//                     " weight " << weight <<     
//                     " age " << age << endl;

//         }

// };


// int main() {
//     Human firstHuman;

//     firstHuman.age = 18;
//     firstHuman.name = "Amir";
//     firstHuman.weight = 75;

//     // cout << firstHuman.age << firstHuman.name << firstHuman.weight << endl;

//     firstHuman.Print();

//     return 0;
// }

// class Point {
//     public:
//         int x;
//         int y;

//         void Print() {
//             cout << "y = " << y << " x = " << x << " z = " << z << endl;

//             PrintY();
//         }
    
//     private:
//         int z;

//         void PrintY() {
//             cout << " PrintY " << "z = " << z << endl;
//         }
// };

// int main() {
//     Point a;
//     a.Print();


//     return 0;
// }

// class Point {
//     private:
//         int x;
//         int y;

//     public:
//         int GetY() {
//             return y;
//         }
//         int GetX() {
//             return x;
//         }

//         void SetY(int valueY) {
//             y = valueY;
//         }
//         void SetX(int valueX) {
//             x = valueX;
//         }

//         void Print () {
//             cout << "x = " << x << " y = " << y << endl;
//         }
// };

// int main() {

//     Point a;
//     a.SetX(69);
//     a.SetY(18);
//     int resultY = a.GetY();
//     int resultX = a.GetX();
//     // a.Print();
    
//     cout << " x = " << resultX << endl;
//     cout << " y = " << resultY << endl;

//     return 0;
// }

// class CoffeGrinder {
//     private:
//         bool checkVoltage() {
//             return false;
//         } 

//     public:
//         void Start() {
//             bool voltageIsNormal = checkVoltage();

//             if (voltageIsNormal) {
//                 cout << "started to work " << endl;
//             }
//             else {
//                 cout << "coffee will not be you " << endl;
//             }

//         }
// };

// int main() {
//     CoffeGrinder a;
//     a.Start();
//     return 0;
// }


// class Point {
   
//         int x;
//         int y;

//     public:

//         // Point(int valueX, int valueY) {
//         //     x = valueX;
//         //     y = valueY;
//         // }


//         int GetY() {
//             return y;
//         }
//         int GetX() {
//             return x;
//         }

//         void SetY(int valueY) {
//             y = valueY;
//         }
//         void SetX(int valueX) {
//             x = valueX;
//         }

//         void Print () {
//             cout << "x = " << x << " y = " << y << endl;
//         }
// };

// int main() {
//     // Point a(18, 19);
//     // Point b(23, 76);
//     // a.Print();
//     // b.Print();
//     Point a;
    

//     return 0;
// }

// the class work 
// class item {
//     private:
//         int number;
//         float cost;

//         void read() {

//             cout << "good morning" << endl;

//         }

//     public: 
//         void getdata(int a, float b);
//         void putDate() {
//             read();
//             cout << "number = " << number << endl;
//             cout << "cost = " << cost << endl;
//         }
// };

// void item::getdata(int a, float b) {
//     number = a;
//     cost = b;
// }

// int main() {
//     item x;
//     cout << "object x = " << endl;
//     x.getdata(18, 19);
//     x.putDate();
//     return 0;
// }

// class classone {
//     private:
//         int num;

//     public:
//         void set(int x) {
//             num = x;
//         }
//         int get() {

//             return num;
//         }

// };

// int main() {
//     classone one;
//     classone two;

//     one.set(15);
//     two.set(18);
//     cout << "one = " << one.get() << endl;
//     cout << "two = " << two.get() << endl;

//     cin.ignore();
//     cin.clear();

//     return 0;
// }

// class Point {
//     private:
//         int x;
//         int  y;

//     public: 
//         Point() {
//             x = 0;
//             y = 0;
//         }
//         // constructor by default 

//         Point(int valueOfX, int valueOfY) {
//             x = valueOfX;
//             y = valueOfY;
//         }
//         // constructor with parametres 


//         Point(int valuex, bool boolean) {
//             x = valuex;
//             y = 1;
//         }
//         int GetX() {
//             return x;
//         }
//         int GetY() {
//             return y;
//         }
//         void SetX(int valueX) {
//             x = valueX;
//         }
//         void SetY(int valueY) {
//             y = valueY;
//         }
//         void Print() {
//             cout << "x = " << x << " y = " << y << endl;
//         }
// };

// class MyClass {
//     int data;
//     public: 
//         MyClass(int value) {
//             data = value;
//             cout << "constructor" << endl;
//         }
        
//         ~MyClass() {
            
//             cout << "destructor" << endl;
//         }
// };



// int main() {
    // Point a;
    // a.Print();
    // Point b(18,19);
    // b.Print();

    // MyClass a(34);




//     return 0;
// }

// class Rectangle {
//     private: 
//         int width;
//         int  height;
    
//     public:
//         Rectangle() {
//             width = 1;
//             height = 1;
//         }

//         Rectangle(int Width, int Height) {
//             width = Width;
//             height = Height;
//         }

//         int getArea() {
//             return width * height;
//         }
//         int getPerimeter() {
//             return (width + height) * 2;
//         }
//         void setWidth(int w) {
//             width = w;
//         }
//         void setHeight(int h) {
//             height = h;
//         }
// };


// int main() {

//     Rectangle firstRectange(3, 4);
//     firstRectange.setWidth(7);
//     firstRectange.setHeight(6);
//     cout << firstRectange.getPerimeter() << endl;
//     cout << firstRectange.getArea() << endl;

//     return 0;
// }


// class BankAccount {
//     private:
//         string accoutnNumber;
//         int balance;

//     public:
//         BankAccount(string accNum, int initialBalance) {
//             accoutnNumber = accNum;
//             balance = initialBalance;
//         }

//         void deposit(double amount) {
//             balance += amount;
//         }
//         void dispalyAccoutInfo() {
//             cout << "account number: " << accoutnNumber << endl
//                  << " balance: " << balance << endl;
//         }
//         bool withdraw(double amount) {
//             balance -= amount;
//         }
// };

// int main() {
//     BankAccount card("sdfalskfj", 100000);
//     return 0;
// }


// class Point {

//     private: 
//         int x;
//         int y;
//     public: 
//         Point() {
//             x = 0;
//             y = 0;
            
//         }

//         Point (int valueX, int valueY) {
//             x = valueX;
//             y = valueY;
//         }

//         int getX() {
//             return x;
//         }
//         int getY() {
//             return y;
//         }
//         void setX(int x) {
//             this-> x = x;
//         }
//         void setY(int y) {
//             this-> y = y;
//         }
//         void Print() {
//             cout << "x = " << x << " y = " << endl;
//         }

// };

// int main() {
//     Point a;
//     // a.setX(5);
//     // a.Print();


//     return 0;
// }

// class Point {
//     private: 
//         int x;
//         int y;

//     public:
//         Point() {
//             x = 0;
//             y = 0;
//         }

//         Point(int x, int y) {
//             this -> x = x;
//             this -> y = y;
//         }
//         void SetX(int x) {
//             this -> x = x;
//         }
//         void setY(int y) {
//             this -> y = y;
//         }
//         int getX() {
//             return x;
//         }
//         int getY() {
//             return y;
//         }
//         void Print() {
//             cout << "x = " << x << " y = " << y << endl;
//         }
// };

// int main() {
//     Point a;
//     a.SetX(56);
//     a.Print();


//     return 0;
// }

// int a = 23;

// class Myclass {
//     public:
//         int *data;

//         Myclass(int size) {
//             this->Size = size;
//             this->data = new int[size];

//             for (int i = 0; i < size; i++) {
//                 data[i] = i;
//             }

//             cout << "the constructor was called "  << this << endl;
//         }   


        

//         Myclass(const Myclass &other) {
//             cout << "the constructor copy was called  "  << this << endl;
//             this->Size = other.Size;

//             this->data = new int[other.Size];
//             for (int i = 0; i < Size; i++) {
//                 this->data[i] = other.data[i];
//             }   

//         }

//         Myclass & operator = (const Myclass &other) {
//             cout << "the = operator is called" << this << endl;

//             this->Size = other.Size;

//             if (this -> data!=nullptr) {
//                 delete this-> data;
//             }
            
//             this->data = new int[other.Size];

//             for (int i = 0; i < Size; i++) {

//                 this->data[i] = other.data[i];

//             }   


//             return *this;

//         } 

        
//         ~Myclass() {
//             cout << "destructed was called " << this << endl;
//             delete[] data;
//         }



//         private: 
//             int Size;


// };

// void Foo(Myclass value) {
//     cout << "foo was called" << endl;
// }

// Myclass Foo2() {
//     cout << "foo2 was called" << endl;
//     Myclass temp(2);

//     return temp;
// }


class Myclass {
    public:

        Myclass(int size) {
            this-> Size = size;
            this->data = new int[size];

            for (int i = 0; i < size; i++) {
                data[i] = i;
            }
            cout << "consructor was called"<< this << endl;
        }

        Myclass(const Myclass &other) {
            this->data = new int[other.Size];

            for (int i = 0; i < other.Size; i++) {

                this->data[i] = other.data[i];
                
            }
            cout << "the copy destructor was called" << this << endl;
        }


        ~Myclass() {
            cout << "destructor was called" << this << endl;
            delete[] data;
        }

        void Print() {
            cout << this->data << endl;
        }

        private: 
            int *data;
            int Size;
};

void Foo(Myclass value) {
    cout << "the function foo was called" << endl;
}


int main() {

    Myclass a(6);
    Myclass b(5);




    return 0;
}