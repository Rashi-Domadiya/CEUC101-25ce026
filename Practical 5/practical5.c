#include <stdio.h>

int main() {

    long long total_population = 1441981744;

    long long percent_women = 4840;
    long long percent_men = 10000 - percent_women;

    long long literacy_rate_women = 6284;
    long long literacy_rate_men = 8095;

    long long total_women = (total_population * percent_women) / 10000;
    long long total_men = total_population - total_women;

    long long literate_women = (total_women * literacy_rate_women) / 10000;
    long long literate_men = (total_men * literacy_rate_men) / 10000;

    long long illiterate_women = total_women - literate_women;
    long long illiterate_men = total_men - literate_men;

    printf("Total Population : %lld\n", total_population);
    printf("Total Women      : %lld\n", total_women);
    printf("Total Men        : %lld\n", total_men);
    printf("Literate Women   : %lld\n", literate_women);
    printf("Literate Men     : %lld\n", literate_men);
    printf("Illiterate Women : %lld\n", illiterate_women);
    printf("Illiterate Men   : %lld\n", illiterate_men);

    return 0;
}


