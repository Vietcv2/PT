#include "MusicController.h"

MusicController::MusicController(MusicModel& m, MusicView& v)
    : model(m), view(v), currentSongIndex(-1) {}

void MusicController::loadMediaFiles(const std::string& directory) {
    model.loadMediaFiles(directory);
    view.displayMediaFiles(model.getMediaFiles(), 0);
}

void MusicController::playMediaFile(int index) {
    if (index >= 0 && index < model.getMediaFiles().size()) {
        // Logic phát nhạc dùng SDL2
        currentSongIndex = index;
        view.displayCurrentSong(model.getMediaFiles()[index].path, 0, 0); // Giả sử hiển thị thời gian 0/0
    }
}

void MusicController::showMediaMetadata(int index) {
    if (index >= 0 && index < model.getMediaFiles().size()) {
        view.displayMetadata(model.getFileMetadata(model.getMediaFiles()[index].path));
    }
}

// Các phương thức khác
