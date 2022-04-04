#include <iostream>
#include <stdio.h>
#include <string>
#include <stdlib.h>

using namespace std;
int temp = 6;

class Worker{

public:
	
	int m_number_wor;
	string m_name_wor;
	int m_age_wor;
	string m_position_wor;


	Worker() {

		m_number_wor = 0;
		m_name_wor = "null";
		m_position_wor = "null";
		m_age_wor = 0;
	
	}

	void setParamsWor(int number, string name, string position, int age) {
		
		this->m_number_wor = number;
		this->m_name_wor = name;
		this->m_position_wor = position;
		this->m_age_wor = age;

	}

	virtual void Print() {

		cout << "Employee ¹" << m_number_wor << endl;
		cout << "Name -> " << m_name_wor << endl;
		cout << "Position -> " << m_position_wor << endl;
		cout << "Age -> " << m_age_wor << endl;
		cout << endl;
	
	}

};

class Administration: public Worker {

public:
	
	int m_number_adm;
	string m_name_adm;
	int m_age_adm;
	string m_position_adm;


	Administration() {

		m_number_adm = 0;
		m_name_adm = "null";
		m_position_adm = "null";
		m_age_adm = 0;

	}

	void setParamsAmd(int number ,string name, string position, int age) {

		this->m_number_adm = number;
		this->m_name_adm = name;
		this->m_position_adm = position;
		this->m_age_adm = age;
	}

	string Print_str() {

		cout << "Name -> ";
		return m_name_adm;
		cout << endl;

		cout << "Position -> ";
		return m_position_adm;
		cout << endl;

	}

	void Print() override {

		cout << "Employee ¹" << m_number_adm << endl;
		cout << "Name -> " << m_name_adm << endl;
		cout << "Position -> " << m_position_adm << endl;
		cout << "Age -> " << m_age_adm << endl;
		cout << endl;

	}

};

class Engineer: public Worker {

public:

	int m_number_engi;
	string m_name_engi;
	int m_age_engi;
	string m_position_engi;

	Engineer() {

		m_number_engi = 0;
		m_name_engi = "null";
		m_position_engi = "null";
		m_age_engi = 0;

	}

	void setParamsEng(int number, string name, string position, int age) {
		
		this->m_number_engi = number;
		this->m_name_engi = name;
		this->m_position_engi = position;
		this->m_age_engi = age;
	
	}

	string Print_str() {

		cout << "Name -> ";
		return m_name_engi;
		cout << endl;

		cout << "Position -> ";
		return m_position_engi;
		cout << endl;

	}

	void Print() override {

		cout << "Employee ¹" << m_number_engi << endl;
		cout << "Name -> " << m_name_engi << endl;
		cout << "Position -> " << m_position_engi << endl;
		cout << "Age -> " << m_age_engi << endl;
		cout << endl;

	}

};

class Personnel {
private:

	int quantity;

public:
	
	Personnel() {

		quantity = 0;

	}

	void setParemsPers(int qua) {

		this->quantity = qua;

	}

	void getInfo() {

		cout << "Quantity personnel -> " << quantity;
		cout << endl;
	}

	void Print(Worker* work) {

		work->Print();

	}

};


int main(){

	setlocale(0, "");
	Personnel Person;
	Person.setParemsPers(temp);

	Worker Work[3];
	Work[0].setParamsWor(4, "Grisha", "Worker", 23);
	Work[1].setParamsWor(5, "Anton", "Worker", 33);
	Work[2].setParamsWor(6, "Misha", "Worker", 20);

	Administration Admin;
	Admin.setParamsAmd(1, "Danila", "Administration", 19);

	Engineer Engin[2];
	Engin[0].setParamsEng(2, "Valera", "Engineer", 24);
	Engin[1].setParamsEng(3, "S1mple", "Engineer", 242);

	Person.getInfo();
	cout << endl;

	Person.Print(&Admin);
	
	for (int i = 0; i < 2; i++) {

		Person.Print(&Engin[i]);

	}

	for (int i = 0; i < 3; i++) {
		
		Person.Print(&Work[i]);
	
	}

}