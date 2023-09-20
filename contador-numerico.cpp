#include <iostream>

int main() {

int contador = 0;

for (int i = 0; i < 5; i++) {
	contador++;
	std::cout << "Contador: " << contador << std::endl;
	
}

for (int i = 0; i < 3; i++) {
	contador--;
	std::cout << "Contador: " << contador << std::endl;
}

return 0;

}
