#pragma once
#include "Basic.hpp"
#include "MoviePlayer_structs.hpp"

namespace SDK {

// Class: MoviePlayer.MoviePlayerSettings
class MoviePlayerSettings : public Object {
public:
    bool bWaitForMoviesToComplete; // 0x0028 (0x0001)
    bool bMoviesAreSkippable; // 0x0029 (0x0001)
    uint8_t Pad_0[0x6]; // 0x002A (0x0006)
    struct TArray<uint8_t> StartupMovies; // 0x0030 (0x0010)
    uint8_t BendMoviePlayer[0x28]; // 0x0040 (0x0028)
    struct TArray<uint8_t> TextElements; // 0x0068 (0x0010)
    struct TArray<uint8_t> ImageElements; // 0x0078 (0x0010)
    struct TArray<uint8_t> BendMovieScreens; // 0x0088 (0x0010)
};

} // namespace SDK
