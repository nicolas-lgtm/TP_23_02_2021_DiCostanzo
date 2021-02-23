#include "Vecteur.h"

Vecteur2D::Vecteur2D() { SetVecteur2D(0, 0, 0, 0); }
Vecteur2D::~Vecteur2D() { }

void Vecteur2D::SetVecteur2D(float a_x1, float a_x2, float a_y1, float a_y2) {
	x1 = a_x1;
	x2 = a_x2;
	y1 = a_y1;
	y2 = a_y2;
}

std::pair<float, float> Vecteur2D::GetBeginV2D() {
	std::pair<float, float> begin;
	begin.first = x1;
	begin.second = y1;
	return begin;
}

std::pair<float, float> Vecteur2D::GetEndV2D() {
	std::pair<float, float> end;
	end.first = x2;
	end.second = y2;
	return end;
}

std::pair<float, float> Vecteur2D::GetDistance2D(Vecteur2D v1, Vecteur2D v2) {
	std::pair<float, float> distance;

	distance.first = get<0>(v1.GetBeginV2D()) - get<0>(v2.GetBeginV2D());
	distance.second = get<1>(v1.GetBeginV2D()) - get<1>(v2.GetBeginV2D());


	return distance;
}



Vecteur3D::Vecteur3D() { SetVecteur3D(0, 0, 0, 0, 0, 0); }
Vecteur3D::~Vecteur3D() { }

void Vecteur3D::SetVecteur3D(double a_x1, double a_x2, double a_y1, double a_y2, float a_z1, double a_z2) {
	x1 = a_x1;
	x2 = a_x2;

	y1 = a_y1;
	y2 = a_y2;
	
	z1 = a_z1;
	z2 = a_z2;
}

std::tuple<double, double, double> Vecteur3D::GetBeginV3D() {
	auto begin = make_tuple(x1, y1, z1);

	return begin;
}

std::tuple<double, double, double> Vecteur3D::GetEndV3D() {
	auto end = make_tuple(x2, y2, z2);

	return end;
}

std::tuple<double, double, double> Vecteur3D::GetDistance3D(Vecteur3D v1, Vecteur3D v2) {
	std::tuple<double, double, double> distance;

	double d1 = get<0>(v1.GetEndV3D()) - get<0>(v2.GetBeginV3D());
	double d2 = get<1>(v1.GetEndV3D()) - get<1>(v2.GetBeginV3D());
	double d3 = get<2>(v1.GetEndV3D()) - get<2>(v2.GetBeginV3D());

	auto distance = make_tuple(d1, d2, d3);

	return distance;
}
