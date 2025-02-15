#include <stdio.h>
#include "linked_list_vec2.h"
#include "linked_list_int.h"

int main() {
	ll_int ll = ll_int_new();
	ll_int_pushback(&ll, 4);
	ll_int_pushback(&ll, 9);
	ll_int_print(&ll);

	ll_vec2 ll2 = ll_vec2_new();
	ll_vec2_pushback(&ll2, (vec2){.x=0,.y=0});
	ll_vec2_pushback(&ll2, (vec2){.x=5,.y=5});
	ll_vec2_print(&ll2);
}
