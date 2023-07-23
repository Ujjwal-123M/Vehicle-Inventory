#include <iostream>
using namespace std;
class vehicle
{
public:
    int milege;
    int price;
    void data()
    {
        cout << "What is the milege of  " << endl;
        cin >> milege;
        cout << "What is the price of " << endl;
        cin >> price;
    }
};
class car : public vehicle
{
public:
    int warranty;
    int seating_capacity;
    string fuel;
    void getdatacar();
    void printdatacar();
};
void car ::getdatacar()
{
    cout << "What is the warranty period of car" << endl;
    cin >> warranty;
    data();
    cout << "seating capacity ? " << endl;
    cin >> seating_capacity;
    cout << "Fuel is diesel/petrol/EV" << endl;
    cin >> fuel;
}
void car::printdatacar()
{
    cout << "the warratny period of the car is" << warranty << endl;
    cout << "the seating capacity of the car is" << seating_capacity << endl;
    cout << "Fuel type of car " << fuel << endl;
}
class bike : public vehicle
{
public:
    int cylinders;
    int gears;
    int tank_size;
    string cooling_type;
    void getdatabike();
    void printdatabike();
};
void bike::getdatabike()
{
    cout << "How many cylinder's in bike " << endl;
    cin >> cylinders;

    cout << "How many gears in bike" << endl;
    cin >> gears;
    data();
    cout << "What is the capacity of fuel tank(in liter)" << endl;
    cin >> tank_size;
    cout << "What is the cooling type of bike air/liquid/oil" << endl;
    cin >> cooling_type;
};
void bike::printdatabike()
{
    cout << "The no. of cylinder in bike:" << cylinders << endl;
    cout << "The no. of gear in in bike is :" << gears << endl;
    cout << "Size of fuel tank is :" << tank_size << endl;
    cout << "Cooling type of bike is :" << cooling_type << endl;
}
class Tata : public car
{
public:
    string model_type;
    void setData1()
    {

        cout << "What is the model of Tata is" << endl;
        cin >> model_type;
        getdatacar();
    }
    void printdata1()
    {
        cout << "The model of the Tata is " << model_type << endl;
        printdatacar();
    }
};
class Mahindra : public car
{
public:
    string model_type;
    void setData2()
    {
        cout << "What is the model of Mahindra  " << endl;
        cin >> model_type;
        getdatacar();
    }
    void printdata2()
    {
        cout << "The model of the Mahindra is " << model_type << endl;
        printdatacar();
    }
};
class Bajaj : public bike
{
public:
    string model_type;
    void setData3()
    {

        cout << "What is the model of Bajaj bike " << endl;
        cin >> model_type;
        getdatabike();
    }
    void printdata3()
    {

        cout << "The model of the Bajaj bike is :" << model_type << endl;
        printdatabike();
    }
};
class TVS : public bike
{
public:
    string model_type;
    void setData4()
    {
        cout << "What is the model of TVS bike " << endl;
        cin >> model_type;
        getdatabike();
    }
    void printdata4()
    {
        cout << "The model of the TVS bike is " << model_type << endl;
        printdatabike();
    }
};
int main()
{
    cout << "The all data in the this program is given below" << endl;
    Tata A1;
    A1.setData1();
    A1.printdata1();
    Mahindra B1;
    B1.setData2();
    B1.printdata2();
    Bajaj b1;
    b1.setData3();
    b1.printdata3();
    TVS t1;
    t1.setData4();
    t1.printdata4();
    return 0;
}