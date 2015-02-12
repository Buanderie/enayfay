#ifndef __FILESTREAM_H__
#define __FILESTREAM_H__

// STL
#include <string>

// INTERNAL
#include "TimeSerieStream.h"

namespace tsmodel {

	template <class T>
    class FileStream : public tsmodel::TimeSerieStream<T> {


	public:

        FileStream( const std::string& filePath )
            :_filePath(filePath)
        {
            //throw "Not yet implemented";
        }

        bool hasNext(){ return true; }

        tsmodel::DataPoint<T> getNext(){ return DataPoint<T>(); }

    protected:
        std::string _filePath;

    };
}

#endif
