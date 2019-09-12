#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "Polynomial.h"
#include <iostream>
using namespace std;

int main() {

	Polynomial p1;
	p1.add({ 1,2 });
	Polynomial p2 = p1;
	p1.get_expression(p1);
};