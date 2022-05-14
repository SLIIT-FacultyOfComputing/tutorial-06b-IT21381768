#include "Student.h"
#include <iostream>
#include <cstring>
using namespace std;
// Assign studentId and name
void Student::assignDetails(int sId, const char n[]) {
  studentId=sId;
  strcpy(name,n);
}
// Display StudentId and Name
void Student::display()
{
  cout <<"Student ID is"<<studentId<<endl;
  cout <<"Name is "<<name<<endl;
}
