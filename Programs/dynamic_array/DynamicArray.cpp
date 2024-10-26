#include "DynamicArray.h"
#include <vector>
#include <iostream>

using namespace std;

namespace Evaluation {
	DynamicArray::DynamicArray(int size) {
		v_ = new std::vector<int>;

		for (int i = 0; i < size; i++) {
			*v_.push_back(i);

			cout << *v_[i];
		}
	}

	DynamicArray::~DynamicArray() {
		delete[] v_;
	}

	std::vector<int>& getDynamicArray() {
		return *v_;
	}
}

