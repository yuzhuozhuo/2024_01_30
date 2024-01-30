#include<iostream>
using namespace std;

template<class T>
class Vector
{
public:
	Vector()
		:_a(nullptr)
		,_size(0)
		,_capacity(0)
	{}



	~Vector()
	{
		delete[]_a;
		_a = nullptr;
		_size = 0;
		_capacity = 0;
	}

private:
	T* _a;
	size_t _size;
	size_t _capacity;
};

int main()
{


	return 0;
}