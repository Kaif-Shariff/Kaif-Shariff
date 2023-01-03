#include <iostream>
#include <string>
#include <cmath>

using namespace std;
int choice = 0;
class abc
{
	double a, b, c;
	double l, w, r, base, h, area = 0;
	const float PI = 3.14;

public:
	void simpleCalculator()
	{
		system("cls");
		cout << "1.Addition" << endl;
		cout << "2.Subtract" << endl;
		cout << "3.Multiplication" << endl;
		cout << "4.Division" << endl;
	start:
		cout << "What would you like to do?: ";
		cin >> choice;

		if (choice == 1)
		{
			cout << "Enter A: ";
			cin >> a;
			cout << "Enter B: ";
			cin >> b;

			cout << a << " + " << b << " = " << a + b;
		}
		else if (choice == 2)
		{
			cout << "Enter A: ";
			cin >> a;
			cout << "Enter B: ";
			cin >> b;

			cout << a << " - " << b << " = " << a - b;
		}
		else if (choice == 3)
		{
			cout << "Enter A: ";
			cin >> a;
			cout << "Enter B: ";
			cin >> b;

			cout << a << " x " << b << " = " << a * b;
		}
		else if (choice == 4)
		{
			cout << "Enter A: ";
			cin >> a;
			cout << "Enter B: ";
			cin >> b;

			cout << a << " % " << b << " = " << a / b;
		}
		else
		{
			cout << "Choose again" << endl;
			goto start;
		}
		choice = 0;
	}
	void tringle()
	{
		system("cls");
		cout << "Enter the length of sides" << endl;
		cin >> a;
		cin >> b;
		cin >> c;

		if (a + b > c && a + c > b && b + c > a)
		{
			cout << "It's a triangle!" << endl;
		}
		else
		{
			cout << "It's not a tringle" << endl;
		}
	}

