#include <stdio.h>

#include "memory.h"
#include "engine.h"

typedef short int register_t;

// The 0-7 are 8 bit registers, 8-11 are 16 bit, and 12-13 are special
/* 8:  0-1
 * 9:  2-3
 * 10: 4-5
 * 11: 6-7
*/
typedef enum {
  A, F, B, C, D, E, H, L, AF, BC, DE, HL, SP, PC
} reg_bank_t;

// What the F register looks like
typedef enum {
  ZF, OF, HCF, CF
} flags_t;

static reg_bank_t R[6];
static unsigned int ticks;

void setup(void) {
  R[5] = 0x100;
}

void editRegister(reg_bank_t) {
  // If even then divide by 2 and that's the correct index to edit
  // If odd then divide by two and shift by 8 bits
}

int run(/* some arg */) {
  while (/* more opcodes */)
    switch (opcode_t op) {
      case:
    }
    // increment program counter
    R[5] += 1;
}
