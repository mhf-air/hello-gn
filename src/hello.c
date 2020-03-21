#include "./hello_static.h"
#include "./hello_shared.h"

int main(void) {
	hello_static();
	hello_shared();
	return 0;
}
