#include <iostream>
using namespace std;

int tes_var = 19;

int function_test_2();
void ptr_ex_1();

//a defini inseamna implementarea functiei

int main() 
{
	function_test_2();
	ptr_ex_1();

	return 0;
}

int function_test_2() 
{
	return 0;
}

void ptr_ex_1() {
	int test_var = 7;
	int x = 3;
	char y = 'c';
	double d = 2.5;
	int v1[111] = { 0 };


//cum luam adresele pt fiecvare din variabilele astea?
//asa?

	int* ptr_test_var = &test_var;
	int* ptr_x = &x;
	char* ptr_y = &y;
	double* ptr_d = &d;
	//int* ptr_v1 = &v1;

	x++;

	int a = 3 + x++; //postincrementare ( x++)
	int b = 3 + ++x; //preincrememntare (++x)

	ptr_x++;

	ptr_y++;
	ptr_d++;

}
//care e dimensiunea unui pointer?
//este dimensiunea unui intreg 

//incrementarea se face din 4 in 4
