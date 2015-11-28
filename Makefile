TRAFFIC_SERVER_PREFIX = $(HOME)/ats
TSXS = $(TRAFFIC_SERVER_PREFIX)/bin/tsxs
LIBEXEC = $(TRAFFIC_SERVER_PREFIX)/libexec/trafficserver

install: $(LIBEXEC)/sample.so

sample.so: sample.cpp sample.hpp
	$(TSXS) -v -o sample.so sample.cpp

$(LIBEXEC)/sample.so: sample.so
	cp sample.so $(LIBEXEC)/sample.so

clean:
	rm -f sample.so sample.lo $(LIBEXEC)/sample.so
