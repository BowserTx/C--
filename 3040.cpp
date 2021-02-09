#include<iostream>

int main ()
{
	int h, d, g, cases;
	
	std::cin >> cases;
	
	for(; cases > 0; cases--)
	{
		std::cin >> h >> d >> g;
		
		if(h >= 200 && h<= 300 && d>= 50 && g>=150)
		
			std::cout << "Sim\n";
		
		else
			std::cout << "Nao\n";
	}
}
