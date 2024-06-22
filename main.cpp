#include <iostream>

/**
 * Variable https://www.youtube.com/watch?v=-TkoO8Z07hI&t=660s
 */
void variable() {
    std::cout << "==================== Variable ====================" << '\n';

    // integer
    int x = 5; // decoration variable `x`
    int y = 6;
    int sum = x + y;

    std::cout << x << '\n';
    std::cout << x << '\n';
    std::cout << sum << '\n';

    int age = 21;
    int year = 2023;
    int days = 7;

    std::cout << days << '\n';
    std::cout << year << '\n';

    // double
    double price = 10.99;
    double gpa = 2.5;
    double temperature = 25.1;

    std::cout << price << '\n';

    // single character
    char grade = 'A';
    char initial = 'B';

    std::cout << initial << '\n';

    // boolean (false or true)
    bool isStudent = true;
    bool power = true;
    bool forSale = false;

    // string (objects that represents a sequence of text)
    std::string name = "Bro";
    std::string day = "Monday";
    std::string address = "123 Fake St.";

    std::cout << name << '\n';
}

/**
 * Constant https://www.youtube.com/watch?v=-TkoO8Z07hI&t=1454s
 */
void constant() {
    std::cout << "==================== Constant ====================" << '\n';

    const int LIGHT_SPEED = 299792458;
    const int WIDTH = 1920;
    const int HEIGHT = 1080;
    const double PI = 3.14159;
    const double radius = 10;
    double circumference = 2 * PI * radius;

    std::cout << circumference << "cm\n";
}

/**
 * Namespace https://www.youtube.com/watch?v=-TkoO8Z07hI&t=1657s
 */
namespace first {
    int x = 323;
}

namespace second {
    int x = 583;
}

/**
 *
 */
void nameSpace() {
    std::cout << "==================== Namespace ====================" << '\n';
    using namespace second;

    std::cout << x << " - " << first::x << '\n';
}

/**
 * Typedef https://www.youtube.com/watch?v=-TkoO8Z07hI&t=1933s
 */
typedef std::vector<std::pair<std::string, int>> pairList_t;
typedef std::string text_t;
using number_t = int;

void typeDef() {
    std::cout << "==================== Typedef ====================" << '\n';

    text_t firstName = "Bro";
    number_t age = 13;

    std::cout << firstName << " - "  << age << '\n';
}

/**
 * Arithmetic operators https://www.youtube.com/watch?v=-TkoO8Z07hI&t=2259s
 */
void arithmeticOperators() {
    std::cout << "==================== Arithmetic Operators ====================" << '\n';
    int students = 20;

    students = students + 1;
    students += 3;
    students++;
    std::cout << students << '\n';

    students -= 4;
    students--;
    std::cout << students << '\n';

    students/=2;
    std::cout << students << '\n';

    students*=5;
    std::cout << students << '\n';
}

/**
 * Type conversion https://www.youtube.com/watch?v=-TkoO8Z07hI&t=2598s
 */
void typeConversion() {
    std::cout << "==================== Type conversion ====================" << '\n';

    double x = (int) 3.14;
    char y = 100; // Auto convert
    int correct = 8;
    int questions = 10;
    double score = (double) correct / questions * 100;

    std::cout << x << '\n';
    std::cout << y << '\n';
    std::cout << (char) 100 << '\n';
    std::cout << score << "%s\n";
}

/**
 * User Input https://www.youtube.com/watch?v=-TkoO8Z07hI&t=2825s
 *      - cout << (insertion operator)
 *      - cin >> (extraction operator)
 */
void userInput() {
    std::string name;
    int age;

    std::cout << "What's your name?: ";
    std::getline(std::cin >> std::ws, name);

    std::cout << "What's your age?: ";
    std::cin >> age;

    std::cout << "Hello " << name << ". ";
    std::cout << "You are " << age << " years old" << '\n';
}

/**
 * Useful math related functions https://www.youtube.com/watch?v=-TkoO8Z07hI&t=3155s
 * Hypotenuse calculator practice program https://www.youtube.com/watch?v=-TkoO8Z07hI&t=3363s
 */
void mathFunctions() {
    double x = 3, y = 4, z;

    z = std::max(x, y);
    std::cout << z << '\n';

    z = std::min(x, y);
    std::cout << z << '\n';

    z = pow(x, y);
    std::cout << z << '\n';

    z = sqrt(9);
    std::cout << z << '\n';

    z = abs(-3);
    std::cout << z << '\n';
}


/**
 * C++ tutorial for beginners https://www.youtube.com/playlist?list=PLZPZq0r_RZOMHoXIcxze_lP97j2Ase2on
 * C++ Full Course for free https://www.youtube.com/watch?v=-TkoO8Z07hI
 *
 * @return
 */
int main() {
    std::string like = "I like C++!";
    std::string feel {"It's really good!"};

    std::cout << like << '\n';
    std::cout << feel << '\n';

    variable();
    constant();
    nameSpace();
    typeDef();
    arithmeticOperators();
    typeConversion();
    userInput();
    mathFunctions();

    return 0;
}
