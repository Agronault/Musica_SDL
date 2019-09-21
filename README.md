# Musica_SDL
C library to help  Computer Graphics students with their projects  

# Setup
run: _sudo apt install libsdl1.2-dev libsdl-mixer1.2-dev_

# Usage
__load_music("../anyFolder/file.ogg")__  to load a file, it returns a __Mix_Chunk *__  
__play_music(loaded_chunk, audio_channel, loop)__ to play your loaded music on the channel provided  
__play_SFX(loaded_chunk)__ to play an effect once on a reserved channel  
__stop_music(channel)__ to stop the channel provided  
