namespace tsmodel {
	template <class T>
	class ArrayStream : tsmodel::TimeSerieStream {


	public:
		virtual bool hasNext() = 0;

		template <class T>
		virtual tsmodel::DataPoint<T> getNext() = 0;
	};
}
