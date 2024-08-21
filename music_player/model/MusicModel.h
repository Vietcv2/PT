#ifndef MUSICMODEL_H
#define MUSICMODEL_H

#include <string>
#include <vector>
#include <map>

struct MediaFile {
    std::string path;
    std::map<std::string, std::string> metadata;
    
};
// Cấu trúc đại diện cho một tệp phương tiện
struct MediaFile {
    std::string path;
    std::string name;
    std::string artist;
    std::string album;
    // Các thuộc tính khác...
};

class MusicModel {
public:
    MusicModel();
    void loadMediaFiles(const std::string& directory);
    void loadPlaylist(const std::string& playlistName);
    void savePlaylist(const std::string& playlistName, const std::vector<MediaFile>& files);
    std::vector<MediaFile> getMediaFiles() const;
    MediaFile getFileMetadata(const std::string& filePath);
    void editFileMetadata(const std::string& filePath, const std::map<std::string, std::string>& newMetadata);

private:
    std::vector<MediaFile> mediaFiles;
    std::map<std::string, std::vector<MediaFile>> playlists;
};

#endif
