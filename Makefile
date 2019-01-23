CC = g++
exe_file = ant
$(exe_file): main.o Insect.o Ant.o Bee.o Harvester.o Thrower.o Fire.o Long_Thrower.o Short_Thrower.o Wall.o Ninja.o Bodyguard.o 
	$(CC) main.o Insect.o Ant.o Bee.o Harvester.o Thrower.o Fire.o Long_Thrower.o Short_Thrower.o Wall.o Ninja.o Bodyguard.o -g -o $(exe_file)
main.o: main.cpp
	$(CC) -c main.cpp
Insect.o: Insect.cpp
	$(CC) -c Insect.cpp
Ant.o: Ant.cpp
	$(CC) -c Ant.cpp
Bee.o: Bee.cpp
	$(CC) -c Bee.cpp
Harvester.o: Harvester.cpp
	$(CC) -c Harvester.cpp
 Thrower.o: Thrower.cpp
	$(CC) -c Thrower.cpp
 Fire.o: Fire.cpp
	$(CC) -c Fire.cpp
 Long_Thrower.o: Long_Thrower.cpp
	$(CC) -c Long_Thrower.cpp
 Short_Thrower.o: Short_Thrower.cpp
	$(CC) -c Short_Thrower.cpp
 Wall.o: Wall.cpp
	$(CC) -c Wall.cpp
 Ninja.o: Ninja.cpp
	$(CC) -c Ninja.cpp
 Bodyguard.o: Bodyguard.cpp
	$(CC) -c Bodyguard.cpp
clean:
	rm -f *.out *.o $(exe_file)
