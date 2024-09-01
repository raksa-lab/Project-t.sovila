#include <iostream>
#include <string>
using namespace std;

class Gold {
private:
    void InputSchedule() {
        cout << "Time_start: "; cin >> time_start;
        cout << "Time_end: "; cin >> time_end;
        cout << "Active_days: "; cin.ignore(); getline(cin, active_days);
    }

    void PrintSchedule() const {
        cout << "Active Schedule: " << time_start << " - " << time_end << " : " << active_days << endl;
    }
public:
    int time_start;
    int time_end;
    string active_days;

    void ManageSchedule(const string& dayName) {
        cout << "++====================== " << dayName << " =========================++" << endl;
        InputSchedule();
        PrintSchedule();
        cout << "++=======================================================++" << endl;
    }
};

int main() {
    string dayInput;
    Gold schedule;  // Create an instance of the Gold class

    while (true) {
        cout << "Enter the day of the week (or type 'exit' to quit): ";
        cin >> dayInput;

        // Convert input to lowercase for easier comparison
        for (auto& c : dayInput) {
            c = tolower(c);
        }

        if (dayInput == "monday") {
            schedule.ManageSchedule("Monday");
        } else if (dayInput == "tuesday") {
            schedule.ManageSchedule("Tuesday");
        } else if (dayInput == "wednesday") {
            schedule.ManageSchedule("Wednesday");
        } else if (dayInput == "thursday") {
            schedule.ManageSchedule("Thursday");
        } else if (dayInput == "friday") {
            schedule.ManageSchedule("Friday");
        } else if (dayInput == "saturday") {
            schedule.ManageSchedule("Saturday");
        } else if (dayInput == "sunday") {
            schedule.ManageSchedule("Sunday");
        } else if (dayInput == "exit") {
            cout << "Closing the application..." << endl;
            break;
        } else {
            cout << "Invalid day, please try again." << endl;
        }
    }

    return 0;
}
