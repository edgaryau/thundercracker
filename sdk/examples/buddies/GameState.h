/* -*- mode: C; c-basic-offset: 4; intent-tabs-mode: nil -*-
 *
 * Copyright <c> 2012 Sifteo, Inc. All rights reserved.
 */

///////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef SIFTEO_BUDDIES_GAMESTATE_H_
#define SIFTEO_BUDDIES_GAMESTATE_H_

///////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////

namespace Buddies {

///////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////

enum GameState
{
    GAME_STATE_NONE = 0,
    
    GAME_STATE_TITLE,
    
    GAME_STATE_MENU_MAIN,
    GAME_STATE_MENU_STORY,
    
    GAME_STATE_FREEPLAY_START,
    GAME_STATE_FREEPLAY_TITLE,
    GAME_STATE_FREEPLAY_DESCRIPTION,
    GAME_STATE_FREEPLAY_PLAY,
    GAME_STATE_FREEPLAY_OPTIONS,
    
    GAME_STATE_SHUFFLE_START,
    GAME_STATE_SHUFFLE_TITLE,
    GAME_STATE_SHUFFLE_MEMORIZE_FACES,
    GAME_STATE_SHUFFLE_CHARACTER_SPLASH,
    GAME_STATE_SHUFFLE_SHAKE_TO_SHUFFLE,
    GAME_STATE_SHUFFLE_SHUFFLING,
    GAME_STATE_SHUFFLE_UNSHUFFLE_THE_FACES,
    GAME_STATE_SHUFFLE_PLAY,
    GAME_STATE_SHUFFLE_OPTIONS,
    GAME_STATE_SHUFFLE_SOLVED,
    GAME_STATE_SHUFFLE_CONGRATULATIONS,
    GAME_STATE_SHUFFLE_END_GAME_NAV,
    
    GAME_STATE_STORY_START,
    GAME_STATE_STORY_BOOK_START,
    GAME_STATE_STORY_CHAPTER_START,
    GAME_STATE_STORY_CUTSCENE_START,
    GAME_STATE_STORY_DISPLAY_START_STATE,
    GAME_STATE_STORY_SCRAMBLING,
    GAME_STATE_STORY_CLUE,
    GAME_STATE_STORY_PLAY,
    GAME_STATE_STORY_OPTIONS,
    GAME_STATE_STORY_SOLVED,
    GAME_STATE_STORY_CUTSCENE_END_1,
    GAME_STATE_STORY_CUTSCENE_END_2,
    GAME_STATE_STORY_CHAPTER_END,
    GAME_STATE_STORY_GAME_END_CONGRATS,
    GAME_STATE_STORY_GAME_END_MORE,
    
    GAME_STATE_UNLOCKED_1,
    GAME_STATE_UNLOCKED_2,
    
    NUM_GAME_STATES
};

///////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////

}

///////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////

#endif
