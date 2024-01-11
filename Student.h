// Student.h
#ifndef STUDENT_H
#define STUDENT_H

#include <string>

class Student {
public:
    Student(const std::string& name, int id);

    std::string getName() const;
    int getId() const;

private:
    std::string name;
    int id;
};

#endif // STUDENT_H
