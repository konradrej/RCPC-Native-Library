#ifndef RCPC_HPP
#define RCPC_HPP

/*  To use this exported function of dll, include this header
 *  in your project.
 */

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
    void nextTrack();
    void prevTrack();
    void stop();
    void playPause();
    void incVolume();
    void decVolume();
    void toggleMute();
    bool setVolume(float volume);
    float getVolume();
}

#ifdef __cplusplus
}
#endif

#endif // RCPC_HPP
