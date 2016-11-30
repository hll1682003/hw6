#pragma once
class Matrix
{
private:
	int data[3][3];
public:
	Matrix();
	Matrix operator +(Matrix other);
	Matrix operator *(Matrix other);
	void Show();
	void setter(int,int,int);
};
