#include "StudentScoreCalculator.h"
#include <iostream>
#include <fstream>
using namespace std;

void StudentScoreCalculator::calculateAverage()
{
	int numStudents, // Number of students
		numTests; // Number of tests per student

	double average; // Average test score for a student
	// Get the number of students


	cout << "This program averages test scores.\n";
	cout << "How many students are there? ";
	cin >> numStudents;


	// Get the number of test scores per student
	cout << "How many test scores does each student have? ";
	cin >> numTests;

	cout << endl;

	// Read each student's scores and compute their average

			//snum = Student Number
	for (int snum = 1; snum <= numStudents; snum++) { //Outer loop

		double total = 0.0; // Initialize accumulator

				//tsN = Test # 
		for (int tN = 1; tN <= numTests; tN++) { //Inner loop

			int score;
			// Read a score and add it to the accumulator
			cout << "Enter Score for Test #" << tN << " for ";

			cout << "student " << snum << ": ";
			cin >> score;
			total += score;
		} //End inner loop

		// Compute and display the student's average
		average = total / numTests;
		cout << "The average score for student " << snum;
		cout << " is " << average << "\n\n";


	} //End outer loop

}

void StudentScoreCalculator::readStudentData()
{
	string fileName = "studentData.txt";
	ifstream inputFile(fileName);

	string ansFileName = "Answers.txt";

	int studentScores[2][3]; 
			//st = student 
	for (int st = 0; st < 2; st++) {

		//s = score
		for (int s = 0; s < 3; s++) {

			inputFile >> studentScores[st][s];


		}

	}


	inputFile.close();
	

	/*
	for (int st = 0; st < 2; st++) {

		//s = score
		for (int s = 0; s < 3; s++) {

			cout << studentScores[st][s] << endl;


		}

		cout << endl;

	}
	*/
	//write output to file 
	ofstream outPutFile(ansFileName);


	//total the scores for each student 

	int total = 0;

	for (int st = 0; st < 2; st++) {
		//reset total to 0 for each student 
		total = 0;
		//s = score
		for (int s = 0; s < 3; s++) {

			total += studentScores[st][s];


		}


		cout << "Total for student " << st << " Is: " << total << endl;

		outPutFile << "Total for student " << st << " Is: " << total << endl;


		


	}

	outPutFile.close();




}
