//
// Created by ruben on 9/12/2019.
//

#ifndef POLINOMIO_POLINOMIO_H
#define POLINOMIO_POLINOMIO_H
//#define LISTA
#include <vector>
#include <iostream>
#include <ostream>

using namespace std;

class Polynomial {
public:
	vector<double> coeficients;
	vector<int> ndegree;

	void add(vector<double,int> inputs) {
		coeficients.push_back(inputs[0]);
		ndegree.push_back(inputs[1]);
	};

	void get_expression(Polynomial Poly) {
		for (int i = 0; i <= coeficients.size; i++) {
			if (coeficients[i] != 0) {
				cout << showpos << coeficients[i];
				cout << "x^" << ndegree[i];
			}
			else {
				cout << coeficients[i];
			}
		}
	}

	int degree() {
		cout[ndegree]
	}

	int operator+() {
	}

	Polynomial operator<<(Polynomial) {
	}



};

#endif //POLINOMIO_POLINOMIO_H
