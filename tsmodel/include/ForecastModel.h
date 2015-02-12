namespace tsmodel {
	template <class T>
	class ForecastModel {


	public:
		virtual double train(tsmodel::TimeSerieStream<T> inputStream, std::string tempFolder) = 0;

		virtual tsmodel::TimeSerieStream predict(tsmodel::TimeSerieStream<T> inputStream) = 0;
	};
}
