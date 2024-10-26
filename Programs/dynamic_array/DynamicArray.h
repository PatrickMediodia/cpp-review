#pragma once

#include <vector>

namespace Evaluation {
    class DynamicArray {
		public:
			DynamicArray(int size);
			~DynamicArray();
			
			std::vector<int>& getDynamicArray();			

		private:
			std::vector<int>* v_;
	};
}

