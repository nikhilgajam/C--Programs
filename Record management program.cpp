#include <iostream>
#include <fstream>

using namespace std;

class Record{

public:
    void add_record(){

        ifstream r("Record.csv");
        cout << endl;

        string rollno, name, age;
        cout << "Enter Roll No: ";
        fflush(stdin);   // To clear the standard input buffer
        getline(cin, rollno);

        cout << "Enter Name: ";
        getline(cin, name);
        cout << "Enter Age: ";
        getline(cin, age);

        if(r.good()){

            // Record already exists

            ofstream w("Record.csv", ios::app);
            w << rollno << ", " << name << ", " << age << endl;
            w.close();

        }else{

            // Record doesn't exists

            ofstream w("Record.csv", ios::app);
            w << "Roll No, Name, Age" << endl;
            w << rollno << ", " << name << ", " << age << endl;
            w.close();

        }

        r.close();

    }

    void delete_record(){

        ifstream r("Record.csv");
        cout << endl ;
        string rollno, roll_no, name, age;
        ofstream temp_w("Temp.csv", ios::trunc);
        string str, temp;
        int count_num=0;

        if(r.good()){

            cout << "Enter Roll No To Delete: ";
            fflush(stdin);
            getline(cin, rollno);

            while(r.good()){

                getline(r, str);
                temp = str.substr(0, str.find(","));
                if(rollno == temp){

                    cout << "Existing Record: \n";
                    cout << "Roll No, Name, Age" << endl;
                    cout << str << endl;
                    count_num++;

                }else{
                    if(str != ""){
                        temp_w << str << endl;
                    }
                }


            }

            if(count_num == 0){
                cout << "\nRecord with roll no " << rollno << " does not exist" << endl;
            }

        }else{

            cout << "\nRecord Doesn't Exist" << endl;

        }

        if(count_num > 0){
            ifstream temp_r("Temp.csv");
            ofstream w("Record.csv", ios::trunc);

            while(temp_r.good()){
                getline(temp_r, str);
                if(str != "")
                    w << str << endl;
            }

            temp_r.close();
            w.close();

            cout << "\nRecord Deleted Successfully" << endl;

        }

        temp_w.close();
        r.close();
        remove("Temp.csv");

    }

    void modify_record(){

        ifstream r("Record.csv");
        cout << endl;
        string rollno, roll_no, name, age;
        ofstream temp_w("Temp.csv", ios::trunc);
        string str, temp;
        int count_num=0;

        if(r.good()){

            cout << "Enter Roll No To Modify: ";
            fflush(stdin);
            getline(cin, rollno);

            while(r.good()){

                getline(r, str);
                temp = str.substr(0, str.find(","));
                if(rollno == temp){

                    cout << "Existing Record: \n";
                    cout << "Roll No, Name, Age" << endl;
                    cout << str << endl;
                    count_num++;

                    cout << "\nEnter New Roll No: ";
                    getline(cin, roll_no);
                    cout << "Enter New Name: ";
                    getline(cin, name);
                    cout << "Enter New Age: ";
                    getline(cin, age);

                    temp_w << roll_no << ", " << name << ", " << age << endl;

                }else{
                    if(str != ""){
                        temp_w << str << endl;
                    }
                }


            }

            if(count_num == 0){
                cout << "\nRecord with roll no " << rollno << " does not exist" << endl;
            }

        }else{
            cout << "\nRecord Doesn't Exist" << endl;
        }

        if(count_num > 0){
            ifstream temp_r("Temp.csv");
            ofstream w("Record.csv", ios::trunc);

            while(temp_r.good()){
                getline(temp_r, str);
                if(str != "")
                    w << str << endl;
            }

            temp_r.close();
            w.close();
            cout << "\nRecord Modified Successfully" << endl;

        }

        temp_w.close();
        r.close();
        remove("Temp.csv");

    }

    void search_record(){

        ifstream r("Record.csv");
        cout << endl;

        string str, rollno, temp;
        int count_num=0;

        if(r.good()){

            cout << "Enter Roll No To Search: ";
            fflush(stdin);
            getline(cin, rollno);

            while(r.good()){

                getline(r, str);
                temp = str.substr(0, str.find(","));

                if(rollno == temp){

                    cout << "Roll No, Name, Age" << endl;
                    cout << str << endl;
                    count_num++;

                    }
                }

                if(count_num == 0){
                    cout << "\nRecord with roll no " << rollno << " does not exist" << endl;
                }

            }else{
                cout << "\nRecord Doesn't Exist" << endl;
            }

    }

    void display_all(){

        ifstream r("Record.csv");

        if(r.good()){

            string str;
            cout << endl;

            while(r.good()){

                getline(r, str);
                if(str != ""){
                    cout << str << endl;
                }

            }

        }else{
            cout << "\nRecord Doesn't Exist" << endl;
        }

        r.close();

    }

};

int main(){

    cout << "Record Management Program\n" << endl;

    int choice;

    Record r;

    cout << "1. Adding A Record\n2. Deleting A Record\n3. Modifying A Record\n4. Searching A Record\n5. Display All Records\n0. Quit" << endl;

    while(true){
        cout << "\nEnter: ";
        cin >> choice;

        switch(choice){

        case 0:
            return 0;
            break;
        case 1:
            r.add_record();
            break;
        case 2:
            r.delete_record();
            break;
        case 3:
            r.modify_record();
            break;
        case 4:
            r.search_record();
            break;
        case 5:
            r.display_all();
            break;
        default:
            cout << "Enter instructed numbers only" << endl;

        }

    }

    return 0;

}
