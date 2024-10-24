#include "pokemon.h"
#include <stdio.h>

int main() {
  Pokemon p = poke_create(1, "Bulbasaur", P_GRASS);
  poke_display(&p);
  return 0;
}
