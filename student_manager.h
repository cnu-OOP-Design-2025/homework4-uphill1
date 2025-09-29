#pragma once

#include "student.h"
const int MAX_STUDENTS = 100;

class StudentManager {
private:
    Student students[MAX_STUDENTS];
    int num_of_students;
    static int last_student_id;
    
public:
    StudentManager(): num_of_students(0){};
    void addStudent(char const* name, float midterm, float final);
    void deleteStudent(int id);
    void modifyStudent(const Student& student);
    int getNumOfStudents() const {return num_of_students;};

    int findStudentByID(int id) const;
    int findBestStudentInMidterm() const;
    int findBestStudentInFinal() const;
    int findBestStudent() const;

    float getMidtermAverage() const;
    float getFinalAverage() const;
    float getTotalAverage() const;

    void printStudentInfo(int idx) const {
        if(idx >= 0 && idx < num_of_students)
            students[idx].printInfo();
    }
};
