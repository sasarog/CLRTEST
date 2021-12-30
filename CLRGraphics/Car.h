#pragma once
using namespace System;
using namespace System::Drawing;
ref class wheel {
public:
	wheel(Graphics^ g,Color a, int rotate, int radius, Point center) {
		pen = gcnew Pen(a);
		this->g = g;
		this->Rotate = rotate;
		this->Radius = radius;
		this->center = center;
	}
	Graphics^ g;
	Point center;
	int Radius;
	Pen^ pen;
	double Rotate =1;
	void print() {
		g->DrawArc(pen,
			center.X - Radius, center.Y - Radius,
			Radius * 2, Radius * 2,
			0, 360
		);
		for (int i = 0; i < 6; i++)
		{
			Rotate += Math::PI / 3;
			g->DrawLine(pen, center,
				Point(
					Radius*Math::Sin(Rotate)+center.X,
					Radius * Math::Cos(Rotate)  + center.Y)
			);
		}

	}
	void update(double angle) {
		Rotate += angle;
		print();

	}
};
class Car
{
	Point position;
	Point Wheel1;
	Point Wheel2;
	void update() {

	}

};

