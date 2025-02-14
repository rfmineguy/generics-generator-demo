#include <stdio.h>
#include "linked_list_int.h"

int main() {
	ll_int ll = ll_int_new();
	ll_int_pushback(&ll, 4);
	ll_int_pushback(&ll, 9);
	ll_int_print(&ll);
}
