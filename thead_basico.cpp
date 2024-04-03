#include <iostream>
#include <thread>
#include <vector>

// Función que será ejecutada por el hilo
void funcion_hilo(int Texto) {
    std::cout << "Hola soy el hijo :" << Texto << std::endl;
}

int main() {
    // Crear un objeto thread y ejecutar la función con argumentos
    std::vector<std::thread> Hilo;

    for(int i = 0 ; i < 10 ; i++)
        Hilo.push_back(std::thread(funcion_hilo, i));

    // Esperar a que el hilo termine de ejecutar
    for (auto& thread : Hilo) {
        thread.join();
    }

    return 0;
}







#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5};

    // Imprime cada número en la consola utilizando una lambda
    std::for_each(numbers.begin(), numbers.end(), [](int n) {
        std::cout << n << " ";
    });

    // Imprime la suma de todos los números utilizando una lambda
    int sum = 0;
    std::for_each(numbers.begin(), numbers.end(), [&](int n) {
        sum += n;
    });
    std::cout << "\nLa suma de los numeros es: " << sum << std::endl;

    return 0;
}
