OUT_DIR   := out
LL_GEN 		:= src/linked_list_int.c
SOURCES   := src/main.c $(LL_GEN)
BIN 		  := main


export GEN_TEMPLATE_PATH=templates

.PHONY: template_gen
.PHONY: clean always build
always:
	mkdir -p $(OUT_DIR)
clean:
	rm -r $(OUT_DIR)
build: always template_gen $(OUT_DIR)/$(BIN)

$(OUT_DIR)/$(BIN): $(SOURCES)
	gcc $^ -o $@

template_gen: $(LL_GEN)

src/linked_list_int.c src/linked_list_int.h: templates/linked_list.tpl templates/linked_list.htpl templates/linked_list.ctpl
	generics-generator linked_list --datatype=int --outputdir=src
