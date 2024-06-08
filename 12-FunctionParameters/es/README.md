# Parámetros de funciones 💡
## Parámetros y argumentos.
La información se puede pasar a nuestras funciones como parámetros, los cuales actuarán como variables dentro de la función. Estos parámetros se especificarán después del nombre de la función (dentro de los paréntesis `()`) y separados por comas (`,`)<br>
Sintaxis:
```c
<TIPO_RETORNO> <NOMBRE_FUNCION> ( <PARAMETRO_1, <PARAMETRO_2>>, .. , <PARAMETRO_N> ) {
    <CUERPO_FUNCION>

    return <EXPRESION>
}
```

**¿Cómo las Llamamos?**<br>
Las funciones declaradas no se ejecutarán al iniciar el programa; lo harán solamente cuando se las llame. Para llamar a una función con parámetros, debemos escribir su nombre `<NOMBRE_FUNCION>`, seguido de dos paréntesis `()` y un punto y coma (`;`) Dentro de los paréntesis, pasaremos los argumentos que se requieran de la siguiente manera:
```c
<NOMBRE_FUNCION> ( <PARAMETRO_1, <PARAMETRO_2>>, .. , <PARAMETRO_N> );
```

Veamos un ejemplo.
```c
void miFuncion(char nombre[]);

int main() {
    // Saludar a personas.
    miFuncion("Liam");
    miFuncion("Jenny");
    miFuncion("Anja");

    return 0;
}

void miFuncion(char nombre[]) {
    // Imprimir por consola un saludo a la persona.
    printf("Hola %s!\n", nombre);
}
```
***Salida***:
```
> Hola Liam!
> Hola Jenny!
> Hola Anja!
```
> Cuando se pasa un **parámetro** a la función, se denomina **argumento**. Entonces:
> - `nombre` es un parámetro.
> - `Liam`, `Jenny` y `Anja` son argumentos.

Ahora, veamos un ejemplo con muchos parametros.
```c
void miFuncion(char nombre[], int edad);

int main() {
    // Imprimir edad de la persona.
    miFuncion("Liam", 3);
    miFuncion("Jenny", 14);
    miFuncion("Anja", 30);

    return 0;
}

void miFuncion(char nombre[], int edad) {
    // Imprimir por consola la edad de la persona.
    printf("Hola %s! Tienes %d anios\n", nombre, edad);
}
```
***Salida***:
```
> Hola Liam! Tienes 3 anios
> Hola Jenny! Tienes 14 anios
> Hola Anja! Tienes 30 anios
```
> Tenga en cuenta que, cuando se trabaja con varios parámetros, la llamada a la función debe tener la misma cantidad de argumentos que parámetros. Además, los argumentos deben pasarse en el mismo orden.

## Pasar variables como parámetros de función.
También podemos pasar distintos tipos de variables a una función. Por ejemplo:
```c
void miFuncion(int numeros[]);

int main() {
    int misNumeros[5] = {10, 20, 30, 40, 50};
    // Imprimir los numeros del array.
    miFuncion(misNumeros);

    return 0;
}

void miFuncion(int numeros[]) {
    // Imprimir por consola los elementos del array.
    for(int i = 0, i < 5, i++) {
        printf("%d\n", numeros[i]);
    }
}
```
***Salida***:
```
> 10
> 20
> 30
> 40
> 50
```
> Hay que tener en cuenta que, cuando llamamos a la función, solo se necesita usar el nombre de la variable al pasarla como argumento (`miFuncion(misNumeros)`). Sin embargo, se necesita la declaración completa de la matriz en el parámetro de la función (`int numeros[5]`)

## Valores de retorno.
En los anteriores ejemplo se utilizó la palabra reservada `void`, esta es utilizada para indicar que la función no debe devolver un valor. En el caso de que se desee que la función devuelva un valor, puede utilizar un tipo de dato (`int`, `float`, etc.) en lugar de `void`, y retornarlo utilizando el `return`.<br>
Por ejemplo:
```c
int miFuncion(int numero);

int main() {
    // Imprimir por consola la suma entre 5 y 3.
    printf("El resultado es: %d\n", miFuncion(3));

    return 0;
}

int miFuncion(int numero) {
    // Retornar la suma de 5 y el numero dado.
    return 5 + numero;
}
```
***Salida***:
```
> El resultado es: 8
```

Ahora, veamos un ejemplo con muchos parametros.
```c
int miFuncion(int x, int y);

int main() {
    // Almacenar el resultado de la suma entre dos numeros.
    int resultado = miFuncion(5, 3);
    // Imprimir por consola el resultado de la suma.
    printf("El resultado es: %d\n", resultado);

    return 0;
}

int miFuncion(int x, int y) {
    // Retornar la suma de los numeros.
    return x + y;
}
```
***Salida***:
```
> El resultado es: 8
```

## Bibliografía.
- [Learn-C: Functions](https://www.learn-c.org/es/Functions)
- [W3schools: Function Parameters](https://www.w3schools.com/c/c_functions_parameters.php)