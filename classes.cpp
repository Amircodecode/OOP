#include <iostream>
#include <string>
#include <fstream>

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


// class Myclass {
//     public:

//         Myclass(int size) {
//             this-> Size = size;
//             this->data = new int[size];

//             for (int i = 0; i < size; i++) {
//                 data[i] = i;
//             }
//             cout << "consructor was called"<< this << endl;
//         }

//         Myclass(const Myclass &other) {

//             this -> Size = other.Size;
            
//             this->data = new int[other.Size];

//             for (int i = 0; i < other.Size; i++) {

//                 this->data[i] = other.data[i];
                
//             }
//             cout << "the copy constructor was called" << this << endl;
//         }

//         Myclass & operator = (const Myclass & other) {

//             cout << "the function = was called" << this << endl;

//             this-> Size = other.Size;

//             if(this->data!=nullptr){
//                 delete[] this->data;
//             }

//             this->data = new int[other.Size];

//             for (int i = 0; i < other.Size; i++) {

//                 this->data[i] = other.data[i];
                
//             }

//             return *this;
//         }



//         ~Myclass() {
//             cout << "destructor was called" << this << endl;
//             delete[] data;
//         }

//         void Print() {
//             cout << this->data << endl;
//         }

//         private: 
//             int *data;
//             int Size;
// };


// class Test;

// class Point {
//     private:
//         int x;
//         int y;

//     public:
//         Point() {
//             x = 0;
//             y = 0;
//             cout << "constructor was colled " << this << endl;
//         }
//         Point(int x, int y) {
//             this->x = x;
//             this->y = y;
//             cout << "constructor was colled " << this << endl;
//         }

//         bool operator == (const Point & other) {
//             return this->x == other.x && this->y == other.y;
//         } 

//         bool operator != (const Point & other) {
//             return !(this->x == other.x && this->y == other.y);
//         }

//         bool operator > (const Point & other) {
//             return this->x > other.x && this->y > other.y;
//         }

//         bool operator < (const Point & other) {
//             return this->x < other.x && this->y < other.y;
//         }


//         bool operator >= (const Point & other) {
//             return this->x >= other.x && this->y >= other.y;
//         }

//         bool operator <= (const Point & other) {
//             return this->x <= other.x && this->y <= other.y;
//         }


//         Point operator +(const Point & other) {
//             cout << "the operator + was colled " << this <<  endl;
//             Point temp;
//             temp.x = this->x + other.x;
//             temp.y = this->y + other.y;
//             return temp;
//         }

//         Point & operator ++() {
//             this-> x++;
//             this->y +=1;
 
//             return *this;
//         }

//         Point & operator ++(int value) {
//             cout << "the constructor ++ was called " << endl;
//             Point temp(*this);

//             this -> x++;
//             this -> y++;


//             return temp;
//         }

//         int getX() {
//             return x;
//         }
//         int getY() {
//             return y;
//         }
//         void setX(int x) {                  
//             this->x = x;


//         }void setY(int y) {
//             this->y = y;
//         } 

//         void Print() {
//             cout << "x = " << x << " y = " << y << endl;
//         }

//        friend void GetX(Point &value, Test &value1);


// };


// void Foo(Myclass value) {
//     cout << "the function foo was called" << endl;
// }


// class Test {
//     friend void GetX(Point &value, Test &value1);
//     private:
//         int data = 0;

//     public:
//         void Print() {
//             cout << "data = " << data << endl;
//         }
// };


// void GetX(Point &value, Test &value1) {
//     value.x = 12;
//     value1.data = 67;
// }

// class classes
// {
// private:
//     /* data */
// public:
//     classes(/* args */);
//     ~classes();
//     void Print();
// };

// classes::classes(/* args */)
// {
// }

// classes::~classes()
// {
// }

// void classes::Print()
// {
//     cout << "hello world " << endl;
// }

// int main() {

    // Point a(5, 6);
    // Point b(6, 8);
    // ++a;
    // Point b = a++;
    // cout << b.getX();
    // Test a;
    // cout << a[0];

    // Point a;

    // Point a(6, 9);
    // Test b;
    // // a.Print();   
    // GetX(a, b);
    // a.Print();
    // b.Print();

    // classes a;
    // a.Print();



//     return 0;
// }

// class Human;
// class Apple;

// class Human {
//     public:
//         void TakeApple(Apple & apple);
                
// };



// class Apple {
//     public:
//         Apple(int weight, string color) {
//             this-> weight = weight;
//             this-> color = color;
//         }

