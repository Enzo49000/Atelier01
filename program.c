#include <stdio.h>

int main() {
    int vitesse = 180;
    int altitude = 1200;
    int cap = 270;
    
    printf("===========================================================================\n");
    printf("                         TABLEAU DE BORD - EFIS                            \n");
    printf("===========================================================================\n");
    printf("\n");
    printf("   VITESSE        |        HORIZON / VIRAGE         |       ALTITUDE       \n");
    printf("  --------        |       -------------------       |      --------        \n");
    printf("     _____        |                                 |         _____        \n");
    printf("    /     \\      |         -30  -15   0   15  30   |        /     \\      \n");
    printf("   |  %04d |      |          |    |    |    |    |  |       |  %04d |      \n" vitesse, altitude);
    printf("   |  kts  |      |    ------+----+----+----+----+  |       |   ft  |      \n");
    printf("    \\_____/      |         ^ (horizon plat)        |        \\_____/      \n");
    printf("\n");
    printf("---------------------------------------------------------------------------\n");
    printf("                     CAP :  %04d deg  ( O - Ouest )                        \n", cap);
    printf("            N          |          |          |          |            N     \n");
    printf("            |    O     |    N     |    E     |    S     |    O       |     \n");
    printf("===========================================================================\n");

    return 0;
}
