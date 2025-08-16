#include<iostream> 
using namespace std; 

// Define a Method Outside the Class ===========================================
class MyClass {        // The class
public:              // Access specifier
    void myMethod();   // Method/function declaration
};

// Method/function definition outside the class
void MyClass::myMethod() {
    cout << "Hello World!";
}

// ==============================================================================


// Inheritance ==================================================================
// protected = like private, but child class can also use it
// public   -> everyone can see and use
// private  -> only inside the same class
// protected -> inside class + child class (not outside)

class Animal {
protected : 
    string name; 
    int age; 

public : 
    Animal(string a , int  b ) {
        name = a; 
        age = b; 

    }
    void displayInfo() {
        cout << name << endl; 
        cout << age << endl; 
        cout << "===================================" << endl; 
    }

    // this function will be override in child classes
    virtual void makeSound() {
        cout << "Animal Makes Sound" << endl; 
    }
};

class Dog : public Animal {
private : 
    string breed; 
public : 

    Dog(string a, int b, string c) : Animal(a,b) {
        breed = c; 
    }

    void makeSound() override {
        cout << "Dog says : Woof Woof" << endl; 
    }
};

int main() {
    Dog dog1("Nemo" , 5 , "hi");
    dog1.displayInfo(); 



}