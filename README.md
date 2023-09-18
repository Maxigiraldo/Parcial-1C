# Parcial-1C
Parcial 1 de progra 2

PROBLEMAS

IF / SWITCH

Problema 1:

Un supermercado necesita un programa para mejorar su servicio a los clientes, elabora un programa que calcule el precio de la compra que va a hacer el cliente con (solo usar if):
El problema pide la clave del producto, día de la semana, cuántos artículos va a comprar y muestra el total de la compra con su descuento.

Clave
Producto
F
Frutas
V
Verduras
J
Juguetería
L
Lácteos
O
Otros

 
Si la clave ingresada no está en esta lista enviar el mensaje “Serie no válida”
Si la clave está en la lista, pedir el precio del artículo y el día de la semana para hacer el descuento posteriormente.
- Los lunes tiene un 10% de descuento los artículos del departamento de lácteos
-Los martes tiene un 20% de descuento las frutas y verduras.
-Los fines de semana tienen un 5% de descuento los articulos de jugueteria (Sábado,Domingo)
Finalmente se debe repetir el procedimiento para cada artículo y finalmente mostrar el total de la compra con sus descuentos incluidos
Ejemplo:
Un cliente compró 3 artículos en el supermercado, el lunes compró una barbie, el martes compró frutas y verduras y el domingo compró 5 bolsas de leche:
1-El programa lee el dia y el producto que compro
2-Valida el que la clave sea correcta
3-Evaluar las condiciones de producto y dia
4-Aplica descuento = precio de la barbie*0.10, precio de las frutas y verduras *0.20, 5 bolsas de leche(sin descuento)
5-Finalmente muestra la suma del paso anterior


Problema 2

R 2-Coseno 3-Tangente
Mostrar el resultado de la opción elegida, luego preguntar qué otra función desea aplicar:
-(mostrar laealizar un programa que pida dos lados de un triángulo CO, CA y H, luego preguntar cuál de las funciones trigonométricas desea usar:
1-Senos dos funciones que faltan) -Salir del programa
Luego preguntar:
-¿Desea hallar la última función? -Salir del programa
En el momento que salga del switch debe mostrar la figura del triángulo, el cateto opuesto, cateto adyacente, la hipotenusa y las funciones trigonométricas que haya elegido el usuario 
Ejemplo:
CA=6m  H=8m   CO=4m
¿Qué función desea usar?
(Leer 1)
Mostrar CO/H
-Salir del programa
   *
   * *
6 *  *  8
              *θ *
  ******
4
      
senθ=0,75


WHILE

Problema 1

Realizar un programa que genere números telefónicos de 10 dígitos, cada número telefónico debe empezar por el número 3, el resto son números random
Ejemplo:
3492852293 ; cada término es generado por rand()

Problema 2

Realizar un programa que muestre la sucesión de los números dado por la formula (2n-1/n^2) según el número de términos ingresados por el usuario y posteriormente la suma de esta:
Ejemplo:
El usuario ingresa por teclado 5, el programa debe mostrar en pantalla
1 + ¾ + 5/9 + 7/16 + 9/25
Total=11171/3600 = 3,103 (mostrar resultado con 3 decimales)


Problema 3

Permutaciones de un número.
Escribe una función que encuentre todas las permutaciones posibles de un número máximo de tres cifras dado. Por ejemplo, si se le proporciona el número "123", la función deberá generar todas las posibles permutaciones de ese número: “123", "132", "213", "231", "312" y "321".Recuerda que la función debe ser capaz de permutar números de cualquier cifra.
Ejemplo:
Si una persona ingresa 123 el resultado esperado será:
123
132
213
231
312
321

FOR

Problema 1

Desarrolla un programa utilizando el ciclo for anidado para construir un triángulo de la siguiente manera con las letras del abecedario:
Ejemplo:
El usuario ingresa 4
          A
        BBB
       CCCC 
      DDDDD

Problema 2

Imprime todas las combinaciones de 1 a n con la suma de n.
Dado un número entero positivo mostrar todas las posibles formas de sumar números de 1 hasta n para formar dicho entero
Ejemplo:

![suma](https://github.com/Maxigiraldo/Parcial-1C/assets/140426723/0a9bb03c-74b0-4bfb-a2e1-50515f333619)


Problema 3

Generar un patrón de triángulo de Sierpinski utilizando ciclo for.
Dado un nivel de profundidad n, imprime un patrón de triángulo de Sierpinski utilizando recursión. El triángulo de Sierpinski es un fractal que se crea dividiendo un triángulo equilátero en 4 triángulos equiláteros más pequeños, y luego haciendo lo mismo con los 3 triángulos equiláteros resultantes (sin el triángulo central) de forma recursiva. Puedes representar el triángulo de Sierpinski utilizando caracteres de texto, como asteriscos (*) o cualquier otro símbolo.

![triangulo](https://github.com/Maxigiraldo/Parcial-1C/assets/140426723/6158d347-c624-4d91-a1a4-f4e004a3221a)

