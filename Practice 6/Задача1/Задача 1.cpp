#include <iostream>
#include <cmath>
#include "Cone.h"
 
int main()
{
    setlocale(LC_ALL, "");
 
    std::cout << "Введите радиус и высоту конуса: ";
    double r, h;
    std::cin >> r >> h;
    Cone c1(r, h);



    std::cout << "Введите координаты центра основания, радиус и высоту конуса: ";
    double x, y, z;
    std::cin >> x >> y >> z >> r >> h;
    Cone c2(x, y, z, r, h);

    
    std::cout << std::endl << "Конус 1 " << std::endl;
    c1.print();
    std::cout << "Площадь полной поверхности: " << c1.area() << std::endl;
    std::cout << "Объем: " << c1.volume() << std::endl;


    std::cout << std::endl << "Конус 2 " << std::endl;
    c2.print();
    std::cout << "Площадь полной поверхности: " << c2.area() << std::endl;
    std::cout << "Объем: " << c2.volume() << std::endl;



    Cone* c3 = new Cone();
    std::cout << std::endl << "Произвольный конус " << std::endl;
    std::cout << "Введите координаты центра основания, радиус и высоту конуса: " << std::endl;
    std::cin >> x >> y >> z >> r >> h;
    c3->setCoordinate(x, y, z);
    c3->setRadius(r);
    c3->setHeight(h);
    c3->print();
    delete c3;



    int n = 3;
    Cone* mas = new Cone[n];
    for (int i = 0; i < n; i++) {
        std::cout << std::endl << "Введите координаты центра основания, радиус и высоту " << i+1 << " конуса: " << std::endl;
		std::cin >> x >> y >> z >> r >> h;
		mas[i].setCoordinate(x, y, z);
		mas[i].setRadius(r);
		mas[i].setHeight(h);
	}

    for (int i = 0; i < n; i++) {
		std::cout << std::endl << "Конус " << i + 1 << std::endl;
		mas[i].print();
		std::cout << "Площадь полной поверхности: " << mas[i].area() << std::endl;
		std::cout << "Объем: " << mas[i].volume() << std::endl;
	}

    delete[] mas;

    return 0;
}