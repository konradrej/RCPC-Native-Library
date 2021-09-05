#include <EndPointVolume.h>
#include <initguid.h>
#include <mmdeviceapi.h>
#include <stdio.h>
#include <windows.h>

#include "main.h"


namespace rcpc {
    /*
    Support functions
    */
    KEYBDINPUT getKEYBDINPUT(int keyConstant){
        KEYBDINPUT kbi;
        kbi.wVk = keyConstant;
        kbi.wScan = 0;
        kbi.dwFlags = 0;
        kbi.time = 0;
        kbi.dwExtraInfo = (ULONG_PTR) GetMessageExtraInfo();

        return kbi;
    }

    void sendKeyboardInput(KEYBDINPUT ki){
        INPUT input;
        input.type = INPUT_KEYBOARD;
        input.ki = ki;

        SendInput(1, &input, sizeof(input));
    }

    IAudioEndpointVolume* getIAudioEndpointVolume(){
        HRESULT hr = CoInitialize(NULL);

        if(hr == S_OK){
            IMMDeviceEnumerator *pIMMDeviceEnumerator = NULL;
            hr = CoCreateInstance(CLSID_MMDeviceEnumerator, NULL, CLSCTX_ALL, IID_IMMDeviceEnumerator, (LPVOID*)&pIMMDeviceEnumerator);

            if(hr == S_OK){
                IMMDevice *defaultDevice = NULL;
                hr = pIMMDeviceEnumerator->GetDefaultAudioEndpoint(eRender, eConsole, &defaultDevice);
                pIMMDeviceEnumerator->Release();
                pIMMDeviceEnumerator = NULL;

                if(hr == S_OK){
                    IAudioEndpointVolume *EndPointVolume = NULL;
                    hr = defaultDevice->Activate(__uuidof(IAudioEndpointVolume), CLSCTX_ALL, NULL, (LPVOID *)&EndPointVolume);
                    defaultDevice->Release();
                    defaultDevice = NULL;

                    if(hr == S_OK){
                        return EndPointVolume;
                    }
                }
            }
        }

        return NULL;
    }

    void releaseIAudioEndpointVolume(IAudioEndpointVolume *EndPointVolume){
        if(EndPointVolume != NULL){
            EndPointVolume->Release();
            EndPointVolume = NULL;
        }

        CoUninitialize();
    }


    /*
    Header functions
    */
    double getVersion(){
        return rcpc::version;
    }

    void nextTrack(){
        sendKeyboardInput(getKEYBDINPUT(VK_MEDIA_NEXT_TRACK));
    }

    void prevTrack(){
        sendKeyboardInput(getKEYBDINPUT(VK_MEDIA_PREV_TRACK));
    }

    void stop(){
        sendKeyboardInput(getKEYBDINPUT(VK_MEDIA_STOP));
    }

    void playPause(){
        sendKeyboardInput(getKEYBDINPUT(VK_MEDIA_PLAY_PAUSE));
    }

    void incVolume(){
        sendKeyboardInput(getKEYBDINPUT(VK_VOLUME_UP));
    }

    void decVolume(){
        sendKeyboardInput(getKEYBDINPUT(VK_VOLUME_DOWN));
    }

    void toggleMute(){
        sendKeyboardInput(getKEYBDINPUT(VK_VOLUME_MUTE));
    }

    bool setVolume(float volume){
        IAudioEndpointVolume *IAudioEndpointVolume = getIAudioEndpointVolume();
        HRESULT hr = NULL;
        bool value = false;

        if(IAudioEndpointVolume != NULL){
            hr = IAudioEndpointVolume->SetMasterVolumeLevelScalar(volume, NULL);

            if(hr == S_OK){
                value = true;
            }
        }

        releaseIAudioEndpointVolume(IAudioEndpointVolume);

        return value;
    }

    float getVolume(){
        IAudioEndpointVolume *IAudioEndpointVolume = getIAudioEndpointVolume();
        float volume = -1;

        if(IAudioEndpointVolume != NULL){
            IAudioEndpointVolume->GetMasterVolumeLevelScalar(&volume);
        }

        releaseIAudioEndpointVolume(IAudioEndpointVolume);

        return volume;
    }
}
