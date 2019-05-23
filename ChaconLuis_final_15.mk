ChaconLuis_final_15.pdf: ChaconLuis_final_15.py datos.txt
	python ChaconLuis_final_15.py


datos.txt: ChaconLuis_final_15.cpp
	g++ ChaconLuis_final_15.cpp
	./a.out	> datos.txt
