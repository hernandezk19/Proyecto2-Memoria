# MEMORIA

Este proyecto se basa en la creación del tradicional juego ***memoria***, en el cual se utilizan parejas de cartas con algún tema en específico, por ejemplo, animales, números, instrumentos, entre otros. El juego consiste en encontrar las cartas que son iguales entre sí, o las cartas que se relacionan (dependiendo de la modalidad que se esté jugando).

Las cartas se encuentran vueltas hacia "abajo" con la imagen escondida. El jugador debe destapar una pareja de cartas; si dichas cartas son iguales, se van sacando del juego, ya que es el mecanismo para ganar. De lo contrario, se tienen que poner hacia abajo nuevamente.

En este trabajo, se va a realizar el juego explicado anteriormente, pero de manera virtual, utilizando como lenguaje de programación **C++**, y **Qt** como IDE.
Se va a mostrar en la pantalla una serie de cartas "hacia abajo", es decir, que la imagen no se va a mostrar. El jugador debe dar click sobre dos imágenes, lo que provocará que la imagen que está escondida, se muestre al jugador. En caso de que las imágenes coincidan, irán desapareciendo de la pantalla, con el fin de ir descartando las parejas ganadoras. En caso contrario, las imágenes tomarán el estado anterior, es decir, vueltas hacia abajo, escondiendo la imagen. De esta forma, el jugador debe seguir eligiendo cartas hasta que haya encontrado todas las parejas de imágenes con el fin de salir ganador.

Para poder llevar a cabo dicho proyecto, se debe hacer el uso de herencia en C++, ya que es necesaria para manejar las distintas clases que controlan cada pantalla, con sus diferentes imágenes y relaciones.

 
### Modalidades

El juego va a constar de tres pantallas, cada una con un tema diferente.
- La primera se basa en una relación de palabras en dos idiomas distintos, por ejemplo, una carta puede contener la palabra **Hola** y su pareja debe tener la palabra **Hello**, y así respectivamente con cada palabra que se encuentra en las cartas.
- La segunda pantalla, consta de relaciones entre sumas y sus resultados, es decir, el enunciado de una carta podría ser **16 + 7**  y su pareja es **23**.
- La tercera opción de juego, consiste en una pantalla que contiene cartas con imágenes de animales y sus respectivos sonidos. Por ejemplo, en la primera carta aparece un pato, y en la segunda, una reproducción del sonido que produce el pato ("cuac"). Asi mismo, funcionará con distintos animales.

Estas pantallas van a aparecer de manera aleatoria, generadas por el programa

### Niveles

En nuestro proyecto, van a existir dos niveles para cada pantalla. El primero, consta de alguna pantalla de las tres mencionadas en el punto anterior, permitiendo al usuario elegir las cartas con sin ninguna restricción, es decir, puede tardar el tiempo que le sea necesario y tienen todos los turnos posibles.
El segundo nivel, aparece la pantalla, pero con una restricción, la cual consiste en un reloj que marca el tiempo. Es decir, el jugador solo dispone de un tiempo determinado por el programa para encontrar todas las parejas de cartas. Si encuentra todas las relaciones entre las cartas, se muestra la siguiente pantalla, de lo contrario, el juego se acabará.

