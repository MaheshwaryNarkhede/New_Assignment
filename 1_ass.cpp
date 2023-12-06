#include <iostream>
#include <vector>

using namespace std;

class WeatherReport {
public:
    int day_of_month;
    int high_temp;
    int low_temp;
    float amount_rain;
    float amount_snow;
    WeatherReport() : day_of_month(99), high_temp(999), low_temp(-999), amount_rain(0), amount_snow(0) {}

    
    void SetValues() {
        cout << "Enter day of month: ";
        cin >> day_of_month;
        cout << "Enter high temperature: ";
        cin >> high_temp;
        cout << "Enter low temperature: ";
        cin >> low_temp;
        cout << "Enter amount of rain (mm): ";
        cin >> amount_rain;
        cout << "Enter amount of snow (cm): ";
        cin >> amount_snow;
    }
};
void Menu(vector<WeatherReport>& reports) {
    int choice;
    bool exit = false;

    while (!exit) {
        cout << "1. Enter weather data for a day" << endl;
        cout << "2. Display monthly weather report" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                reports.emplace_back(); 
        
                reports.back().SetValues(); 
                break;
            case 2:
                if (reports.empty()) {
                    cout << "No data entered yet. Please enter data first." << endl;
                } else {
                
                    cout << "Monthly report display goes here." << endl;
                }
                break;
            case 3:
                exit = true;
                break;
            default:
                cout << "Invalid choice. Please enter again." << endl;
        }
    }
}

int main() {
    vector<WeatherReport> reports; 

    Menu(reports); 

    return 0;
}
