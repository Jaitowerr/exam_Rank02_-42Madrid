# 🔥 ¿Qué es flood_fill?
Es el algoritmo del cubito de pintura del Paint.

Cuando en Paint haces clic en una zona blanca, todo lo blanco conectado se vuelve rojo.

Eso es flood fill.

# 🧠 ¿Qué te están dando?
Te dan:

1️⃣ char **tab
Una matriz 2D de caracteres.

Visualmente es esto:

    11111111
    10001001
    10010001
    10110001
    11100001

Es como un mapa.


2️⃣ t_point size

size.x = ancho

size.y = alto

En el ejemplo:

x = 8 columnas

y = 5 filas


3️⃣ t_point begin

Es el punto donde haces clic.

t_point begin = {7, 4};
Eso significa:

x = 7

y = 4

Fila 4, columna 7.


# 📍 ¿Qué hay en esa posición?
Miremos el mapa original:

11100001   ← fila 4
       ^
       columna 7
En esa posición hay un '1'.

# ✅ ¿Qué hay que hacer?
Mirar el carácter inicial → '1'
Reemplazarlo por 'F'
Luego mirar:
arriba
abajo
izquierda
derecha
Si alguno de esos tiene el mismo carácter original ('1'), también se convierte en 'F'.

Y eso se repite.
Y se repite.
Y se repite.

Hasta que no queden más '1' conectados.

⚠️ No en diagonal.
Solo vertical y horizontal.

# 🎯 ¿Qué es una “zona”?
Una zona es:

Un grupo de caracteres iguales que están conectados entre sí arriba / abajo / izquierda / derecha.

# 📌 Visualmente en este ejemplo
La zona conectada a ese 1 es toda la parte exterior.

Por eso el resultado queda:

    FFFFFFFF
    F000F00F
    F00F000F
    F0FF000F
    FFF0000F

Solo se rellenó la zona conectada.

Los ceros no se tocaron.

# 🧠 Resumen mental ultra simple
Empiezo en un punto.
Guardo qué carácter había ahí.
Lo cambio por 'F'.
Miro sus vecinos.
Si algún vecino tiene el mismo carácter original:
lo cambio también
repito el proceso desde ahí

Es una propagación.


--------------------------------------------------------

Este ejercicio se resuelve con una técnica llamada Backtracking o Recursividad.

No obstante, prepararemos dos flood_fill.c y flood_fill.h que serán:
* flood_fill.c 
* flood_fill.h
