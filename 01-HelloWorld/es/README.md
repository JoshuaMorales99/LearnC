# ¡Hola Mundo! 🌎
## Nuestro primer programa.
Todo programa en C utiliza librerías, las cuales dan la habilidad de ejecutar funciones necesarias. Un ejemplo es el caso de la funcion `printf`, la cual imprime un mensaje o cadena con formato en pantalla. Dicha función está definida en el archivo `stdio.h`.

**¿Qué podemos encontrar en `stdio.h`?**<br>
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

Luego, el primer código que correrá **siempre** estará dentro de la función `main`.
```c
int main() {
    // Nuestro código aquí.
}
```
La palabra clave `int` indica que la función `main` devolverá un entero. El número devuelto por la función indica si el programa que escribimos funciona correctamente. Si queremos decir que nuestro código corrió exitosamente, devolvemos el número 0 (Un número mayor que 0 significará que el programa falló)<br>
Para este programa, devolveremos 0 para indicar que nuestro programa fue exitosa.
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
    printf("Hola Mundo!");

    // Retornar 0 si el codigo se ejecuto correctamente.
    return 0;
}
```
***Salida***:
```
> Hola Mundo!
```

## Bibliografía.
Se utilizó las siguientes fuente:
- [Learn-C: Hola, Mundo!](https://www.learn-c.org/es/Hello%2C_World%21)
- [IBM: <stdio.h>](https://www.ibm.com/docs/es/i/7.5?topic=files-stdioh)