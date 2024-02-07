#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class data {
private:
    string carname, Fuel, Airbag, Tank_capacity, transmission;
    float showroom_price, Mileage, tank_capacity;
    int seating;

public:
    void collect_data() {
        cout<<"LIST OF TATA CARS "<<endl;
        cout<<""<<endl;
        cout<<"1) TIAGO\t\t2) PUNCH\t\t3) ALTROZ\t\t4) TIGOR\t\t5) NEXON\t\t6) PUNCH EV\n7) NEXON EV\t\t8) TIAGO EV\t\t9) SAFARI\t\t10) HARRIER\t\t11) CURVV\t\t"<<endl;
        cout<<""<<endl;
        cin.ignore();
        cout << "Enter Model name: ";
        getline(cin, carname);
        cout << "Enter Fuel type: (PETROL , DIESEL , CNG , ELECTRIC) : ";
        cin >> Fuel;
        cout << "Enter SHOWROOM_PRICE (LAKHS) : ";
        cin >> showroom_price;
        cout << "Enter Mileage : ";
        cin >> Mileage;
        cout << "Enter Transmission (values can be Manual or AMT): ";
        cin >> transmission;
        cout << "Enter Tank capacity: ";
        cin >> tank_capacity;
        cout << "Enter seating: ";
        cin >> seating;
        cout << "Enter Airbag (values can be Yes or No): ";
        cin >> Airbag;
    }

    void name() {
        cout << carname << endl;
    }

    void get_details() {
        cout << left << setw(15) << carname << setw(20) << Fuel << setw(15) << showroom_price << setw(15) << Mileage << setw(15) << transmission << setw(30) << tank_capacity << setw(10) << seating << setw(10) << Airbag << endl;
    }

    void getFuelType(string fuel) {
    
            if (Fuel == fuel) {
                cout << left << setw(15) << carname << setw(20) << Fuel << setw(15) << showroom_price << setw(15) << Mileage << setw(15) << transmission << setw(30) << tank_capacity << setw(10) << seating << setw(10) << Airbag << endl;
            }
        }

    
    void getPrice(float max_price) {
    
            if (showroom_price <= max_price) {
                cout << left << setw(15) << carname << setw(20) << Fuel << setw(15) << showroom_price << setw(15) << Mileage << setw(15) << transmission << setw(30) << tank_capacity << setw(10) << seating << setw(10) << Airbag << endl;
            }
        }

    };

int main() {
    data car[1000];
    int num, selection,choose;
    float max_price;
    string fuel_type;
    cout << "***** WELCOME TO TATA MOTORS *****"<<endl;
    cout << "Enter the number of cars you want to enter: ";
    cin >> num;

    for (int i = 0; i < num; i++) {
        car[i].collect_data();
    }

    // cout << "Welcome to Tata Motors!" << endl;
    cout << "Get the car details as per your preference" << endl;
    cout << "(1) Model Name (2) Fuel Type (3) Price Range: ";
    cin >> selection;

    switch (selection) {
        case 1:
            cout << "Available car models:" << endl;
            for (int i = 0; i < num; i++) {
                car[i].name();
            }
            cout << "Choose your car to get details:(Number) ";
            cin >> choose;
            cout << left << setw(15) << "Model" << setw(20) << "Fuel" << setw(15) << "Price(Lakhs)" << setw(15) << "Mileage" << setw(15) << "Transmission" << setw(30) << "Tank Capacity(Liters)" << setw(10) << "Seating" << setw(10) << "Airbags" << endl;
            car[choose - 1].get_details();
            break;

        case 2: 
            cout << "Enter fuel type: ";
            cin >> fuel_type;
            cout << "Cars with fuel type [" << fuel_type << "] : " << endl;
            cout << left << setw(15) << "Model" << setw(20) << "Fuel" << setw(15) << "Price(Lakhs)" << setw(15) << "Mileage" << setw(15) << "Transmission" << setw(30) << "Tank Capacity(Liters)" << setw(10) << "Seating" << setw(10) << "Airbags" << endl;
            for (int i = 0; i < num; i++) {
                car[i].getFuelType(fuel_type);
            }
            cout<<"THANK YOU FOR VISIT*";
            break;

        case 3:
            cout << "Enter maximum price (Lakhs): ";
            cin >> max_price;
            cout << "Cars within price range up to " << max_price << " Lakhs:" << endl;
             cout << left << setw(15) << "Model" << setw(20) << "Fuel" << setw(15) << "Price(Lakhs)" << setw(15) << "Mileage" << setw(15) << "Transmission" << setw(30) << "Tank Capacity(Liters)" << setw(10) << "Seating" << setw(10) << "Airbags" << endl;
            for (int i = 0; i < num; i++) {
                car[i].getPrice(max_price);
            }
            break;

        default:
            cout << "Invalid selection!" << endl;
            break;
    }

    return 0;
}