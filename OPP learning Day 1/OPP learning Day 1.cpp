#include<iostream>
using namespace std;

class Car {
	// class has attributes (data) and functions (behavior)
	// need to say if data or fn is public or private in cpp
	

public:
	string model;
	string color;
	string date;
	int speed;

	void displayInfo() {
		cout << model << endl;
		cout << color << endl;
		cout << date << endl;
		cout << isRaceCar() << endl;
	}

private:
	// user cant use this data or functions directly
	string isRaceCar() {
		if (speed >= 200) {
			return "Race Car";
		}
		else {
			return "Normal car (Not For Racing)";
		}
	}
};

class CarWithGeterSeter {
private:
	string name;
	string color;
	int speed;
	string type;

public:
	void setCarData(string carName, string carColor, int carSpeed) {
		name = carName;
		color = carColor;

		// getter and setter help me control the data user give
		// example: no car speed less than 80, so if user put less we make it 80
		speed = (carSpeed < 80) ? 80 : carSpeed;

		// if speed >= 180 then race car
		type = (speed >= 180) ? "Race Car" : "Normal Car";
	}

	void getCarData() {
		cout << name << endl;
		cout << color << endl;
		cout << speed << endl;
		cout << type << endl;
	}
};

class CarWithConstructor {
public : 
	// Default Constructor 
	CarWithConstructor() {
		name = "Car"; 
		speed = 100; 
		setType(); 
	}
	CarWithConstructor(string carName , int carSpeed) {
		setName(carName);
		setSpeed(carSpeed);
		setType();

	}
	void setName(string carName) {
		name = carName;
	}
	void setSpeed(int carSpeed) {
		speed = carSpeed;

	}
	void getCarData()
	{
		cout << name << " -------------------------> " << type << endl;
	}
private : 
	string name; 
	string type; 
	int speed; 

	
	void setType() {
		type = (speed > 180) ? "Race Car" : "Normal Car"; 
	}

	
};



int main() {
	Car car1; // make object car1 from Car
	// set model , color , date , speed for car1
	car1.model = "BMW";
	car1.color = "Black";
	car1.date = "2005";
	car1.speed = 199;
	// show data of car1
	car1.displayInfo();

	cout << "=====================================================================\n"; 

	CarWithGeterSeter car2;
	//set data for car2 by seterFn 
	car2.setCarData("Volvo", "Blue", 190);
	//get data for car2 by geterFn 
	car2.getCarData();

	cout << "=====================================================================\n";

	CarWithConstructor car3; 
	car3.getCarData(); 

	cout << "=====================================================================\n";

	CarWithConstructor car4("BMW" , 200);
	car4.getCarData(); 

	cout << "=====================================================================\n";



}
