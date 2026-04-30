# DD-EjemploTipos

Este trabajo ejemplifica el uso de tipos de datos básicos en C++ utilizando valores literales y verificaciones mediante `assert`.

## Estudiante
- **Nombre**: Mateo Dumas
- **Legajo**: [Tu Legajo Aquí]
- **Curso**: K1053
- **Grupo**: 5

## Tipos de Datos Ejemplificados
- `bool`: Valores lógicos `true` y `false`.
- `char`: Caracteres individuales, incluyendo representaciones octales (`\141`) y hexadecimales (`\x61`).
- `unsigned`: Números enteros sin signo (usando el sufijo `u`).
- `int`: Números enteros con signo, incluyendo representaciones decimales, octales (`0`), hexadecimales (`0x`) y binarias (`0b`).
- `double`: Números de punto flotante de doble precisión.
- `std::string`: Cadenas de caracteres (usando literales de string de C++23 con el sufijo `s`).

## Crédito Extra

### ¿Son estos todos los tipos usados en clase?
No. En clase también se mencionan otros tipos como:
- `float`: Punto flotante de precisión simple (literales con sufijo `f`).
- `long`, `long long`: Enteros de mayor tamaño.
- `void`: Tipo que representa la ausencia de valor.
- `std::byte`: Para representar bytes de memoria.
- Tipos compuestos como punteros, referencias y arreglos.

### La suma de 0.1 diez veces
En el programa se incluyó la prueba:
`assert(0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 != 1.0);`

**¿Qué está ocurriendo?**
Los números decimales como `0.1` no pueden representarse de forma exacta en el sistema binario (IEEE 754) que utilizan las computadoras. `0.1` en binario es una fracción periódica infinita. Al almacenarse en un `double`, el valor se trunca, acumulando un pequeño error de redondeo en cada suma. Por lo tanto, el resultado final es ligeramente diferente de `1.0`.

## Compilación y Ejecución
```bash
g++ EjemploTipos.cpp -o EjemploTipos.exe -std=c++23
./EjemploTipos.exe
```
*Si el programa termina sin errores, todas las pruebas de `assert` pasaron exitosamente.*
