#include <windows.h>
#include <iostream>
#include <vector>

// методичка
/*
int lesson1() { // Типы данных, как выставлять кодировку, минимальные модули, как создавать проект.
    // тут указаны лимиты
    short s = 32000;
    int r = 2100000000;
    long l = 4200000000;
    long long ll = pow(10,2);
    unsigned int ui = 4200000000;
    float f = 14.562334343434;// 5 ПОСЛЕ ЗАПЯТОЙ
    double a = 56.012345678466789789798879;// 10 ПОСЛЕ ЗАПЯТОЙ
    std::string str = "hello";
    char c = 'A';// 1 байт юни код
    bool b = TRUE;
    auto au = "text";//авто выбор переменной
    const double pi = 3.14;//константа
    std::cout << "short весит " << sizeof(s) << " байт" << std::endl;
    std::cout << "int весит " << sizeof(r) << " байт" << std::endl;
    std::cout << "long весит " << sizeof(l) << " байт" << std::endl;
    std::cout << "long long весит " << sizeof(ll) << " байт" << std::endl;
    std::cout << "unsigned весит " << sizeof(ui) << " байт" << std::endl;
    std::cout << "float весит " << sizeof(f) << " байт" << std::endl;
    std::cout << "double весит " << sizeof(a) << " байт" << std::endl;
    std::cout << "string весит " << sizeof(str) << " байт" << std::endl;
    std::cout << "char весит " << sizeof(c) << " байт" << std::endl;
    std::cout << "bool весит " << sizeof(b) << " байт" << std::endl;
    std::cout << "auto весит " << sizeof(au) << " байт" << std::endl;
    std::cout << "const весит " << sizeof(pi) << " байт" << std::endl;
    //Задание 1
    double x;
    std::cout << "Ведите число:  " << std::endl;
    std::cin >> x;
    std::cout << sqrt(x) << " " << pow(x, 2) << " " << sqrt(fabs(x)) << " " << std::endl;

    //Задание 2
    double x1, x2, y1, y2;
    std::cout << "Ведите 4 точки для координат:  " << std::endl;
    std::cin >> x1 >> x2 >> y1 >> y2;
    double dx = x2 - x1;
    double dy = y2 - y1;
    double dxy = sqrt(pow(dx, 2) + pow(dy, 2));
    std::cout << "Растояния:  " << dxy << std::endl;

    //Задание 3
    double q;
    std::cout << "Ведите число:  " << std::endl;
    std::cin >> q;
    double res = log2(q);
    std::cout << "log2(" << q << ")= " << res << std::endl;

    //Задание 4
    double b1, grad;
    const double PI = 3.14;
    std::cout << "Введите длину стороны a: ";
    std::cin >> a;
    std::cout << "Введите длину стороны b: ";
    std::cin >> b1;
    std::cout << "Введите угол между сторонами (в градусах): ";
    std::cin >> grad;
    double rad = grad * PI / 180.0;
    double c1 = sqrt(pow(a,2) + pow(b1, 2) - 2.0 * a * b1 * cos(rad));
    std::cout << "Сторона c = " << c1 << std::endl;

    std::cout << "Ведите значение: ";
    std::cin >> a;

    std::cout << "квадрат а" << pow(a, 2) << std::endl;
    std::cout << "Корень а" << sqrt(a) << std::endl;
    std::cout << "корень куб а" << cbrt(a) << std::endl;
    std::cout << "модуль а" << abs(a) << std::endl;
    std::cout << "в любом случае даблес" << fabs(a) << std::endl;
    std::cout << "округление до целого" << round(b1) << std::endl;
    std::cout << "округление вниз" << floor(b) << std::endl;
    std::cout << "округление вверх" << ceil(b) << std::endl;
    std::cout << sin(a) << cos(a) << log10(a);
    std::cout << "Введите первый катет" << std::endl;
    std::cin >> a;
    std::cout << "Введите второй катет" << std::endl;
    std::cin >> b;
    int c = pow(a, 2) + pow(b, 2);
    std::cout << c << "< Это квадрат гипатинузы" << sqrt(c) << "< Это гипатинуза";

    const float pi = 3.14;
    double L;
    double g = 9.8;
    std::cout << "Введите длину маятника L:  " << std::endl;
    std::cin >> L;
    double T = 2 * pi * sqrt(L / g);
    std::cout << "Расчёты согласно формуле 2 * pi * sqrt(L / g):" << " " << T << std::endl;
    double a, b, c;
    std::cout << "Введите коофицет a : ";
    std::cin >> a;
    std::cout << "Введите коофицет b : ";
    std::cin >> b;
    std::cout << "Введите коофицет c : ";
    std::cin >> c;
    double d = pow(b, 2) - 4 * a * c;
    std::cout << "Дискриминатн:" << "  " << d << std::endl;
    double x1 = (b + sqrt(d)) / 2;
    double x2 = (b - sqrt(d)) / 2;
    std::cout << "Корени квадратного уравнения: " << x1 << " " << x2 << std::endl;
    
    return 0;
}

int lesson2() {
    
    double S;
    int n;
    double p = 12.5;

    std::cout << "Сумма вклада: ";
    std::cin >> S;
    std::cout << "Количество лет во вкладе: ";
    std::cin >> n;

    double k = pow(1 + p / 100.0, n);
    double finalSum = S * k;

    std::cout << "Итоговая сумма: " << finalSum << std::endl;


    int a = 16;
    int b = 9;
    int c = sqrt(pow(a, 2) + pow(b,2));
    int p = (a+b+c)/2;
    int S = sqrt(p * (p - a) * (p - b) * (p - c));
    int r;
    std::cout << "Введите радиус" << std::endl;
    std::cin >> r;
    std::cout << "Вот площадь круга согласно радиусу " << pi * pow(r, 2) << std::endl;
    int rt;
    std::cout << "Введите угол градусы" << std::endl;
    std::cin >> rt;
    float q = rt * pi / 180;
    std::cout << "p= " << p << "S= " << S <<std::endl;
    std::cout << q << std::endl;
    std::cout << sin(q) << "<sin cos> " << cos(q) << std::endl;
    std::cout << c;

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
    //
    for (int i; i < 10; i++) {
        return 0;
    }
    //
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
    }
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
*/
int lesson11() {
    //Задание 1.
    for (double i = 0.0; i <= 10.0; i += 0.1) {
        if (i > 4.99 && i< 5.01) continue;
        std::cout << i << std::endl;
    }

    //Задание 2.
    
    int sum = 0;

    std::cout << "i    j  i * j   sum" << std::endl;
    std::cout << "--------------------"
    for (int i = 1; i <= 4; i++) {
        for (int j = 1; j <= i; j++) {
            std::cout << i << "    " << j << "    " << i * j << "   " << sum << std::endl;
            }
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
        //lesson1();
        break;
    case 2:
        //lesson2();
        break;
    case 3:
        //lesson3();
        break;
    case 4:
        //lesson4();
        break;
    case 5:
        //lesson5();
        break;
    case 6:
        //lesson6();
        break;
    case 7:
        //lesson7();
        break;
    case 8:
        //lesson8();
        break;
    case 9:
        //lesson9();
        break;
    case 10:
        //lesson10();
        break;
    case 11:
        for (double a = 0.0; a <= 10.0; a += 0.1) {
            
        }

        lesson11();
        break;
    }
    return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.

// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.



    //int z;
    //cout << "Введите высоту треугольника: ";
    //cin >> z;
    //for (int i = 1; i <= z; ++i) {
    //    for (int j = 0; j < i; ++j) {
    //        cout << '*';
    //    }
    //    cout << '\n';
    //}
    //int q = 0;
    //cout << endl;
    //for (q;q<=100;q++)
    //{
    //if (q % 3 == 0)
    //{
    //    continue;
    //}
    //else
    //{ cout << q << endl;}
    //}
    ////int x = 0;
    ////for (int a;x> -1;) {
    ////    cin >> a;
    ////    x += a ;
    ////    cout << x << endl;
    ////}
    //int h = 100;
    //for (int i = 1; i <= h; i++) {

    //    for (int j = 0; j < h - i; j++)
    //        cout << ' ';

    //    for (int j = 0; j < 2 * i - 1; j++)
    //        cout << '*';
    //    cout << '\n';
    //}

//int i = 0;
//string str = "string";
//for (str;i<str.length();)
//{
//    cout << str[i]<< endl;
//    i++;
//}
//int q = 0;
//cout << endl;
//for (q;q<101;q++)
//{
//    if (q % 4 == 0)
//    {
//        cout << q << endl;
//    }
//}
//cout << endl;
//for (int x = 2;x < 10;x++)
//{
//    for (int z = 1;z<10;z++)
//    {
//        int e = x * z;
//        cout << x <<"*" << z << "=" << e << endl;
//    }
//}

//int n = 0;
//while (n < 10);
//{
//    n++;
//}
//for (int i = 0; i < 10; i++)
//{
//    cout << i << endl;
//}
//int j = 0;
//for (; j < 10; j++)
//{

//}

//int i = 0;
//while ( i <= 1000)
//{
//    cout << i << endl;
//    i++;
//    if (i % 2 == 0)
//    {
//        cout << i;
//    }
//    else
//    {
//        i++;
//    }
//}
// 
// 
//int a = 2;
//while (a <= 1000)
//{
//    int n = 2;
//    bool zz = true;
//    while (n * n <= a)
//    {
//        if (a % n == 0) {
//            zz = false;
//            break;
//        }
//        n++;
//    }
//    if (zz) {
//        cout << a << endl;

//    }
//    a++;
//}




//int zadania;
//cout << "Введите номер задания:\n"
//    << "Задание1\n"
//    << "Задание2\n"
//    << "Задание3\n";
//cin >> zadania;

//switch (zadania) {
//case 1: {
//    int a;
//    cout << "Введите целое число: ";
//    cin >> a;
//    if (a % 10 == 0) {
//        cout << "Число делится на 10" << endl;
//    }
//    else {
//        cout << "Число не делится на 10" << endl;
//    }
//    break;
//}
//case 2: {
//    char z;
//    cout << "Выберите автора:\n"
//        << "1 — А.С. Пушкин\n"
//        << "2 — С.А. Есенин\n"
//        << "3 — М.Ю. Лермонтов\n"
//        << "4 — Л.Н. Толстой\n"
//        << "5 — Ф.М. Достоевский\n";
//    cin >> z;

//    switch (z) {
//    case '1':
//        cout << "Почитайте у А.С. Пушкина «Евгений Онегин»" << endl;
//        break;
//    case '2':
//        cout << "Почитайте у С.А. Есенина «Чёрный человек»" << endl;
//        break;
//    case '3':
//        cout << "Почитайте у М.Ю. Лермонтова «Герой нашего времени»" << endl;
//        break;
//    case '4':
//        cout << "Почитайте у Л.Н. Толстого «Война и мир»" << endl;
//        break;
//    case '5':
//        cout << "Почитайте у Ф.М. Достоевского «Преступление и наказание»" << endl;
//        break;
//    default:
//        cout << "Я не знаю такого автора: " << z << endl;
//        break;
//    }
//    break;
//case 3: {
//    int s;
//    cout << "Введите целое число: ";
//    cin >> s;
//    (s % 10 == 0) ? cout << "Делиться" : cout << "не делиться";
//    char w;
//    cout << "Выберите автора:\n"
//        << "1 — А.С. Пушкин\n"
//        << "2 — С.А. Есенин\n"
//        << "3 — М.Ю. Лермонтов\n"
//        << "4 — Л.Н. Толстой\n"
//        << "5 — Ф.М. Достоевский\n";
//    cin >> w;

//    string rr = (w == '1') ? "Почитайте у А.С. Пушкина «Евгений Онегин»" :
//        (w == '2') ? "Почитайте у С.А. Есенина «Чёрный человек»" :
//        (w == '3') ? "Почитайте у М.Ю. Лермонтова «Герой нашего времени»" :
//        (w == '4') ? "Почитайте у Л.Н. Толстого «Война и мир»" :
//        (w == '5') ? "Почитайте у Ф.М. Достоевского «Преступление и наказание»" :
//        "Я не знаю такого автора: " + string(1, w);

//    cout << rr << endl;
//    break;
//}
//}
//}
//double a, b;
//cin >> a >> b;
//(a < b) ? cout << a : cout << b ;
//cout << " данное число меньше" << endl;

//double c;
//cin >> c ;
//(0 > c <100) ? cout << "да"  : cout << "не " ;
//cout << " находиться в диапозоне от 0 до 100 " << endl;

//char z;
//cout << "Введите, какого автора хотите почитать: 1 — Пушкин 2 — Есенин 3 — Лермонтов"<< endl;
//cin >> z;

//string r = (z == '1') ? "Почитайте у него Евгений Онегин" :
//    (z == '2') ? "Почитайте у него Чёрный человек" :
//    (z == '3') ? "Почитайте у него Герой нашего времени":
//    "Я не знаю такого автора: " + string(1, z);

//cout << r << endl;

//double w;
//cin >> w;

//cout << (w > 90 ? "Оценка 5" :
//    (w >= 80 ? "Оценка 4" :
//        (w >= 60 ? "Оценка 3" : "Оценка 2")))
//    << endl;

//double a, b;
//char z;
//cout << "введите пример типа число знак число" << endl;
//cin >> a >> z >> b ;

//switch (z)
//{ 
//case '+': cout << a << " + " << b<<" = " << a + b << endl;
//case '-': cout << a << " - " << b << " = " << a - b << endl;
//case '*': cout << a << " * " << b << " = " << a * b << endl;
//case '/': cout << a << " / " << b << " = " << a / b << endl;
//    break;
//default:
//    cout << "я не знаю такого оператора: " << z << endl;
//}

//double c , d , i ;
//char x;
//cout << "введите сторону  высоту и радиус (если вам нужна площадь квадрата нажмите ^  если треугольника / если круга * ) " << endl;
//cin >> c >> x >> d >> i  ;
//switch (x)
//{ 
//case '^': cout << c << " ^ " << 2 <<" = " <<  c*c << endl;
//    break;
//case '/': cout << c << " * " << d << " * " << 0.5 << " = " << c*d*0.5 << endl;
//    break;
//case '*': cout << i << " * " << 3.14 << " = " << i * 3.14 << endl;
//    break;
//default:
//    cout << "я не знаю такого оператора: " << x << endl;
//}

//double bal = 100000000;
//double t, y;
//char xx;
//cout << "введите на что хотите сделать добавить балик 1 снять балик 2  показать баланс 3  сколько внести сколько снять " << endl;
//cin >> xx >> t >> y >> bal;
//switch (xx)
//{
//case '1': cout << "теперь ваш балнс " << bal + t << " + " << t << " денег " << endl;
//    break;
//case '2': cout << "теперь ваш балнс " << bal - y << " - " << y << " денег " << endl;
//    break;
//case '3': cout << bal << endl;
//    break;
//case '4': cout <<" Переход к 4 заданию " << endl;
//    break;
//default:
//    cout << "я не знаю такого оператора: " << xx << endl;
//}

    //char opr;
    //int d;
    //int a;
    //cout << "Введите a: " << endl;
    //cin >> a;
    //int b;
    //cout << "Введите b:" << endl;
    //cin >> b;
    ////int c;
    ////cout << "Введите c: " << endl;
    ////cin >> c;
    //cout << "Введите оператор ( +, - ,*, % )  для а и b" << endl;
    //cin >> opr;
    //if (opr == '+')
    //{
    //    cout << a + b;
    //}
    //else if ( opr == '-')
    //{
    //    cout << a - b;

    //}
    //if (opr == '*')
    //{
    //    cout << a * b;
    //}
    //else if (opr == '%')
    //{
    //    cout << a % b ;

    //}



    ////Задание 6


//// тут указаны лимиты
//short s = 32000;
//int r = 2100000000;
//long l = 4200000000;
//long long ll = pow(10,2);
//unsigned int ui = 4200000000;
//float f = 14.562334343434;// 5 ПОСЛЕ ЗАПЯТОЙ
//double a = 56.012345678466789789798879;// 10 ПОСЛЕ ЗАПЯТОЙ
//string str = "hello";
//char c = 'A';// 1 байт юни код
//bool b = TRUE;
//auto au = "text";//авто выбор переменной
//const double pi = 3.14;//константа
//cout << "short весит " << sizeof(s) << " байт" << endl;
//cout << "int весит " << sizeof(r) << " байт" << endl;
//cout << "long весит " << sizeof(l) << " байт" << endl;
//cout << "long long весит " << sizeof(ll) << " байт" << endl;
//cout << "unsigned весит " << sizeof(ui) << " байт" << endl;
//cout << "float весит " << sizeof(f) << " байт" << endl;
//cout << "double весит " << sizeof(a) << " байт" << endl;
//cout << "string весит " << sizeof(str) << " байт" << endl;
//cout << "char весит " << sizeof(c) << " байт" << endl;
//cout << "bool весит " << sizeof(b) << " байт" << endl;
//cout << "auto весит " << sizeof(au) << " байт" << endl;
//cout << "const весит " << sizeof(pi) << " байт" << endl;


////Задание 4
//double a, b, grad;
//const double PI = 3.14;
//cout << "Введите длину стороны a: ";
//cin >> a;
//cout << "Введите длину стороны b: ";
//cin >> b;
//cout << "Введите угол между сторонами (в градусах): ";
//cin >> grad;
//double rad = grad * PI / 180.0;
//double c = sqrt(pow(a,2) + pow(b, 2) - 2.0 * a * b * cos(rad));
//cout << "Сторона c = " << c << endl;

////Задание 3
//double q;
//cout << "Ведите число:  " << endl;
//cin >> q;
//double res = log2(q);
//cout << "log2(" << q << ")= " << res <<endl;
////Задание 1
//double x;
//cout << "Ведите число:  " << endl;
//cin >> x;
//cout << sqrt(x)<< " " << pow(x, 2) << " " << sqrt(fabs(x)) << " " << endl;
////Задание 2
//double x1, x2, y1, y2;
//cout << "Ведите 4 точки для координат:  " << endl;
//cin >> x1 >> x2 >> y1 >> y2;
//double dx = x2 - x1;
//double dy = y2 - y1;
//double dxy = sqrt(pow(dx, 2) + pow(dy,2));
//cout << "Растояния:  " << dxy<< endl;


/*cout << "квадрат а" << pow(a,2) << endl;
cout << "Корень а" << sqrt(a) << endl;
cout << "корень куб а" << cbrt(a) << endl;
cout << "модуль а" << abs(a) << endl;
cout << "в любом случае даблес" << fabs(a)<<endl;
cout << "округление до целого" << round(b) << endl;
cout << "округление вниз" << floor(b) << endl;
cout << "округление вверх" << ceil(b) << endl;
cout << sin(a) << cos(a) << log10(a);*/
//cout << "Введите первый катет" << endl;
//cin >> a;
//cout << "Введите второй катет" << endl;
//cin >> b;
//int c = pow(a, 2)+ pow(b,2);
//cout << c << "< Это квадрат гипатинузы" << sqrt(c) << "< Это гипатинуза";

//const float pi = 3.14;
//double L;
//double g = 9.8;
//cout << "Введите длину маятника L:  " << endl;
//cin >> L;
//double T = 2 * pi * sqrt(L / g);
//cout<<"Расчёты согласно формуле 2 * pi * sqrt(L / g):"<< " " << T << endl;


//double a,b,c;
//cout << "Введите коофицет a : ";
//cin >> a;
//cout << "Введите коофицет b : ";
//cin >> b;
//cout << "Введите коофицет c : ";
//cin >> c;

//double d = pow(b,2) - 4 * a * c;
//cout<<"Дискриминатн:"<<"  " << d << endl;
//double x1 =(b + sqrt(d)) /2;
//double x2 =(b - sqrt(d)) / 2;
//cout << "Корени квадратного уравнения: " << x1 << " " << x2 << endl;
/*double S;
int n;
double p = 12.5;

cout << "Сумма вклада: ";
cin >> S;
cout << "Количество лет во вкладе: ";
cin >> n;

double k = pow(1 + p / 100.0, n);
double finalSum = S * k;

cout << "Итоговая сумма: " << finalSum << endl;*/


//int a = 16;
//int b = 9;
//int c = sqrt(pow(a, 2) + pow(b,2));
//int p = (a+b+c)/2;
//int S = sqrt(p * (p - a) * (p - b) * (p - c));
//int r;
//cout << "Введите радиус" << endl;
//cin >> r;
//cout << "Вот площадь круга согласно радиусу " << pi * pow(r, 2) << endl;
//int rt;
//cout << "Введите угол градусы" << endl;
//cin >> rt;
//float q = rt * pi / 180;
//cout << "p= " << p << "S= " << S <<endl;
//cout << q << endl;
//cout << sin(q) << "<sin cos> " << cos(q) << endl;
//cout << c;


// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
