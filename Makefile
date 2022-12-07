CXX = clang++
CXXFLAGS = -g
LD = -o
MKBIN = mkdir bin
RUN = bin/a.out
CL = rm -rf bin
all: src/a.cpp
	${CL}
	${MKBIN}
	${CXX} ${CXXFLAGS} src/a.cpp ${LD} bin/a.out
run: bin/a.out
	${RUN}
build: src/a.cpp
	${CL}
	${MKBIN}
	${CXX} ${CXXFLAGS} src/a.cpp ${LD} bin/a.out
clean:
	${CL}