//     friend void Human::TakeApple(Apple & apple);

//     private:
//         int weight;
//         string color;

// };

// void Human::TakeApple(Apple & apple) {
//     cout << "take apple the apple weight " << apple.weight << " the apple color " << apple.color << endl;
// }


// int main() {

//     Apple apple(12, "red");

//     Human human;
//     human.TakeApple(apple);
//     return 0;
// }

// class Human;
// class Apple;

// class Human {
//     public:
//         void PrintTest(Apple & apple);
// };

// class Apple {
//     public: 
//         friend Human;

//         Apple(int weight, string color) {
//             this-> weight = weight;
//             this-> color = color;
//         }

//         void Print() {
//             cout << "weight = " << weight << " color = " << color << endl;
//         }
//     private: 
//         int weight;
//         string color;
// }; 

// void Human::PrintTest(Apple & apple) {
//     cout << "weight = " << apple.weight << " color = " << apple.color << endl;
// }

// int main() {
//     Apple apple(120, "red");
//     Human human;
//     human.PrintTest(apple);
  
//     return 0;
// }

// class Apple {
//     public:
//         static int count;
//         Apple(int weight, string color) {
//             this-> weight = weight;
//             this-> color = color;
//             count++;  
//             id = count;  
//         }

//         int GetId() {
//             return id;
//         }
//     private:


//         int weight;
//         string color;
//         int id;
// };

// int Apple::count = 0;

// int main() {
//     Apple apple(15, "red");
//     Apple apple2(29, "yellow");

//     // cout << Apple::count << endl;

//     cout << apple.GetId();
//     cout << apple2.GetId();

//     return 0;
// }

// class Image {
//     public:
//         void GetImageInfo() {
//             for (int i = 0; i < 4; i++) {
//                 cout << "#" << i << pixels[i].GetInfo() << endl;
//             }
//         }

            // class Pixel {
            //     public:
            //         static const int size = 5;
            //         Pixel() {
            //             r = g = b = 0;
            //         }
            //         Pixel(int r, int g, int b) {
            //             this-> r = r;
            //             this-> g = g;
            //             this-> b = b;
            //         }
            //         string GetInfo() {
            //             return " r = " + to_string(r) + " g = " + to_string(g) + " b = " + to_string(b);
            //         }
            //     private:
                
            //         int r;
            //         int g;
            //         int b;
            // };

    
//     private:
//         Pixel pixels[4] {
//             Pixel(0, 4, 3),
//             Pixel(5, 6, 7),
//             Pixel(3, 5, 7),
//             Pixel(12, 45, 65)
//         };

// };


// int main() {
    // Image image;
    // image.GetImageInfo();

    // Image::Pixel pixel(12, 34, 56);
    // cout << pixel.GetInfo();
    // int length = 5;
    // Pixel *arr = new Pixel[length];

    // arr[0] = Pixel(23, 23, 45);
    // cout << arr[0].GetInfo() << endl;

    
    // return 0;
// }

// class Cup {
//     public:
//         string GetColor() {
//             return color;
//         }
//     private:
//         string color = "red";
// };

// class Human {
//     public:
//         void thinking() {
//             brain.realThinking();
//         }

//         void InspectBrain() {
//             cout << "my cup is " << cup.GetColor() << " color " << endl;
//         }
    
//     private:
//         class Brain {
//             public:
//                 void realThinking() {
//                     cout << "i am thinking " << endl;
//                 }

//         };

//         Brain brain;
//         Cup cup;
// };

// int main() {
//     Human human;
//     human.thinking();

//     human.InspectBrain();


//     return 0;
// }














// class Human {
//     public:
//         // Human(string name, int age) {
//         //     this-> name = name;
//         //     this-> age = age;
//         // };
//         void GetName() {
//             cout << "the name is " << name << endl;
//         }
//         void setName(string name) {
//             this-> name = name;
//         }
//         void GetAge() {
//             cout << "the age is " << age << endl;
//         }
//         void setAge(int age) {
//             this-> age = age;
//         }
//     private:
//         string name;
//         int age;
// };

// class Student : public Human {
//     public:
//         void setGroup(string group) {
//             this->group = group;
//         }
//         string getGroup() {
//             return group;
//         }   
//     private:
//         string group;

// };

// class Student2 : public Student {
//     public:
//         void message() {
//             cout << "i learn more rare than the usual student " << endl;
//         }
//     private:
//         string group;

// };

// int main() {

//     Student st;
//     st.setName("amir nazarov");
//     st.GetName();
//     Student2 st2;
//     st2.setAge(23);
//     st2.GetAge();
    

