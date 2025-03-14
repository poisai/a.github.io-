#include<iostream>
using namespace std;
int main ()
{
	for (int i=0;i<=127;i++){
		std::cout << static_cast<char>(i) << " ";
        if ((i + 1) % 16 == 0) {
            std::cout << std::endl;
        }
	}
	return 0;
	
}
