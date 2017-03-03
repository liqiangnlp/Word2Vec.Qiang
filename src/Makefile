CXXFLAGS = -O2

OBJS = basic_method.o debug.o dispatcher.o main.o parameter_controller.o word2vector.o distance.o model.o accuracy.o analogy.o word2phrase.o multi_threads.o

Word2VectorCpp: $(OBJS)
	g++ -o ../bin/$@ $^ -lpthread

$(OBJS): %.o:%.cpp
	g++ $(CXXFLAGS) -o $@ -c $<

.PHONY: clean

clean:
	-rm $(OBJS) ../bin/Word2VectorCpp
