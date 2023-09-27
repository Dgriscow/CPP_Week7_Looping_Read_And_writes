#pragma once
class StudentScoreCalculator {

private:
	//output file name
	string ansFileName = "Answers.txt";


	//student Data storage
	int studentData[2][3];

	
	int total = 0;

public:
	void calculateTotal();
	void calculateAverage();
	void readStudentData();




};