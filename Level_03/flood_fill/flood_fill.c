#include "flood_fill.h"


void  fill(char **tab, t_point size, t_point cur, char target)
{
    
    if (cur.y < 0 || cur.y >= size.y || cur.x < 0 || cur.x >= size.x)   //Límites del mapa
        return;
    
    
    if (tab[cur.y][cur.x] != target)        // Si no es el carácter que buscamos paramos tmabién
        return;

    tab[cur.y][cur.x] = 'F';        // Pintamos con 'F'

    
    fill(tab, size, (t_point){cur.x, cur.y - 1}, target);       // Arriba
    
    fill(tab, size, (t_point){cur.x, cur.y + 1}, target);       // Abajo
    
    fill(tab, size, (t_point){cur.x - 1, cur.y}, target);      // Izquierda 
    
    fill(tab, size, (t_point){cur.x + 1, cur.y}, target);       // Derecha
}




void  flood_fill(char **tab, t_point size, t_point begin)
{
    fill(tab, size, begin, tab[begin.y][begin.x]);
}