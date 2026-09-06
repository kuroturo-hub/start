#include <iostream>
int main(){
    using namespace std;
    int choice ;
    float C , F ,temp;
    cout << "Press 1 for C --> F\nPress 2 for F --> C\n";
    cin >> choice;

    switch (choice) {
        case 1 :
            cout << "Enter the temperature in Celsius: ";
            cin >> C;
            temp =  (1.8 * C) + 32.0 ;
            cout << "Temp in Fahernheit: " << temp;
            break;
        case 2 : 
            cout << "Enter the temperature in Fahrenheit: ";
            cin >> F;
            temp = (F-32)/1.8;
            cout << "Temp in Celcius: " << temp;
            break;
        default :
            cout << "Enter a valid choice: ";
            break;
    
        }
    
    return 0;
}