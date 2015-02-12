#ifndef __TIMESERIESTREAM_H__
#define __TIMESERIESTREAM_H__

#include "DataPoint.h"

namespace tsmodel {
	template <class T>
	class TimeSerieStream {

	public:
        TimeSerieStream(){};
        virtual ~TimeSerieStream(){};

		virtual bool hasNext() = 0;
		virtual tsmodel::DataPoint<T> getNext() = 0;
	};
}

#endif
