#ifndef RCPC_HPP
#define RCPC_HPP

#ifdef BUILD_DLL
    #define DLL_EXPORT __declspec(dllexport)
#else
    #define DLL_EXPORT __declspec(dllimport)
#endif


#ifdef __cplusplus
extern "C"
{
#endif

namespace rcpc {
    const double version = 1.2;

    double getVersion();

    void nextTrack();
    void prevTrack();

    void stop();
    void playPause();

    void incVolume();
    void decVolume();
    void toggleMute();

    bool setVolume(float volume);
    float getVolume();

    void scroll(float distanceX, float distanceY);
}

#ifdef __cplusplus
}
#endif

#endif // RCPC_HPP
