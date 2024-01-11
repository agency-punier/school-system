// main.cpp
#include <iostream>
#include "Student.h"
#include "Course.h"
#include "School.h"

int main() {
    School school;

    Student student1("John Doe", 1001);
    Student student2("Jane Doe", 1002);

    school.admitStudent(student1);
    school.admitStudent(student2);

    school.createCourse("Computer Science", 2001);
    school.createCourse("Mathematics", 2002);

    school.enrollStudentInCourse(student1, 2001);
    school.enrollStudentInCourse(student2, 2001);
    school.enrollStudentInCourse(student2, 2002);

    std::cout << "Enrolled students:" << std::endl;
    school.displayEnrolledStudentsInCourse(2001);
    std::cout << std::endl;
    school.displayEnrolledStudentsInCourse(2002);

    return 0;
}
