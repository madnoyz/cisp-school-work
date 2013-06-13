ASFLAGS = -g
CFLAGS = -g
LDFLAGS = -g
CSRC = main.c
INCGENSRC = structIncGen.c
ASRC = 
EXE = main
CEXE = mainC
INCGENEXE = structIncGen
WHOIAM :=  $(shell basename `pwd`)

$(EXE):	$(CSRC:.c=.o) $(ASRC:.S=.o)

$(INCGENEXE):	$(INCGENSRC:.c=.o)

$(CEXE):	main.c
	make -f MakeCIMP

struct.inc:	structIncGen
	./structIncGen > struct.inc

%.d: %.c  
	set -e; gcc $(CFLAGS) $^ -MM \
	| sed 's/\($*\)\.o[ :]*/\1.o $@ : /g' > $@; \
	[ -s $@ ] || rm -f $@  

%.d: %.S  
	set -e; gcc $(ASFLAGS) $^ -MM \
	| sed 's/\($*\)\.o[ :]*/\1.o $@ : /g' > $@; \
	[ -s $@ ] || rm -f $@  

clean:
	rm -f $(EXE) $(CEXE) \
	  $(CSRC:.c=.o) $(CSRC:.c=.d) \
	  $(INCGENEXE) $(INCGENSRC:.c=.d) $(INCGENSRC:.c=.o) \
	  $(ASRC:.S=.o) $(ASRC:.S=.d) 
	make -f MakeCIMP clean

tar:	$(CSRC) $(INGENSRC) $(ASRC)
	cd ..;  make tar

include $(CSRC:.c=.d)
include $(INCGENSRC:.c=.d)
include $(ASRC:.S=.d)
