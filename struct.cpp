// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

struct Student{
    int nim;
    string name;
    int age;
    string major;
};

int main() {
    // Write C++ code here

    // Declare struct
    Student illiyyin;
    
    // Input for using struct
    
    cout << "Enter your nim : ";
    cin >> illiyyin.nim;
    cout << "Enter your name : ";
    cin >> illiyyin.name;
    cout << "Enter your age : ";
    cin >> illiyyin.age;
    cout << "Enter your major : ";
    cin >> illiyyin.major;
    
    // Spacing
    cout << "=====================\n";
    
    // Output
    cout << "Your nim is : " << illiyyin.nim << endl;
    cout << "Your name is : " << illiyyin.name << endl;
    cout << "Your age is : " << illiyyin.age << endl;
    cout << "Your major is : " << illiyyin.major << endl;
    
    
    return 0;
}
