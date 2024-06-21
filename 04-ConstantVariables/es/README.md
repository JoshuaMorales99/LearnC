# 🧊 Variables Constantes
📖 **TABLA DE CONTENIDOS**
- [🧊 Variables Constantes](#-variables-constantes)
  - [¿Qué es una constante?](#qué-es-una-constante)
  - [¿Cómo definir una constante en C?](#cómo-definir-una-constante-en-c)
  - [Propiedades de las constantes](#propiedades-de-las-constantes)
    - [Inicialización con declaración](#inicialización-con-declaración)
    - [Inmutabilidad](#inmutabilidad)
  - [Definición de constantes mediante el preprocesador `#define`](#definición-de-constantes-mediante-el-preprocesador-define)
    - [¿Qué es el preprocesador `#define`?](#qué-es-el-preprocesador-define)
    - [¿Cómo lo usamos para declarar constantes?](#cómo-lo-usamos-para-declarar-constantes)
    - [Diferencia entre la constante definida mediante el calificador `const` y `#define`](#diferencia-entre-la-constante-definida-mediante-el-calificador-const-y-define)
    - [Puntos importantes](#puntos-importantes)
  - [Buenas prácticas](#buenas-prácticas)
  - [Errores comunes](#errores-comunes)
  - [Bibliografía](#bibliografía)

<br>

| ◀ | **Módulo anterior**: [Módulo 02 - Variables y Tipos de datos](https://github.com/JoshuaMorales99/LearnC/tree/main/02-VariablesAndDataTypes/es)<br>
| ▶ | **Módulo siguiente**: [Módulo 04 - PRÓXIMAMENTE]()

## ¿Qué es una constante?
En el módulo anterior conocimos a las variables, cuyos valores se pueden modificar una cantidad infinita de veces. Por otra parte, el lenguaje C también nos proporciona una forma de hacer que el valor de una variable sea inmutable. A estas se las conoce como **constantes**.<br>
Una variable constante en C es una variable de solo lectura cuyo valor no se puede modificar una vez declarada en el programa. Estas pueden ser:
- Una constante entera.
- Una constante punto flotante.
- Una constante de caracteres.
- Una constante de cadena.
- Una constante matriz.
- Una constante de estructura.

<img src="./assets/Constantes.webp" alt="Bloque de hielo con la palabra 'int' dentro" width=250px/>

## ¿Cómo definir una constante en C?
Para poder declarar una variable constante, debemos utilizar la palabra reservada `const`. Su sintaxis es la siguiente:
```
const <TIPO_VARIABLE> <IDENTIFICADOR> = <INICIALIZACION> ;
```
> Es importante **inicializar las variables constantes** en la declaración, ya que no podemos modificar su valor después de definirla. De lo contrario, la variable almacenará un valor basura y no tendremos la posibilidad de cambiarlo.

Veamos un ejemplo:
```c
// Declarar constante entera.
const int CONSTANTE_ENTERA = 10;
// Declarar constante flotante.
const float CONSTANTE_FLOTANTE = 15.66;
// Declarar constante caracter.
const char CONSTANTE_CARACTER = 'a';

// Imprimir los valores por consola.
printf("El valor de CONSTANTE_ENTERA es: %d\n", CONSTANTE_ENTERA);
printf("El valor de CONSTANTE_FLOTANTE es: %f\n", CONSTANTE_FLOTANTE);
printf("El valor de CONSTANTE_CARACTER es: %c\n", CONSTANTE_CARACTER);
```
***Salida***:
```
> El valor de CONSTANTE_ENTERA es: 10
> El valor de CONSTANTE_FLOTANTE es: 15.66
> El valor de CONSTANTE_CARACTER es: a
```

## Propiedades de las constantes
Las propiedades importantes de las variables constantes en C definidas mediante la palabra clave `const` son las siguientes:

### Inicialización con declaración
Solo podemos inicializar la variable constante en el momento de su declaración. De lo contrario, almacenará un valor basura.

### Inmutabilidad
Las variables constantes son inmutables después de su definición, es decir, se pueden inicializar solo una vez en todo el programa. Después de eso, no podemos modificar el valor almacenado dentro de esa variable.
```c
#include <stdio.h>
 
int main() {
    // Declarar constante entera sin inicializar.
    const int UNA_CONSTANTE;
    // Inicializar constante después de declararla.
    UNA_CONSTANTE = 20;

    // Imprimir el valor de la constante entera.
    printf("Valor de UNA_CONSTANTE: %d\n", UNA_CONSTANTE);

    return 0;
}
```
***Salida***:
```
In function 'main':
7:18: error: assignment of read-only variable 'UNA_CONSTANTE'
7 |     UNA_CONSTANTE = 20;
  |                  ^
```

## Definición de constantes mediante el preprocesador `#define`
Otra manera de definir una constante es utilizando `#define`.

### ¿Qué es el preprocesador `#define`?
El preprocesador `#define` es una directiva de preprocesamiento que se utiliza para definir macros. Las macros son identificadores definidos por `#define` que se reemplazan por su valor antes de la compilación.

### ¿Cómo lo usamos para declarar constantes?
Para declarar constantes lo haremos con la siguiente sintáxis:
- Para definir constantes:
```
#define <IDENTIFICADOR> <VALOR>
```

- Para definir expresiones:
```
#define <IDENTIFICADOR> ( <EXPRESION> )
```

Por ejemplo:
```c
// Definición de EULER usando un valor.
#define EULER 2.7182818284

// Definición de PI usando una expresión.
#define PI (22 / 7)
```

### Diferencia entre la constante definida mediante el calificador `const` y `#define`
**Las constantes que usan `const`**:
- Son variables que son inmutables.
- Son manejadas por el compilador.

**Las constantes que usan `#define`**:
- Son macros que se sustituyen por su valor.
- Son manejadas por el preprocesador.

### Puntos importantes
- Las macros declaradas mediante `#define` se utilizan para almacenar constantes y no se pueden cambiar. No podemos asignar variables a las macros.
- No podemos usar el operador `=` para asignar valor a las macros.
- No usamos el punto y coma (`;`) al final de la declaración en `#define`.

> Este método para definir la constante no es el preferido, ya que puede introducir errores y dificultar el mantenimiento del código.

## Buenas prácticas
- Usa `const` en lugar de `#define` para declarar constantes, siempre que sea posible. Esto se hace para porder aprovechar las comprobaciones que realiza el compilador.
- Da nombres significativos y en mayúsculas a las constantes para poder diferenciarlas de las variables regulares.
- Agrupa las constantes relacionadas juntas para mejorar la legibilidad del código.

## Errores comunes
- No inicializar una constante en el momento de su declaración.
- Intentar cambiar el valor de una constante después de su inicialización.
- Confundir `const` y `#define` en su uso y propósito.
- Olvidar que las macros definidas con `#define` no tienen un tipo y pueden causar errores de tipo inesperados.

## Bibliografía
- [W3schools: Constants](https://www.w3schools.com/c/c_constants.php)
- [GeeksForGeeks: Variables in C](https://www.geeksforgeeks.org/variables-in-c/?ref=lbp)
- [GeeksForGeeks: Constants in C](https://www.geeksforgeeks.org/constants-in-c/?ref=lbp)
- [GeeksForGeeks: Define preprocessor](https://www.geeksforgeeks.org/c-define-preprocessor/)