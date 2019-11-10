#include <stdio.h>
#include "board.h"
#include "peripherals.h"
#include "pin_mux.h"
#include "clock_config.h"
#include "MKL25Z4.h"
#include "ultri.h"
#include "fsl_debug_console.h"
float distancia;



int main (void) {
ultrainit();

while (1) {
	distancia=mide();

	}
}
