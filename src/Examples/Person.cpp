#include <iostream>
#include <string>
using namespace std;

class Person 
{
    public:
        Person();                       // Constructor of the class
        void print();
        void setName(string x) {
            name = x;
        }
        string getName() {
            return name;
        }
        void myPrint();
        ~Person();                      //Destructor of the class
    protected:
        int age;
    private:
        string name;                    // Can't be accessed outside of the class without an accessor
};


Person::Person() {
    cout <<" Hey ";
}

Person::~Person() {
    cout <<" Bye! ";
}

//Define print() for the Person class using `::`
void Person::print() {
    cout <<"\n\n ... \n\n"<<endl;
}

int main() {
    
    // Default class usage
    Person man;
    man.setName("John");
    cout << man.getName();

    // Using pointers
    Person girl;
    Person *girlPointer = &girl; // creating a pointer of the girl object
    
    girlPointer->setName("Alice"); // `->` to use the object's method from pointer
    cout << girl.getName();
    girlPointer->print();
    
    return 0;
}