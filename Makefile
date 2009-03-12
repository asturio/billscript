billscript: billscript.c
	gcc -o $@ $< 

clean:
	rm -f billscript
