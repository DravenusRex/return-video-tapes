// #include "header.h"

enum class VideoTapes {
	video_tapes
};

VideoTapes returnVideoTapes() {
	VideoTapes videoTapes{VideoTapes::video_tapes};
	return videoTapes;
}

int main() {
	returnVideoTapes();
}
