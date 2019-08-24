/*------DECLARATIONS------*/
#include <iostream>
using namespace std;
void  _bubblesort_(void * _array_, int _tam_, void (*_puntero_) (void * _vector, int _k))
{
	for (int i = 0; i < _tam_-1 ; i ++)
	{
		for(int k = 0; k < _tam_-1-i; k++)
		{
			_puntero_(_array_,k);
		}
	}
		//return _array_;
}

/*------FUNCTIONS------*/

void  _b_int_ (void * _vector, int _k)
{
    int temp;
    if(((int*)_vector)[_k] > ((int*)_vector)[_k+1])
    {
        temp = ((int*)_vector)[_k];
        ((int*)_vector)[_k] = ((int*)_vector)[_k+1];
        ((int*)_vector)[_k+1] = temp;
    }
}

void  _b_float_ (void * _vector, int _k)
{
	float temp = 0;
	if(((float*)_vector)[_k] > ((float*)_vector)[_k+1])
    {
        temp = ((float*)_vector)[_k];
        ((float*)_vector)[_k] = ((float*)_vector)[_k+1];
        ((float*)_vector)[_k+1] = temp;
    }
}

void  _b_double_ (void * _vector, int _k)
{
    double temp;
    if(((double*)_vector)[_k] > ((double*)_vector)[_k+1])
    {
        temp = ((double*)_vector)[_k];
        ((double*)_vector)[_k] = ((double*)_vector)[_k+1];
        ((double*)_vector)[_k+1] = temp;
    }
}

void  _b_char_ (void * _vector, int _k)
{
    char temp;
    if(((char*)_vector)[_k] > ((char*)_vector)[_k+1])
    {
        temp = ((char*)_vector)[_k];
        ((char*)_vector)[_k] = ((char*)_vector)[_k+1];
        ((char*)_vector)[_k+1] = temp;
    }
}


/*------MAIN------*/
int main()
{
    int _array_1 [5] = {2,20,7,108,9};
	float _array_2 [5] = {4,5,9,7,2};
	double _array_3 [5] = {3.0,8.0,2.0,4.0,15.0};
	char _array_4 [6] = {'k','a','r','l','o','s'};

	_bubblesort_(_array_1,5,_b_int_);
	_bubblesort_(_array_2,5,_b_float_);
	_bubblesort_(_array_3,5,_b_double_);
	_bubblesort_(_array_4,6,_b_char_);

	std::cout << "ENTEROS : " << std::endl;
	for(int i = 0; i < 5; i++)
	{
		std::cout << _array_1[i] << std::endl;
	}
	std::cout << "FLOTANTES : " << std::endl;
	for(int i = 0; i < 5; i++)
	{
		std::cout << _array_2[i] << std::endl;
	}
	std::cout << "DOUBLES : " << std::endl;
	for(int i = 0; i < 5; i++)
	{
		std::cout << _array_3[i] << std::endl;
	}
	std::cout << "CHARACTERS : " << std::endl;
	for(int i = 0; i < 6; i++)
	{
		std::cout << _array_4[i] << std::endl;
	}
    return 0;
}

