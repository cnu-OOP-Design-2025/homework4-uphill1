#include "student_manager.h"
#include "student.h"

/* StudentManager */
int StudentManager::last_student_id = 1000;

void StudentManager::addStudent(char const* name, float midterm, float final) {
    if(num_of_students>=MAX_STUDENTS)return;
    int id = ++last_student_id;
    /* TODO */
    students[num_of_students] =Student(name,id,midterm,final);
    num_of_students++;
}

void StudentManager::deleteStudent(int id) {
    /* TODO */
    int index =findStudentByID(id);
    if(index<0) return;
    for(int i =index+1; i< num_of_students;i++){
        students[i-1]= students[i];
    }
    num_of_students--;
}

void StudentManager::modifyStudent(const Student& student) {
    /* TODO */
    int index =findStudentByID(student.getID());
    if(index<0) return;

    students[index]=student;
}

int StudentManager::findStudentByID(int id) const {
    /* TODO */

    for(int i=0;i<num_of_students;i++){
        if(students[i].getID()==id){
            return i;
        }
    }
    return -1;
}

int StudentManager::findBestStudentInMidterm() const {
    /* TODO */
    if (num_of_students == 0) return -1; 

    int best = -100;
    float bestscore = students[0].getRecord().getMidterm();
    for(int i =1; i<num_of_students;i++){
        float s = students[i].getRecord().getMidterm();
        if(s>bestscore){
            bestscore=s;
            best =i;
        }
    }
    return best;
}

int StudentManager::findBestStudentInFinal() const {
    /* TODO */
    if (num_of_students == 0) return -1; 

    int best = -100;
    float bestscore = students[0].getRecord().getFinal();
    for(int i =1; i<num_of_students;i++){
        float s = students[i].getRecord().getFinal();
        if(s>bestscore){
            bestscore=s;
            best =i;
        }
    }
    return best;
}

int StudentManager::findBestStudent() const {
    /* TODO */
    if (num_of_students == 0) return -1; 

    int best = -100;
    float bestscore = students[0].getRecord().getTotal();
    for(int i =1; i<num_of_students;i++){
        float s = students[i].getRecord().getTotal();
        if(s>bestscore){
            bestscore=s;
            best =i;
        }
    }
    return students[best].getID();
}

float StudentManager::getMidtermAverage() const {
    /* TODO */
    if (num_of_students == 0) return 0.0f;
    float sum =0.0f;
    for(int i=0;i<num_of_students;i++){
        sum+= students[i].getRecord().getMidterm();
    }
    float result = sum/ num_of_students;
    return result;
}

float StudentManager::getFinalAverage() const {
    /* TODO */
    if (num_of_students == 0) return 0.0f;
    float sum =0.0f;
    for(int i=0;i<num_of_students;i++){
        sum+= students[i].getRecord().getFinal();
    }
    float result = sum/ num_of_students;
    return result;
}

float StudentManager::getTotalAverage() const {
    /* TODO */
    if (num_of_students == 0) return 0.0f;
    float sum =0.0f;
    for(int i =0; i<num_of_students;i++){
        const StudentRecord a = students[i].getRecord();
        sum+= a.getMidterm()+a.getFinal();
    }
    return sum/num_of_students;
}

