#include "MusicModel.h"
#include <filesystem>
#include <taglib/tag.h>
#include <taglib/fileref.h>

MusicModel::MusicModel() {
    // Khởi tạo model, có thể nạp danh sách phát đã lưu ở đây
}

void MusicModel::loadMediaFiles(const std::string& directory) {
    for (const auto& entry : std::filesystem::recursive_directory_iterator(directory)) {
        if (entry.is_regular_file()) {
            MediaFile file;
            file.path = entry.path().string();

            // Load metadata using TagLib
            TagLib::FileRef f(entry.path().string().c_str());
            if (!f.isNull() && f.tag()) {
                file.metadata["Track"] = f.tag()->title().to8Bit(true);
                file.metadata["Artist"] = f.tag()->artist().to8Bit(true);
                file.metadata["Album"] = f.tag()->album().to8Bit(true);
                // Thêm các trường metadata khác
            }
            
            mediaFiles.push_back(file);
        }
    }
}

std::vector<MediaFile> MusicModel::getMediaFiles() const {
    return mediaFiles;
}


MediaFile MusicModel::getFileMetadata(const std::string& filePath) const {
    for (const auto& file : mediaFiles) {
        if (file.path == filePath) {
            return file;
        }
    }
    return MediaFile(); // Trả về một đối tượng MediaFile rỗng nếu không tìm thấy
}

// Các phương thức khác cho danh sách phát và metadata
