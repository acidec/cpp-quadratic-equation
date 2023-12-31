CXX = clang++
CXXFLAGS = -g
LD = -o
MKBIN = mkdir bin
RUN = bin/main.out
CL = rm -rf bin
all: src/main.cpp
	${CL}
	${MKBIN}
	${CXX} ${CXXFLAGS} src/main.cpp ${LD} bin/main.out
run: bin/main.out
	${RUN}
build: src/main.cpp
	${CL}
	${MKBIN}
	${CXX} ${CXXFLAGS} src/main.cpp ${LD} bin/main.out
clean:
	${CL}