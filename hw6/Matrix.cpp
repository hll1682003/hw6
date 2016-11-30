#include<iostream>
#include"Matrix.h"
using namespace std;
Matrix::Matrix() {
	for (int i = 0; i < 3; i++) 
		for (int j = 0; j < 3; j++) {
			data[i][j] = 0;
		}
}

Matrix Matrix::operator+(Matrix other) {
	Matrix temp;
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++) {
			temp.data[i][j] = data[i][j] + other.data[i][j];
		}
	return temp;
}

Matrix Matrix::operator*(Matrix other) {
	Matrix temp;
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
			for (int k = 0; k < 3; k++) {
				temp.data[i][j] += data[i][k] * other.data[k][j];
			}
	return temp;
}

void Matrix::Show() {
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++) {
			if (j == 0) cout << "|"<<"\t";
			cout << data[i][j]<<"\t";
			if (j == 2)cout << "|"<<"\n";
		}
	cout << "\n";
}

void Matrix::setter(int line,int column,int input) {
	data[line][column] = input;
}