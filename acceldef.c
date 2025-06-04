/*
 * Program: acceldef.c
 * Author: Michael Guillory
 * Date: 6/4/2025
 * Course: EGN 3211: Engineering Analysis and Computation

 * Description: The following program calculates the acceleration 
    * of a rigid body based on Newton's second law. It uses pre-
    * defined values for mass, friction coefficient, external force,
    * and gravitational constant. The program then displays the
    * computed acceleration.
*/

#include <stdio.h>
#define MG 9.81     /* Gravity constant in m/s^2 */

int main() {

    /* Declare variables */
    double a;       /* acceleration */
    double mu;      /* friction coefficient */
    double m;       /* mass */
    double p;       /* external force */

    /* Initialize */
    mu = 0.2;       /* Sets the friction coefficient to 0.2 */
    m = 5;          /* Sets the mass to 5 kg */
    p = 20;         /* Sets the external force to 20 Newtons */

    /* Calculate the acceleration */
    a = (p - mu * m * MG) / m;

    printf("Acceleration a = %f (m/s^2)\n", a);
    return 0;
}   

