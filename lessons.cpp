#include <windows.h>
#include <iostream>
#include <vector>

// методичка

int lesson1() { // Типы данных, как выставлять кодировку, минимальные модули, как создавать проект.
    int a, b, c; // Цифровой тип данный
    std::string str = "Hello World"; // Строчный тип данных
    bool d = TRUE; // Булинговый тип данных TRUE/FALSE
    std::cout << str; // Вывод. В данном случае "Hello World"
    std::cin >> a, b, c; // Запись в переменные a, b, c в цифровом типе данных

    return 0;
}

int lesson2() {
    // утерено
    std::cout << "нету" << std::endl;
    return 0;
}

int lesson3() {
    // if и else
    int a, b, c;

    std::cin >> a;
    // 1.
    if (a % 2 == 0) {
        std::cout << "четное" << std::endl;
    }
    else {
        std::cout << "нечетное" << std::endl;
    }
    // 2.
    std::cin >> a;
    if (a < 0) {
        std::cout << "отрицательное" << std::endl;
    }
    else if (a > 0) {
        std::cout << "положительное" << std::endl;
    }
    else if (a == 0) {
        std::cout << "ровно нулю" << std::endl;
    }
    //3.
    std::cin >> a;
    if (a <= 50) {
        std::cout << "садись 2." << std::endl;
    }
    else if (a <= 69) {
        std::cout << "садись 3." << std::endl;
    }
    else if (a <= 89) {
        std::cout << "садись 4." << std::endl;
    }
    else if (a <= 100) {
        std::cout << "садись 5." << std::endl;
    }
    // 4.
    std::cin >> a >> b >> c;
    if ((b > a > c) || (b < a < c)) {
        std::cout << "число " << a << "находится в дипозоне" << std::endl;
    }
    else {
        std::cout << "число " << a << "не находится в диапозоне" << std::endl;
    }
    //5.
    std::cin >> a, b, c;
    if (a + b > c && a + c > b && b + c > a) {
        std::cout << "треугольник существует" << std::endl;
    }
    else {
        std::cout << "треугольник не существует" << std::endl;
    }
    // 6.
    std::cout << "=== КАЛЬКУЛЯТОР ===" << std::endl;
    std::cout << "Ввидите два числа, которые хотите посчитать: ";
    std::cin >> a >> b;
    std::cout << "Ввидите число от 1 до 4 для выбора (+ - * /): ";
    std::cin >> c;
    if (c == 1) {
        std::cout << "ответ: " << a + b << std::endl;
    }
    else if (c == 2) {
        std::cout << "ответ: " << a - b << std::endl;
    }
    else if (c == 3) {
        std::cout << "ответ: " << a * b << std::endl;
    }
    else if (c == 4) {
        std::cout << "ответ: " << a / b << std::endl;
    }
    else {
        std::cout << "ОТ 1 ДО 4 ЕБЛАН!";
    }

    return 0;
}

int lesson4() {
    // утерено
    std::cout << "нету" << std::endl;
    return 0;
}

int lesson5() {
    // утерено
    std::cout << "нету" << std::endl;
    return 0;
}

int lesson6() { // switch/case и Тернарный оператор - практика
    // утерено

    int i;
    std::cout << "Какой кейс? (1-2 или любое другое) или возвраст: ";
    std::cin >> i;
    switch (i) {
    case 1:
        // Действие, если переменная равна 1
        break; // Останавливает switch, чтобы код не пошел выполняться дальше в case 2

    case 2:
        // Действие, если переменная равна 2
        break;

    default:
        // Действие, если ни один из case не подошел (аналог else)
        break;
    }
    // Тернарный оператор 
    std::string status = (i >= 18) ? "Взрослый" : "Ребенок";
    std::cout << "нету" << std::endl;
    return 0;
}

