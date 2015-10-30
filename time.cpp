#include <opencv2/core/core.hpp>

	double start = double(getTickCount());
	////算法/////
	double duration_ms = (double(getTickCount()) - start) * 1000 / getTickFrequency();
	cout << "It took " << duration_ms << " ms." << endl;
