#ifndef __DATAPOINT_H__
#define __DATAPOINT_H__

#include "TimeReference.h"

namespace tsmodel {

	template <class T>
	class DataPoint {

	private:
		TimeReference _timeRef;
		T _data;

	public:
		T data();

		tsmodel::TimeReference time();
	};
}

#endif