//     return 0;
// }



// class A {
//     // public:
//     //     string msgOne = "msg one";
//     // private: 
//     //     string msgTwo = "msg two";
//     // protected:
//     //     string msgThree = "msg three";
//     public:
//         A() {
//             cout << "a " << endl;
//         }
//         ~A() {
//         cout << "a" << endl;
//     }


    
// };

// class B : public A {
//     public:
//         // void returnMsgOne() {
//         //     cout << msgOne << endl;
//         // }

//         B() {
//             cout << "b " << endl;
//         }
//         ~B() {
//         cout << "b" << endl;
//     }
// };

// class C : public B {
//     public: 
//     C() {
//         cout << "c " << endl;
//     }
//     ~C() {
//         cout << "c" << endl;
//     }
// };

// int main() {
//     C c;

//     cout << endl << endl;

//     return 0;
// }




// class A {
//     public:
//         A() {
//             msg = "amir nazarov";
//         }

//         A(string msg) {
//             this-> msg = msg;
//         }

//         A(string msg, int a) {
//             this-> msg = msg;
//             this-> age = a;

//         }
        
//         void PringMsg() {
//             cout << msg << " " << age << endl;
            
//         }

//     private:
//         string msg;
//         int age = 18;

// };

// class B : public A {

//     public:
//     B():A("baxa", 20) {

//     }

//     private:


// };
// int main() {

//     // B b;
//     // b.PringMsg();


//     return 0;
// }




// class Gun {
//     public:
//         virtual void Shoot() {
//             cout << "bax bax" << endl;
//         }
// };

// class Pushka : public Gun {
//     public:
//         void Shoot() override {
//             cout << "shaha shaha" << endl;
//         }
// };

// class Bomba : public Gun {
//     public:
//         void Shoot() override {
//             cout << "aaaaaaaaaaaaaaaaaaa" << endl;
//         }
// };


// class User {
//     public:
//         void Shoot(Gun *gun) {
//             gun->Shoot();
//         }
// };


// int main() {

//     Bomba bomba;
//     Gun gun;
//     Pushka pushka;

//     User user;

//     user.Shoot(&bomba);
//     user.Shoot(&gun);
//     user.Shoot(&pushka);



//     return 0;
// }






// class Weapon {
//     public:
//         virtual void Shoot() = 0;
// };
// class Gun : public Weapon {
//     public: 
//         void Shoot() override {
//             cout << "gun" << endl;
//         }
// };
// class Pushka : public Gun {
//     public:
//         void Shoot() override {
//             cout << "pushka pushka" << endl;
//         }
// };

// class AK47 : public Gun {
//     public:
//         void Shoot() override {
//             cout << "AK47" << endl;
//         }
// };

// class Bobma : public Weapon {
//     public:
//         void Shoot() override {
//             cout << "aaaaaaaaaaaaaaaaaa" << endl;
//         }
// };

// class Player {
//     public:
//         void Shoot(Weapon *weapon) {
//             weapon->Shoot();
//         }
// };


// int main() {
//     Gun gun;
//     Pushka pushka;
//     AK47 ak47;
//     Bobma bomba;

//     Player player;
//     player.Shoot(&bomba);
//     player.Shoot(&gun);
//     player.Shoot(&pushka);
//     player.Shoot(&ak47);



//     return 0;
// }


// class A {
//     public:
//         A() {

//         }

//         virtual ~A() = 0;
// };

// A::~A() {};

// class B : public A {
//     public:
//         B() {

//         }

//         ~B() override {

//         }
// };

// int main() {
//     A *bprt = new B;
//     delete bprt;


//     return 0;
// }






// class Human {
//     public:
//         Human(string name) {
//             this->name = age;
//             this->age = 0;
//             this->weight = 0;
//         }

//         Human(string name, int age):Human(name) {
//             this->age = age;
//         }

//         Human(string name, int age, int weight):Human(name,age) {
//             this->weight = weight;
//         }

//     private:
//         string name;
//         int age;
//         int weight;

// };
// int main() {
//     Human h("amir", 18, 75);



//     return 0;
// }










// class Msg {
//     public:
//         Msg(string msg) {
//             this->msg = msg;
//         }

//         virtual string GetMsg() {
//             return msg;
//         }
//     private:
//         string msg;

// };

// class Msg2 : public Msg {
//     public:
//         Msg2(string msg):Msg(msg) {}

//         string GetMsg() override {
//             return "6 " + ::Msg::GetMsg() + " 9";
//         }

