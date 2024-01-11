// Course.cpp
#include "Course.h"

Course::Course(const std::string& name, int code) : name(name), code(code) {}

std::string Course::getName() const {
    return name;
}

int Course::getCode() const {
    return code;
}

void Course::enrollStudent(const Student& student) {
    enrolledStudents.push_back(student);
}

void Course::displayEnrolledStudents() const {
    std::cout << "Enrolled students in course " << getName() << " (Code: " << getCode() << "):" << std::endl;
    for (const auto& student : enrolledStudents) {
        std::cout << "Name: " << student.getName() << ", ID: " << student.getId() << std::endl;
    }
}
