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
		int val = 0;
		for (int i = 0; i <= ndegree.size; i++) {
			if (val <= ndegree[i]) {
				val = ndegree[i];
			}
		}
		cout<<val;
	}

	Polynomial operator+(const Polynomial& p) {
		Polynomial result;
		for (int i = 0; i < this->ndegree.size;i++) {
			bool check = false;
			for (int u = 0; u < p.ndegree.size; u++) {
				if (this->ndegree[i] == p.ndegree[u]) {
					result.ndegree.push_back[i];
					result.coeficients.push_back[this->coeficients[i] + p.coeficients[i]];
					check = true;
				}
				if (check = false) {
					result.ndegree.push_back[i];
					result.coeficients.push_back[this->coeficients[i]];
			}}

		}

		for (int i = 0; i < p.ndegree.size; i++) {
			bool check = false;
			for (int u = 0; u < this->ndegree.size; u++) {
				if (p.ndegree[i] ==this->ndegree[u]) {
					check = true;
				}
				if (check = false) {
					result.ndegree.push_back[i];
					result.coeficients.push_back[p.coeficients[i]];
				}
			}

		}


		return result;
	};

	Polynomial operator+=(const Polynomial& p) {
		Polynomial result;
		for (int i = 0; i < this->ndegree.size; i++) {
			bool check = false;
			for (int u = 0; u < p.ndegree.size; u++) {
				if (this->ndegree[i] == p.ndegree[u]) {
					result.ndegree.push_back[i];
					result.coeficients.push_back[this->coeficients[i] + p.coeficients[i]];
					check = true;
				}
				if (check = false) {
					result.ndegree.push_back[i];
					result.coeficients.push_back[this->coeficients[i]];
				}
			}

		}

		for (int i = 0; i < p.ndegree.size; i++) {
			bool check = false;
			for (int u = 0; u < this->ndegree.size; u++) {
				if (p.ndegree[i] == this->ndegree[u]) {
					check = true;
				}
				if (check = false) {
					result.ndegree.push_back[i];
					result.coeficients.push_back[p.coeficients[i]];
				}
			}

		}
		*this = result;

	};


	Polynomial operator+(const int& p) {
		Polynomial result;
		result =*this;
		result.coeficients[0] = result.coeficients[0] + p;
		return result;
	};

	double operator+(Polynomial& p) {
		Polynomial result;
		result = p;
		result.coeficients[0] = result.coeficients[0] + *this;
		return ;
	};
	Polynomial operator+=(const int& p) {
		this->coeficients[0]=coeficients[0]+p;
	};

	Polynomial operator<<(Polynomial) {
	}



};

#endif //POLINOMIO_POLINOMIO_H
