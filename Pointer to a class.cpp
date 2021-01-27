#include <iostream>
using namespace std;

class players{
    
  private:
    char name[50], designation[50];
    int jersey_no, age;
    
  public:
    void read(){
        cout << "Enter Name, Designation, Jersey No, Age Of Cricket Player:\n";
        cin >> name >> designation >> jersey_no >> age;
    }
    
    void display(){
        cout << "\nCricket Player Name: " << name << "\nDesignation: " << designation << "\nJersey No: " << jersey_no << "\nAge: " << age << endl;
    }
};

int main(){
    
    players p, *pl;
    pl = &p;
    
    pl->read();
    
    pl->display();
    
    return 0;
    
}











