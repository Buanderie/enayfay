#ifndef __KRAKENSTREAM_H__
#define __KRAKENSTREAM_H__

#include "TimeSerieStream.h"

namespace tsmodel {
    template <class T=double>
    class KrakenStream : tsmodel::TimeSerieStream<T> {


	public:
		bool hasNext();

        tsmodel::DataPoint<T> getNext();
	};
}

#endif
