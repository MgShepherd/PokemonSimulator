CC=clang
INCLUDE_DIR_FLAG=-I./include/
DEP_FLAGS=-MP -MD
CFLAGS=-Wall -Wextra -g $(INCLUDE_DIR_FLAG) $(DEP_FLAGS)

CODE_DIRS=src/
BUILD_DIR=build/

CFILES=$(foreach D,$(CODE_DIRS),$(wildcard $(D)/*.c))
OBJECTS=$(patsubst src/%.c,$(BUILD_DIR)%.o,$(CFILES))
DEPFILES=$(patsubst src/%.c, $(BUILD_DIR)%.d,$(CFILES))

EXECUTABLE=$(BUILD_DIR)PokemonSimulator

all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CC) -o $@ $^

build/%.o: src/%.c | $(BUILD_DIR)
	$(CC) $(CFLAGS) -c -o $@ $^

$(BUILD_DIR):
	mkdir $(BUILD_DIR)

clean:
	rm -rf $(EXECUTABLE) $(OBJECTS) $(DEPFILES)

