﻿#pragma once

/**
 * Name: TRIALS
 * Version: FINAL
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum BinkMediaPlayer.EBinkMediaPlayerBinkDrawStyle
	 */
	enum class EBinkMediaPlayerBinkDrawStyle : uint8_t
	{
		BMASM_Bink_DS_RenderToTexture                     = 0,
		BMASM_Bink_DS_OverlayFillScreenWithAspectRatio    = 1,
		BMASM_Bink_DS_OverlayOriginalMovieSize            = 2,
		BMASM_Bink_DS_OverlayFillScreen                   = 3,
		BMASM_Bink_DS_OverlaySpecificDestinationRectangle = 4,
		BMASM_Bink_DS_MAX                                 = 5
	};

	/**
	 * Enum BinkMediaPlayer.EBinkMediaPlayerBinkSoundTrack
	 */
	enum class EBinkMediaPlayerBinkSoundTrack : uint8_t
	{
		BMASM_Bink_Sound_None               = 0,
		BMASM_Bink_Sound_Simple             = 1,
		BMASM_Bink_Sound_LanguageOverride   = 2,
		BMASM_Bink_Sound                    = 3,
		BMASM_Bink_Sound_51LanguageOverride = 4,
		BMASM_Bink_Sound01                  = 5,
		BMASM_Bink_Sound_71LanguageOverride = 6,
		BMASM_Bink_Sound_MAX                = 7
	};

	/**
	 * Enum BinkMediaPlayer.EBinkMediaPlayerBinkBufferModes
	 */
	enum class EBinkMediaPlayerBinkBufferModes : uint8_t
	{
		BMASM_Bink_Stream              = 0,
		BMASM_Bink_PreloadAll          = 1,
		BMASM_Bink_StreamUntilResident = 2,
		BMASM_Bink_AsyncLoading        = 3,
		BMASM_Bink_MAX                 = 4
	};

	/**
	 * Enum BinkMediaPlayer.EBinkMoviePlayerBinkSoundTrack
	 */
	enum class EBinkMoviePlayerBinkSoundTrack : uint8_t
	{
		MP_Bink_Sound_None               = 0,
		MP_Bink_Sound_Simple             = 1,
		MP_Bink_Sound_LanguageOverride   = 2,
		MP_Bink_Sound                    = 3,
		MP_Bink_Sound_51LanguageOverride = 4,
		MP_Bink_Sound01                  = 5,
		MP_Bink_Sound_71LanguageOverride = 6,
		MP_Bink_Sound_MAX                = 7
	};

	/**
	 * Enum BinkMediaPlayer.EBinkMoviePlayerBinkBufferModes
	 */
	enum class EBinkMoviePlayerBinkBufferModes : uint8_t
	{
		MP_Bink_Stream              = 0,
		MP_Bink_PreloadAll          = 1,
		MP_Bink_StreamUntilResident = 2,
		MP_Bink_MAX                 = 3
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
