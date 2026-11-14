#include <iostream>
#include <string>

class Student {
  public:
    int id;
    std::string name;

    Student(int id, std::string name) : id(id), name(name) {
      std::cout << "Student med id: " << id << " har skapats.\n";
    }

    ~Student() {
      std::cout << "Student slutade...\n";
    }
};

int main(void) {

  Student student1 = {1, "Johannes"};


  return 0;
}