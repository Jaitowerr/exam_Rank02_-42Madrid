
unsigned int	hcf(unsigned int a, unsigned int b)
{
	unsigned int	temp;

	while (b != 0)
	{
		temp = b;
		b = a % b;
		a = temp;
	}
	return (a);
}

unsigned int	lcm(unsigned int a, unsigned int b)
{
	if (a == 0 || b == 0)
		return (0);
	return (a * b / hcf(a, b));
}


/*
Ejemplos:
    lcm(4, 6):
    hcf(4, 6) = 2
    lcm = (4 * 6) / 2 = 12

lcm(12, 18):
    hcf(12, 18) = 6
    lcm = (12 * 18) / 6 = 36

lcm(0, 5):
    Devuelve 0


*/
/*
DEL PRIMER Ejemplo:
    lcm(4, 6):
    hcf(4, 6) = 2
    lcm = (4 * 6) / 2 = 12

 HCF:::::   a = 4   &  b = 6
    // PRIMERA VUELTA
        temp = b;        // temp = 6
        b = a % b;       // b = 4 % 6 = 4 (porque 4 entre 6 cabe 0 veces, y sobran 4)
        a = temp;        // a = 6
a = 6 ; b = 4;
    // SEGUNDA VUELTA
        temp = b;        // temp = 4
        b = a % b;       // b = 6 % 4 = 2 (porque 6 entre 4 cabe 1 vez, y sobran 2)
        a = temp;        // a = 4
a = 4 ; b = 2;
    // TERCER YA ULTIMA
        temp = b;        // temp = 2
        b = a % b;       // b = 4 % 2 = 0 (porque 4 entre 2 cabe 2 veces, y sobra 0)
        a = temp;        // a = 2
a = 2  ;  b = 0;
*/