	double angleofTriangle()
	{
		system("cls");
		cout << "Enter the length of sides" << endl;
		cin >> a;
		cin >> b;
		cin >> c;

		if ((a * a) + (b * b) == c * c && (a * a) + (c * c) == b * b && (b * b) + (c * c) == a * a)
		{
			cout << "It's a right angle triangle" << endl;
		}
		else if ((a * a) + (b * b) < c * c && (b * b) + (c * c) < a * a && (a * a) + (c * c) < b * b)
		{
			cout << "It is an obtuse angle triangle" << endl;
		}
		else if ((a * a) + (b * b) > c * c && (b * b) + (c * c) > a * a && (a * a) + (c * c) > b * b)
		{
			cout << "It is an acute angle triangle" << endl;
		}
		else
		{
			cout << "Error";
		}

		return 0;
	}
	void tringle_2()
	{
		system("cls");
		if (a + b > c && a + c > b && b + c > a)
		{
			cout << "It's a triangle!" << endl;
		}
		else
		{
			cout << "It's not a tringle" << endl;
		}
	}
	void areaofShapes()
	{
		system("cls");
		cout << "=========" << endl;
		cout << "Find Area" << endl;
		cout << "=========" << endl
			 << endl;

		cout << "1.Square" << endl;
		cout << "2.Rectangle" << endl;
		cout << "3.Circle" << endl;
		cout << "4.Parallelogram" << endl;
		cout << "5.Trapezium" << endl;
		cout << "6.Triangle" << endl;
	start:
		cout << endl
			 << "What would you like to do?: ";
		cin >> choice;

		if (choice == 1) // Square
		{
			cout << "Enter Length: ";
			cin >> l;

			area = l * l;
			cout << endl
				 << "Area of a Square = " << area;
		}
		else if (choice == 2) // Rectangle
		{
			cout << "Enter Length: ";
			cin >> l;

			cout << "Enter Width: ";
			cin >> w;

			area = l * w;
			cout << "Area of a Rectangle = " << area;
		}
		else if (choice == 3) // Circle
		{
			cout << "Enter Radius: ";
			cin >> r;

			area = PI * r * r;
			cout << "Area of a Circle = " << area;
		}
		else if (choice == 4) // Parallelogram
		{
			cout << "Enter Base: ";
			cin >> base;

			cout << "Enter Height: ";
			cin >> h;

			area = base * h;
			cout << "Area of a Parallelogram = " << area;
		}
		else if (choice == 5) // Trapezium
		{
			cout << "Enter Length: ";
			cin >> l;

			cout << "Enter Width: ";
			cin >> w;

			cout << "Enter Height: ";
			cin >> h;

			area = 0.5 * (l + w) * h;
			cout << "Area of a Trapezium = " << area;
		}
		else if (choice == 6) // Triangle
		{
			cout << "Side A: ";
			cin >> l;

			cout << "Side B: ";
			cin >> w;

			area = (0.5 * l) * w;
			cout << "Area of a Triangle = " << area;
		}
		else
		{
			printf("Enter a valid unit of measurement!\n");
			goto start;
		}
		choice = 0;
	}
	void hypotenuse()
	{
		system("cls");
		cout << "Enter the length of sides" << endl;

		cout << "Side A: ";
		cin >> a;

		cout << "Side B: ";
		cin >> b;

		double sum = sqrt((a * a) + (b * b));

		cout << sum;
	}
	void currency()
	{
		string currency;
		double rupee, amt;

		cout << "--------------------------------------" << endl;
		cout << "    USD  |  GBP  | AED | CNY | EUR " << endl;
		cout << "--------------------------------------" << endl;

		cout << "Please Select Currency -> ";
		cin >> currency;
		cout << endl;

		if (currency == "USD" || currency == "usd" || currency == "u" || currency == "us")
		{
			cout << "Enter Amount: ";
			cin >> amt;

			rupee = amt * 77.84;
			cout << amt << " = " << rupee;
		}
		else if (currency == "GBP" || currency == "gbp" || currency == "gb" || currency == "g")
		{
			cout << "Enter Amount: ";
			cin >> amt;

			rupee = amt * 95.57;
			cout << amt << " = " << rupee;
		}
		else if (currency == "AED" || currency == "aed" || currency == "ae" || currency == "a")
		{
			cout << "Enter Amount: ";
			cin >> amt;

			rupee = amt * 21.20;
			cout << amt << " = " << rupee;
		}
		else if (currency == "cny" || currency == "CNY" || currency == "cn" || currency == "c")
		{
			cout << "Enter Amount: ";
			cin >> amt;

			rupee = amt * 11.47;
			cout << amt << " = " << rupee;
		}
		else if (currency == "EUR" || currency == "eur" || currency == "eu" || currency == "e")
		{
			cout << "Enter Amount: ";
			cin >> amt;

			rupee = amt * 81.13;
			cout << amt << " = " << rupee;
		}
		else
		{
			cout << "Error" << endl;
		}
	}
};

int main()
{
	system("cls");
	abc obj;
	cout << "**********" << endl;
	cout << "Calculator" << endl;
	cout << "**********" << endl;
start:
	cout << "1.Open Simple Calculator" << endl;
	cout << "2.Validate Triangle" << endl;
	cout << "3.Check angle of a triangle" << endl;
	cout << "4.Area of Shapes" << endl;
	cout << "5.Find Hypotenuse" << endl;
	cout << "6.Convert Currency" << endl
		 << endl;

	cout << "What would you like to do?: ";

	cin >> choice;

	if (choice == 1)
	{
		obj.simpleCalculator();
	}
	else if (choice == 2)
	{
		obj.tringle();
	}
	else if (choice == 3)
	{
		obj.angleofTriangle();
		obj.tringle_2();
	}
	else if (choice == 4)
	{
		obj.areaofShapes();
	}
	else if (choice == 5)
	{
		obj.hypotenuse();
	}
	else if (choice == 6)
	{
		obj.currency();
	}
	else
	{
		cout << "=================" << endl;
		cout << "Choose again" << endl;
		cout << "=================" << endl
			 << endl;
		goto start;
	}

	return 0;
}
