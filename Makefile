CXX=g++
CXXFLAGS = -std=C++11 -WALL

DEPS = header.h
_OBJS = Task.o Job.o 
OBJS = $(patsubst %,$(ODIR)/%,$(_OBJS))
ODIR = obj

_COMMUNICATION_OBJS = CCU_NODE.o CCU_PJS.o JobGen_PJS.o Node_PJS.o PJS_Node.o
COMMUNICATION_OBJS = $(patsubst %,$(ODIR)/%,$(_COMMUNICATION_OBJS))
PJS_OBJS
CCU_OBJS
NODE_OBJS


OBJS = $(COMMUNICATION_OBJS) $(PJS_OBJS) $(CCU_OBJS) $(NODE_OBJS)

all: $(OBJS) $(DEPS)

Global_Clock.o

$(COMMUNICATION_OBJS): Task.h Global_Clock.h

%.o: %.cpp %.h
	$(CXX) -c -o $@ $< $(CXXFLAGS)

Communication.o: $(COMMUNICATION_OBJS) Communication.cpp, Communication.h, 
	$(CXX) -c -o $@ $< $(CXXFLAGS)

clean:
	rm -f $(ODIR)/*.o *~
