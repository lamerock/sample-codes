/* Ellison Private Elementary School has three classrooms in
 * each of nine grades, kindergarten (grade 0) through grade 8,
 * and allows parents to pay tuition over the ninth-month
 * school year. Design an application that outputs nine tuition
 * payment options for each of the 27 classrooms. Each coupon
 * should contain the grade number (0 through 8), the classroom
 * number (1 through 3), the month (1 through 9), and the
 * amount of tuition due. Tuition for kindergarten is $80 per
 * month. Tuition for other grades is $60 per month times the
 * grade level.
*/
#include <iostream>
using namespace std;
int main(){
	int tuition_due = 0;
	for (int grade = 0; grade <= 8; grade++)
		for (int classroom = 1; classroom <= 3; classroom++)
			for (int month = 1; month <= 9; month++){
				if (grade == 0){
					tuition_due = 80;
					cout << "Grade: " << grade << " Classroom: " << classroom << " Month: " << month << " Tuition Due: " << (tuition_due*month) << endl; 
				}
				else{
					tuition_due = 60;
					cout << "Grade: " << grade << " Classroom: " << classroom << " Month: " << month << " Tuition Due: " << (tuition_due*month) << endl; 
				}
			}	
	return 0;
}
