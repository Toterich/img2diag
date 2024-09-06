#include <string>

#include <opencv2/opencv.hpp>
#include <opencv2/imgproc.hpp>

cv::Mat preprocess(cv::Mat img) {
	cv::Mat res = img;

	cv::cvtColor(res, res, cv::COLOR_BGR2GRAY);
	cv::GaussianBlur(res, res, {5, 5}, 1);
	cv::Canny(res, res, 50, 50);
	cv::Mat kernel{3, 3, CV_8UC1, 1};
	cv::Point anchor{-1, -1};
	cv::dilate(res, res, kernel, anchor, 2);
	cv::erode(res, res, kernel, anchor, 1);

	return res;
}

int main(int argc, char* argv[]) {
	if (argc < 2) {
		return -1;
	}

	std::string filename{argv[1]};
	cv::Mat image = cv::imread(filename);

	cv::namedWindow("Test", 1);
	return 0;
}