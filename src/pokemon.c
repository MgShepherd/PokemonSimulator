#include "pokemon.h"
#include <stdio.h>

void poke_display(const Pokemon *p) {
  printf("%d: %s - %s\n", p->id, p->name, ptype_get_name(p->type));
}

Pokemon poke_create(unsigned int id, const char *name, PType type) {
  Pokemon p = {.id = id, .name = name, .type = type, .level = 1, .health = 100};
  return p;
}

const char *ptype_get_name(PType type) {
  switch (type) {
  case P_FIRE:
    return "Fire";
  case P_WATER:
    return "Water";
  case P_GRASS:
    return "Grass";
  }
}
