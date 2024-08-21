#ifndef MUSICVIEW_H
#define MUSICVIEW_H

#include <vector>
#include "../model/MusicModel.h"

class MusicView {
public:
    void displayMediaFiles(const std::vector<MediaFile>& files, int page);
    void displayMetadata(const MediaFile& file);
    void displayPlaylists(const std::vector<std::string>& playlists);
    void displayCurrentSong(const std::string& songName, int currentTime, int duration);
};

#endif
