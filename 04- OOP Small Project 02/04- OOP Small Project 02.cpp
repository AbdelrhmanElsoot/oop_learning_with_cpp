#include <iostream> 
#include <vector> 
using namespace std; 


class Person {
protected : 
	string name; 
	int age; 


public : 
	Person(string name , int age) {
		setName(name); 
		setAge(age); 
	}
	void setName(string personName) {
		name = personName; 
	}
	void setAge(int personAge) {
		age = (personAge > 12) ?personAge : 12 ;

	}
	string getName() {
		return name; 
	}
	int getAge() {
		return age; 
	}

	virtual void displayInfo() {
		cout << name << endl; 
		cout << age << endl; 
	}
};

class Student : public Person {
private : 
	float gpa; 

public :
	Student(string name, int age, float gpa) : Person(name, age) {
		setGpa(gpa); 
	}

	void setGpa(float studentGpa) {
		gpa = (studentGpa > 0) ?  studentGpa : 0;

	}
	float getStudentGpa() {
		return gpa; 
	}
	void displayInfo() {
		cout << name << endl; 
		cout << age << endl; 
		cout << gpa << endl; 
	}


};

class Teacher : public Person {
private : 
	string subject; 

public : 
	Teacher(string name, int age , string subject) : Person(name , age ) {
		setTecherSubject(subject);
	}
	void setTecherSubject(string x) {
		subject = x; 
	}
	string getTecherSubject() {
		return subject; 
	}
	void displayInfo() {
		cout << name << endl;
		cout << age << endl;
		cout << subject << endl;
	}
	
};

class School {
private : 
	vector<Person*> people = {};

public : 
	void addPerson(Person* x) {
		people.push_back(x); 
	}
	void showAllPeople() {
		int length = people.size(); 
		for (int i = 0; i < length; i++) {
			people[i]->displayInfo(); 
			cout << "=============================================" << endl ; 
		}
	}
};

int main() 
{
	School mySchool; 
	mySchool.addPerson(new Student("ahmed" , 13 , 2.25));
	mySchool.addPerson(new Teacher("mohamed" , 50 , "Math"));
	mySchool.addPerson(new Student("Abdelrhman" , 20 , 2.25));

	mySchool.showAllPeople();
}