// School.h
#ifndef SCHOOL_H
#define SCHOOL_H

#include <vector>
#include "Student.h"
#include "Course.h"

class School {
public:
    void admitStudent(const Student& student);
    void createCourse(const std::string& name, int code);
    void enrollStudentInCourse(const Student& student, int courseCode);
    void displayEnrolledStudentsInCourse(int courseCode) const;

private:
    std::vector<Student> students;
    std::vector<Course> courses;
};

#endif // SCHOOL_H
