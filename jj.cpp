#include <iostream>

struct A
{
	int a;
	char c[];
};
int main()
{
    struct A a;	
	std::cout<<sizeof(a)<<std::endl;
}
