#include <iostream>
using namespace std;

class student{
    
  private:
    char name[50], id[50];
    int age;
    
  public:
    void read(){
        cout << "Enter ID, Name, Age Of Student:\n";
        cin >> id >> name >> age;
    }
    
    void display(){
        cout << "\nStudent ID: " << id << "\nName: " << name << "\nAge: " << age << endl;
    }
};

int main(){
    
    student s[50];
    int i;
    
    for(i=0; i<50; i++){
        cout << "Enter student " << i+1 << " data: " << endl;
        s[i].read();
    }
    
    cout << endl;
    
    for(i=0; i<50; i++){
        cout << "Enter student " << i+1 << " data: " << endl;
        s[i].display();
    }
    
    return 0;
    
}











