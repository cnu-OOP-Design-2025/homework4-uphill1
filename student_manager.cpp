#include "student_manager.h"
#include "student.h"

/* StudentManager */
int StudentManager::last_student_id = 1000;

void StudentManager::addStudent(char const* name, float midterm, float final) {
    int id = ++last_student_id;
    /* TODO */

}

void StudentManager::deleteStudent(int id) {
    /* TODO */
}

void StudentManager::modifyStudent(const Student& student) {
    /* TODO */
}

int StudentManager::findStudentByID(int id) const {
    /* TODO */
    return -1;
}

int StudentManager::findBestStudentInMidterm() const {
    /* TODO */
    return -1;
}

int StudentManager::findBestStudentInFinal() const {
    /* TODO */
    return -1;
}

int StudentManager::findBestStudent() const {
    /* TODO */
    return -1;
}

float StudentManager::getMidtermAverage() const {
    /* TODO */
    return 0.0f;
}

float StudentManager::getFinalAverage() const {
    /* TODO */
    return 0.0f;
}

float StudentManager::getTotalAverage() const {
    /* TODO */
    return 0.0f;
}

