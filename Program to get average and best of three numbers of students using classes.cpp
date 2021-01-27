#include <iostream>
using namespace std;

/*

    WAP To create class called students with properties id, name, semester and 3 test marks
    behaviours of the students
    1.) Read data
    2.) Cal avg of best 2 test marks
    3.) Displaying the information

*/

class Student{
private:
    string id, name;
    int sem, t1, t2, t3;
    double avg;
public:
    Student(){
        read();
    }

    void read(){
        cout << "Enter id, name, sem, t1, t2, t3: " << endl;
        cin >> id >> name >> sem >> t1 >> t2 >> t3;
    }

    void best_marks(){
        avg = 0;
        if(t1 >= t2 && t1 >= t3){
            if(t2 >= t3){
                avg = (t1+t2)/2;
            }else{
               avg = (t1+t3)/2;
            }
        }else if(t2 >= t1 && t2 >= t3){
            if(t1 >= t3){
                avg = (t2+t1)/2;
            }else{
               avg = (t2+t3)/2;
            }
        }else{
            if(t2>=t1){
                avg = (t3+t2)/2;
            }else{
                avg = (t3+t1)/2;
            }
        }
    }

    void display(){
        best_marks();
        cout << "\nDisplay\n\nId:" << id << "\nName:" << name << "\nSem: " << sem <<  "\nt1: " << t1 << "\nt2: " << t2 <<  "\nt3: " << t3 << "\nAvg best of two: " << avg << endl;
    }

};

int main(){

    Student s;

    s.display();

    return 0;

}
