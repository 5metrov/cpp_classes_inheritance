#include <iostream>
using namespace std;

//1) наследование.
//наследник использует все методы и поля "родителя"
//just lesson summary
class Parent {
public:
    int data;
};

class Child : public Parent {
public:
    string name;
};

class Small : public Child {
public:
    int num;
};

void osn0() {
    Child child;
    child.name = "Rod";
    child.data = 12;

    Small small;
    small.name = "Oleg";
    small.data = 63;

    cout << child.name << '\t' << child.data << endl;
    cout << small.name << '\t' << small.data << endl;
}

//task is: make an "Animal" class, make 3 of its ancestors, make a method inside the animal class, make personal methods for each animal class
//my way to made this:
class Animal {
public:
    int legs_count;
    int eyes_count;
    string name;

    void show_all_parant_stats() {
        cout << "Legs count: " << legs_count << "\t" << "eyes count: " << eyes_count << '\t' << "name: " << name << endl;
    }
};

class Cow : public Animal {
public:
    int horns_count;

    void show_cow_stats() {
        cout << "Horns count: " << horns_count << endl;
    }
};

class Worm : public Animal {
public:
    int lenth;

    void show_worm_stats() {
        cout << "Worm lenth: " << lenth << endl;
    }
};

class Duck : public Animal {
public:
    bool can_swim;

    void show_duck_stats() {
        cout << "Can swim? - " << can_swim << endl;
    }
};

void osn1() {
    Cow cow;
    cow.legs_count = 3;
    cow.eyes_count = 2;
    cow.name = "Burenka";
    cow.horns_count = 2;

    Worm worm;
    worm.legs_count = 0;
    worm.eyes_count = 0;
    worm.name = "Jakob";
    worm.lenth = 15;

    Duck duck;
    duck.legs_count = 2;
    duck.eyes_count = 2;
    duck.name = "Bassbosted";
    duck.can_swim = true;

    cow.show_all_parant_stats();
    cow.show_cow_stats();
    worm.show_all_parant_stats();
    worm.show_worm_stats();
    duck.show_all_parant_stats();
    duck.show_duck_stats();
}
//end og the task

//the task is to create a chain for 6-7 heirs
//my way to made this:
class Material_Object {
public:
    bool alive;
    string time_of_existence;
};


class Material : public Material_Object { //like wood, steel
public:
    string material_type;//steel
};


////////////////
class Steel : public Material {
public:
    string steel_type; //aluminium
};

class Plastic : public Material {
public:
    string Plastic_type; //ABS plastick
};
////////////////


////////////////
class Case : public Steel, Plastic{
    string case_lenth;
    string case_width;
};
class Chip : public Steel, Plastic{
    string chip_lenth;
    string chip_width;
    bool can_calculate;
};
//an any other parts...
////////////////


class Computer : public Case, Chip {
    bool has_dicplay;
    bool has_processor;
    bool has_apps;
    bool stationar;
};


class Phone : public Computer {
    bool can_call = true;
    bool hes_sensor_dicplay;
};


class Smart_phone : public Phone {
    bool hes_sensor_dicplay = true;
    bool has_advanced_applications = true;
};
//end of the task


//the task is to create a chain with specific structure
// strusture is:        *   *
//                     / \ /
//                *   *   *
//                 \ /
//                  *
//my way to made this:


class Wood {
public:
    string wood_tipe;
};
class Сombustible_substance {
public:
    string component1;
    string component2;
    string component3;
    //and more
};


class Match : public Wood, Сombustible_substance {
    string lenth;
};


class Railing_of_he_stairs : public Wood {//перила
public:
    string lenth;
    string weight;
};
class Step {//ступеньки
public:
    string made_of;
    string lenth;
    string weight;
};


class Ladder : public Railing_of_he_stairs, Step {
    int steps_count;
    int how_many_floors;
};
//end of the task

int main(){
    srand(time(NULL));
    setlocale(LC_ALL, "ru");
    osn1(); //switch to osn[num] to look somthing else
    return 0;
}
