#ifndef POKEMON_H
#define POKEMON_H

typedef enum { P_GRASS, P_WATER, P_FIRE } PType;

typedef struct {
  unsigned int id;
  const char *name;
  PType type;
  unsigned char health;
  unsigned char level;
} Pokemon;

Pokemon poke_create(unsigned int id, const char *name, PType type);
void poke_display(const Pokemon *p);

const char *ptype_get_name(PType type);

#endif
