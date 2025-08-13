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



int main() {
	Car car1; // make object car1 from Car
	car1.model = "BMW";
	car1.color = "Black";
	car1.date = "2005";
	car1.speed = 199;
	// set model , color , date , speed for car1

	car1.displayInfo();
	// show data of car1

	CarWithGeterSeter car2;
	car2.setCarData("Volvo", "Blue", 190);
	car2.getCarData();
}
