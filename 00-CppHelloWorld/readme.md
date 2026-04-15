# 00-CppHelloWorld

Este es el primer trabajo práctico de la materia AED, consistente en la configuración del entorno y la creación de un programa "Hello, World!" en C++.

## Compilador Seleccionado
- **Compilador**: `g++` (MSYS2 UCRT64)
- **Versión del Compilador**: `15.2.0`
- **Versión de C++**: `C++20` (estándar utilizado)

### Comandos de Verificación
Para verificar la versión del compilador:
```bash
g++ --version
```

Para verificar las versiones del lenguaje soportadas:
```bash
g++ -v --help | grep -i "std="
```

## Proceso de Compilación y Ejecución
1. **Compilación**:
   ```bash
   g++ hello.cpp -o hello.exe -std=c++20
   ```
2. **Ejecución**:
   ```bash
   ./hello.exe
   ```
3. **Redirección a archivo**:
   ```bash
   ./hello.exe > output.txt
   ```

## Archivos del Proyecto
- [hello.cpp](hello.cpp): Código fuente del programa.
- [output.txt](output.txt): Salida del programa capturada.
- [readme.md](readme.md): Este archivo explicativo.
