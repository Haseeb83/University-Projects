#include <iostream>
using namespace std;

int eligibleStudentsCount(double,double,double); // function decleration
int aggSum(double,double, double);  // function decleration
int maxAggregate(double,double,double); // function decleration
int sum;

int main()
{
  // variable declarations	
  int totalSSCMarks = 1050;
  int totalHSSCMarks = 1100;
  int totalEntranceMarks = 1100;
  
  double obtainedSSCMarks = 971;
  double obtainedHSSCMarks = 953;
  double obtainedEntranceMarks = 950;
  
  double SSCPercentage;
  double HSSCPercentage;
  double EntrancePercentage;
  
  double accMarksofStudentOne;
  double aggPercentageofStudentOne;
  double accMarksofStudentTwo;
  double aggPercentageofStudentTwo;
  double accMarksofStudentThree;
  double aggPercentageofStudentThree;
  
  
  cout << endl << endl <<"************************Merit Calculation**************************";
  cout << endl << endl << endl << endl;
   
  SSCPercentage = (obtainedSSCMarks/totalSSCMarks) * totalSSCMarks * 0.10;
  HSSCPercentage = (obtainedHSSCMarks/totalHSSCMarks) * totalHSSCMarks * 0.40;
  EntrancePercentage = (obtainedEntranceMarks/totalEntranceMarks) * totalHSSCMarks * 0.50;
  
  accMarksofStudentOne = SSCPercentage + HSSCPercentage + EntrancePercentage;
  aggPercentageofStudentOne = (accMarksofStudentOne/1100)* 100;
  
  cout << "Aggregate Percentage of Student One Calculate as:" << aggPercentageofStudentOne << endl;
  
  obtainedSSCMarks = 952;
  obtainedHSSCMarks = 976;
  obtainedEntranceMarks = 996;
  
  SSCPercentage = (obtainedSSCMarks/totalSSCMarks) * totalSSCMarks * 0.10;
  HSSCPercentage = (obtainedHSSCMarks/totalHSSCMarks) * totalHSSCMarks * 0.40;
  EntrancePercentage = (obtainedEntranceMarks/totalEntranceMarks) * totalHSSCMarks * 0.50;
  
  accMarksofStudentTwo = SSCPercentage + HSSCPercentage + EntrancePercentage;
  aggPercentageofStudentTwo = (accMarksofStudentTwo/1100)* 100;
  
  cout << "Aggregate Percentage of Student Two Calculated as:" << aggPercentageofStudentTwo << endl;
  
  obtainedSSCMarks = 990;
  obtainedHSSCMarks = 981;
  obtainedEntranceMarks = 1020;
  
  
  SSCPercentage = (obtainedSSCMarks/totalSSCMarks) * totalSSCMarks * 0.10;
  HSSCPercentage = (obtainedHSSCMarks/totalHSSCMarks) * totalHSSCMarks * 0.40;
  EntrancePercentage = (obtainedEntranceMarks/totalEntranceMarks) * totalHSSCMarks * 0.50;
  
  accMarksofStudentThree = SSCPercentage + HSSCPercentage + EntrancePercentage;
  aggPercentageofStudentThree = (accMarksofStudentThree/1100)* 100;
  
  cout << "Aggregate Percentage of Student Three Calculated as:" << aggPercentageofStudentThree << endl;

  cout << "Number of Students Eligible for Admission are " << eligibleStudentsCount(aggPercentageofStudentOne,aggPercentageofStudentTwo,aggPercentageofStudentThree) << endl;
  
  cout << "Aggregate Sum of all the student marks " << aggSum(accMarksofStudentOne,accMarksofStudentTwo,accMarksofStudentThree) << endl;
  
  cout << "Maximum aggregate percentage is " << maxAggregate(aggPercentageofStudentOne,aggPercentageofStudentTwo,aggPercentageofStudentThree) << endl;
  
  return 0;
}

// function defination
int eligibleStudentsCount(double aggPercStdOne,double aggPercStdTwo,double aggPercStdThree){
	
	int count = 0;
	
	if (aggPercStdOne >= 90)
		count = count + 1;
	if (aggPercStdTwo >=90)
		count = count + 1;
	if (aggPercStdThree >=90)
		count = count + 1;
		
	return count;
	
}
// function defination
int aggSum(double one, double two, double three ){
	
	int i = 0;
	int sum = 0;
	
	while (i < 3){
	  if (i == 0)
		sum = sum + one;
	  if (i == 1)
	    sum = sum + two;
	  if (i == 2)
	    sum = sum + three;    
	 i++;
	}
	return sum;
}


// function defination
int maxAggregate(double one, double two, double three){
	
	if (one > two && one > three )
		return one;
	else if (two > one && two > three )
		return two;
	else
		return three;
}


