percursos: 
	gcc percursos.c -o percursos

test1: percursos
	./percursos <e1.in >s1.out
	diff se1.out s1.out

test2: percursos
	./percursos <e2.in >s2.out
	diff se2.out s2.out
