#include <cassert>
#include <string>

int main() {
    // bool
    assert(true);
    assert(false == false);
    assert(not false);
    assert(true or false);
    assert(true and true);

    // char
    assert('a' == 'a');
    assert('a' != 'b');
    assert('a' + 1 == 'b');
    assert('\141' == 'a'); // Octal
    assert('\x61' == 'a'); // Hexadecimal

    // unsigned
    assert(10u == 10u);
    assert(5u > 0u);
    assert(2u + 2u == 4u);
    assert(0u - 1u > 0u); // Underflow (valor máximo de unsigned)

    // int
    assert(42 == 42);
    assert(-5 < 0);
    assert(10 / 3 == 3);
    assert(10 % 3 == 1);
    assert(052 == 42);   // Octal
    assert(0x2A == 42);  // Hexadecimal
    assert(0b101010 == 42); // Binario

    // double
    assert(3.14 == 3.14);
    assert(1.0 + 1.0 == 2.0);
    assert(2.5 * 2.0 == 5.0);
    assert(1e2 == 100.0);
    assert(.5 == 0.5);
    
    // Prueba de precisión de punto flotante (Crédito Extra)
    // 0.1 sumado 10 veces no es exactamente 1.0 debido a la representación binaria
    assert(0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 != 1.0);

    // string
    using namespace std::string_literals;
    assert("hola" == "hola"s);
    assert("hola"s.length() == 4);
    assert("hola"s + " mundo"s == "hola mundo"s);
    assert("A"s < "B"s);

    return 0;
}
