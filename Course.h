// Course.h
#ifndef COURSE_H
#define COURSE_H

#include <string>
#include <vector>
#include "Student.h"

class Course {
public:
    Course(const std::string& name, int code);

    std::string getName() const;
    int getCode() const;
    void enrollStudent(const Student& student);
    void displayEnrolledStudents() const;

private:
    std::string name;
    int code;
    std::vector<Student> enrolledStudents;
};

#endif // COURSE_H
