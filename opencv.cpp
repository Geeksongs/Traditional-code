#include <opencv/highgui.h>

using namespace std;
using namespace cv;


int main(int argc, char* argv[])
{
	const char* imagename = "4.jpg";
	Mat image = imread(imagename);
	imshow("image", image);
	waitKey();
	return 0;
}
