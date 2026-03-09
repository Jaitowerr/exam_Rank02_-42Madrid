#include "flood_fill.h"


void  fill(char **tab, t_point size, t_point begin, char target)
{
    
    if (begin.y < 0 || begin.y >= size.y || begin.x < 0 || begin.x >= size.x)   //Límites del mapa
        return;
    
    
    if (tab[begin.y][begin.x] != target)        // Si no es el carácter que buscamos paramos tmabién
        return;

    tab[begin.y][begin.x] = 'F';        // Pintamos con 'F'

    
    fill(tab, size, (t_point){begin.x, begin.y - 1}, target);       // Arriba
    
    fill(tab, size, (t_point){begin.x, begin.y + 1}, target);       // Abajo
    
    fill(tab, size, (t_point){begin.x - 1, begin.y}, target);      // Izquierda 
    
    fill(tab, size, (t_point){begin.x + 1, begin.y}, target);       // Derecha
}




void  flood_fill(char **tab, t_point size, t_point begin)
{
    fill(tab, size, begin, tab[begin.y][begin.x]);
}
