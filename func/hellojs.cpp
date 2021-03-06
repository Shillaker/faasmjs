#include "faasm/faasm.h"

#include <stdio.h>
#include <string.h>

/**
 * Simple function to show execution in the browser.
 */
FAASM_MAIN_FUNC() {
    const char *message = "Hello faasm.js!";

    printf("Hello from inside wasm.\n");

    faasmSetOutput((uint8_t *) message, strlen(message));

    return 0;
}