int lesson7() {
    // изучение цикла while

    //необхлдимые переменные
    int i = 0, n = 0, result = 0;
    std::string str;
    // Задача #1
    // Вывести все четные числа от 0 до 1000
    i = 0;
    std::cout << "Задача #1" << std::endl;
    while (i <= 1000) {
        i++;
        if (i % 2 == 0) {
            std::cout << i << " ";
        }
    }
    std::cout << std::endl;
    // Задача #2
    // Вывести все простые числа от 0 до 1000
    i = 0;
    n = 0;
    std::cout << "Задача #2" << std::endl;
    while (i <= 1000) {
        n = 1;
        result = 0;

        while (n <= i) {
            if (i % n == 0) {
                result++;
            }
            n++;
        }
        if (result == 2) {
            std::cout << i << " ";
        }

        i++;
    }
    std::cout << std::endl;
    // Задача #3
    // Есть ли в string введённым пользователем буква 'a'? (Выводится лишь один раз)
    std::cout << "Задача #3" << std::endl;
    std::cin >> str;
    bool found = false;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == 'а' or str[i] == 'a') {
            found = true;
            break;
        }
    }
    if (found) {
        std::cout << "буква 'a' есть" << std::endl;
    }
    else {
        std::cout << "буквы 'a' нет" << std::endl;
    }
    return 0;

}
int lesson8() {
    // утерено
    std::cout << "нету" << std::endl;
    return 0;
}

int lesson9() {// циклы for
    /*
    for (int i; i < 10; i++) {
        return 0;
    }
    */
    // Задание 1
    std::cout << "Задание 1" << std::endl;
    std::string str;
    std::cout << "Введите слово: ";
    std::cin >> str;
    for (int i = 0; i < str.length(); i++) {
        std::cout << str[i] << std::endl;
    }

    // Задание 2
    std::cout << "Задание 2" << std::endl;
    for (int i = 0; i < 100; i++) {
        if (i % 4 == 0 and i != 0) {
            std::cout << i << std::endl;
        }
    }

    // Задание 3.1
    int num;
    std::cout << "Задание 3.1" << std::endl;
    std::cout << "Введите какую таблицу умножение хотите увидеть? (1-1000): ";
    std::cin >> num;
    if (not(num < 0 or num > 1000)) { // ноль для проверки переполнения
        for (int i = 0; i <= num; i++) {
            std::cout << i << " * " << num << " = " << i * num << std::endl;
        }
    }
    // Задание 3.2
    std::cout << "Задание 3.2" << std::endl;
    std::cout << "Введите какую таблицу умножение хотите увидеть? (2-9): ";
    std::cin >> num;
    for (int i = 2; i <= 9; i++) {
        std::cout << num << " * " << i << " = " << i * num << std::endl;
    }
    

    return 0;

}

int lesson10() {// continue
    /*
    for (int i = 2; i <= 100; i++) {
        int num = 0;
        for (int j = 2; j < i; j++) {
            if (i % j != 0) {
                continue;
            }
            else { num++; }
        }
        if (num == 0) { std::cout << i << std::endl; }
    }
    */
    /*
    //Задание 1.
    std::cout << "Задание 1" << std::endl;
    int n;
    std::cout << "Введите высоту ёлки (в символах): ";
    std::cin >> n;
    for (int i = 0; i <= n; i++) {
        for (int j = 0; i > j; j++) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
    //Задание 2.
    std::cout << "Задание 2" << std::endl;
    for (int i = 0; i < 100; i++) {
        if (i % 3 == 0 and not(i == 0)) {
            std::cout << i << " ";
        }else { continue; }
    }
    std::cout << std::endl;
    //Задание 3.
    std::cout << "Задание 3" << std::endl;
    int result = 0, n2;
    while (result >= 0) {
        std::cin >> n2;
        result += n2;
        std::cout << "Сумма: " << result << std::endl;
    }*/
    //Задание 4. (доп)
    std::cout << "Задание 4" << std::endl;
    int n;
    std::cin >> n;
    for (int i = 0; i <= n; i++) { // i = 1; n = 10
        for (int i3 = n; i3 >= ((i - 1) / 2); i3--) {
            std::cout << " ";
        }
        for (int j = 0; i > j; j++) {
            std::cout << "*";
            if (not(j == 0)) { std::cout << "*"; }
        }
        for (int i4 = n; i4 >= ((i - 1) / 2); i4--) {
            std::cout << " ";
        }

        std::cout << std::endl;

        
    }


    return 0;

}

int main() {
    //Точка входа.
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int lesson;
    std::cout << "Какой урок? (1-10): ";
    std::cin >> lesson;

    switch (lesson) {
    case 1:
        lesson1();
        break;
    case 2:
        lesson2();
        break;
    case 3:
        lesson3();
        break;
    case 4:
        lesson4();
        break;
    case 5:
        lesson5();
        break;
    case 6:
        lesson6();
        break;
    case 7:
        lesson7();
        break;
    case 8:
        lesson8();
        break;
    case 9:
        lesson9();
        break;
    case 10:
        lesson10();
        break;
    }
    return 0;
}
/*
#include <windows.h>
#include <iostream>
int main() {

}

*/
