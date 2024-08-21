#include "model/MusicModel.h"
#include "view/MusicView.h"
#include "controller/MusicController.h"

int main(int argc, char* argv[]) {
    MusicModel model;
    MusicView view;
    MusicController controller(model, view);

    controller.loadMediaFiles("/path/to/your/music/folder");
    controller.playMediaFile(0); // Chơi bài đầu tiên trong danh sách

    return 0;
}
