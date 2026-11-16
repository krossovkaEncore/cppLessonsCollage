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
    // утерено
    std::cout << "нету" << std::endl;
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
    
    //switch (переменная) {
    //case 1:
        // Действие, если переменная равна 1
    //    break; // Останавливает switch, чтобы код не пошел выполняться дальше в case 2

    //case 2:
        // Действие, если переменная равна 2
    //    break;

    //default:
        // Действие, если ни один из case не подошел (аналог else)
    //    break;
    //}

    //std::string status = (age >= 18) ? "Взрослый" : "Ребенок";
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
    // Задача #3
    // Есть ли в string введённым пользователем буква 'a'? (Выводится лишь один раз)
    std::cout << "Задача #3" << std::endl;
    std::cin >> str;
    bool found = false;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == 'a') {
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

int main() {
    //Точка входа.
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int lesson;
    std::cout << "Какой урок? (1-7): ";
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
        //lesson8();
        break;

        return 0;
    }
}

