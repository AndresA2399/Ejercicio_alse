//Ejercicio pendiente de una recta con dos puntos

#include<iostream>

using namespace std;

template <class Data>

inline void pen(Data& x1, Data& x2, Data& y1, Data& y2, Data& m)
{
	m = (y2-y1)/(x2-x1);
}

int main()
{
	double x1,x2,y1,y2,m;
	
	cout << "El programa calculara la pendiente de una recta por medio de dos puntos"<< endl;
	cout << "Digite las coordenadas x y y del punto 1"<<endl;
	cin >> x1;
	cin >> y1;
	cout << "Digite las coordenadas x y y del punto 2"<<endl;
	cin >> x2;
	cin >> y2;
	
	//Calculo de la pendiente
	pen (x1,x2,y1,y2,m);
	
	cout << "La pendiente de la recta es:" << m << endl; 
	
	return 0;
}

