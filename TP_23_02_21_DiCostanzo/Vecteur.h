#pragma once
#include "Header.h"

class Vecteur2D {
private:
	float x1;
	float y1;

	float x2;
	float y2;
public:
	Vecteur2D();
	~Vecteur2D();

	void SetVecteur2D(float a_x1, float a_x2, float a_y1, float a_y2);

	std::pair<float, float> GetBeginV2D();
	std::pair<float, float> GetEndV2D();

	std::pair<float, float> GetDistance2D(Vecteur2D v1, Vecteur2D v2);
};

class Vecteur3D {
private:
	double x1;
	double x2;

	double y1;
	double y2;

	double z1;
	double z2;
public:
	Vecteur3D();
	~Vecteur3D();

	void SetVecteur3D(double a_x1, double a_x2, double a_y1, double a_y2, float a_z1, double a_z2);

	std::tuple<double, double, double> GetBeginV3D();
	std::tuple<double, double, double> GetEndV3D();

	std::tuple<double, double, double>  GetDistance3D(Vecteur3D v1, Vecteur3D v2);
};



//J'avais commencé à faire ça, mais j'arrive pas à le faire fonctionner
//						|
//						|
//						|
//						|
//						|
//						V


//std::enable_if_t < sizeof(T) && (false == std::is_same<float, float>::value)>;
//template <typename T, typename T, typename T>
//class Vecteur
//{
//
//private:
//	float x;
//	float y;
//	float z;
//
//public :
//	Vecteur(float a_x, float a_y, float a_z) { cout << "3d" << endl }
//	~Vecteur();
//
//	void SetThreeD(float a_x, float a_y, float a_z);
//
//	Vecteur GetThreeDBegin();
//	Vecteur GetThreeDEnd();
//
//	Vecteur GetDistanceThreeD(Vecteur v1, Vecteur v2);
//};
//

//std::enable_if_t<sizeof(U) && (false == std::is_same<double, double>::value), int>;
//template <typename U, typename U>
//std::enable_if_t<sizeof(U) && (false == std::is_same<double, double>::value), int>;
//class Vecteur {
//private:
//	float x;
//	float y;
//public:
//	Vecteur() {
//		cout << "2d" << endl;
//	}
//
//	~Vecteur();
//
//	void SetTwoD(double a_x, double a_y);
//
//	Vecteur GetTwoDBegin();
//	Vecteur GetTwoDEnd();
//
//	Vecteur GetDistanceTwoD(Vecteur v1, Vecteur v2);
//};
