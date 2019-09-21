#include <stdio.h>

#include <SDL/SDL.h>
#include <SDL/SDL_mixer.h>


Mix_Chunk * load_music(char const file[40]){
    return Mix_LoadWAV(file);
}

void play_music(Mix_Chunk * music, int channel, int loop) {
    int canal;
    int canal_audio = channel;
    int taxa_audio = 22050;
    Uint16 formato_audio = AUDIO_S16SYS;
    int audio_buffers = 4096;

    if (Mix_OpenAudio(taxa_audio, formato_audio, canal_audio, audio_buffers) != 0) {
        printf("Não pode inicializar audio: %s\n", Mix_GetError());
    }

    if (music == NULL) {
        printf("Não foi possível inicializar audio: %s\n", Mix_GetError());
    }

    Mix_HaltChannel(channel);
    canal = Mix_PlayChannel(channel, music, loop);

    if (canal == -1) {
        printf("Não foi possível inicializar audio: %s\n", Mix_GetError());
    }
}

void parar_musica(int channel) {
    Mix_HaltChannel(channel);
}