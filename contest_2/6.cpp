#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

struct Student {
    std::string name;
    std::string group;
};

using namespace std;


Student make_student (string line) {
    int pos = line.find(';');
    Student student;
    student.name = line.substr(0, pos);
    student.group = line.substr(pos+1);
    return student;
}

bool is_upper(Student a, Student b){
    if(a.group != b.group) {
        vector<string> groups;
        groups.push_back(a.group);
        groups.push_back(b.group);
        sort(groups.begin(), groups.end());
        return a.group == groups[0];
    }
    else {
        vector<string> names;
        names.push_back(a.name);
        names.push_back(b.name);
        sort(names.begin(), names.end());
        return a.name == names[0];
    }
}

void print (vector <Student> info) {
    if(info.size() == 0){
        cout << "Empty list!" << "\n";
        return;
    }
    string p;
    for(auto x : info) {
        if(x.group != p) {
            p = x.group;
            cout << x.group << "\n";
        }
        cout << "- " << x.name << "\n";
    }
}

int main()
{
    int count;
    std::cin >> count;
    std::cin.ignore(1);  // Убираем из потока символ \n для корректной работы getline
    
    std::vector<Student> students(count);
    for(auto& student: students) {
        std::string line;
        std::getline(std::cin, line);
        student = make_student(line);
    }
    
    std::sort(students.begin(), students.end(), is_upper);
    
    print(students);
}
