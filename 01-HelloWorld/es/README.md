# 🌎¡Hola Mundo!
📖 **TABLA DE CONTENIDOS**
- [🌎¡Hola Mundo!](#hola-mundo)
	- [Introducción](#introducción)
	- [Nuestro primer programa (Hola Mundo!)](#nuestro-primer-programa-hola-mundo)
	- [Librerías](#librerías)
		- [¿Qué son las librerías?](#qué-son-las-librerías)
		- [¿Qué podemos encontrar en `stdio.h`?](#qué-podemos-encontrar-en-stdioh)
	- [La función principal](#la-función-principal)
		- [El `main`](#el-main)
		- [El `return`](#el-return)
	- [Bibliografía](#bibliografía)

<br>

| ▶ | **Módulo siguiente**: [Módulo 02 - Variables y Tipos](https://github.com/JoshuaMorales99/LearnC/tree/main/02-VariablesAndTypes/es)

## Introducción
Este tutorial está diseñado para ayudarte a entender los conceptos básicos de escribir y ejecutar un programa simple en C. Comenzaremos con el programa "¡Hola Mundo!", que es un primer paso tradicional en el aprendizaje de cualquier lenguaje de programación.

## Nuestro primer programa (Hola Mundo!)
Para empezar, el programa "Hola Mundo!" es el primer paso para aprender cualquier lenguaje de programación, y también uno de los programas más sencillos que aprenderemos. Todo lo que hay que hacer es mostrar el mensaje `"Hola Mundo!"` en la pantalla/consola.

<img src="./assets/HelloWorld.webp" alt="Planeta tierra con cartelito" width=300px/>

Pero antes, veamos algunos conceptos sencillos.

## Librerías
En C, todas las líneas que comienzan con el signo de almohadilla (`#`) se denominan **directivas**. Estas instrucciones son procesadas por el programa de preprocesamiento invocado por el compilador.
```
# <DIRECTIVA> <LIBRERÍA>
```

### ¿Qué son las librerías?
Todo programa en C utiliza **librerías**, las cuales dan la habilidad de ejecutar funciones necesarias. Un ejemplo es el caso de la función `printf`, la cual imprime un mensaje o cadena con formato en pantalla. Dicha función está definida en el archivo `stdio.h`.

### ¿Qué podemos encontrar en `stdio.h`?
El archivo de inclusión `<stdio.h>` define constantes, macros, tipos y declara funciones de entrada y salida de secuencias. Algunas de ellas son:
- `printf`
- `scanf`
- `fopen`
- `fclose`
- `fprintf`
- etc.

Para añadir la habilidad de correr el comando `printf` a nuestro programa, debemos añadir la siguiente directiva a nuestra primera línea de código.
```c
#include <stdio.h>
```
En otras palabras, la directiva `#include` le dice al compilador que incluya un archivo y `#include <stdio.h>` le dice al compilador que incluya el archivo de cabecera para la entrada y salida estándar que contiene declaraciones de todas las funciones estándar de la biblioteca de entrada/salida.

## La función principal
### El `main`
El primer código que correrá **siempre** estará dentro de la función `main`.
```c
int main() {
    // Nuestro código aquí.

	return 0;
}
```
Esto es debido a que la ejecución de cada programa en C comienza con la función `main()`, sin importar dónde se encuentre la función en el programa. Por lo tanto, todo programa C debe tenerla.<br>
Nuestro código estará encerrado entre llaves (`{}`) donde:
- Las llaves de apertura `{` indican el comienzo de la función principal.
- Las llaves de cierre `}` indican el final de la función principal.

Todo lo que se encuentra entre estos dos comprenden el cuerpo de la función principal, que será llamado **bloque**

### El `return`
La expresión de retorno es una instrucción que se utiliza para devolver un valor de una función e indicar su finalización. Usualmente es utilizada para devolver los resultados de las operaciones realizadas por una función. En este caso, la función `main` está acompañada de la palabra clave `int` que indica que la función devolverá un entero.<br>
De acuerdo con los estándares de codificación, un buen programa debe salir de la función principal con 0. Este número devuelto por la función indica si el programa que escribimos funciona correctamente. Si queremos decir que nuestro código corrió exitosamente, devolvemos el número 0 (Un número mayor que 0 significará que el programa falló).<br>
Para este programa, devolveremos 0 para indicar que nuestro programa fue exitoso.
```c
return 0;
```
> Tener en cuenta que cada declaración C **debe terminar con un punto y coma**, para que el compilador sepa que ha comenzado una nueva declaración.

Finalmente, llamamos a la función `printf` para imprimir nuestro mensaje en consola.
```c
// Define constantes, macros, tipos y declara funciones de entrada y salida.
#include <stdio.h>

int main() {
    // Imprimir "Hola Mundo!" en consola.
    printf("Hola Mundo!\n");

    // Retornar 0 si el codigo se ejecuto correctamente.
    return 0;
}
```
***Salida***:
```
> Hola Mundo!
```

## Bibliografía
Se utilizó las siguientes fuente:
- [Learn-C: Hola, Mundo!](https://www.learn-c.org/es/Hello%2C_World%21)
- [IBM: <stdio.h>](https://www.ibm.com/docs/es/i/7.5?topic=files-stdioh)
- [GeeksForGeeks: Hello World Program](https://www.geeksforgeeks.org/c-hello-world-program/?ref=lbp)