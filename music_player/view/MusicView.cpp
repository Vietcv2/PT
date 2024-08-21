#include "MusicView.h"
#include <iostream>

void MusicView::displayMediaFiles(const std::vector<MediaFile>& files, int page) {
    int start = page * 25;
    int end = std::min(start + 25, (int)files.size());

    for (int i = start; i < end; ++i) {
        std::cout << i + 1 << ". " << files[i].path << std::endl;
    }
}

void MusicView::displayMetadata(const MediaFile& file) {
    std::cout << "Metadata for " << file.path << std::endl;
    for (const auto& [key, value] : file.metadata) {
        std::cout << key << ": " << value << std::endl;
    }
}

void MusicView::displayCurrentSong(const std::string& songName, int currentTime, int duration) {
    std::cout << "Now Playing: " << songName << " [" << currentTime << "/" << duration << "]" << std::endl;
}

// Các phương thức khác cho danh sách phát và metadata
