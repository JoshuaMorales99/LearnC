# Condicionales 🤔
## La sentencia `switch`.
En ocasiones, nos encontramos con múltiples declaraciones `if ... else`. En estas circunstancias, es posible que se pueda utilizar la instrucción `switch` para tener un código más limpio y fácil de leer.

**¿Qué es la instrucción `switch`?**<br>
La sentencia `switch` se utiliza para especificar muchos bloques de código alternativos que se ejecutarán según una expresión dada.<br>
Su sintaxis es la siguiente:
```c
switch ( <EXPRESION> ) {
    case <CASO_1>:
        // Nuestro código aquí. Será ejecutado si la <EXPRESION> coincide con el <CASO_1>.
    break;

    case <CASO_2>:
        // Nuestro código aquí. Será ejecutado si la <EXPRESION> coincide con el <CASO_2>.
    break;

    // Mas casos.
}
```

**¿Cómo funciona?**<br>
La sentencia `switch` funciona de la siguiente manera:
- Se evalúa una sola vez la expresión `switch`.
- El valor de la expresión se compara con los valores de cada `case`.
- Si hay una coincidencia, se ejecuta el bloque de código asociado.
- La sentencia `break` detiene la ejecución del bloque `switch`.

Veamos un ejemplo de esto:
```c
int dia = 4;

// Evaluar el dia.
switch(dia) {
    // Bloque de codigo para la situacion donde dia es 1.
    case 1:
        printf("Lunes");
    break;

    // Bloque de codigo para la situacion donde dia es 2.
    case 2:
        printf("Martes");
    break;
    
    // Bloque de codigo para la situacion donde dia es 3.
    case 3:
        printf("Miercoles");
    break;

    // Bloque de codigo para la situacion donde dia es 4.
    case 4:
        printf("Jueves");
    break;

    // Bloque de codigo para la situacion donde dia es 5.
    case 5:
        printf("Viernes");
    break;

    // Bloque de codigo para la situacion donde dia es 6.
    case 6:
        printf("Sabado");
    break;

    // Bloque de codigo para la situacion donde dia es 7.
    case 7:
        printf("Domingo");
    break;
}
```
***Salida***:
```
> Jueves
```

## La expresión `break`.
La palabra clave `break` sirve para finalizar la ejecución de diferentes sentencias. En el caso del `switch`, la palabra clave `break` detiene la ejecución del bloque de codigo asociado a un caso, y finaliza la ejecución del `switch`.

> Una interrupción puede ahorrar tiempo de ejecución, ya que **ignora** el resto del código en el bloque `switch`.

## La expresión `default`.
La expresión `default` especifica algún código que se ejecutará si no hay ninguna coincidencia de casos.<br>
Su sintaxis es la siguiente:
```c
    switch ( <EXPRESION> ) {
    case <CASO_1>:
        // Nuestro código aquí. Será ejecutado si la <EXPRESION> coincide con el <CASO_1>.
    break;

    case <CASO_2>:
        // Nuestro código aquí. Será ejecutado si la <EXPRESION> coincide con el <CASO_2>.
    break;

    // Más casos.

    default:
        // Nuestro código aquí. Será ejecutado si no hay coincidencia con la <EXPRESION>.
}
```

Veamos un ejemplo de esto:
```c
int dia = 7;

// Evaluar el dia.
switch (dia) {
    // Bloque de codigo para la situacion donde dia es 1.
    case 1:
        printf("Lunes");
    break;

    // Bloque de codigo para la situacion donde dia es 2.
    case 2:
        printf("Martes");
    break;
    
    // Bloque de codigo para la situacion donde dia es 3.
    case 3:
        printf("Miercoles");
    break;

    // Bloque de codigo para la situacion donde dia es 4.
    case 4:
        printf("Jueves");
    break;

    // Bloque de codigo para la situacion donde dia es 5.
    case 5:
        printf("Viernes");
    break;

    // Bloque de codigo para la situacion donde no haya coincidencia con las otros casos.
    default:
        printf("Es fin de semana!");
}
```
***Salida***:
```
> Es fin de semana!
```
> La palabra clave `default` debe ser la última instrucción en el `switch`, y no necesita un `break`.

## Bibliografía.
- [W3schools: Switch](https://www.w3schools.com/c/c_switch.php)
- [Microsoft: Instrucción Break](https://learn.microsoft.com/es-es/cpp/c-language/break-statement-c?view=msvc-170)