//UTD Fall 2016
//CS 5303
//instructor: Dr. Becker
//Homework #6

//cohort list:
//Qi Guo
//Chongliang He
//Pengfei Li
//Ying Yi

#include"Matrix.h"
#include<iostream>
#include<fstream>
using namespace std;
void Menu();
int main(int argc, char** argv) {
	Menu();
	return 0;
}
void load(Matrix&,int);
void Menu() {
	bool done = false;
	int choice = 0;
	int choicetemp = 0;
	Matrix FirstM;
	Matrix SecondM;
	Matrix Resultplus;
	Matrix ResultMulti;


	while (!done) {
		cout << "Matrix Manipulation" << "\n";
		cout << "--------------------------"<<"\n";
		cout << "1.Load First Matrix" << "\n";
		cout<<"2.Load Second Matrix" << "\n";
		cout << "3.Multiply Matrices" << "\n";
		cout<<"4.Add Matrices"<<"\n";
		cout<<"5.Show All Three Matrices"<<"\n";
		cout<<"6.Quit"<<"\n";
		cin >> choice;
		switch (choice) {
		case 1:
			load(FirstM,choice);
			break;
		case 2:
			load(SecondM,choice);
			break;
		case 3:
			ResultMulti = FirstM * SecondM;
			FirstM.Show();
			SecondM.Show();
			ResultMulti.Show();
			choicetemp = choice;
			break;
		case 4:
			Resultplus = FirstM + SecondM;
			FirstM.Show();
			SecondM.Show();
			Resultplus.Show();
			choicetemp = choice;
			break;
		case 5:
			FirstM.Show();
			SecondM.Show();
			if (choicetemp == 3) {
			
				ResultMulti.Show();
			}
			else if (choicetemp == 4) {
				Resultplus.Show();
			}
			break;
		case 6:
			done = true;
			exit(0);
	}

	}
}

void load(Matrix &input,int option) {
	ifstream files;
	int temp=0;
	if (!files) cout << "cannot open the file";
	if (option == 1) files.open("first.txt");
	else if (option == 2) files.open("second.txt");
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++) {
			files >> temp;
			input.setter(i, j, temp);
		}
	files.close();

}
