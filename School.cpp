// School.cpp
#include "School.h"

void School::admitStudent(const Student& student) {
    students.push_back(student);
}

void School::createCourse(const std::string& name, int code) {
    courses.push_back(Course(name, code));
}

void School::enrollStudentInCourse(const Student& student, int courseCode) {
    for (auto& course : courses) {
        if (course.getCode() == courseCode) {
            course.enrollStudent(student);
            return;
        }
    }
    std::cout << "Course with code " << courseCode << " not found." << std::endl;
}

void School::displayEnrolledStudentsInCourse(int courseCode) const {
    for (const auto& course : courses) {
        if (course.getCode() == courseCode) {
            course.displayEnrolledStudents();
            return;
        }
    }
    std::cout << "Course with code " << courseCode << " not found." << std::endl;
}
