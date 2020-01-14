CXX = g++
CXXFLAGS= -g -Wall -MMD
OBJECTS = new.o
DEPENDS = {OBJECTS: .o=.d}
EXEC = "a.exe"

$EXEC : ${OBJECTS}
			${CXX} ${CXXFLAGS} ${OBJECTS} -o ${EXEC}
-include ${DEPENDS}
.PHONY : clean
clean :
	rm ${OBJECTS} ${EXEC}
	rm *.d ${EXEC}