// };

// class Msg3 : public Msg {
//     public: 
//         Msg3(string msg):Msg(msg) {

//         }

//         string GetMsg() override {
//             return "🥶 " + ::Msg::GetMsg() + " 🥶";
//         }
// };

// class Printer {
//     public: 
//         void PrintMsg(Msg *msg) {
//             cout << msg->GetMsg() << endl;
//         }
// };


// int main() {

//     Msg3 ms("amir");
//     Printer p;
//     p.PrintMsg(&ms);
//     return 0;
// }






// class Car {

//     public:
//         Car() {
//             cout << "trip started" << endl;
//         }
//         void ker() {
//             cout << "car" << endl;
//         }
//         ~Car() {
//             cout << "stop the car" << endl;
//         }
// };

// class Airplane {
//     public: 
//         Airplane() {
//             cout << "fly started" << endl;
//         }
//         void ker() {
//             cout << "airplane" << endl;
//         }

//         ~Airplane() {
//             cout << "fly ended" << endl;
//         }
// };

// class Baxa :public Car, public Airplane {
//     public: 

//         Baxa() {
//             cout << "baxa was created" << endl;
//         }
//         void shaha() {
//             cout << "shaha" << endl;
//         }

//         ~Baxa() {
//             cout << "baxa was delleted" << endl;
//         }


// };


// int main() {
//     Baxa baxa;
//     cout << endl << endl;  

//     ((Car)baxa).ker();         

//     return 0;
// }














// class IBycycle {
//     public:
//         void virtual pedal() = 0;
//         void virtual steer() = 0;
// };

// class best : public IBycycle {
//     public:
//         void pedal() override {
//             cout << "go go go pedal" << endl;
//         }
//         void steer() override {
//             cout << "go go steer" << endl;
//         }
// };

// class best2 : public IBycycle {
//     public: 
//         void pedal() override {
//             cout << "go go best 2" << endl;
//         }
//         void steer() override {
//             cout << "go go best 2 steer" << endl;
//         } 
// };


// class Human {
//     public: 
//         void use(IBycycle &bycycle) {
//             bycycle.pedal();
//             bycycle.steer();
//         }
// };



// int main() {
//     Human h;
//     best Best;
//     best2 Best2;

//     h.use(Best);

//     cout << endl << endl;

//     h.use(Best2);


//     return 0;
// }







// class Component {
//     public:
//         Component(string companyName) {
//             cout << "component" << endl;
//             this-> companyName = companyName;
//         }
//         string companyName;
// };

// class GPU : public Component {
//     public: 
//         GPU(string companyName): Component(companyName) {
//             cout << "gpu" << endl;
//         }
// };


// class Prossesor : public Component {
//     public: 
//         Prossesor(string companyName) : Component(companyName) {
//             cout << "prossesor" << endl;
//         }
// };

// class GraphicCard : public GPU, public Prossesor{
//     public: 
//         GraphicCard(string GPUName, string ProssesorName) : GPU(GPUName),  Prossesor(ProssesorName) {
//             cout << "graphicCard" << endl;
//         }
// };

// int main() {
//     GraphicCard card("amir", "nazarov");
    
//     return 0;
// }








// class main {
//     public: 
//         main() {
//             cout << "main" << endl;
//         }
// };

// class One : public virtual main {
//     public: 
//         One() {
//             cout << "one" << endl;
//         }

// };

// class Two : public virtual main {
//     public: 
//         Two() {
//             cout << "two" << endl;
//         }
// };

// class Three : public One, public Two {
//     public: 
//         Three() {
//             cout << "three" << endl;
//         }
// };

// int main() {
//     Three three;




//     return 0;
// }


int main() {


    // ofstream amir;

    // string path = "shaha.txt";

    // amir.open(path, ofstream::app);

    // if (!amir.is_open()) {
    //     cout << "error";
    // }
    // else {
    //     for (int i = 0; i < 4; i++) {
    //         cout << "enter the number: ";
    //         int a;
    //         cin >> a;
    //         amir << a;
    //         amir << "\n";
    //     }
    // }



    ifstream amir;

    string path = "shaha.txt";

    amir.open(path);

    if(!amir.is_open()) {
        cout << "the error";
    }
    else {

        cout << "sussess";
        
        // char ch;

        // while (amir.get(ch)) {
        //     cout << ch;
        // }

        string str;

        while(!amir.eof()) {
                str = "";
                // amir >> str;

                getline(amir, str);

                cout << str << endl;    
        }
    }

    amir.close();
    return 0;
}