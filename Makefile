output: Main.o Armory.o Castle.o Cave.o Character.o Desert.o Dragon.o Firelord.o Forest.o Lava.o Menu.o Monster.o Space.o Swamp.o Swamplord.o Troll.o Warlock.o
	g++ -std=c++0x Main.o Armory.o Castle.o Cave.o Character.o Desert.o Dragon.o Firelord.o Forest.o Lava.o Menu.o Monster.o Space.o Swamp.o Swamplord.o Troll.o Warlock.o -o output

Main.o: Main.cpp
	g++ -std=c++0x -c Main.cpp

Armory.o: Armory.cpp Armory.hpp
	g++ -std=c++0x -c Armory.cpp

Castle.o: Castle.cpp Castle.hpp
	g++ -std=c++0x -c Castle.cpp

Cave.o: Cave.cpp Cave.hpp
	g++ -std=c++0x -c Cave.cpp

Desert.o: Desert.cpp Desert.hpp
	g++ -std=c++0x -c Desert.cpp

Dragon.o: Dragon.cpp Dragon.hpp
	g++ -std=c++0x -c Dragon.cpp

Firelord.o: Firelord.cpp Firelord.hpp
	g++ -std=c++0x -c Firelord.cpp

Forest.o: Forest.cpp Forest.hpp
	g++ -std=c++0x -c Forest.cpp

Lava.o: Lava.cpp Lava.hpp
	g++ -std=c++0x -c Lava.cpp

Menu.o: Menu.cpp Menu.hpp
	g++ -std=c++0x -c Menu.cpp

Monster.o: Monster.cpp Monster.hpp
	g++ -std=c++0x -c Monster.cpp

Space.o: Space.cpp Space.hpp
	g++ -std=c++0x -c Space.cpp

Swamp.o: Swamp.cpp Swamp.hpp
	g++ -std=c++0x -c Swamp.cpp

Swamplord.o: Swamplord.cpp Swamplord.hpp
	g++ -std=c++0x -c Swamplord.cpp

Troll.o: Troll.cpp Troll.hpp
	g++ -std=c++0x -c Troll.cpp

Warlock.o: Warlock.cpp Warlock.hpp
	g++ -std=c++0x -c Warlock.cpp

clean:
	rm *.o output
