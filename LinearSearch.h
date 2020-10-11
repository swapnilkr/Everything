#define LINEARSEARCH_H
#include <vector>
using namespace std;

class LinearSearch {
	/*
	AVERAGE: O(n/2)
	WORST: O(n) => last element
	BEST: O(1) => first element
	*/
	public:
		template<typename T>
		static int search(vector<T> &array, T searchKey) {
			for(int i = 0; i < array.size(); i++)
			{
				if(array[i] == searchKey)
				{
					return i;
				}
			}
			return -1;
		}	



	private:
};




