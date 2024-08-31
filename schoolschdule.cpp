#include <iostream>
#include <windows.h>
#include <algorithm>
#include <ctime>

using namespace std;

class SchoolSchedule {
    private:
        int id;
        string name;
        string clas;
        string time;
        string day;

    public:
        SchoolSchedule() : id(0), name(""), clas(""), time(""), day("") {}

        void Input() {
            cout << "[+] Enter Your Id    : "; cin >> id;
            cout << "[+] Enter Your Name  : "; cin.ignore(); getline(cin, name);
            cout << "[+] Enter Your Class : "; getline(cin, clas);
            transform(clas.begin(), clas.end(), clas.begin(), ::tolower);

            system("cls");
            if (clas == "m2") {
                int option;
                cout << "Do you Want to see weekly orr Daily "<<endl;
                cout << "[+1] Daily  "<<endl;
                cout << "[+2] Weekly "<<endl;
                cout << "Enter your choice : "; cin >> option;
                switch (option) {
                    case 1 : 
                        int choose ;
                        cout << "[+] Please Enter Monday to Saturday " <<endl;
                        cout << "[+] 1 is Monday "<<endl;
                        cout << "[+] 2 is Tuesday "<<endl;
                        cout << "[+] 3 is Wednesday "<<endl;
                        cout << "[+] 4 is Thursday "<<endl;
                        cout << "[+] 5 is Friday "<<endl;
                        cout << "[+] 6 is Saturday "<<endl;
                        cout << "Enter your choice : "; cin >> choose;
                        switch (choose) {
                            case 1 :
                                PrintMondaySchedule(); break;
                            case 2 :
                                PrintThursdaySchedule(); break;
                            case 3 :
                                PrintWednesdaySchedule(); break;
                            case 4 :
                                PrintThursdaySchedule(); break;
                            case 5 :
                                PrintFridaySchedule();break;
                            case 6 :
                                PrintSaturdaySchedule();break;
                            default : 
                                cout << "Invalid choice...." ;
                        }
                    break;
                        
                    case 2 : 
                        allday();
                        break;
                }
            } else {
                cout << "Class not found...." << endl;
            }
        }

        void Display() const {
            cout << "-   Your ID is : " << id <<"    -"<< endl;
            cout << "-   Your Name  : " << name <<"  -"<< endl;
            cout << "-   Your Class : " << clas <<"  -"<< endl;
            cout << "--------------------------------"<< endl;
        }

        void PrintMondaySchedule() {
            cout << "    Time      :     Monday   "<<endl;
            cout << "7:00 - 9:00   :  TD (Lecture)"<<endl;
            cout << "9:00 - 12:00  :  TD (Lab)    "<<endl;
            cout << "13:00 - 14:00 :  TD (Lab)    "<<endl;
            cout << "-------------------------------" << endl;
            cout << "-   Teacher : Mr.Soeurn Mony  -" << endl;
            cout << "-------------------------------" << endl;
        }

        void PrintTuesdaySchedule() {
            cout << "    Time      :      Tuesday   "<<endl;
            cout << "7:00 - 9:00   :    IS (Lecture)" << endl;
            cout << "9:00 - 12:00  :    IS (Lab)    "<<endl;
            cout << "13:00 - 14:00 :    IS (Lab)    "<<endl;
            cout << "-------------------------------" << endl;
            cout << "-   Teacher   : Dr.Long Solida  -" << endl;
            cout << "-------------------------------" << endl;
        }      
        void PrintWednesdaySchedule() {
            cout << "     Time       :    Wednesday  " << endl;	   
            cout << "7:00 - 9:00     :   BPL(Lecture)" << endl;
            cout << "9:00 - 10:00    :   BPL(Leb)    "<<endl;
            cout << "--------------------------------"<<endl;
            cout << "-    Teacher    : Dr.Srun Sovila"<<endl;
            cout << "--------------------------------"<<endl;
            cout << "10:00 - 11:30   :   Philosophy  "<<endl;
            cout << "--------------------------------"<<endl;
            cout << "-    Teacher    : Mr.Chet Hol   "<<endl;
            cout << "--------------------------------"<<endl;          
        }  
        void PrintThursdaySchedule() {
            cout << "     Time       :    Thursday   "<<endl;
            cout << "7:00 - 11:00    :    English    "<<endl;
            cout << "--------------------------------"<<endl;
            cout << "-    Teacher    : Nhoung Sovoan "<<endl;
            cout << "--------------------------------"<<endl;
            cout << "11:00 - 12:00   :     BPL(Leb)  "<<endl;
            cout << "13:00 - 15:00   :     BPL(Leb)  "<<endl;
            cout << "--------------------------------"<<endl;
            cout << "-    Teacher    : Dr.Srun Sovila"<<endl;
            cout << "--------------------------------"<<endl;
        }
        void PrintFridaySchedule() {
            cout << "     Time       :    Friday     "<<endl;
            cout << "7:00 - 10:00    :  Math(lecture)"<<endl;
            cout << "----------------------------------"<<endl;
            cout << "-    Teacher    : Dr.Veng Sotheara "<<endl;
            cout << "--------------------------------"<<endl;
            cout << "10:00 : 11:30   :   Socialogy   "<<endl;
            cout << "----------------------------------"<<endl;
            cout << "-    Teacher    : Mr.Thy Naroeun"<<endl;
            cout << "----------------------------------"<<endl;
        }
        void PrintSaturdaySchedule() {
            cout << "     Time       :    Saturday    "<<endl;
            cout << "7:00 - 10:00    :   IEE(lecture)"<<endl;
            cout << "----------------------------------"<<endl;
            cout << "-    Teacher    : Dr.Kuong Samnang"<<endl;
            cout << "----------------------------------"<<endl;
        }
        //function show all day in 1 week
        void allday(){
            Display();
            PrintMondaySchedule(); cout <<"\t";
            cout <<"=========================="<<endl;
            // cout << "\t";
            PrintTuesdaySchedule();
            cout <<"=========================="<<endl;
            PrintWednesdaySchedule();
            cout <<"=========================="<<endl;
            PrintThursdaySchedule();
            cout <<"=========================="<<endl;
            PrintFridaySchedule();
            cout <<"=========================="<<endl;
            PrintSaturdaySchedule();
           
        }
};

int main() {
    system("cls");
    SchoolSchedule s;
    s.Input();
    time_t now = time(0); // get current dat/time with respect to system.
    char* dt = ctime(&now); // convert it into string.
    cout << "The local date and time is: " << dt << endl; // print local date and time.

    
    return 0;
}

