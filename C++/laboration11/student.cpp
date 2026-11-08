#include <iostream>

class Student {
  public:
    int studentID;
    double medelbetyg;

    Student(int studentID, double medelbetyg): studentID(studentID), medelbetyg(medelbetyg) {
      std::cout << "Student med id: " << studentID << " har skapats.\n";
    }

    void uppdateraBetyg(double nyttBetyg) {
      medelbetyg = nyttBetyg;
    }

    void skrivUt() const {
      std::cout << "Student med ID: " << studentID << "\n";
      std::cout << "Har medelbetyg på: " << medelbetyg << "\n";
    }
};


int main(void) {

  Student studenter[3] = {
    Student(1, 3.5), 
    Student(2, 4.0), 
    Student(3, 2.8)
  };

  studenter[1].uppdateraBetyg(4.5);

  for (int i = 0; i < 3; i++) {
    studenter[i].skrivUt();
  }


  return 0;
}