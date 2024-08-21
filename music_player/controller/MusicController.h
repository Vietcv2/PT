#ifndef MUSICCONTROLLER_H
#define MUSICCONTROLLER_H

#include "../model/MusicModel.h"
#include "../view/MusicView.h"

class MusicController {
public:
    MusicController(MusicModel& model, MusicView& view);
    void loadMediaFiles(const std::string& directory);
    void playMediaFile(int index);
    void showMediaMetadata(int index);
    void editMediaMetadata(int index, const std::map<std::string, std::string>& newMetadata);

private:
    MusicModel& model;
    MusicView& view;
    int currentSongIndex;
};

#endif
