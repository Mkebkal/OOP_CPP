#include<iostream>
using namespace std;

class Point
{
	double x;
	double y;
public:
	double get_x()const 
	{
		return x;
	}
	double get_y()const
	{
		return y;
	}
	void set_x(double x)
	{
		this->x = x;
	}
	void set_y(double y)
	{
		this->y = y;
	}

	// MEthods
	double distance(Point other)
	{
		double x_distance = this->x - other.x;
		double y_distance = this->y - other.y;
		double distance = sqrt(x_distance*x_distance + y_distance * y_distance);
		return distance;
	}

}; 

class Point3D :public Point
{
	double z;
public:
	double get_z() const
	{
		return z;
	}
	void set_z(double z)
	{
		this->z = z;
	}
};


double distance(Point A, Point B)
{
	/*double x_distance = A.get_x() - B.get_x();
	double y_distance = A.get_y() - B.get_y();
	return sqrt(pow(x_distance,2) + pow(y_distance,2));*/
	return sqrt(pow(A.get_x() - B.get_x(), 2) + pow(A.get_y() - B.get_y(), 2));
}

/*
	Создавая структуру или класс, мы создаем новый тип данных.
	КЛАСС - ЭТО ТИП ДАННЫХ!!!
	СТРУКТУРА - ЭТО ТИП ДАННЫХ!!!
*/

void main()
{
	int a;	//Объявление переменной 'a', типа 'int'.
	Point A;//Объявление переменной 'A', типа 'Point'.
			//Создание экземпляра 'A', структуры 'Point'.

	
	A.set_x(2);
	A.set_y(3);
	cout << A.get_x() << "\t" << A.get_y() << endl;

	Point* pA = &A;
	cout << pA->get_x() << "\t" << pA->get_y() << endl;
	cout << endl;
	Point3D B;
	
	B.set_x(7);
	B.set_y(5);
	cout << "Distance from point A to point B: " << A.distance(B) << endl;
	cout << "Distance from point B to point A: " << B.distance(A) << endl;
	cout << "Distance from point A to point A: " << A.distance(A) << endl;
	cout << "Distance from point B to point B: " << B.distance(B) << endl;


	B.get_x();
	B.get_y();
	cout << "Distance between two points: " << distance(A, B) << endl;
}

/*
.  - Оператор прямого доступа (Point operator).
-> - Оператор косвенного доступа (Arrow operator).
*/