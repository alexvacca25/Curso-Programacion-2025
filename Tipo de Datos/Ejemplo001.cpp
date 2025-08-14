/*
* Ejemplo Integral de C++: Tipos de Datos, Variables, Constantes, Entradas y Salidas
* Propósito académico: Demostrar conceptos fundamentales de programación
* Autor: Profe Alex - Ejemplo didáctico
* Compilador: Compatible con C++11 o superior
*/

#include <iostream>
#include <string>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
   // DECLARACIÓN DE CONSTANTES
   // Las constantes representan valores inmutables durante la ejecución
   const double PI = 3.14159265359;
   const int EDAD_MINIMA = 18;
   const string UNIVERSIDAD = "Institución Educativa Superior";
   
   // TIPOS DE DATOS FUNDAMENTALES
   // 1. Tipos enteros
   int numeroEstudiantes = 0;           // 32 bits, rango: -2,147,483,648 a 2,147,483,647
   short codigoCurso = 0;               // 16 bits, rango: -32,768 a 32,767
   long identificacionPersonal = 0L;     // 32/64 bits según arquitectura
   long long numeroDocumento = 0LL;      // 64 bits, rango extendido
   
   // 2. Tipos de punto flotante
   float promedio = 0.0f;               // 32 bits, precisión ~7 dígitos decimales
   double notaFinal = 0.0;              // 64 bits, precisión ~15 dígitos decimales
   long double precision = 0.0L;        // 80/128 bits, máxima precisión
   
   // 3. Tipos caracteres
   char inicial = 'A';                  // 8 bits, un carácter ASCII
   string nombreCompleto;               // Cadena de caracteres (clase string)
   
   // 4. Tipos booleanos
   bool estaAprobado = false;           // true o false
   
   // 5. Tipos sin signo (unsigned)
   unsigned int edad = 0;               // Solo valores positivos, rango: 0 a 4,294,967,295
   
   // CONFIGURACIÓN DE SALIDA CON FORMATO
   cout << fixed << setprecision(2);    // Formato decimal con 2 decimales
   
   // PRESENTACIÓN DEL SISTEMA
   cout << "==========================================================" << endl;
   cout << "    SISTEMA ACADÉMICO DE REGISTRO ESTUDIANTIL" << endl;
   cout << "==========================================================" << endl;
   cout << "Universidad: " << UNIVERSIDAD << endl;
   cout << "Constante PI utilizada en cálculos: " << PI << endl;
   cout << "Edad mínima de ingreso: " << EDAD_MINIMA << " años" << endl;
   cout << "==========================================================" << endl;
   
   // OPERACIONES DE ENTRADA (INPUT)
   cout << "\n--- INGRESO DE DATOS DEL ESTUDIANTE ---" << endl;
   
   cout << "Ingrese el nombre completo del estudiante: ";
   cin.ignore(); // Limpiar buffer antes de getline
   getline(cin, nombreCompleto);
   
   cout << "Ingrese la edad del estudiante: ";
   cin >> edad;
   
   cout << "Ingrese el número de identificación personal (long): ";
   cin >> identificacionPersonal;
   
   cout << "Ingrese el número de documento (long long): ";
   cin >> numeroDocumento;
   
   cout << "Ingrese el código del curso (short): ";
   cin >> codigoCurso;
   
   cout << "Ingrese el número total de estudiantes en el curso: ";
   cin >> numeroEstudiantes;
   
   cout << "Ingrese la nota final del estudiante (0.0 - 5.0): ";
   cin >> notaFinal;
   
   cout << "Ingrese el promedio acumulado (float): ";
   cin >> promedio;
   
   cout << "Ingrese la inicial del primer nombre: ";
   cin >> inicial;
   
   // PROCESAMIENTO Y VALIDACIONES
   estaAprobado = (notaFinal >= 3.0) ? true : false;
   
   // Cálculo de área de círculo utilizando constante PI
   double radio = 2.5;
   double areaCirculo = PI * radio * radio;
   
   // OPERACIONES DE SALIDA (OUTPUT) CON FORMATO
   cout << "\n==========================================================" << endl;
   cout << "           REPORTE ACADÉMICO GENERADO" << endl;
   cout << "==========================================================" << endl;
   
   // Demostración de tipos de datos y sus rangos
   cout << "\n--- INFORMACIÓN TÉCNICA DE TIPOS DE DATOS ---" << endl;
   cout << "Tamaño de int: " << sizeof(int) << " bytes" << endl;
   cout << "Tamaño de short: " << sizeof(short) << " bytes" << endl;
   cout << "Tamaño de long: " << sizeof(long) << " bytes" << endl;
   cout << "Tamaño de long long: " << sizeof(long long) << " bytes" << endl;
   cout << "Tamaño de float: " << sizeof(float) << " bytes" << endl;
   cout << "Tamaño de double: " << sizeof(double) << " bytes" << endl;
   cout << "Tamaño de char: " << sizeof(char) << " bytes" << endl;
   cout << "Tamaño de bool: " << sizeof(bool) << " bytes" << endl;
   
   // Valores límite de tipos numéricos
   cout << "\n--- RANGOS DE TIPOS DE DATOS ---" << endl;
   cout << "Valor máximo int: " << numeric_limits<int>::max() << endl;
   cout << "Valor mínimo int: " << numeric_limits<int>::min() << endl;
   cout << "Valor máximo float: " << numeric_limits<float>::max() << endl;
   cout << "Valor máximo double: " << numeric_limits<double>::max() << endl;
   
   // Salida de datos del estudiante
   cout << "\n--- DATOS DEL ESTUDIANTE ---" << endl;
   cout << "Nombre completo: " << nombreCompleto << endl;
   cout << "Inicial: " << inicial << endl;
   cout << "Edad: " << edad << " años" << endl;
   cout << "Identificación personal: " << identificacionPersonal << endl;
   cout << "Número de documento: " << numeroDocumento << endl;
   cout << "Código del curso: " << codigoCurso << endl;
   cout << "Total estudiantes en curso: " << numeroEstudiantes << endl;
   cout << "Nota final: " << notaFinal << "/5.0" << endl;
   cout << "Promedio acumulado: " << promedio << endl;
   cout << "Estado académico: " << (estaAprobado ? "APROBADO" : "REPROBADO") << endl;
   
   // Demostración de operaciones con constantes
   cout << "\n--- CÁLCULOS CON CONSTANTES ---" << endl;
   cout << "Área de círculo con radio " << radio << ": " << areaCirculo << endl;
   cout << "Perímetro de círculo: " << (2 * PI * radio) << endl;
   
   // Validación de edad usando constante
   cout << "\n--- VALIDACIONES ---" << endl;
   if (edad >= EDAD_MINIMA) {
       cout << "✓ Cumple con la edad mínima de ingreso" << endl;
   } else {
       cout << "✗ No cumple con la edad mínima (" << EDAD_MINIMA << " años)" << endl;
   }
   
   // Demostración de formateo avanzado
   cout << "\n--- FORMATEO DE SALIDA ---" << endl;
   cout << "Nota con 4 decimales: " << setprecision(4) << notaFinal << endl;
   cout << "Promedio en formato científico: " << scientific << promedio << endl;
   cout << "Edad en formato hexadecimal: " << hex << edad << endl;
   cout << "Edad en formato octal: " << oct << edad << endl;
   cout << "Regreso a formato decimal: " << dec << edad << endl;
   
   cout << "\n==========================================================" << endl;
   cout << "              PROGRAMA FINALIZADO" << endl;
   cout << "==========================================================" << endl;
   
   return 0;
}