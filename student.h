#pragma once

#include <string>
#include <vector>
#include <iostream>

class StudentRecord {
private:
    float midterm;
    float final;
    
public:
    StudentRecord(float midterm = 0.0f, float final = 0.0f);
    float getMidterm() const {return midterm;};
    float getFinal() const {return final;};
    float getTotal() const;
    void updateScores(float midterm, float final);
};

class Student {
private:
    std::string name;
    int id;
    StudentRecord record;

    static int last_student_id;
public:
    Student();
    Student(const char *name, int id, float midterm, float final);
    ~Student() {};

    std::string getName() const {return name;};
    int getID() const {return id;};
    StudentRecord getRecord() const {return record;};

    void updateRecord(const char *name, float midterm, float final);

    void printInfo() const {
        std::cout << "Name: " << name 
                << ", ID: " << id << std::endl;
    }
};