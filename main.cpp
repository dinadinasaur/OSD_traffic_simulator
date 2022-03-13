#include <iostream>
#include "Vehicle.h"
#include "Car.h"
#include "Truck.h"
#include <list>
#include <typeinfo>
#include <iomanip>
#include "MetricGUI.h"
#include "ImperialGUI.h"

using namespace std;

int main() {
    {

        GUI *gui;
        cout<<"Please enter the speed limit ";
        double speedLimit;
        cin>>speedLimit;
        cout<<"Please input 'Imperial' or 'Metric' to indicate desired units"<<endl;
        string desiredunits; string imperial="Imperial"; string metric="Metric";
        cin>> desiredunits;

        Car *car =new Car();
        car->SetDesiredSpeed(65.0);

        Truck *truck1= new Truck(4);
        truck1->SetDesiredSpeed(55.0);

        Truck *truck2=new Truck(8);
        truck2->SetDesiredSpeed(50.0);

        list<Vehicle*> vehicles;
        vehicles.push_back(car);
        vehicles.push_back(truck1);
        vehicles.push_back(truck2);

        if (desiredunits==imperial)
        {
            gui = new MetricGUI();
            gui->SetSpeedLimit(car, speedLimit);
            gui->SetSpeedLimit(truck1, speedLimit);
            gui->SetSpeedLimit(truck2, speedLimit);

            for (int i = 0; i < 11; i++)
            {
                for (Vehicle* v : vehicles)
                {
                    v->UpdateSpeed(1);
                    string s=typeid(*v).name();
                    s.erase(0,1);
                     cout<<s<<" speed: "<< setprecision(8)<<gui->GetSpeed(v)<<" mph"<<endl;
                }
            }
        }
//        if (desiredunits==metric)
//        {
//            gui = new MetricGUI();
//            gui->SetSpeedLimit(car, speedLimit);
//            gui->SetSpeedLimit(truck1, speedLimit);
//            gui->SetSpeedLimit(truck2, speedLimit);
//
//            for (int i = 0; i < 11; i++)
//            {
//                for (Vehicle* v : vehicles)
//                {
//                    v->UpdateSpeed(1);
//                    string s=typeid(*v).name();
//                    s.erase(0,1);
//                    cout<<s<<" speed: "<< setprecision(8)<<gui->GetSpeed(v)<<" kph"<<endl;
//                }
//            }
//        }
    }
    return 0;
}

