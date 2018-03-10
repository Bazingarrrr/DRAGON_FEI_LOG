// -------------------------------------------------------------------------------
// 
// 		‚c‚wƒ‰ƒCƒuƒ‰ƒŠ		ƒwƒbƒ_ƒtƒ@ƒCƒ‹
// 
// 				Ver 3.19 
// 
// -------------------------------------------------------------------------------

#ifndef __DXLIB
#define __DXLIB

#include "DxCompileConfig.h"

// ‚c‚wƒ‰ƒCƒuƒ‰ƒŠ‚Ìƒo[ƒWƒ‡ƒ“
#define DXLIB_VERSION 0x3190
#define DXLIB_VERSION_STR_T _T( "3.19 " )
#define DXLIB_VERSION_STR_W    L"3.19 "

// İ’è -----------------------------------------------------------------------

// ‚c‚wƒ‰ƒCƒuƒ‰ƒŠ‚É•K—v‚È lib ƒtƒ@ƒCƒ‹‚ğAƒvƒƒWƒFƒNƒg‚ÌƒJƒŒƒ“ƒgƒtƒHƒ‹ƒ_‚â
// ƒRƒ“ƒpƒCƒ‰‚ÌƒfƒtƒHƒ‹ƒg LIB ƒpƒX‚Éİ’è‚¹‚¸‚Ég—p‚³‚ê‚éê‡‚ÍˆÈ‰º‚Ì
// ƒRƒƒ“ƒg‚ğŠO‚µ‚Ä‚­‚¾‚³‚¢
//#define DX_LIB_NOT_DEFAULTPATH

#ifndef __DX_MAKE

// •`‰æŠÖ˜A‚ÌŠÖ”‚ğˆêØg—p‚³‚ê‚È‚¢ê‡‚ÍˆÈ‰º‚ÌƒRƒƒ“ƒg‚ğŠO‚µ‚Ä‰º‚³‚¢
//#define DX_NOTUSE_DRAWFUNCTION

#endif // __DX_MAKE


// ’è‹`---------------------------------------------------------------------------

// ƒÎ
#define DX_PI										(3.1415926535897932384626433832795 )
#define DX_PI_F										(3.1415926535897932384626433832795f)
#define DX_TWO_PI									(3.1415926535897932384626433832795  * 2.0 )
#define DX_TWO_PI_F									(3.1415926535897932384626433832795f * 2.0f)

#define DX_CHAR										char

#define DX_DEFINE_START

#define MAX_IMAGE_NUM								(32768)				// “¯‚É‚Ä‚éƒOƒ‰ƒtƒBƒbƒNƒnƒ“ƒhƒ‹‚ÌÅ‘å”( ƒnƒ“ƒhƒ‹ƒGƒ‰[ƒ`ƒFƒbƒN‚Ìƒ}ƒXƒN‚Ég—p‚µ‚Ä‚¢‚é‚Ì‚Å 65536 ˆÈ‰º‚Ì 2 ‚Ì‚×‚«æ‚É‚µ‚Ä‰º‚³‚¢ )
#define MAX_2DSURFACE_NUM							(32768)				// ‚Q‚cƒT[ƒtƒFƒXƒf[ƒ^‚ÌÅ‘å”( ƒnƒ“ƒhƒ‹ƒGƒ‰[ƒ`ƒFƒbƒN‚Ìƒ}ƒXƒN‚Ég—p‚µ‚Ä‚¢‚é‚Ì‚Å 65536 ˆÈ‰º‚Ì 2 ‚Ì‚×‚«æ‚É‚µ‚Ä‰º‚³‚¢ )
#define MAX_3DSURFACE_NUM							(65536)				// ‚R‚cƒT[ƒtƒFƒXƒf[ƒ^‚ÌÅ‘å”( ƒnƒ“ƒhƒ‹ƒGƒ‰[ƒ`ƒFƒbƒN‚Ìƒ}ƒXƒN‚Ég—p‚µ‚Ä‚¢‚é‚Ì‚Å 65536 ˆÈ‰º‚Ì 2 ‚Ì‚×‚«æ‚É‚µ‚Ä‰º‚³‚¢ )
#define MAX_IMAGE_DIVNUM							(64)				// ‰æ‘œ•ªŠ„‚ÌÅ‘å”
#define MAX_SURFACE_NUM								(65536)				// ƒT[ƒtƒFƒXƒf[ƒ^‚ÌÅ‘å”
#define MAX_SHADOWMAP_NUM							(8192)				// ƒVƒƒƒhƒEƒ}ƒbƒvƒf[ƒ^‚ÌÅ‘å”
#define MAX_SOFTIMAGE_NUM							(8192)				// “¯‚É‚Ä‚éƒ\ƒtƒgƒCƒ[ƒWƒnƒ“ƒhƒ‹‚ÌÅ‘å”( ƒnƒ“ƒhƒ‹ƒGƒ‰[ƒ`ƒFƒbƒN‚Ìƒ}ƒXƒN‚Ég—p‚µ‚Ä‚¢‚é‚Ì‚Å 65536 ˆÈ‰º‚Ì 2 ‚Ì‚×‚«æ‚É‚µ‚Ä‰º‚³‚¢ )

#define MAX_SOUND_NUM								(32768)				// “¯‚É‚Ä‚éƒTƒEƒ“ƒhƒnƒ“ƒhƒ‹‚ÌÅ‘å”
#define MAX_SOFTSOUND_NUM							(8192)				// “¯‚É‚Ä‚éƒ\ƒtƒgƒEƒGƒAƒTƒEƒ“ƒhƒnƒ“ƒhƒ‹‚ÌÅ‘å”
#define MAX_MUSIC_NUM								(256)				// “¯‚É‚Ä‚éƒ~ƒ…[ƒWƒbƒNƒnƒ“ƒhƒ‹‚ÌÅ‘å”
#define MAX_MOVIE_NUM								(100)				// “¯‚É‚Ä‚éƒ€[ƒr[ƒnƒ“ƒhƒ‹‚ÌÅ‘å”
#define MAX_MASK_NUM								(512)				// “¯‚É‚Ä‚éƒ}ƒXƒNƒnƒ“ƒhƒ‹‚ÌÅ‘å”
#define MAX_FONT_NUM								(40)				// “¯‚É‚Ä‚éƒtƒHƒ“ƒgƒnƒ“ƒhƒ‹‚ÌÅ‘å”
#define MAX_INPUT_NUM								(256)				// “¯‚É‚Ä‚é•¶š—ñ“ü—Íƒnƒ“ƒhƒ‹‚ÌÅ‘å”
#define MAX_SOCKET_NUM								(8192)				// “¯‚É‚Ä‚é’ÊMƒnƒ“ƒhƒ‹‚ÌÅ‘å”
#define MAX_LIGHT_NUM								(4096)				// “¯‚É‚Ä‚éƒ‰ƒCƒgƒnƒ“ƒhƒ‹‚ÌÅ‘å”
#define MAX_SHADER_NUM								(4096)				// “¯‚É‚Ä‚éƒVƒF[ƒ_[ƒnƒ“ƒhƒ‹‚ÌÅ‘å”
#define MAX_CONSTANT_BUFFER_NUM						(8192)				// “¯‚É‚Ä‚é’è”ƒoƒbƒtƒ@ƒnƒ“ƒhƒ‹‚ÌÅ‘å”
#define MAX_MODEL_BASE_NUM							(32768)				// “¯‚É‚Ä‚é‚R‚cƒ‚ƒfƒ‹Šî–{ƒf[ƒ^ƒnƒ“ƒhƒ‹‚ÌÅ‘å”
#define MAX_MODEL_NUM								(32768)				// “¯‚É‚Ä‚é‚R‚cƒ‚ƒfƒ‹ƒf[ƒ^ƒnƒ“ƒhƒ‹‚ÌÅ‘å”
#define MAX_VERTEX_BUFFER_NUM						(16384)				// “¯‚É‚Ä‚é’¸“_ƒoƒbƒtƒ@ƒnƒ“ƒhƒ‹‚ÌÅ‘å”
#define MAX_INDEX_BUFFER_NUM						(16384)				// “¯‚É‚Ä‚éƒCƒ“ƒfƒbƒNƒXƒoƒbƒtƒ@‚ÌÅ‘å”
#define MAX_FILE_NUM								(32768)				// “¯‚É‚Ä‚éƒtƒ@ƒCƒ‹ƒnƒ“ƒhƒ‹‚ÌÅ‘å”

#define MAX_JOYPAD_NUM								(16)				// ƒWƒ‡ƒCƒpƒbƒh‚ÌÅ‘å”

#define DEFAULT_SCREEN_SIZE_X						(640)				// ƒfƒtƒHƒ‹ƒg‚Ì‰æ–Ê‚Ì•
#define DEFAULT_SCREEN_SIZE_Y						(480)				// ƒfƒtƒHƒ‹ƒg‚Ì‰æ–Ê‚Ì‚‚³
#define DEFAULT_COLOR_BITDEPTH						(16)				// ƒfƒtƒHƒ‹ƒg‚ÌFƒrƒbƒg[“x
#define DEFAULT_ZBUFFER_BITDEPTH					(16)				// ƒfƒtƒHƒ‹ƒg‚Ì‚yƒoƒbƒtƒ@ƒrƒbƒg[“x

#define DEFAULT_FOV									(60.0F * 3.1415926535897932384626433832795F / 180.0F)	// ƒfƒtƒHƒ‹ƒg‚Ì‹–ìŠp
#define DEFAULT_TAN_FOV_HALF						(0.57735026918962576450914878050196F) // tan( FOV * 0.5 )
#define DEFAULT_NEAR								(0.0F)				// NEARƒNƒŠƒbƒv–Ê
#define DEFAULT_FAR									(20000.0F)			// FARƒNƒŠƒbƒv–Ê

#define DX_DEFAULT_FONT_HANDLE						(-2)				// ƒfƒtƒHƒ‹ƒgƒtƒHƒ“ƒg‚ğ¦‚·’l

#define DEFAULT_FONT_SIZE							(16)				// ƒtƒHƒ“ƒg‚ÌƒfƒtƒHƒ‹ƒg‚ÌƒTƒCƒY
#define DEFAULT_FONT_THINCK							(6)					// ƒtƒHƒ“ƒg‚ÌƒfƒtƒHƒ‹ƒg‚Ì‘¾‚³
#define DEFAULT_FONT_TYPE							( DX_FONTTYPE_NORMAL )	// ƒtƒHƒ“ƒg‚ÌƒfƒtƒHƒ‹ƒg‚ÌŒ`‘Ô
#define DEFAULT_FONT_EDGESIZE						(1)					// ƒtƒHƒ“ƒg‚ÌƒfƒtƒHƒ‹ƒg‚Ì‘¾‚³

#define MAX_USERIMAGEREAD_FUNCNUM					(10)				// ƒ†[ƒU[‚ª“o˜^‚Å‚«‚éƒOƒ‰ƒtƒBƒbƒNƒ[ƒhŠÖ”‚ÌÅ‘å”

// ‚v‚h‚m‚c‚n‚v‚r‚Ìƒo[ƒWƒ‡ƒ“ƒ}ƒNƒ
#define DX_WINDOWSVERSION_31						(0x000)
#define DX_WINDOWSVERSION_95						(0x001)
#define DX_WINDOWSVERSION_98						(0x002)
#define DX_WINDOWSVERSION_ME						(0x003)
#define DX_WINDOWSVERSION_NT31						(0x104)
#define DX_WINDOWSVERSION_NT40						(0x105)
#define DX_WINDOWSVERSION_2000						(0x106)
#define DX_WINDOWSVERSION_XP						(0x107)
#define DX_WINDOWSVERSION_VISTA						(0x108)
#define DX_WINDOWSVERSION_7							(0x109)
#define DX_WINDOWSVERSION_8							(0x10A)
#define DX_WINDOWSVERSION_8_1						(0x10B)
#define DX_WINDOWSVERSION_10						(0x10C)
#define DX_WINDOWSVERSION_NT_TYPE					(0x100)

// DirectX‚Ìƒo[ƒWƒ‡ƒ“
#define DX_DIRECTXVERSION_NON						(0)
#define DX_DIRECTXVERSION_1							(0x10000)
#define DX_DIRECTXVERSION_2							(0x20000)
#define DX_DIRECTXVERSION_3							(0x30000)
#define DX_DIRECTXVERSION_4							(0x40000)
#define DX_DIRECTXVERSION_5							(0x50000)
#define DX_DIRECTXVERSION_6							(0x60000)
#define DX_DIRECTXVERSION_6_1						(0x60100)
#define DX_DIRECTXVERSION_7							(0x70000)
#define DX_DIRECTXVERSION_8							(0x80000)
#define DX_DIRECTXVERSION_8_1						(0x80100)

// Direct3D‚Ìƒo[ƒWƒ‡ƒ“
#define DX_DIRECT3D_NONE							(0)
#define DX_DIRECT3D_9								(1)
#define DX_DIRECT3D_9EX								(2)
#define DX_DIRECT3D_11								(3)

// Direct3D11 ‚Ì Feature Level
#define DX_DIRECT3D_11_FEATURE_LEVEL_9_1			(0x9100)
#define DX_DIRECT3D_11_FEATURE_LEVEL_9_2			(0x9200)
#define DX_DIRECT3D_11_FEATURE_LEVEL_9_3			(0x9300)
#define DX_DIRECT3D_11_FEATURE_LEVEL_10_0			(0xa000)
#define DX_DIRECT3D_11_FEATURE_LEVEL_10_1			(0xa100)
#define DX_DIRECT3D_11_FEATURE_LEVEL_11_0			(0xb000)
#define DX_DIRECT3D_11_FEATURE_LEVEL_11_1			(0xb100)

// •¶šƒZƒbƒg
#define DX_CHARSET_DEFAULT							(0)				// ƒfƒtƒHƒ‹ƒg•¶šƒZƒbƒg
#define DX_CHARSET_SHFTJIS							(1)				// ƒVƒtƒgJIS
#define DX_CHARSET_HANGEUL							(2)				// ƒnƒ“ƒOƒ‹•¶šƒZƒbƒg
#define DX_CHARSET_BIG5								(3)				// ”É‘Ì•¶šƒZƒbƒg
#define DX_CHARSET_GB2312							(4)				// ŠÈ‘Ì•¶šƒZƒbƒg
#define DX_CHARSET_WINDOWS_1252						(5)				// ‰¢•¶(ƒ‰ƒeƒ“•¶š‚Ì•¶šƒR[ƒh)
#define DX_CHARSET_ISO_IEC_8859_15					(6)				// ‰¢•¶(ƒ‰ƒeƒ“•¶š‚Ì•¶šƒR[ƒh)
#define DX_CHARSET_UTF8								(7)				// UTF-8
#define DX_CHARSET_NUM								(8)				// •¶šƒZƒbƒg‚Ì”

// •¶šƒR[ƒhŒ`®
#define DX_CHARCODEFORMAT_SHIFTJIS					(932)			// ƒVƒtƒgJISƒR[ƒh
#define DX_CHARCODEFORMAT_GB2312					(936)			// ŠÈ‘Ìš•¶šƒR[ƒh
#define DX_CHARCODEFORMAT_UHC						(949)			// ƒnƒ“ƒOƒ‹•¶šƒR[ƒh
#define DX_CHARCODEFORMAT_BIG5						(950)			// ”É‘Ì•¶šƒR[ƒh
#define DX_CHARCODEFORMAT_UTF16LE					(1200)			// UTF-16 ƒŠƒgƒ‹ƒGƒ“ƒfƒBƒAƒ“
#define DX_CHARCODEFORMAT_UTF16BE					(1201)			// UTF-16 ƒrƒbƒOƒGƒ“ƒfƒBƒAƒ“
#define DX_CHARCODEFORMAT_WINDOWS_1252				(1252)			// ‰¢•¶(ƒ‰ƒeƒ“•¶š‚Ì•¶šƒR[ƒh)
#define DX_CHARCODEFORMAT_ISO_IEC_8859_15			(32764)			// ‰¢•¶(ƒ‰ƒeƒ“•¶š‚Ì•¶šƒR[ƒh)
#define DX_CHARCODEFORMAT_UTF8						(65001)			// UTF-8
#define DX_CHARCODEFORMAT_ASCII						(32765)			// ƒAƒXƒL[•¶šƒR[ƒh
#define DX_CHARCODEFORMAT_UTF32LE					(32766)			// UTF-32 ƒŠƒgƒ‹ƒGƒ“ƒfƒBƒAƒ“
#define DX_CHARCODEFORMAT_UTF32BE					(32767)			// UTF-32 ƒrƒbƒOƒGƒ“ƒfƒBƒAƒ“

// ‚l‚h‚c‚h‚Ì‰‰‘tƒ‚[ƒh’è‹`
#define DX_MIDIMODE_MCI								(0)				// ‚l‚b‚h‚É‚æ‚é‰‰‘t
#define DX_MIDIMODE_DM								(1)				// ‚c‚‰‚’‚…‚ƒ‚”‚l‚•‚“‚‰‚ƒ‚É‚æ‚é‰‰‘t
#define DX_MIDIMODE_DIRECT_MUSIC_REVERB				(1)				// ‚c‚‰‚’‚…‚ƒ‚”‚l‚•‚“‚‰‚ƒ(ƒŠƒo[ƒu‚ ‚è)‚É‚æ‚é‰‰‘t
#define DX_MIDIMODE_DIRECT_MUSIC_NORMAL				(2)				// ‚c‚‰‚’‚…‚ƒ‚”‚l‚•‚“‚‰‚ƒ(ƒŠƒo[ƒu‚È‚µ)‚É‚æ‚é‰‰‘t
#define DX_MIDIMODE_NUM								(3)				// ‚l‚h‚c‚h‚Ì‰‰‘tƒ‚[ƒh‚Ì”

// •`‰æƒ‚[ƒh’è‹`
#define DX_DRAWMODE_NEAREST							(0)				// ƒlƒAƒŒƒXƒgƒlƒCƒo[–@‚Å•`‰æ
#define DX_DRAWMODE_BILINEAR						(1)				// ƒoƒCƒŠƒjƒA–@‚Å•`‰æ‚·‚é
#define DX_DRAWMODE_ANISOTROPIC						(2)				// ˆÙ•û«ƒtƒBƒ‹ƒ^ƒŠƒ“ƒO–@‚Å•`‰æ‚·‚é
#define DX_DRAWMODE_OTHER							(3)				// ‚»‚êˆÈŠO
#define DX_DRAWMODE_NUM								(4)				// •`‰æƒ‚[ƒh‚Ì”

// ƒtƒHƒ“ƒg‚Ìƒ^ƒCƒv
#define DX_FONTTYPE_NORMAL							(0x00)				// ƒm[ƒ}ƒ‹ƒtƒHƒ“ƒg
#define DX_FONTTYPE_EDGE							(0x01)				// ƒGƒbƒW‚Â‚«ƒtƒHƒ“ƒg
#define DX_FONTTYPE_ANTIALIASING					(0x02)				// ƒAƒ“ƒ`ƒGƒCƒŠƒAƒXƒtƒHƒ“ƒg( •W€‹@”\ƒAƒ“ƒ`ƒGƒCƒŠƒAƒX )
#define DX_FONTTYPE_ANTIALIASING_4X4				(0x12)				// ƒAƒ“ƒ`ƒGƒCƒŠƒAƒXƒtƒHƒ“ƒg( 4x4ƒTƒ“ƒvƒŠƒ“ƒO )
#define DX_FONTTYPE_ANTIALIASING_8X8				(0x22)				// ƒAƒ“ƒ`ƒGƒCƒŠƒAƒXƒtƒHƒ“ƒg( 8x8ƒTƒ“ƒvƒŠƒ“ƒO )
#define DX_FONTTYPE_ANTIALIASING_EDGE				(0x03)				// ƒAƒ“ƒ`ƒGƒCƒŠƒAƒX•ƒGƒbƒW•t‚«ƒtƒHƒ“ƒg( •W€‹@”\ƒAƒ“ƒ`ƒGƒCƒŠƒAƒX )
#define DX_FONTTYPE_ANTIALIASING_EDGE_4X4			(0x13)				// ƒAƒ“ƒ`ƒGƒCƒŠƒAƒX•ƒGƒbƒW•t‚«ƒtƒHƒ“ƒg( 4x4ƒTƒ“ƒvƒŠƒ“ƒO )
#define DX_FONTTYPE_ANTIALIASING_EDGE_8X8			(0x23)				// ƒAƒ“ƒ`ƒGƒCƒŠƒAƒX•ƒGƒbƒW•t‚«ƒtƒHƒ“ƒg( 8x8ƒTƒ“ƒvƒŠƒ“ƒO )

// ƒtƒHƒ“ƒg‰æ‘œ‚ÌŠK’²ƒrƒbƒg”
#define DX_FONTIMAGE_BIT_1							(0)
#define DX_FONTIMAGE_BIT_4							(1)
#define DX_FONTIMAGE_BIT_8							(2)

// •`‰æƒuƒŒƒ“ƒhƒ‚[ƒh’è‹`
#define DX_BLENDMODE_NOBLEND						(0)				// ƒm[ƒuƒŒƒ“ƒh
#define DX_BLENDMODE_ALPHA							(1)				// ƒ¿ƒuƒŒƒ“ƒh
#define DX_BLENDMODE_ADD							(2)				// ‰ÁZƒuƒŒƒ“ƒh
#define DX_BLENDMODE_SUB							(3)				// Œ¸ZƒuƒŒƒ“ƒh
#define DX_BLENDMODE_MUL							(4)				// æZƒuƒŒƒ“ƒh
   // (“à•”ˆ——p)
#define DX_BLENDMODE_SUB2							(5)				// “à•”ˆ——pŒ¸ZƒuƒŒƒ“ƒh‚Q
//#define DX_BLENDMODE_BLINEALPHA					(7)				// ‹«ŠEü‚Ú‚©‚µ
#define DX_BLENDMODE_XOR							(6)				// XORƒuƒŒƒ“ƒh( ƒ\ƒtƒgƒEƒGƒAƒŒƒ“ƒ_ƒŠƒ“ƒOƒ‚[ƒh‚Å‚Ì‚İ—LŒø )
#define DX_BLENDMODE_DESTCOLOR						(8)				// ƒJƒ‰[‚ÍXV‚³‚ê‚È‚¢
#define DX_BLENDMODE_INVDESTCOLOR					(9)				// •`‰ææ‚ÌF‚Ì”½“]’l‚ğŠ|‚¯‚é
#define DX_BLENDMODE_INVSRC							(10)			// •`‰æŒ³‚ÌF‚ğ”½“]‚·‚é
#define DX_BLENDMODE_MULA							(11)			// ƒAƒ‹ƒtƒ@ƒ`ƒƒƒ“ƒlƒ‹l—¶•t‚«æZƒuƒŒƒ“ƒh
#define DX_BLENDMODE_ALPHA_X4						(12)			// ƒ¿ƒuƒŒƒ“ƒh‚Ì•`‰æŒ³‚Ì‹P“x‚ğÅ‘å‚S”{‚É‚Å‚«‚éƒ‚[ƒh
#define DX_BLENDMODE_ADD_X4							(13)			// ‰ÁZƒuƒŒƒ“ƒh‚Ì•`‰æŒ³‚Ì‹P“x‚ğÅ‘å‚S”{‚É‚Å‚«‚éƒ‚[ƒh
#define DX_BLENDMODE_SRCCOLOR						(14)			// •`‰æŒ³‚ÌƒJƒ‰[‚Å‚»‚Ì‚Ü‚Ü•`‰æ‚³‚ê‚é
#define DX_BLENDMODE_HALF_ADD						(15)			// ”¼‰ÁZƒuƒŒƒ“ƒh
#define DX_BLENDMODE_SUB1							(16)			// “à•”ˆ——pŒ¸ZƒuƒŒƒ“ƒh‚P
#define DX_BLENDMODE_PMA_ALPHA						(17)			// æZÏ‚İƒ¿ƒuƒŒƒ“ƒhƒ‚[ƒh‚Ìƒ¿ƒuƒŒƒ“ƒh
#define DX_BLENDMODE_PMA_ADD						(18)			// æZÏ‚İƒ¿ƒuƒŒƒ“ƒhƒ‚[ƒh‚Ì‰ÁZƒuƒŒƒ“ƒh
#define DX_BLENDMODE_PMA_SUB						(19)			// æZÏ‚İƒ¿ƒuƒŒƒ“ƒhƒ‚[ƒh‚ÌŒ¸ZƒuƒŒƒ“ƒh
#define DX_BLENDMODE_PMA_INVSRC						(20)			// æZÏ‚İƒ¿ƒuƒŒƒ“ƒhƒ‚[ƒh‚Ì•`‰æŒ³‚ÌF‚ğ”½“]‚·‚é
#define DX_BLENDMODE_PMA_ALPHA_X4					(21)			// æZÏ‚İƒ¿ƒuƒŒƒ“ƒhƒ‚[ƒh‚Ìƒ¿ƒuƒŒƒ“ƒh‚Ì•`‰æŒ³‚Ì‹P“x‚ğÅ‘å‚S”{‚É‚Å‚«‚éƒ‚[ƒh
#define DX_BLENDMODE_PMA_ADD_X4						(22)			// æZÏ‚İƒ¿ƒuƒŒƒ“ƒhƒ‚[ƒh‚Ì‰ÁZƒuƒŒƒ“ƒh‚Ì•`‰æŒ³‚Ì‹P“x‚ğÅ‘å‚S”{‚É‚Å‚«‚éƒ‚[ƒh
#define DX_BLENDMODE_NUM							(23)			// ƒuƒŒƒ“ƒhƒ‚[ƒh‚Ì”

// DrawGraphF “™‚Ì•‚“®¬”“_’l‚ÅÀ•W‚ğw’è‚·‚éŠÖ”‚É‚¨‚¯‚éÀ•Wƒ^ƒCƒv
#define DX_DRAWFLOATCOORDTYPE_DIRECT3D9				(0)				// Direct3D9ƒ^ƒCƒv( -0.5f ‚Ì•â³‚ğs‚í‚È‚¢‚ÆƒeƒNƒXƒ`ƒƒ‚ÌƒsƒNƒZƒ‹‚ªãY—í‚Éƒ}ƒbƒv‚³‚ê‚È‚¢ƒ^ƒCƒv )
#define DX_DRAWFLOATCOORDTYPE_DIRECT3D10			(1)				// Direct3D10ƒ^ƒCƒv( -0.5f ‚Ì•â³‚ğs‚í‚È‚È‚­‚Ä‚àƒeƒNƒXƒ`ƒƒ‚ÌƒsƒNƒZƒ‹‚ªãY—í‚Éƒ}ƒbƒv‚³‚ê‚éƒ^ƒCƒv )

// ‰æ‘œ‡¬ƒ^ƒCƒv
#define DX_BLENDGRAPHTYPE_NORMAL					(0)				// ’Êí‡¬
#define DX_BLENDGRAPHTYPE_WIPE						(1)				// ƒƒCƒvˆ—
#define DX_BLENDGRAPHTYPE_ALPHA						(2)				// ƒuƒŒƒ“ƒh‰æ‘œ‚Ìƒ¿’l‚ÆŒ³‰æ‘œ‚Ìƒ¿’l‚ğŠ|‚¯‡‚í‚¹‚é
#define DX_BLENDGRAPHTYPE_NUM						(3)

// ‰æ‘œ‡¬À•Wƒ^ƒCƒv
#define DX_BLENDGRAPH_POSMODE_DRAWGRAPH				(0)				// •`‰æ‚·‚é‰æ‘œŠî€‚Å‡¬‰æ‘œ‚ÌÀ•W‚ğŒˆ’è
#define DX_BLENDGRAPH_POSMODE_SCREEN				(1)				// ƒXƒNƒŠ[ƒ“À•WŠî€‚Å‡¬‰æ‘œ‚ÌÀ•W‚ğŒˆ’è
#define DX_BLENDGRAPH_POSMODE_NUM					(2)

// ƒOƒ‰ƒtƒBƒbƒNƒtƒBƒ‹ƒ^[ƒ^ƒCƒv
#define DX_GRAPH_FILTER_MONO						(0)				// ƒ‚ƒmƒg[ƒ“ƒtƒBƒ‹ƒ^
#define DX_GRAPH_FILTER_GAUSS						(1)				// ƒKƒEƒXƒtƒBƒ‹ƒ^
#define DX_GRAPH_FILTER_DOWN_SCALE					(2)				// k¬ƒtƒBƒ‹ƒ^
#define DX_GRAPH_FILTER_BRIGHT_CLIP					(3)				// –¾‚é‚³ƒNƒŠƒbƒvƒtƒBƒ‹ƒ^
#define DX_GRAPH_FILTER_BRIGHT_SCALE				(4)				// w’è‚Ì–¾‚é‚³—Ìˆæ‚ğŠg‘å‚·‚éƒtƒBƒ‹ƒ^
#define DX_GRAPH_FILTER_HSB							(5)				// F‘ŠEÊ“xE–¾“xƒtƒBƒ‹ƒ^
#define DX_GRAPH_FILTER_INVERT						(6)				// ŠK’²‚Ì”½“]ƒtƒBƒ‹ƒ^
#define DX_GRAPH_FILTER_LEVEL						(7)				// ƒŒƒxƒ‹•â³ƒtƒBƒ‹ƒ^
#define DX_GRAPH_FILTER_TWO_COLOR					(8)				// ‚QŠK’²‰»ƒtƒBƒ‹ƒ^
#define DX_GRAPH_FILTER_GRADIENT_MAP				(9)				// ƒOƒ‰ƒf[ƒVƒ‡ƒ“ƒ}ƒbƒvƒtƒBƒ‹ƒ^
#define DX_GRAPH_FILTER_PREMUL_ALPHA				(10)			// ’Êí‚ÌƒAƒ‹ƒtƒ@ƒ`ƒƒƒ“ƒlƒ‹•t‚«‰æ‘œ‚ğæZÏ‚İƒAƒ‹ƒtƒ@‰æ‘œ‚É•ÏŠ·‚·‚éƒtƒBƒ‹ƒ^
#define DX_GRAPH_FILTER_INTERP_ALPHA				(11)			// æZÏ‚İƒ¿‰æ‘œ‚ğ’Êí‚ÌƒAƒ‹ƒtƒ@ƒ`ƒƒƒ“ƒlƒ‹•t‚«‰æ‘œ‚É•ÏŠ·‚·‚éƒtƒBƒ‹ƒ^
#define DX_GRAPH_FILTER_YUV_TO_RGB					(12)			// YUVƒJƒ‰[‚ğRGBƒJƒ‰[‚É•ÏŠ·‚·‚éƒtƒBƒ‹ƒ^
#define DX_GRAPH_FILTER_Y2UV1_TO_RGB				(13)			// YUVƒJƒ‰[‚ğRGBƒJƒ‰[‚É•ÏŠ·‚·‚éƒtƒBƒ‹ƒ^( UV¬•ª‚ª Y¬•ª‚Ì”¼•ªE–”‚Í‚S•ª‚Ì‚P( ‰¡Ec•Ğ•ûá‚µ‚­‚Í—¼•û )‚Ì‰ğ‘œ“x‚µ‚©‚È‚¢ê‡—p )
#define DX_GRAPH_FILTER_YUV_TO_RGB_RRA				(14)			// YUVƒJƒ‰[‚ğRGBƒJƒ‰[‚É•ÏŠ·‚·‚éƒtƒBƒ‹ƒ^( Š‚Â‰E‘¤”¼•ª‚ÌR‚Ì’l‚ğƒAƒ‹ƒtƒ@’l‚Æ‚µ‚Äˆµ‚¤ )
#define DX_GRAPH_FILTER_Y2UV1_TO_RGB_RRA			(15)			// YUVƒJƒ‰[‚ğRGBƒJƒ‰[‚É•ÏŠ·‚·‚éƒtƒBƒ‹ƒ^( UV¬•ª‚ª Y¬•ª‚Ì”¼•ªE–”‚Í‚S•ª‚Ì‚P( ‰¡Ec•Ğ•ûá‚µ‚­‚Í—¼•û )‚Ì‰ğ‘œ“x‚µ‚©‚È‚¢ê‡—p )( Š‚Â‰E‘¤”¼•ª‚ÌR‚Ì’l‚ğƒAƒ‹ƒtƒ@’l‚Æ‚µ‚Äˆµ‚¤ )
#define DX_GRAPH_FILTER_BICUBIC_SCALE				(16)			// ƒoƒCƒLƒ…[ƒrƒbƒN‚ğg—p‚µ‚½Šg‘åEk¬ƒtƒBƒ‹ƒ^
#define DX_GRAPH_FILTER_LANCZOS3_SCALE				(17)			// Lanczos-3‚ğg—p‚µ‚½Šg‘åEk¬ƒtƒBƒ‹ƒ^
#define DX_GRAPH_FILTER_PMA_BRIGHT_CLIP				(18)			// –¾‚é‚³ƒNƒŠƒbƒvƒtƒBƒ‹ƒ^(æZÏ‚İƒAƒ‹ƒtƒ@‰æ‘œ—p)
#define DX_GRAPH_FILTER_PMA_BRIGHT_SCALE			(19)			// w’è‚Ì–¾‚é‚³—Ìˆæ‚ğŠg‘å‚·‚éƒtƒBƒ‹ƒ^(æZÏ‚İƒAƒ‹ƒtƒ@‰æ‘œ—p)
#define DX_GRAPH_FILTER_PMA_HSB						(20)			// F‘ŠEÊ“xE–¾“xƒtƒBƒ‹ƒ^(æZÏ‚İƒAƒ‹ƒtƒ@‰æ‘œ—p)
#define DX_GRAPH_FILTER_PMA_INVERT					(21)			// ŠK’²‚Ì”½“]ƒtƒBƒ‹ƒ^(æZÏ‚İƒAƒ‹ƒtƒ@‰æ‘œ—p)
#define DX_GRAPH_FILTER_PMA_LEVEL					(22)			// ƒŒƒxƒ‹•â³ƒtƒBƒ‹ƒ^(æZÏ‚İƒAƒ‹ƒtƒ@‰æ‘œ—p)
#define DX_GRAPH_FILTER_PMA_TWO_COLOR				(23)			// ‚QŠK’²‰»ƒtƒBƒ‹ƒ^(æZÏ‚İƒAƒ‹ƒtƒ@‰æ‘œ—p)
#define DX_GRAPH_FILTER_PMA_GRADIENT_MAP			(24)			// ƒOƒ‰ƒf[ƒVƒ‡ƒ“ƒ}ƒbƒvƒtƒBƒ‹ƒ^(æZÏ‚İƒAƒ‹ƒtƒ@‰æ‘œ—p)
#define DX_GRAPH_FILTER_NUM							(25)

// ƒOƒ‰ƒtƒBƒbƒNƒuƒŒƒ“ƒhƒ^ƒCƒv
#define DX_GRAPH_BLEND_NORMAL						(0)				// ’Êí
#define DX_GRAPH_BLEND_RGBA_SELECT_MIX				(1)				// RGBA‚Ì—v‘f‚ğ‘I‘ğ‚µ‚Ä‡¬
#define DX_GRAPH_BLEND_MULTIPLE						(2)				// æZ
#define DX_GRAPH_BLEND_DIFFERENCE					(3)				// Œ¸Z
#define DX_GRAPH_BLEND_ADD							(4)				// ‰ÁZ
#define DX_GRAPH_BLEND_SCREEN						(5)				// ƒXƒNƒŠ[ƒ“
#define DX_GRAPH_BLEND_OVERLAY						(6)				// ƒI[ƒo[ƒŒƒC
#define DX_GRAPH_BLEND_DODGE						(7)				// •¢‚¢Ä‚«
#define DX_GRAPH_BLEND_BURN							(8)				// Ä‚«‚İ
#define DX_GRAPH_BLEND_DARKEN						(9)				// ”äŠr(ˆÃ)
#define DX_GRAPH_BLEND_LIGHTEN						(10)			// ”äŠr(–¾)
#define DX_GRAPH_BLEND_SOFTLIGHT					(11)			// ƒ\ƒtƒgƒ‰ƒCƒg
#define DX_GRAPH_BLEND_HARDLIGHT					(12)			// ƒn[ƒhƒ‰ƒCƒg
#define DX_GRAPH_BLEND_EXCLUSION					(13)			// œŠO
#define DX_GRAPH_BLEND_NORMAL_ALPHACH				(14)			// ƒ¿ƒ`ƒƒƒ“ƒlƒ‹•t‚«‰æ‘œ‚Ì’Êí‡¬
#define DX_GRAPH_BLEND_ADD_ALPHACH					(15)			// ƒ¿ƒ`ƒƒƒ“ƒlƒ‹•t‚«‰æ‘œ‚Ì‰ÁZ‡¬
#define DX_GRAPH_BLEND_MULTIPLE_A_ONLY				(16)			// ƒAƒ‹ƒtƒ@ƒ`ƒƒƒ“ƒlƒ‹‚Ì‚İ‚ÌæZ
#define DX_GRAPH_BLEND_PMA_NORMAL					(17)			// ’Êí( æZÏ‚İƒ¿‰æ‘œ—p )
#define DX_GRAPH_BLEND_PMA_RGBA_SELECT_MIX			(18)			// RGBA‚Ì—v‘f‚ğ‘I‘ğ‚µ‚Ä‡¬( æZÏ‚İƒ¿‰æ‘œ—p )
#define DX_GRAPH_BLEND_PMA_MULTIPLE					(19)			// æZ( æZÏ‚İƒ¿‰æ‘œ—p )
#define DX_GRAPH_BLEND_PMA_DIFFERENCE				(20)			// Œ¸Z( æZÏ‚İƒ¿‰æ‘œ—p )
#define DX_GRAPH_BLEND_PMA_ADD						(21)			// ‰ÁZ( æZÏ‚İƒ¿‰æ‘œ—p )
#define DX_GRAPH_BLEND_PMA_SCREEN					(22)			// ƒXƒNƒŠ[ƒ“( æZÏ‚İƒ¿‰æ‘œ—p )
#define DX_GRAPH_BLEND_PMA_OVERLAY					(23)			// ƒI[ƒo[ƒŒƒC( æZÏ‚İƒ¿‰æ‘œ—p )
#define DX_GRAPH_BLEND_PMA_DODGE					(24)			// •¢‚¢Ä‚«( æZÏ‚İƒ¿‰æ‘œ—p )
#define DX_GRAPH_BLEND_PMA_BURN						(25)			// Ä‚«‚İ( æZÏ‚İƒ¿‰æ‘œ—p )
#define DX_GRAPH_BLEND_PMA_DARKEN					(26)			// ”äŠr(ˆÃ)( æZÏ‚İƒ¿‰æ‘œ—p )
#define DX_GRAPH_BLEND_PMA_LIGHTEN					(27)			// ”äŠr(–¾)( æZÏ‚İƒ¿‰æ‘œ—p )
#define DX_GRAPH_BLEND_PMA_SOFTLIGHT				(28)			// ƒ\ƒtƒgƒ‰ƒCƒg( æZÏ‚İƒ¿‰æ‘œ—p )
#define DX_GRAPH_BLEND_PMA_HARDLIGHT				(29)			// ƒn[ƒhƒ‰ƒCƒg( æZÏ‚İƒ¿‰æ‘œ—p )
#define DX_GRAPH_BLEND_PMA_EXCLUSION				(30)			// œŠO( æZÏ‚İƒ¿‰æ‘œ—p )
#define DX_GRAPH_BLEND_PMA_NORMAL_ALPHACH			(31)			// ƒ¿ƒ`ƒƒƒ“ƒlƒ‹•t‚«‰æ‘œ‚Ì’Êí‡¬( æZÏ‚İƒ¿‰æ‘œ—p )
#define DX_GRAPH_BLEND_PMA_ADD_ALPHACH				(32)			// ƒ¿ƒ`ƒƒƒ“ƒlƒ‹•t‚«‰æ‘œ‚Ì‰ÁZ‡¬( æZÏ‚İƒ¿‰æ‘œ—p )
#define DX_GRAPH_BLEND_PMA_MULTIPLE_A_ONLY			(33)			// ƒAƒ‹ƒtƒ@ƒ`ƒƒƒ“ƒlƒ‹‚Ì‚İ‚ÌæZ( æZÏ‚İƒ¿‰æ‘œ—p )
#define DX_GRAPH_BLEND_NUM							(34)

// DX_GRAPH_BLEND_RGBA_SELECT_MIX —p‚ÌF‘I‘ğ—p’è‹`
#define DX_RGBA_SELECT_SRC_R						(0)				// Œ³‰æ‘œ‚ÌÔ¬•ª
#define DX_RGBA_SELECT_SRC_G						(1)				// Œ³‰æ‘œ‚Ì—Î¬•ª
#define DX_RGBA_SELECT_SRC_B						(2)				// Œ³‰æ‘œ‚ÌÂ¬•ª
#define DX_RGBA_SELECT_SRC_A						(3)				// Œ³‰æ‘œ‚Ìƒ¿¬•ª
#define DX_RGBA_SELECT_BLEND_R						(4)				// ƒuƒŒƒ“ƒh‰æ‘œ‚ÌÔ¬•ª
#define DX_RGBA_SELECT_BLEND_G						(5)				// ƒuƒŒƒ“ƒh‰æ‘œ‚Ì—Î¬•ª
#define DX_RGBA_SELECT_BLEND_B						(6)				// ƒuƒŒƒ“ƒh‰æ‘œ‚ÌÂ¬•ª
#define DX_RGBA_SELECT_BLEND_A						(7)				// ƒuƒŒƒ“ƒh‰æ‘œ‚Ìƒ¿¬•ª

// ƒtƒBƒ‹ƒ‚[ƒh
#define DX_FILL_WIREFRAME							(2)				// ƒƒCƒ„[ƒtƒŒ[ƒ€
#define DX_FILL_SOLID								(3)				// ƒ|ƒŠƒSƒ“

// ƒ|ƒŠƒSƒ“ƒJƒŠƒ“ƒOƒ‚[ƒh
#define DX_CULLING_NONE								(0)				// ƒJƒŠƒ“ƒO‚È‚µ
#define DX_CULLING_LEFT								(1)				// ”w–Ê‚ğ¶‰ñ‚è‚ÅƒJƒŠƒ“ƒO
#define DX_CULLING_RIGHT							(2)				// ”w–Ê‚ğ‰E‰ñ‚è‚ÅƒJƒŠƒ“ƒO
#define DX_CULLING_NUM								(3)				// ƒJƒŠƒ“ƒOƒ‚[ƒh‚Ì”

// ƒNƒŠƒbƒsƒ“ƒO•ûŒü
#define DX_CAMERACLIP_LEFT							(0x01)			// ‰æ–Ê¶•ûŒü‚ÉƒNƒŠƒbƒv
#define DX_CAMERACLIP_RIGHT							(0x02)			// ‰æ–Ê‰E•ûŒü‚ÉƒNƒŠƒbƒv
#define DX_CAMERACLIP_BOTTOM						(0x04)			// ‰æ–Ê‰º•ûŒü‚ÉƒNƒŠƒbƒv
#define DX_CAMERACLIP_TOP							(0x08)			// ‰æ–Êã•ûŒü‚ÉƒNƒŠƒbƒv
#define DX_CAMERACLIP_BACK							(0x10)			// ‰æ–ÊŒã•ûŒü‚ÉƒNƒŠƒbƒv
#define DX_CAMERACLIP_FRONT							(0x20)			// ‰æ–Ê‘O•ûŒü‚ÉƒNƒŠƒbƒv

// MV1ƒ‚ƒfƒ‹‚Ì’¸“_ƒ^ƒCƒv
#define DX_MV1_VERTEX_TYPE_1FRAME					(0)				// ‚PƒtƒŒ[ƒ€‚Ì‰e‹¿‚ğó‚¯‚é’¸“_
#define DX_MV1_VERTEX_TYPE_4FRAME					(1)				// ‚P`‚SƒtƒŒ[ƒ€‚Ì‰e‹¿‚ğó‚¯‚é’¸“_
#define DX_MV1_VERTEX_TYPE_8FRAME					(2)				// ‚T`‚WƒtƒŒ[ƒ€‚Ì‰e‹¿‚ğó‚¯‚é’¸“_
#define DX_MV1_VERTEX_TYPE_FREE_FRAME				(3)				// ‚XƒtƒŒ[ƒ€ˆÈã‚Ì‰e‹¿‚ğó‚¯‚é’¸“_
#define DX_MV1_VERTEX_TYPE_NMAP_1FRAME				(4)				// –@üƒ}ƒbƒv—p‚Ìî•ñ‚ªŠÜ‚Ü‚ê‚é‚PƒtƒŒ[ƒ€‚Ì‰e‹¿‚ğó‚¯‚é’¸“_
#define DX_MV1_VERTEX_TYPE_NMAP_4FRAME				(5)				// –@üƒ}ƒbƒv—p‚Ìî•ñ‚ªŠÜ‚Ü‚ê‚é‚P`‚SƒtƒŒ[ƒ€‚Ì‰e‹¿‚ğó‚¯‚é’¸“_
#define DX_MV1_VERTEX_TYPE_NMAP_8FRAME				(6)				// –@üƒ}ƒbƒv—p‚Ìî•ñ‚ªŠÜ‚Ü‚ê‚é‚T`‚WƒtƒŒ[ƒ€‚Ì‰e‹¿‚ğó‚¯‚é’¸“_
#define DX_MV1_VERTEX_TYPE_NMAP_FREE_FRAME			(7)				// –@üƒ}ƒbƒv—p‚Ìî•ñ‚ªŠÜ‚Ü‚ê‚é‚XƒtƒŒ[ƒ€ˆÈã‚Ì‰e‹¿‚ğó‚¯‚é’¸“_
#define DX_MV1_VERTEX_TYPE_NUM						(8)				// ’¸“_ƒ^ƒCƒv‚Ì”

// ƒƒbƒVƒ…‚Ìí—Ş
#define DX_MV1_MESHCATEGORY_NORMAL					(0)				// •’Ê‚ÌƒƒbƒVƒ…
#define DX_MV1_MESHCATEGORY_OUTLINE					(1)				// —ÖŠsü•`‰æ—pƒƒbƒVƒ…
#define DX_MV1_MESHCATEGORY_OUTLINE_ORIG_SHADER		(2)				// —ÖŠsü•`‰æ—pƒƒbƒVƒ…( ƒIƒŠƒWƒiƒ‹ƒVƒF[ƒ_[‚Å‚Ì•`‰æ—p )
#define DX_MV1_MESHCATEGORY_NUM						(3)				// ƒƒbƒVƒ…‚Ìí—Ş‚Ì”

// MV1ƒtƒ@ƒCƒ‹‚Ì•Û‘¶ƒ^ƒCƒv
#define MV1_SAVETYPE_MESH							(0x0001)		// ƒƒbƒVƒ…î•ñ‚Ì‚İ•Û‘¶
#define MV1_SAVETYPE_ANIM							(0x0002)		// ƒAƒjƒ[ƒVƒ‡ƒ“î•ñ‚Ì‚İ•Û‘¶
#define MV1_SAVETYPE_NORMAL							( MV1_SAVETYPE_MESH | MV1_SAVETYPE_ANIM )	// ’Êí•Û‘¶

// ƒAƒjƒ[ƒVƒ‡ƒ“ƒL[ƒf[ƒ^ƒ^ƒCƒv
#define MV1_ANIMKEY_DATATYPE_ROTATE					(0)				// ‰ñ“]
#define MV1_ANIMKEY_DATATYPE_ROTATE_X				(1)				// ‰ñ“]‚w
#define MV1_ANIMKEY_DATATYPE_ROTATE_Y				(2)				// ‰ñ“]‚x
#define MV1_ANIMKEY_DATATYPE_ROTATE_Z				(3)				// ‰ñ“]‚y
#define MV1_ANIMKEY_DATATYPE_SCALE					(5)				// Šg‘å
#define MV1_ANIMKEY_DATATYPE_SCALE_X				(6)				// ƒXƒP[ƒ‹‚w
#define MV1_ANIMKEY_DATATYPE_SCALE_Y				(7)				// ƒXƒP[ƒ‹‚x
#define MV1_ANIMKEY_DATATYPE_SCALE_Z				(8)				// ƒXƒP[ƒ‹‚y
#define MV1_ANIMKEY_DATATYPE_TRANSLATE				(10)			// •½sˆÚ“®
#define MV1_ANIMKEY_DATATYPE_TRANSLATE_X			(11)			// •½sˆÚ“®‚w
#define MV1_ANIMKEY_DATATYPE_TRANSLATE_Y			(12)			// •½sˆÚ“®‚x
#define MV1_ANIMKEY_DATATYPE_TRANSLATE_Z			(13)			// •½sˆÚ“®‚y
#define MV1_ANIMKEY_DATATYPE_MATRIX4X4C				(15)			// ‚S~‚Ss—ñ‚Ì‚S—ñ–Ú( 0,0,0,1 )ŒÅ’è”Å
#define MV1_ANIMKEY_DATATYPE_MATRIX3X3				(17)			// ‚R~‚Rs—ñ
#define MV1_ANIMKEY_DATATYPE_SHAPE					(18)			// ƒVƒFƒCƒv
#define MV1_ANIMKEY_DATATYPE_OTHRE					(20)			// ‚»‚Ì‘¼

// ƒ^ƒCƒ€ƒ^ƒCƒv
#define MV1_ANIMKEY_TIME_TYPE_ONE					(0)				// ŠÔî•ñ‚Í‘S‘Ì‚Åˆê‚Â
#define MV1_ANIMKEY_TIME_TYPE_KEY					(1)				// ŠÔî•ñ‚ÍŠeƒL[‚Éˆê‚Â

// ƒAƒjƒ[ƒVƒ‡ƒ“ƒL[ƒ^ƒCƒv
#define MV1_ANIMKEY_TYPE_QUATERNION_X				(0)				// ƒNƒH[ƒ^ƒjƒIƒ“( Xƒtƒ@ƒCƒ‹ƒ^ƒCƒv )
#define MV1_ANIMKEY_TYPE_VECTOR						(1)				// ƒxƒNƒ^[
#define MV1_ANIMKEY_TYPE_MATRIX4X4C					(2)				// ‚S~‚Ss—ñ‚Ì‚S—ñ–Ú( 0,0,0,1 )ŒÅ’è”Å
#define MV1_ANIMKEY_TYPE_MATRIX3X3					(3)				// ‚R~‚Rs—ñ
#define MV1_ANIMKEY_TYPE_FLAT						(4)				// ƒtƒ‰ƒbƒg
#define MV1_ANIMKEY_TYPE_LINEAR						(5)				// üŒ`•âŠÔ
#define MV1_ANIMKEY_TYPE_BLEND						(6)				// ¬‡
#define MV1_ANIMKEY_TYPE_QUATERNION_VMD				(7)				// ƒNƒH[ƒ^ƒjƒIƒ“( VMDƒ^ƒCƒv )

// •`‰ææ‰æ–Êw’è—p’è‹`
#define DX_SCREEN_FRONT								(0xfffffffc)
#define DX_SCREEN_BACK								(0xfffffffe) 
#define DX_SCREEN_WORK 								(0xfffffffd)
#define DX_SCREEN_TEMPFRONT							(0xfffffff0)
#define DX_SCREEN_OTHER								(0xfffffffa)

#define DX_NONE_GRAPH								(0xfffffffb)	// ƒOƒ‰ƒtƒBƒbƒN‚È‚µƒnƒ“ƒhƒ‹

// ƒOƒ‰ƒtƒBƒbƒNŒ¸F‚Ì‰æ‘œ—ò‰»ŠÉ˜aˆ—ƒ‚[ƒh
#define DX_SHAVEDMODE_NONE							(0)				// ‰æ‘œ—ò‰»ŠÉ˜aˆ—‚ğs‚í‚È‚¢
#define DX_SHAVEDMODE_DITHER						(1)				// ƒfƒBƒUƒŠƒ“ƒO
#define DX_SHAVEDMODE_DIFFUS						(2)				// Œë·ŠgU

// ‰æ‘œ‚Ì•Û‘¶ƒ^ƒCƒv
#define DX_IMAGESAVETYPE_BMP						(0)				// bitmap
#define DX_IMAGESAVETYPE_JPEG						(1)				// jpeg
#define DX_IMAGESAVETYPE_PNG						(2)				// Png
#define DX_IMAGESAVETYPE_DDS						(3)				// Direct Draw Surface

// ƒTƒEƒ“ƒhÄ¶Œ`‘Ôw’è—p’è‹`
#define DX_PLAYTYPE_LOOPBIT							(0x0002)		// ƒ‹[ƒvÄ¶ƒrƒbƒg
#define DX_PLAYTYPE_BACKBIT							(0x0001)		// ƒoƒbƒNƒOƒ‰ƒEƒ“ƒhÄ¶ƒrƒbƒg

#define DX_PLAYTYPE_NORMAL							(0)												// ƒm[ƒ}ƒ‹Ä¶
#define DX_PLAYTYPE_BACK				  			( DX_PLAYTYPE_BACKBIT )							// ƒoƒbƒNƒOƒ‰ƒEƒ“ƒhÄ¶
#define DX_PLAYTYPE_LOOP							( DX_PLAYTYPE_LOOPBIT | DX_PLAYTYPE_BACKBIT )	// ƒ‹[ƒvÄ¶

// “®‰æÄ¶ƒ^ƒCƒv’è‹`
#define DX_MOVIEPLAYTYPE_BCANCEL					(0)				// ƒ{ƒ^ƒ“ƒLƒƒƒ“ƒZƒ‹‚ ‚è
#define DX_MOVIEPLAYTYPE_NORMAL						(1)				// ƒ{ƒ^ƒ“ƒLƒƒƒ“ƒZƒ‹‚È‚µ

// ƒTƒEƒ“ƒh‚Ìƒ^ƒCƒv
#define DX_SOUNDTYPE_NORMAL							(0)				// ƒm[ƒ}ƒ‹ƒTƒEƒ“ƒhŒ`®
#define DX_SOUNDTYPE_STREAMSTYLE					(1)				// ƒXƒgƒŠ[ƒ€•—ƒTƒEƒ“ƒhŒ`®

// ƒTƒEƒ“ƒhƒf[ƒ^ƒ^ƒCƒv‚Ìƒ}ƒNƒ
#define DX_SOUNDDATATYPE_MEMNOPRESS					(0)				// ˆ³k‚³‚ê‚½‘Sƒf[ƒ^‚ÍÄ¶‚ªn‚Ü‚é‘O‚ÉƒTƒEƒ“ƒhƒƒ‚ƒŠ‚É‚·‚×‚Ä‰ğ“€‚³‚êAŠi”[‚³‚ê‚é
#define DX_SOUNDDATATYPE_MEMNOPRESS_PLUS			(1)				// ˆ³k‚³‚ê‚½‘Sƒf[ƒ^‚ÍƒVƒXƒeƒ€ƒƒ‚ƒŠ‚ÉŠi”[‚³‚êAÄ¶‚µ‚È‚ª‚ç’€Ÿ‰ğ“€‚³‚êAÅI“I‚É‚·‚×‚ÄƒTƒEƒ“ƒhƒƒ‚ƒŠ‚ÉŠi”[‚³‚ê‚é(‚»‚ÌŒãƒVƒXƒeƒ€ƒƒ‚ƒŠ‚É‘¶İ‚·‚éˆ³kƒf[ƒ^‚Í”jŠü‚³‚ê‚é)
#define DX_SOUNDDATATYPE_MEMPRESS					(2)				// ˆ³k‚³‚ê‚½‘Sƒf[ƒ^‚ÍƒVƒXƒeƒ€ƒƒ‚ƒŠ‚ÉŠi”[‚³‚êAÄ¶‚·‚é•”•ª‚¾‚¯’€Ÿ‰ğ“€‚µ‚È‚ª‚çƒTƒEƒ“ƒhƒƒ‚ƒŠ‚ÉŠi”[‚·‚é(–Â‚ç‚µI‚í‚é‚Æ‰ğ“€‚µ‚½ƒf[ƒ^‚Í”jŠü‚³‚ê‚é‚Ì‚Å‰½“x‚à‰ğ“€ˆ—‚ªs‚í‚ê‚é)
#define DX_SOUNDDATATYPE_FILE						(3)				// ˆ³k‚³‚ê‚½ƒf[ƒ^‚ÌÄ¶‚·‚é•”•ª‚¾‚¯ƒtƒ@ƒCƒ‹‚©‚ç’€Ÿ“Ç‚İ‚İ‰ğ“€‚³‚êAƒTƒEƒ“ƒhƒƒ‚ƒŠ‚ÉŠi”[‚³‚ê‚é(–Â‚ç‚µI‚í‚é‚Æ‰ğ“€‚µ‚½ƒf[ƒ^‚Í”jŠü‚³‚ê‚é‚Ì‚Å‰½“x‚à‰ğ“€ˆ—‚ªs‚í‚ê‚é)

// “Ç‚İ‚İˆ—‚Ìƒ^ƒCƒv
#define DX_READSOUNDFUNCTION_PCM					(1 << 0)		// PCM ‚Ì“Ç‚İ‚İˆ—
#define DX_READSOUNDFUNCTION_OGG					(1 << 1)		// Ogg Vorbis ‚Ì“Ç‚İ‚İˆ—
#define DX_READSOUNDFUNCTION_OPUS					(1 << 2)		// Opus ‚Ì“Ç‚İ‚İˆ—
#define DX_READSOUNDFUNCTION_DEFAULT_NUM			(3)				// ŠÂ‹«”ñˆË‘¶‚Ì“Ç‚İ‚İˆ—ƒ^ƒCƒv‚Ì”

// ‚R‚cƒTƒEƒ“ƒhƒŠƒo[ƒuƒGƒtƒFƒNƒg‚ÌƒvƒŠƒZƒbƒg
#define DX_REVERB_PRESET_DEFAULT					(0)				// ƒfƒtƒHƒ‹ƒg
#define DX_REVERB_PRESET_GENERIC					(1)				// ˆê”Ê“I‚È‹óŠÔ
#define DX_REVERB_PRESET_PADDEDCELL					(2)				// ¸_•aŠ³Òº(H)
#define DX_REVERB_PRESET_ROOM						(3)				// •”‰®
#define DX_REVERB_PRESET_BATHROOM					(4)				// ƒoƒXƒ‹[ƒ€
#define DX_REVERB_PRESET_LIVINGROOM					(5)				// ƒŠƒrƒ“ƒOƒ‹[ƒ€
#define DX_REVERB_PRESET_STONEROOM					(6)				// Î‚Ì•”‰®
#define DX_REVERB_PRESET_AUDITORIUM					(7)				// u“°
#define DX_REVERB_PRESET_CONCERTHALL				(8)				// ƒRƒ“ƒT[ƒgƒz[ƒ‹
#define DX_REVERB_PRESET_CAVE						(9)				// “´ŒŠ
#define DX_REVERB_PRESET_ARENA						(10)			// •‘‘ä
#define DX_REVERB_PRESET_HANGAR						(11)			// Ši”[ŒÉ
#define DX_REVERB_PRESET_CARPETEDHALLWAY			(12)			// ƒJ[ƒyƒbƒg‚ª•~‚©‚ê‚½ŒºŠÖ
#define DX_REVERB_PRESET_HALLWAY					(13)			// ŒºŠÖ
#define DX_REVERB_PRESET_STONECORRIDOR				(14)			// Î‚Ì˜L‰º
#define DX_REVERB_PRESET_ALLEY						(15)			// — ’Ê‚è
#define DX_REVERB_PRESET_FOREST						(16)			// X
#define DX_REVERB_PRESET_CITY						(17)			// “ss
#define DX_REVERB_PRESET_MOUNTAINS					(18)			// R
#define DX_REVERB_PRESET_QUARRY						(19)			// ÌÎê
#define DX_REVERB_PRESET_PLAIN						(20)			// •½Œ´
#define DX_REVERB_PRESET_PARKINGLOT					(21)			// ’“Ôê
#define DX_REVERB_PRESET_SEWERPIPE					(22)			// ‰º…ŠÇ
#define DX_REVERB_PRESET_UNDERWATER					(23)			// …–Ê‰º
#define DX_REVERB_PRESET_SMALLROOM					(24)			// ¬•”‰®
#define DX_REVERB_PRESET_MEDIUMROOM					(25)			// ’†•”‰®
#define DX_REVERB_PRESET_LARGEROOM					(26)			// ‘å•”‰®
#define DX_REVERB_PRESET_MEDIUMHALL					(27)			// ’†ƒz[ƒ‹
#define DX_REVERB_PRESET_LARGEHALL					(28)			// ‘åƒz[ƒ‹
#define DX_REVERB_PRESET_PLATE						(29)			// ”Â

#define DX_REVERB_PRESET_NUM						(30)			// ƒvƒŠƒZƒbƒg‚Ì”

// ƒ}ƒXƒN“§‰ßFƒ‚[ƒh
#define DX_MASKTRANS_WHITE							(0)				// ƒ}ƒXƒN‰æ‘œ‚Ì”’‚¢•”•ª‚ğ“§‰ßF‚Æ‚·‚é
#define DX_MASKTRANS_BLACK							(1)				// ƒ}ƒXƒN‰æ‘œ‚Ì•‚¢•”•ª‚ğ“§‰ßF‚Æ‚·‚é
#define DX_MASKTRANS_NONE							(2) 			// “§‰ßF‚È‚µ

// ƒ}ƒXƒN‰æ‘œƒ`ƒƒƒ“ƒlƒ‹
#define DX_MASKGRAPH_CH_A							(0)				// ƒAƒ‹ƒtƒ@
#define DX_MASKGRAPH_CH_R							(1)				// Ô
#define DX_MASKGRAPH_CH_G							(2)				// —Î
#define DX_MASKGRAPH_CH_B							(3)				// Â

// ‚yƒoƒbƒtƒ@‘‚«‚İƒ‚[ƒh
#define DX_ZWRITE_MASK								(0)				// ‘‚«‚ß‚È‚¢‚æ‚¤‚Éƒ}ƒXƒN‚·‚é
#define DX_ZWRITE_CLEAR								(1)				// ‘‚«‚ß‚é‚æ‚¤‚Éƒ}ƒXƒN‚ğƒNƒŠƒA‚·‚é

// ”äŠrƒ‚[ƒh
#define DX_CMP_NEVER								(1)				// FALSE
#define DX_CMP_LESS									(2)				// Src <  Dest		DrawAlpha <  TestParam
#define DX_CMP_EQUAL								(3)				// Src == Dest		DrawAlpha == TestParam
#define DX_CMP_LESSEQUAL							(4)				// Src <= Dest		DrawAlpha <= TestParam
#define DX_CMP_GREATER								(5)				// Src >  Dest		DrawAlpha >  TestParam
#define DX_CMP_NOTEQUAL								(6)				// Src != Dest		DrawAlpha != TestParam
#define DX_CMP_GREATEREQUAL							(7)				// Src >= Dest		DrawAlpha >= TestParam
#define DX_CMP_ALWAYS								(8)				// TRUE
#define DX_ZCMP_DEFAULT								( DX_CMP_LESSEQUAL )
#define DX_ZCMP_REVERSE								( DX_CMP_GREATEREQUAL )

// ƒVƒF[ƒfƒBƒ“ƒOƒ‚[ƒh
#define DX_SHADEMODE_FLAT							(1)				// D_D3DSHADE_FLAT
#define DX_SHADEMODE_GOURAUD						(2)				// D_D3DSHADE_GOURAUD

// ƒtƒHƒOƒ‚[ƒh
#define DX_FOGMODE_NONE								(0)				// D_D3DFOG_NONE
#define DX_FOGMODE_EXP								(1)				// D_D3DFOG_EXP
#define DX_FOGMODE_EXP2								(2)				// D_D3DFOG_EXP2
#define DX_FOGMODE_LINEAR							(3)				// D_D3DFOG_LINEAR

// ƒ}ƒeƒŠƒAƒ‹ƒ^ƒCƒv
#define DX_MATERIAL_TYPE_NORMAL									(0)		// •W€ƒ}ƒeƒŠƒAƒ‹
#define DX_MATERIAL_TYPE_TOON									(1)		// ƒgƒD[ƒ“ƒŒƒ“ƒ_ƒŠƒ“ƒO—pƒ}ƒeƒŠƒAƒ‹
#define DX_MATERIAL_TYPE_TOON_2									(2)		// ƒgƒD[ƒ“ƒŒƒ“ƒ_ƒŠƒ“ƒO—pƒ}ƒeƒŠƒAƒ‹_ƒ^ƒCƒv‚Q( MMDŒİŠ· )
#define DX_MATERIAL_TYPE_MAT_SPEC_LUMINANCE_UNORM				(3)		// ƒ}ƒeƒŠƒAƒ‹‚ÌƒXƒyƒLƒ…ƒ‰F‚Ì‹P“x‚Ìw’è‚Ì”ÍˆÍ‚Ì’l‚ğ 0.0f ` 1.0f ‚Ì’l‚É³‹K‰»‚µ‚Ä‘‚«‚Şƒ}ƒeƒŠƒAƒ‹
#define DX_MATERIAL_TYPE_MAT_SPEC_LUMINANCE_CLIP_UNORM			(4)		// DX_MATERIAL_TYPE_MAT_SPEC_LUMINANCE_UNORM ‚Éww’è‚Ì’l–¢–‚Ìê‡‚Í‘‚«‚Ş’l‚ğ 0.0f ‚É‚·‚éx‚Æ‚¢‚¤ˆ—‚ğ‰Á‚¦‚½ƒ}ƒeƒŠƒAƒ‹
#define DX_MATERIAL_TYPE_MAT_SPEC_LUMINANCE_CMP_GREATEREQUAL	(5)		// ƒ}ƒeƒŠƒAƒ‹‚ÌƒXƒyƒLƒ…ƒ‰F‚Ì‹P“x‚ªw’è‚Ìè‡’lˆÈã ‚Ìê‡‚Í 1.0f ‚ğA–¢–‚Ìê‡‚Í 0.0f ‚ğ‘‚«‚Şƒ}ƒeƒŠƒAƒ‹
#define DX_MATERIAL_TYPE_MAT_SPEC_POWER_UNORM					(6)		// ƒ}ƒeƒŠƒAƒ‹‚ÌƒXƒyƒLƒ…ƒ‰ƒnƒCƒ‰ƒCƒg‚Ì‘N–¾“x‚Ìw’è‚Ì”ÍˆÍ‚Ì’l‚ğ 0.0f ` 1.0f ‚Ì’l‚É³‹K‰»‚µ‚Ä‘‚«‚Şƒ}ƒeƒŠƒAƒ‹
#define DX_MATERIAL_TYPE_MAT_SPEC_POWER_CLIP_UNORM				(7)		// DX_MATERIAL_TYPE_MAT_SPEC_POWER_UNORM ‚Éww’è‚Ì’l–¢–‚Ìê‡‚Í‘‚«‚Ş’l‚ğ 0.0f ‚É‚·‚éx‚Æ‚¢‚¤ˆ—‚ğ‰Á‚¦‚½ƒ}ƒeƒŠƒAƒ‹
#define DX_MATERIAL_TYPE_MAT_SPEC_POWER_CMP_GREATEREQUAL		(8)		// ƒ}ƒeƒŠƒAƒ‹‚ÌƒXƒyƒLƒ…ƒ‰ƒnƒCƒ‰ƒCƒg‚Ì‘N–¾“x‚ªw’è‚Ìè‡’lˆÈã ‚Ìê‡‚Í 1.0f ‚ğA–¢–‚Ìê‡‚Í 0.0f ‚ğ‘‚«‚Şƒ}ƒeƒŠƒAƒ‹
#define DX_MATERIAL_TYPE_NUM									(9)

// ƒ}ƒeƒŠƒAƒ‹ƒuƒŒƒ“ƒhƒ^ƒCƒv
#define DX_MATERIAL_BLENDTYPE_TRANSLUCENT			(0)				// ƒAƒ‹ƒtƒ@‡¬
#define DX_MATERIAL_BLENDTYPE_ADDITIVE				(1)				// ‰ÁZ
#define DX_MATERIAL_BLENDTYPE_MODULATE				(2)				// æZ
#define DX_MATERIAL_BLENDTYPE_NONE					(3)				// –³Œø

// ƒeƒNƒXƒ`ƒƒƒAƒhƒŒƒXƒ^ƒCƒv
#define DX_TEXADDRESS_WRAP							(1)				// D_D3DTADDRESS_WRAP
#define DX_TEXADDRESS_MIRROR						(2)				// D_D3DTADDRESS_MIRROR
#define DX_TEXADDRESS_CLAMP							(3)				// D_D3DTADDRESS_CLAMP
#define DX_TEXADDRESS_BORDER						(4)				// D_D3DTADDRESS_BORDER
#define DX_TEXADDRESS_NUM							(5)				// ƒeƒNƒXƒ`ƒƒƒAƒhƒŒƒXƒ^ƒCƒv‚Ì”

// ƒVƒF[ƒ_[ƒ^ƒCƒv
#define DX_SHADERTYPE_VERTEX						(0)				// ’¸“_ƒVƒF[ƒ_[
#define DX_SHADERTYPE_PIXEL							(1)				// ƒsƒNƒZƒ‹ƒVƒF[ƒ_[
#define DX_SHADERTYPE_GEOMETRY						(2)				// ƒWƒIƒƒgƒŠƒVƒF[ƒ_[
#define DX_SHADERTYPE_COMPUTE						(3)				// ƒRƒ“ƒsƒ…[ƒgƒVƒF[ƒ_[
#define DX_SHADERTYPE_DOMAIN						(4)				// ƒhƒƒCƒ“ƒVƒF[ƒ_[
#define DX_SHADERTYPE_HULL							(5)				// ƒnƒ‹ƒVƒF[ƒ_[

// ’¸“_ƒf[ƒ^ƒ^ƒCƒv
#define DX_VERTEX_TYPE_NORMAL_3D					(0)				// VERTEX3D\‘¢‘ÌŒ`®
#define DX_VERTEX_TYPE_SHADER_3D					(1)				// VERTEX3DSHADER\‘¢‘ÌŒ`®
#define DX_VERTEX_TYPE_NUM							(2)

// ƒCƒ“ƒfƒbƒNƒXƒf[ƒ^ƒ^ƒCƒv
#define DX_INDEX_TYPE_16BIT							(0)				// 16bitƒCƒ“ƒfƒbƒNƒX
#define DX_INDEX_TYPE_32BIT							(1)				// 32bitƒCƒ“ƒfƒbƒNƒX

// ƒ‚ƒfƒ‹ƒtƒ@ƒCƒ‹“Ç‚İ‚İ‚Ì•¨—‰‰Zƒ‚[ƒh
#define DX_LOADMODEL_PHYSICS_DISABLE				(1)				// •¨—‰‰Z‚ğg—p‚µ‚È‚¢
#define DX_LOADMODEL_PHYSICS_LOADCALC				(0)				// “Ç‚İ‚İ‚ÉŒvZ
#define DX_LOADMODEL_PHYSICS_REALTIME				(2)				// ÀsŒvZ

// ƒ‚ƒfƒ‹ƒtƒ@ƒCƒ‹“Ç‚İ‚İ‚Ì•¨—‰‰Z–³Œø–¼‘Oƒ[ƒh‚Ìƒ‚[ƒh
#define DX_LOADMODEL_PHYSICS_DISABLENAMEWORD_ALWAYS	(0)						// ‘S‚Ä‚Ìƒtƒ@ƒCƒ‹‚É‘Î‚µ‚Ä–³Œø–¼ƒ[ƒh‚ğ“K—p‚·‚é
#define DX_LOADMODEL_PHYSICS_DISABLENAMEWORD_DISABLEPHYSICSFILEONLY	(1)		// vmdƒtƒ@ƒCƒ‹–¼‚É NP ‚ğŠÜ‚ß‚½u•¨—‰‰Z–³Œøv‚Ìƒtƒ@ƒCƒ‹‚É‘Î‚µ‚Ä‚Ì‚İ–³Œø–¼ƒ[ƒh‚ğ“K—p‚·‚é( ‚±‚Ìê‡A–³Œø–¼ƒ[ƒh‚ª“K—p‚³‚ê‚È‚¢„‘Ì‚É‚Â‚¢‚Ä‚Í•¨—‰‰Z‚ªs‚í‚ê‚é )
#define DX_LOADMODEL_PHYSICS_DISABLENAMEWORD_NUM	(2)

// PMD, PMX ƒtƒ@ƒCƒ‹“Ç‚İ‚İ‚ÌƒAƒjƒ[ƒVƒ‡ƒ“‚Ì FPS ƒ‚[ƒh( å‚É IK •”•ª‚Ì¸“x‚É‰e‹¿‚µ‚Ü‚· )
#define DX_LOADMODEL_PMD_PMX_ANIMATION_FPSMODE_30	(0)				// ƒAƒjƒ[ƒVƒ‡ƒ“‚ğ 30FPS ‚Å“Ç‚İ‚Ş( IK•”•ª‚Ì¸“x:’á  ƒf[ƒ^ƒTƒCƒY:¬ )( ƒfƒtƒHƒ‹ƒg )
#define DX_LOADMODEL_PMD_PMX_ANIMATION_FPSMODE_60	(1)				// ƒAƒjƒ[ƒVƒ‡ƒ“‚ğ 60FPS ‚Å“Ç‚İ‚Ş( IK•”•ª‚Ì¸“x:‚  ƒf[ƒ^ƒTƒCƒY:‘å )

// ƒ‚ƒfƒ‹‚Ì”¼“§–¾—v‘f‚ª‚ ‚é‰ÓŠ‚ÉŠÖ‚·‚é•`‰æƒ‚[ƒh
#define DX_SEMITRANSDRAWMODE_ALWAYS					(0)				// ”¼“§–¾‚©‚Ç‚¤‚©ŠÖŒW‚È‚­•`‰æ‚·‚é
#define DX_SEMITRANSDRAWMODE_SEMITRANS_ONLY			(1)				// ”¼“§–¾‚Ì‚à‚Ì‚Ì‚İ•`‰æ‚·‚é
#define DX_SEMITRANSDRAWMODE_NOT_SEMITRANS_ONLY		(2)				// ”¼“§–¾‚Å‚Í‚È‚¢‚à‚Ì‚Ì‚İ•`‰æ‚·‚é

// ƒLƒ…[ƒuƒ}ƒbƒv‚Ì–Ê”Ô†
#define DX_CUBEMAP_FACE_POSITIVE_X					(0)
#define DX_CUBEMAP_FACE_NEGATIVE_X					(1)
#define DX_CUBEMAP_FACE_POSITIVE_Y					(2)
#define DX_CUBEMAP_FACE_NEGATIVE_Y					(3)
#define DX_CUBEMAP_FACE_POSITIVE_Z					(4)
#define DX_CUBEMAP_FACE_NEGATIVE_Z					(5)

// ƒ|ƒŠƒSƒ“•`‰æƒ^ƒCƒv
#define DX_PRIMTYPE_POINTLIST						(1)				// D_D3DPT_POINTLIST
#define DX_PRIMTYPE_LINELIST						(2)				// D_D3DPT_LINELIST
#define DX_PRIMTYPE_LINESTRIP						(3)				// D_D3DPT_LINESTRIP
#define DX_PRIMTYPE_TRIANGLELIST					(4)				// D_D3DPT_TRIANGLELIST
#define DX_PRIMTYPE_TRIANGLESTRIP					(5)				// D_D3DPT_TRIANGLESTRIP
#define DX_PRIMTYPE_TRIANGLEFAN						(6)				// D_D3DPT_TRIANGLEFAN
#define DX_PRIMTYPE_MIN								(1)
#define DX_PRIMTYPE_MAX								(6)

// ƒ‰ƒCƒgƒ^ƒCƒv
#define DX_LIGHTTYPE_D3DLIGHT_POINT					(1)				// D_D3DLIGHT_POINT
#define DX_LIGHTTYPE_D3DLIGHT_SPOT					(2)				// D_D3DLIGHT_SPOT
#define DX_LIGHTTYPE_D3DLIGHT_DIRECTIONAL			(3)				// D_D3DLIGHT_DIRECTIONAL
#define DX_LIGHTTYPE_POINT							(1)				// D_D3DLIGHT_POINT
#define DX_LIGHTTYPE_SPOT							(2)				// D_D3DLIGHT_SPOT
#define DX_LIGHTTYPE_DIRECTIONAL					(3)				// D_D3DLIGHT_DIRECTIONAL

// ƒOƒ‰ƒtƒBƒbƒNƒCƒ[ƒWƒtƒH[ƒ}ƒbƒg‚Ì’è‹`
#define DX_GRAPHICSIMAGE_FORMAT_3D_PAL4						(0)		// ‚P‚UFƒpƒŒƒbƒgƒJƒ‰[•W€
#define DX_GRAPHICSIMAGE_FORMAT_3D_PAL8						(1)		// ‚Q‚T‚UFƒpƒŒƒbƒgƒJƒ‰[•W€
#define DX_GRAPHICSIMAGE_FORMAT_3D_ALPHA_PAL4				(2)		// ƒ¿ƒ`ƒƒƒ“ƒlƒ‹‚Â‚«‚P‚UFƒpƒŒƒbƒgƒJƒ‰[•W€
#define DX_GRAPHICSIMAGE_FORMAT_3D_ALPHA_PAL8				(3)		// ƒ¿ƒ`ƒƒƒ“ƒlƒ‹‚Â‚«‚Q‚T‚UFƒpƒŒƒbƒgƒJƒ‰[•W€
#define DX_GRAPHICSIMAGE_FORMAT_3D_ALPHATEST_PAL4			(4)		// ƒ¿ƒeƒXƒg‚Â‚«‚P‚UFƒpƒŒƒbƒgƒJƒ‰[•W€
#define DX_GRAPHICSIMAGE_FORMAT_3D_ALPHATEST_PAL8			(5)		// ƒ¿ƒeƒXƒg‚Â‚«‚Q‚T‚UFƒpƒŒƒbƒgƒJƒ‰[•W€
#define DX_GRAPHICSIMAGE_FORMAT_3D_RGB16					(6)		// ‚P‚UƒrƒbƒgƒJƒ‰[•W€
#define DX_GRAPHICSIMAGE_FORMAT_3D_RGB32					(7)		// ‚R‚QƒrƒbƒgƒJƒ‰[•W€
#define DX_GRAPHICSIMAGE_FORMAT_3D_ALPHA_RGB16				(8)		// ƒ¿ƒ`ƒƒƒ“ƒlƒ‹•t‚«‚P‚UƒrƒbƒgƒJƒ‰[
#define DX_GRAPHICSIMAGE_FORMAT_3D_ALPHA_RGB32				(9)		// ƒ¿ƒ`ƒƒƒ“ƒlƒ‹•t‚«‚R‚QƒrƒbƒgƒJƒ‰[
#define DX_GRAPHICSIMAGE_FORMAT_3D_ALPHATEST_RGB16			(10)	// ƒ¿ƒeƒXƒg•t‚«‚P‚UƒrƒbƒgƒJƒ‰[
#define DX_GRAPHICSIMAGE_FORMAT_3D_ALPHATEST_RGB32			(11)	// ƒ¿ƒeƒXƒg•t‚«‚R‚QƒrƒbƒgƒJƒ‰[
#define DX_GRAPHICSIMAGE_FORMAT_3D_DXT1						(12)	// ‚c‚w‚s‚P
#define DX_GRAPHICSIMAGE_FORMAT_3D_DXT2						(13)	// ‚c‚w‚s‚Q
#define DX_GRAPHICSIMAGE_FORMAT_3D_DXT3						(14)	// ‚c‚w‚s‚R
#define DX_GRAPHICSIMAGE_FORMAT_3D_DXT4						(15)	// ‚c‚w‚s‚S
#define DX_GRAPHICSIMAGE_FORMAT_3D_DXT5 					(16)	// ‚c‚w‚s‚T
#define DX_GRAPHICSIMAGE_FORMAT_3D_PLATFORM0				(17)	// ƒvƒ‰ƒbƒgƒtƒH[ƒ€ˆË‘¶ƒtƒH[ƒ}ƒbƒg‚O
#define DX_GRAPHICSIMAGE_FORMAT_3D_PLATFORM1				(18)	// ƒvƒ‰ƒbƒgƒtƒH[ƒ€ˆË‘¶ƒtƒH[ƒ}ƒbƒg‚P
#define DX_GRAPHICSIMAGE_FORMAT_3D_PLATFORM2				(19)	// ƒvƒ‰ƒbƒgƒtƒH[ƒ€ˆË‘¶ƒtƒH[ƒ}ƒbƒg‚Q
#define DX_GRAPHICSIMAGE_FORMAT_3D_PLATFORM3				(20)	// ƒvƒ‰ƒbƒgƒtƒH[ƒ€ˆË‘¶ƒtƒH[ƒ}ƒbƒg‚R
#define DX_GRAPHICSIMAGE_FORMAT_3D_YUV	 					(21)	// ‚x‚t‚uƒtƒH[ƒ}ƒbƒg
#define DX_GRAPHICSIMAGE_FORMAT_3D_ABGR_I16					(22)	// ARGB®”16ƒrƒbƒgŒ^ƒJƒ‰[
#define DX_GRAPHICSIMAGE_FORMAT_3D_ABGR_F16					(23)	// ARGB•‚“®¬”“_16ƒrƒbƒgŒ^ƒJƒ‰[
#define DX_GRAPHICSIMAGE_FORMAT_3D_ABGR_F32					(24)	// ARGB•‚“®¬”“_32ƒrƒbƒgŒ^ƒJƒ‰[
#define DX_GRAPHICSIMAGE_FORMAT_3D_ONE_I8					(25)	// ‚Pƒ`ƒƒƒ“ƒlƒ‹®”8ƒrƒbƒgŒ^ƒJƒ‰[
#define DX_GRAPHICSIMAGE_FORMAT_3D_ONE_I16					(26)	// ‚Pƒ`ƒƒƒ“ƒlƒ‹®”16ƒrƒbƒgŒ^ƒJƒ‰[
#define DX_GRAPHICSIMAGE_FORMAT_3D_ONE_F16					(27)	// ‚Pƒ`ƒƒƒ“ƒlƒ‹•‚“®­”16ƒrƒbƒgŒ^ƒJƒ‰[
#define DX_GRAPHICSIMAGE_FORMAT_3D_ONE_F32					(28)	// ‚Pƒ`ƒƒƒ“ƒlƒ‹•‚“®­”32ƒrƒbƒgŒ^ƒJƒ‰[
#define DX_GRAPHICSIMAGE_FORMAT_3D_TWO_I8					(29)	// ‚Qƒ`ƒƒƒ“ƒlƒ‹®”8ƒrƒbƒgŒ^ƒJƒ‰[
#define DX_GRAPHICSIMAGE_FORMAT_3D_TWO_I16					(30)	// ‚Qƒ`ƒƒƒ“ƒlƒ‹®”16ƒrƒbƒgŒ^ƒJƒ‰[
#define DX_GRAPHICSIMAGE_FORMAT_3D_TWO_F16					(31)	// ‚Qƒ`ƒƒƒ“ƒlƒ‹•‚“®­”16ƒrƒbƒgŒ^ƒJƒ‰[
#define DX_GRAPHICSIMAGE_FORMAT_3D_TWO_F32					(32)	// ‚Qƒ`ƒƒƒ“ƒlƒ‹•‚“®­”32ƒrƒbƒgŒ^ƒJƒ‰[
#define DX_GRAPHICSIMAGE_FORMAT_3D_DRAWVALID_RGB16			(33)	// •`‰æ‰Â”\‚P‚UƒrƒbƒgƒJƒ‰[
#define DX_GRAPHICSIMAGE_FORMAT_3D_DRAWVALID_RGB32			(34)	// •`‰æ‰Â”\‚R‚QƒrƒbƒgƒJƒ‰[
#define DX_GRAPHICSIMAGE_FORMAT_3D_DRAWVALID_ALPHA_RGB32	(35)	// •`‰æ‰Â”\ƒ¿•t‚«‚R‚QƒrƒbƒgƒJƒ‰[
#define DX_GRAPHICSIMAGE_FORMAT_3D_DRAWVALID_ABGR_I16		(36)	// •`‰æ‰Â”\ARGB®”16ƒrƒbƒgŒ^ƒJƒ‰[
#define DX_GRAPHICSIMAGE_FORMAT_3D_DRAWVALID_ABGR_F16		(37)	// •`‰æ‰Â”\ARGB•‚“®¬”“_16ƒrƒbƒgŒ^ƒJƒ‰[
#define DX_GRAPHICSIMAGE_FORMAT_3D_DRAWVALID_ABGR_F32		(38)	// •`‰æ‰Â”\ARGB•‚“®¬”“_32ƒrƒbƒgŒ^ƒJƒ‰[
#define DX_GRAPHICSIMAGE_FORMAT_3D_DRAWVALID_ONE_I8			(39)	// •`‰æ‰Â”\‚Pƒ`ƒƒƒ“ƒlƒ‹®”8ƒrƒbƒgŒ^ƒJƒ‰[
#define DX_GRAPHICSIMAGE_FORMAT_3D_DRAWVALID_ONE_I16		(40)	// •`‰æ‰Â”\‚Pƒ`ƒƒƒ“ƒlƒ‹®”16ƒrƒbƒgŒ^ƒJƒ‰[
#define DX_GRAPHICSIMAGE_FORMAT_3D_DRAWVALID_ONE_F16		(41)	// •`‰æ‰Â”\‚Pƒ`ƒƒƒ“ƒlƒ‹•‚“®­”16ƒrƒbƒgŒ^ƒJƒ‰[
#define DX_GRAPHICSIMAGE_FORMAT_3D_DRAWVALID_ONE_F32		(42)	// •`‰æ‰Â”\‚Pƒ`ƒƒƒ“ƒlƒ‹•‚“®­”32ƒrƒbƒgŒ^ƒJƒ‰[
#define DX_GRAPHICSIMAGE_FORMAT_3D_DRAWVALID_TWO_I8			(43)	// •`‰æ‰Â”\‚Qƒ`ƒƒƒ“ƒlƒ‹®”8ƒrƒbƒgŒ^ƒJƒ‰[
#define DX_GRAPHICSIMAGE_FORMAT_3D_DRAWVALID_TWO_I16		(44)	// •`‰æ‰Â”\‚Qƒ`ƒƒƒ“ƒlƒ‹®”16ƒrƒbƒgŒ^ƒJƒ‰[
#define DX_GRAPHICSIMAGE_FORMAT_3D_DRAWVALID_TWO_F16		(45)	// •`‰æ‰Â”\‚Qƒ`ƒƒƒ“ƒlƒ‹•‚“®­”16ƒrƒbƒgŒ^ƒJƒ‰[
#define DX_GRAPHICSIMAGE_FORMAT_3D_DRAWVALID_TWO_F32		(46)	// •`‰æ‰Â”\‚Qƒ`ƒƒƒ“ƒlƒ‹•‚“®­”32ƒrƒbƒgŒ^ƒJƒ‰[
#define DX_GRAPHICSIMAGE_FORMAT_3D_NUM						(47)
#define DX_GRAPHICSIMAGE_FORMAT_2D							(48)	// •W€( DirectDrawSurface ‚Ìê‡‚Í‚±‚ê‚Ì‚İ )
#define DX_GRAPHICSIMAGE_FORMAT_R5G6B5						(49)	// R5G6B5( MEMIMG —p )
#define DX_GRAPHICSIMAGE_FORMAT_X8A8R5G6B5					(50)	// X8A8R5G6B5( MEMIMG —p )
#define DX_GRAPHICSIMAGE_FORMAT_X8R8G8B8					(51)	// X8R8G8B8( MEMIMG —p )
#define DX_GRAPHICSIMAGE_FORMAT_A8R8G8B8					(52)	// A8R8G8B8( MEMIMG —p )

#define DX_GRAPHICSIMAGE_FORMAT_NUM							(53)	// ƒOƒ‰ƒtƒBƒbƒNƒtƒH[ƒ}ƒbƒg‚Ìí—Ş‚Ì”

// Šî–{ƒCƒ[ƒW‚ÌƒsƒNƒZƒ‹ƒtƒH[ƒ}ƒbƒg
#define DX_BASEIMAGE_FORMAT_NORMAL					(0)			// •’Ê‚Ì‰æ‘œ
#define DX_BASEIMAGE_FORMAT_DXT1					(1)			// ‚c‚w‚s‚P
#define DX_BASEIMAGE_FORMAT_DXT2					(2)			// ‚c‚w‚s‚Q
#define DX_BASEIMAGE_FORMAT_DXT3					(3)			// ‚c‚w‚s‚R
#define DX_BASEIMAGE_FORMAT_DXT4					(4)			// ‚c‚w‚s‚S
#define DX_BASEIMAGE_FORMAT_DXT5					(5)			// ‚c‚w‚s‚T
#define DX_BASEIMAGE_FORMAT_PLATFORM0				(6)			// ƒvƒ‰ƒbƒgƒtƒH[ƒ€ˆË‘¶ƒtƒH[ƒ}ƒbƒg‚O
#define DX_BASEIMAGE_FORMAT_PLATFORM1				(7)			// ƒvƒ‰ƒbƒgƒtƒH[ƒ€ˆË‘¶ƒtƒH[ƒ}ƒbƒg‚P
#define DX_BASEIMAGE_FORMAT_PLATFORM2				(8)			// ƒvƒ‰ƒbƒgƒtƒH[ƒ€ˆË‘¶ƒtƒH[ƒ}ƒbƒg‚Q
#define DX_BASEIMAGE_FORMAT_PLATFORM3				(9)			// ƒvƒ‰ƒbƒgƒtƒH[ƒ€ˆË‘¶ƒtƒH[ƒ}ƒbƒg‚R
#define DX_BASEIMAGE_FORMAT_YUV						(10)		// ‚x‚t‚u

// ƒ€[ƒr[‚ÌƒT[ƒtƒFƒXƒ‚[ƒh
#define DX_MOVIESURFACE_NORMAL						(0)
#define DX_MOVIESURFACE_OVERLAY						(1)
#define DX_MOVIESURFACE_FULLCOLOR					(2)

// ƒEƒCƒ“ƒhƒE‚Ì‰œs‚«ˆÊ’uİ’èƒ^ƒCƒv
#define DX_WIN_ZTYPE_NORMAL							(0)			// ’Êíİ’è
#define DX_WIN_ZTYPE_BOTTOM							(1)			// ‘S‚Ä‚ÌƒEƒCƒ“ƒhƒE‚Ìˆê”Ô‰œ‚É”z’u‚·‚é
#define DX_WIN_ZTYPE_TOP							(2)			// ‘S‚Ä‚ÌƒEƒCƒ“ƒhƒE‚Ìˆê”Ôè‘O‚É”z’u‚·‚é
#define DX_WIN_ZTYPE_TOPMOST						(3)			// ‘S‚Ä‚ÌƒEƒCƒ“ƒhƒE‚Ìˆê”Ôè‘O‚É”z’u‚·‚é( ƒEƒCƒ“ƒhƒE‚ªƒAƒNƒeƒBƒu‚Å‚Í‚È‚¢‚Æ‚«‚àÅ‘O–Ê‚É•\¦‚³‚ê‚é )

// ƒc[ƒ‹ƒo[‚Ìƒ{ƒ^ƒ“‚Ìó‘Ô
#define TOOLBUTTON_STATE_ENABLE						(0)			// “ü—Í‰Â”\‚Èó‘Ô
#define TOOLBUTTON_STATE_PRESSED					(1)			// ‰Ÿ‚³‚ê‚Ä‚¢‚éó‘Ô
#define TOOLBUTTON_STATE_DISABLE					(2)			// “ü—Í•s‰Â”\‚Èó‘Ô
#define TOOLBUTTON_STATE_PRESSED_DISABLE			(3)			// ‰Ÿ‚³‚ê‚Ä‚¢‚éó‘Ô‚ÅA“ü—Í•s‰Â”\‚Èó‘Ô
#define TOOLBUTTON_STATE_NUM						(4)			// ƒc[ƒ‹ƒo[‚Ìƒ{ƒ^ƒ“‚Ìó‘Ô‚Ì”

// ƒc[ƒ‹ƒo[‚Ìƒ{ƒ^ƒ“‚Ìƒ^ƒCƒv
#define TOOLBUTTON_TYPE_NORMAL						(0)			// •’Ê‚Ìƒ{ƒ^ƒ“
#define TOOLBUTTON_TYPE_CHECK						(1)			// ‰Ÿ‚·‚²‚Æ‚É‚n‚m^‚n‚e‚e‚ªØ‚è‘Ö‚í‚éƒ{ƒ^ƒ“
#define TOOLBUTTON_TYPE_GROUP						(2)			// •Ê‚Ì TOOLBUTTON_TYPE_GROUP ƒ^ƒCƒv‚Ìƒ{ƒ^ƒ“‚ª‰Ÿ‚³‚ê‚é‚Æ‚n‚e‚e‚É‚È‚éƒ^ƒCƒv‚Ìƒ{ƒ^ƒ“(ƒOƒ‹[ƒv‚Ì‹æØ‚è‚ÍŒ„ŠÔ‚Å)
#define TOOLBUTTON_TYPE_SEP							(3)			// Œ„ŠÔ(ƒ{ƒ^ƒ“‚Å‚Í‚ ‚è‚Ü‚¹‚ñ)
#define TOOLBUTTON_TYPE_NUM							(4)			// ƒc[ƒ‹ƒo[‚Ìƒ{ƒ^ƒ“‚Ìƒ^ƒCƒv‚Ì”

// eƒƒjƒ…[‚Ì‚h‚c
#define MENUITEM_IDTOP								(0xabababab)

// ƒƒjƒ…[‚É’Ç‰Á‚·‚éÛ‚Ìƒ^ƒCƒv
#define MENUITEM_ADD_CHILD							(0)				// w’è‚Ì€–Ú‚Ìq‚Æ‚µ‚Ä’Ç‰Á‚·‚é
#define MENUITEM_ADD_INSERT							(1)				// w’è‚Ì€–Ú‚Æw’è‚Ì€–Ú‚æ‚èˆê‚Âã‚Ì€–Ú‚ÌŠÔ‚É’Ç‰Á‚·‚é

// ƒƒjƒ…[‚Ì‰¡‚É•t‚­ƒ}[ƒNƒ^ƒCƒv
#define MENUITEM_MARK_NONE							(0)				// ‰½‚à•t‚¯–³‚¢
#define MENUITEM_MARK_CHECK							(1)				// ƒ`ƒFƒbƒNƒ}[ƒN
#define MENUITEM_MARK_RADIO							(2)				// ƒ‰ƒWƒIƒ{ƒ^ƒ“

// •¶š•ÏŠ·ƒ^ƒCƒv’è‹`
#define DX_NUMMODE_10								(0)				// ‚P‚Oi”
#define DX_NUMMODE_16								(1)				// ‚P‚Ui”
#define DX_STRMODE_NOT0								(2)				// ‹ó‚«‚ğ‚O‚Å–„‚ß‚È‚¢
#define DX_STRMODE_USE0								(3)				// ‹ó‚«‚ğ‚O‚Å–„‚ß‚é

// CheckHitKeyAll ‚Å’²‚×‚é“ü—Íƒ^ƒCƒv
#define DX_CHECKINPUT_KEY							(0x0001)		// ƒL[“ü—Í‚ğ’²‚×‚é
#define DX_CHECKINPUT_PAD							(0x0002)		// ƒpƒbƒh“ü—Í‚ğ’²‚×‚é
#define DX_CHECKINPUT_MOUSE							(0x0004)		// ƒ}ƒEƒXƒ{ƒ^ƒ““ü—Í‚ğ’²‚×‚é
#define DX_CHECKINPUT_ALL							(DX_CHECKINPUT_KEY | DX_CHECKINPUT_PAD | DX_CHECKINPUT_MOUSE)	// ‚·‚×‚Ä‚Ì“ü—Í‚ğ’²‚×‚é

// ƒpƒbƒh“ü—Íæ“¾ƒpƒ‰ƒ[ƒ^
#define DX_INPUT_KEY_PAD1							(0x1001)		// ƒL[“ü—Í‚Æƒpƒbƒh‚P“ü—Í
#define DX_INPUT_PAD1								(0x0001)		// ƒpƒbƒh‚P“ü—Í
#define DX_INPUT_PAD2								(0x0002)		// ƒpƒbƒh‚Q“ü—Í
#define DX_INPUT_PAD3								(0x0003)		// ƒpƒbƒh‚R“ü—Í
#define DX_INPUT_PAD4								(0x0004)		// ƒpƒbƒh‚S“ü—Í
#define DX_INPUT_PAD5								(0x0005)		// ƒpƒbƒh‚T“ü—Í
#define DX_INPUT_PAD6								(0x0006)		// ƒpƒbƒh‚U“ü—Í
#define DX_INPUT_PAD7								(0x0007)		// ƒpƒbƒh‚V“ü—Í
#define DX_INPUT_PAD8								(0x0008)		// ƒpƒbƒh‚W“ü—Í
#define DX_INPUT_PAD9								(0x0009)		// ƒpƒbƒh‚X“ü—Í
#define DX_INPUT_PAD10								(0x000a)		// ƒpƒbƒh‚P‚O“ü—Í
#define DX_INPUT_PAD11								(0x000b)		// ƒpƒbƒh‚P‚P“ü—Í
#define DX_INPUT_PAD12								(0x000c)		// ƒpƒbƒh‚P‚Q“ü—Í
#define DX_INPUT_PAD13								(0x000d)		// ƒpƒbƒh‚P‚R“ü—Í
#define DX_INPUT_PAD14								(0x000e)		// ƒpƒbƒh‚P‚S“ü—Í
#define DX_INPUT_PAD15								(0x000f)		// ƒpƒbƒh‚P‚T“ü—Í
#define DX_INPUT_PAD16								(0x0010)		// ƒpƒbƒh‚P‚U“ü—Í
#define DX_INPUT_KEY								(0x1000)		// ƒL[“ü—Í

// ƒ^ƒbƒ`‚Ì“¯ÚGŒŸo‘Î‰Å‘å”
#define TOUCHINPUTPOINT_MAX							(16)

// ƒpƒbƒh“ü—Í’è‹`
#define PAD_INPUT_DOWN								(0x00000001)	// «ƒ`ƒFƒbƒNƒ}ƒXƒN
#define PAD_INPUT_LEFT								(0x00000002)	// ©ƒ`ƒFƒbƒNƒ}ƒXƒN
#define PAD_INPUT_RIGHT								(0x00000004)	// ¨ƒ`ƒFƒbƒNƒ}ƒXƒN
#define PAD_INPUT_UP								(0x00000008)	// ªƒ`ƒFƒbƒNƒ}ƒXƒN
#define PAD_INPUT_A									(0x00000010)	// ‚`ƒ{ƒ^ƒ“ƒ`ƒFƒbƒNƒ}ƒXƒN
#define PAD_INPUT_B									(0x00000020)	// ‚aƒ{ƒ^ƒ“ƒ`ƒFƒbƒNƒ}ƒXƒN
#define PAD_INPUT_C									(0x00000040)	// ‚bƒ{ƒ^ƒ“ƒ`ƒFƒbƒNƒ}ƒXƒN
#define PAD_INPUT_X									(0x00000080)	// ‚wƒ{ƒ^ƒ“ƒ`ƒFƒbƒNƒ}ƒXƒN
#define PAD_INPUT_Y									(0x00000100)	// ‚xƒ{ƒ^ƒ“ƒ`ƒFƒbƒNƒ}ƒXƒN
#define PAD_INPUT_Z									(0x00000200)	// ‚yƒ{ƒ^ƒ“ƒ`ƒFƒbƒNƒ}ƒXƒN
#define PAD_INPUT_L									(0x00000400)	// ‚kƒ{ƒ^ƒ“ƒ`ƒFƒbƒNƒ}ƒXƒN
#define PAD_INPUT_R									(0x00000800)	// ‚qƒ{ƒ^ƒ“ƒ`ƒFƒbƒNƒ}ƒXƒN
#define PAD_INPUT_START								(0x00001000)	// ‚r‚s‚`‚q‚sƒ{ƒ^ƒ“ƒ`ƒFƒbƒNƒ}ƒXƒN
#define PAD_INPUT_M									(0x00002000)	// ‚lƒ{ƒ^ƒ“ƒ`ƒFƒbƒNƒ}ƒXƒN
#define PAD_INPUT_D									(0x00004000)
#define PAD_INPUT_F									(0x00008000)
#define PAD_INPUT_G									(0x00010000)
#define PAD_INPUT_H									(0x00020000)
#define PAD_INPUT_I									(0x00040000)
#define PAD_INPUT_J									(0x00080000)
#define PAD_INPUT_K									(0x00100000)
#define PAD_INPUT_LL								(0x00200000)
#define PAD_INPUT_N									(0x00400000)
#define PAD_INPUT_O									(0x00800000)
#define PAD_INPUT_P									(0x01000000)
#define PAD_INPUT_RR								(0x02000000)
#define PAD_INPUT_S									(0x04000000)
#define PAD_INPUT_T									(0x08000000)
#define PAD_INPUT_U									(0x10000000)
#define PAD_INPUT_V									(0x20000000)
#define PAD_INPUT_W									(0x40000000)
#define PAD_INPUT_XX								(0x80000000)

#define PAD_INPUT_1									(0x00000010)
#define PAD_INPUT_2									(0x00000020)
#define PAD_INPUT_3									(0x00000040)
#define PAD_INPUT_4									(0x00000080)
#define PAD_INPUT_5									(0x00000100)
#define PAD_INPUT_6									(0x00000200)
#define PAD_INPUT_7									(0x00000400)
#define PAD_INPUT_8									(0x00000800)
#define PAD_INPUT_9									(0x00001000)
#define PAD_INPUT_10								(0x00002000)
#define PAD_INPUT_11								(0x00004000)
#define PAD_INPUT_12								(0x00008000)
#define PAD_INPUT_13								(0x00010000)
#define PAD_INPUT_14								(0x00020000)
#define PAD_INPUT_15								(0x00040000)
#define PAD_INPUT_16								(0x00080000)
#define PAD_INPUT_17								(0x00100000)
#define PAD_INPUT_18								(0x00200000)
#define PAD_INPUT_19								(0x00400000)
#define PAD_INPUT_20								(0x00800000)
#define PAD_INPUT_21								(0x01000000)
#define PAD_INPUT_22								(0x02000000)
#define PAD_INPUT_23								(0x04000000)
#define PAD_INPUT_24								(0x08000000)
#define PAD_INPUT_25								(0x10000000)
#define PAD_INPUT_26								(0x20000000)
#define PAD_INPUT_27								(0x40000000)
#define PAD_INPUT_28								(0x80000000)

// XInputƒ{ƒ^ƒ““ü—Í’è‹`
#define XINPUT_BUTTON_DPAD_UP						(0)					// ƒfƒWƒ^ƒ‹•ûŒüƒ{ƒ^ƒ“ã
#define XINPUT_BUTTON_DPAD_DOWN						(1)					// ƒfƒWƒ^ƒ‹•ûŒüƒ{ƒ^ƒ“‰º
#define XINPUT_BUTTON_DPAD_LEFT						(2)					// ƒfƒWƒ^ƒ‹•ûŒüƒ{ƒ^ƒ“¶
#define XINPUT_BUTTON_DPAD_RIGHT					(3)					// ƒfƒWƒ^ƒ‹•ûŒüƒ{ƒ^ƒ“‰E
#define XINPUT_BUTTON_START							(4)					// STARTƒ{ƒ^ƒ“
#define XINPUT_BUTTON_BACK							(5)					// BACKƒ{ƒ^ƒ“
#define XINPUT_BUTTON_LEFT_THUMB					(6)					// ¶ƒXƒeƒBƒbƒN‰Ÿ‚µ‚İ
#define XINPUT_BUTTON_RIGHT_THUMB					(7)					// ‰EƒXƒeƒBƒbƒN‰Ÿ‚µ‚İ
#define XINPUT_BUTTON_LEFT_SHOULDER					(8)					// LBƒ{ƒ^ƒ“
#define XINPUT_BUTTON_RIGHT_SHOULDER				(9)					// RBƒ{ƒ^ƒ“
#define XINPUT_BUTTON_A								(12)				// Aƒ{ƒ^ƒ“
#define XINPUT_BUTTON_B								(13)				// Bƒ{ƒ^ƒ“
#define XINPUT_BUTTON_X								(14)				// Xƒ{ƒ^ƒ“
#define XINPUT_BUTTON_Y								(15)				// Yƒ{ƒ^ƒ“

// ƒ}ƒEƒX“ü—Í’è‹`
#define MOUSE_INPUT_LEFT							(0x0001)			// ƒ}ƒEƒX¶ƒ{ƒ^ƒ“
#define MOUSE_INPUT_RIGHT							(0x0002)			// ƒ}ƒEƒX‰Eƒ{ƒ^ƒ“
#define MOUSE_INPUT_MIDDLE							(0x0004)			// ƒ}ƒEƒX’†‰›ƒ{ƒ^ƒ“
#define MOUSE_INPUT_1								(0x0001)			// ƒ}ƒEƒX‚Pƒ{ƒ^ƒ“
#define MOUSE_INPUT_2								(0x0002)			// ƒ}ƒEƒX‚Qƒ{ƒ^ƒ“
#define MOUSE_INPUT_3								(0x0004)			// ƒ}ƒEƒX‚Rƒ{ƒ^ƒ“
#define MOUSE_INPUT_4								(0x0008)			// ƒ}ƒEƒX‚Sƒ{ƒ^ƒ“
#define MOUSE_INPUT_5								(0x0010)			// ƒ}ƒEƒX‚Tƒ{ƒ^ƒ“
#define MOUSE_INPUT_6								(0x0020)			// ƒ}ƒEƒX‚Uƒ{ƒ^ƒ“
#define MOUSE_INPUT_7								(0x0040)			// ƒ}ƒEƒX‚Vƒ{ƒ^ƒ“
#define MOUSE_INPUT_8								(0x0080)			// ƒ}ƒEƒX‚Wƒ{ƒ^ƒ“

// ƒ}ƒEƒX‚ÌƒƒOî•ñƒ^ƒCƒv
#define MOUSE_INPUT_LOG_DOWN						(0)					// ƒ{ƒ^ƒ“‚ğ‰Ÿ‚µ‚½
#define MOUSE_INPUT_LOG_UP							(1)					// ƒ{ƒ^ƒ“‚ğ—£‚µ‚½

// ƒL[’è‹`
#define KEY_INPUT_BACK								(0x0E)				// BackSpaceƒL[	D_DIK_BACK
#define KEY_INPUT_TAB								(0x0F)				// TabƒL[			D_DIK_TAB
#define KEY_INPUT_RETURN							(0x1C)				// EnterƒL[		D_DIK_RETURN

#define KEY_INPUT_LSHIFT							(0x2A)				// ×óShiftÃüÁî		D_DIK_LSHIFT
#define KEY_INPUT_RSHIFT							(0x36)				// ‰EShiftƒL[		D_DIK_RSHIFT
#define KEY_INPUT_LCONTROL							(0x1D)				// ¶CtrlƒL[		D_DIK_LCONTROL
#define KEY_INPUT_RCONTROL							(0x9D)				// ‰ECtrlƒL[		D_DIK_RCONTROL
#define KEY_INPUT_ESCAPE							(0x01)				// EscƒL[			D_DIK_ESCAPE
#define KEY_INPUT_SPACE								(0x39)				// ƒXƒy[ƒXƒL[		D_DIK_SPACE
#define KEY_INPUT_PGUP								(0xC9)				// PageUpƒL[		D_DIK_PGUP
#define KEY_INPUT_PGDN								(0xD1)				// PageDownƒL[		D_DIK_PGDN
#define KEY_INPUT_END								(0xCF)				// EndƒL[			D_DIK_END
#define KEY_INPUT_HOME								(0xC7)				// HomeƒL[			D_DIK_HOME
#define KEY_INPUT_LEFT								(0xCB)				// ¶ƒL[			D_DIK_LEFT
#define KEY_INPUT_UP								(0xC8)				// ãƒL[			D_DIK_UP
#define KEY_INPUT_RIGHT								(0xCD)				// ‰EƒL[			D_DIK_RIGHT
#define KEY_INPUT_DOWN								(0xD0)				// ‰ºƒL[			D_DIK_DOWN
#define KEY_INPUT_INSERT							(0xD2)				// InsertƒL[		D_DIK_INSERT
#define KEY_INPUT_DELETE							(0xD3)				// DeleteƒL[		D_DIK_DELETE

#define KEY_INPUT_MINUS								(0x0C)				// |ƒL[			D_DIK_MINUS
#define KEY_INPUT_YEN								(0x7D)				// ƒL[			D_DIK_YEN
#define KEY_INPUT_PREVTRACK							(0x90)				// OƒL[			D_DIK_PREVTRACK
#define KEY_INPUT_PERIOD							(0x34)				// DƒL[			D_DIK_PERIOD
#define KEY_INPUT_SLASH								(0x35)				// ^ƒL[			D_DIK_SLASH
#define KEY_INPUT_LALT								(0x38)				// ¶AltƒL[		D_DIK_LALT
#define KEY_INPUT_RALT								(0xB8)				// ‰EAltƒL[		D_DIK_RALT
#define KEY_INPUT_SCROLL							(0x46)				// ScrollLockƒL[	D_DIK_SCROLL
#define KEY_INPUT_SEMICOLON							(0x27)				// GƒL[			D_DIK_SEMICOLON
#define KEY_INPUT_COLON								(0x92)				// FƒL[			D_DIK_COLON
#define KEY_INPUT_LBRACKET							(0x1A)				// mƒL[			D_DIK_LBRACKET
#define KEY_INPUT_RBRACKET							(0x1B)				// nƒL[			D_DIK_RBRACKET
#define KEY_INPUT_AT								(0x91)				// —ƒL[			D_DIK_AT
#define KEY_INPUT_BACKSLASH							(0x2B)				// _ƒL[			D_DIK_BACKSLASH
#define KEY_INPUT_COMMA								(0x33)				// CƒL[			D_DIK_COMMA
#define KEY_INPUT_KANJI								(0x94)				// Š¿šƒL[			D_DIK_KANJI
#define KEY_INPUT_CONVERT							(0x79)				// •ÏŠ·ƒL[			D_DIK_CONVERT
#define KEY_INPUT_NOCONVERT							(0x7B)				// –³•ÏŠ·ƒL[		D_DIK_NOCONVERT
#define KEY_INPUT_KANA								(0x70)				// ƒJƒiƒL[			D_DIK_KANA
#define KEY_INPUT_APPS								(0xDD)				// ƒAƒvƒŠƒP[ƒVƒ‡ƒ“ƒƒjƒ…[ƒL[		D_DIK_APPS
#define KEY_INPUT_CAPSLOCK							(0x3A)				// CaspLockƒL[		D_DIK_CAPSLOCK
#define KEY_INPUT_SYSRQ								(0xB7)				// PrintScreenƒL[	D_DIK_SYSRQ
#define KEY_INPUT_PAUSE								(0xC5)				// PauseBreakƒL[	D_DIK_PAUSE
#define KEY_INPUT_LWIN								(0xDB)				// ¶WinƒL[		D_DIK_LWIN
#define KEY_INPUT_RWIN								(0xDC)				// ‰EWinƒL[		D_DIK_RWIN

#define KEY_INPUT_NUMLOCK							(0x45)				// ƒeƒ“ƒL[NumLockƒL[		D_DIK_NUMLOCK
#define KEY_INPUT_NUMPAD0							(0x52)				// ƒeƒ“ƒL[‚O				D_DIK_NUMPAD0
#define KEY_INPUT_NUMPAD1							(0x4F)				// ƒeƒ“ƒL[‚P				D_DIK_NUMPAD1
#define KEY_INPUT_NUMPAD2							(0x50)				// ƒeƒ“ƒL[‚Q				D_DIK_NUMPAD2
#define KEY_INPUT_NUMPAD3							(0x51)				// ƒeƒ“ƒL[‚R				D_DIK_NUMPAD3
#define KEY_INPUT_NUMPAD4							(0x4B)				// ƒeƒ“ƒL[‚S				D_DIK_NUMPAD4
#define KEY_INPUT_NUMPAD5							(0x4C)				// ƒeƒ“ƒL[‚T				D_DIK_NUMPAD5
#define KEY_INPUT_NUMPAD6							(0x4D)				// ƒeƒ“ƒL[‚U				D_DIK_NUMPAD6
#define KEY_INPUT_NUMPAD7							(0x47)				// ƒeƒ“ƒL[‚V				D_DIK_NUMPAD7
#define KEY_INPUT_NUMPAD8							(0x48)				// ƒeƒ“ƒL[‚W				D_DIK_NUMPAD8
#define KEY_INPUT_NUMPAD9							(0x49)				// ƒeƒ“ƒL[‚X				D_DIK_NUMPAD9
#define KEY_INPUT_MULTIPLY							(0x37)				// ƒeƒ“ƒL[–ƒL[			D_DIK_MULTIPLY
#define KEY_INPUT_ADD								(0x4E)				// ƒeƒ“ƒL[{ƒL[			D_DIK_ADD
#define KEY_INPUT_SUBTRACT							(0x4A)				// ƒeƒ“ƒL[|ƒL[			D_DIK_SUBTRACT
#define KEY_INPUT_DECIMAL							(0x53)				// ƒeƒ“ƒL[DƒL[			D_DIK_DECIMAL
#define KEY_INPUT_DIVIDE							(0xB5)				// ƒeƒ“ƒL[^ƒL[			D_DIK_DIVIDE
#define KEY_INPUT_NUMPADENTER						(0x9C)				// ƒeƒ“ƒL[‚ÌƒGƒ“ƒ^[ƒL[	D_DIK_NUMPADENTER

#define KEY_INPUT_F1								(0x3B)				// ‚e‚PƒL[			D_DIK_F1
#define KEY_INPUT_F2								(0x3C)				// ‚e‚QƒL[			D_DIK_F2
#define KEY_INPUT_F3								(0x3D)				// ‚e‚RƒL[			D_DIK_F3
#define KEY_INPUT_F4								(0x3E)				// ‚e‚SƒL[			D_DIK_F4
#define KEY_INPUT_F5								(0x3F)				// ‚e‚TƒL[			D_DIK_F5
#define KEY_INPUT_F6								(0x40)				// ‚e‚UƒL[			D_DIK_F6
#define KEY_INPUT_F7								(0x41)				// ‚e‚VƒL[			D_DIK_F7
#define KEY_INPUT_F8								(0x42)				// ‚e‚WƒL[			D_DIK_F8
#define KEY_INPUT_F9								(0x43)				// ‚e‚XƒL[			D_DIK_F9
#define KEY_INPUT_F10								(0x44)				// ‚e‚P‚OƒL[		D_DIK_F10
#define KEY_INPUT_F11								(0x57)				// ‚e‚P‚PƒL[		D_DIK_F11
#define KEY_INPUT_F12								(0x58)				// ‚e‚P‚QƒL[		D_DIK_F12

#define KEY_INPUT_A									(0x1E)				// ‚`ƒL[			D_DIK_A
#define KEY_INPUT_B									(0x30)				// ‚aƒL[			D_DIK_B
#define KEY_INPUT_C									(0x2E)				// ‚bƒL[			D_DIK_C
#define KEY_INPUT_D									(0x20)				// ‚cƒL[			D_DIK_D
#define KEY_INPUT_E									(0x12)				// ‚dƒL[			D_DIK_E
#define KEY_INPUT_F									(0x21)				// ‚eƒL[			D_DIK_F
#define KEY_INPUT_G									(0x22)				// ‚fƒL[			D_DIK_G
#define KEY_INPUT_H									(0x23)				// ‚gƒL[			D_DIK_H
#define KEY_INPUT_I									(0x17)				// ‚hƒL[			D_DIK_I
#define KEY_INPUT_J									(0x24)				// ‚iƒL[			D_DIK_J
#define KEY_INPUT_K									(0x25)				// ‚jƒL[			D_DIK_K
#define KEY_INPUT_L									(0x26)				// ‚kƒL[			D_DIK_L
#define KEY_INPUT_M									(0x32)				// ‚lƒL[			D_DIK_M
#define KEY_INPUT_N									(0x31)				// ‚mƒL[			D_DIK_N
#define KEY_INPUT_O									(0x18)				// ‚nƒL[			D_DIK_O
#define KEY_INPUT_P									(0x19)				// ‚oƒL[			D_DIK_P
#define KEY_INPUT_Q									(0x10)				// ‚pƒL[			D_DIK_Q
#define KEY_INPUT_R									(0x13)				// ‚qƒL[			D_DIK_R
#define KEY_INPUT_S									(0x1F)				// ‚rƒL[			D_DIK_S
#define KEY_INPUT_T									(0x14)				// ‚sƒL[			D_DIK_T
#define KEY_INPUT_U									(0x16)				// ‚tƒL[			D_DIK_U
#define KEY_INPUT_V									(0x2F)				// ‚uƒL[			D_DIK_V
#define KEY_INPUT_W									(0x11)				// ‚vƒL[			D_DIK_W
#define KEY_INPUT_X									(0x2D)				// ‚wƒL[			D_DIK_X
#define KEY_INPUT_Y									(0x15)				// ‚xƒL[			D_DIK_Y
#define KEY_INPUT_Z									(0x2C)				// ‚yƒL[			D_DIK_Z

#define KEY_INPUT_0 								(0x0B)				// ‚OƒL[			D_DIK_0
#define KEY_INPUT_1									(0x02)				// ‚PƒL[			D_DIK_1
#define KEY_INPUT_2									(0x03)				// ‚QƒL[			D_DIK_2
#define KEY_INPUT_3									(0x04)				// ‚RƒL[			D_DIK_3
#define KEY_INPUT_4									(0x05)				// ‚SƒL[			D_DIK_4
#define KEY_INPUT_5									(0x06)				// ‚TƒL[			D_DIK_5
#define KEY_INPUT_6									(0x07)				// ‚UƒL[			D_DIK_6
#define KEY_INPUT_7									(0x08)				// ‚VƒL[			D_DIK_7
#define KEY_INPUT_8									(0x09)				// ‚WƒL[			D_DIK_8
#define KEY_INPUT_9									(0x0A)				// ‚XƒL[			D_DIK_9

// ƒAƒXƒL[ƒRƒ“ƒgƒ[ƒ‹ƒL[ƒR[ƒh
#define CTRL_CODE_BS								(0x08)				// ƒoƒbƒNƒXƒy[ƒX
#define CTRL_CODE_TAB								(0x09)				// ƒ^ƒu
#define CTRL_CODE_CR								(0x0d)				// ‰üs
#define CTRL_CODE_DEL								(0x10)				// ‚c‚d‚kƒL[

#define CTRL_CODE_COPY								(0x03)				// ƒRƒs[
#define CTRL_CODE_PASTE								(0x16)				// ƒy[ƒXƒg
#define CTRL_CODE_CUT								(0x18)				// ƒJƒbƒg
#define CTRL_CODE_ALL								(0x01)				// ‘S‚Ä‘I‘ğ

#define CTRL_CODE_LEFT								(0x1d)				// ©ƒL[
#define CTRL_CODE_RIGHT								(0x1c)				// ¨ƒL[
#define CTRL_CODE_UP								(0x1e)				// ªƒL[
#define CTRL_CODE_DOWN								(0x1f)				// «ƒL[

#define CTRL_CODE_HOME								(0x1a)				// ‚g‚n‚l‚dƒ{ƒ^ƒ“
#define CTRL_CODE_END								(0x19)				// ‚d‚m‚cƒ{ƒ^ƒ“
#define CTRL_CODE_PAGE_UP							(0x17)				// ‚o‚`‚f‚d ‚t‚o
#define CTRL_CODE_PAGE_DOWN							(0x15)				// ‚o‚`‚f‚d ‚c‚n‚v‚m

#define CTRL_CODE_ESC								(0x1b)				// ‚d‚r‚bƒL[
#define CTRL_CODE_CMP								(0x20)				// §ŒäƒR[ƒh•~‹’l

// SetKeyInputStringColor2 ‚É“n‚·F•ÏX‘ÎÛ‚ğw’è‚·‚é‚½‚ß‚Ì¯•Êq
#define DX_KEYINPSTRCOLOR_NORMAL_STR					(0)				// “ü—Í•¶š—ñ‚ÌF
#define DX_KEYINPSTRCOLOR_NORMAL_STR_EDGE				(1)				// “ü—Í•¶š—ñ‚Ì‰‚ÌF
#define DX_KEYINPSTRCOLOR_NORMAL_CURSOR					(2)				// ‚h‚l‚d”ñg—p‚ÌƒJ[ƒ\ƒ‹‚ÌF
#define DX_KEYINPSTRCOLOR_SELECT_STR					(3)				// “ü—Í•¶š—ñ‚Ì‘I‘ğ•”•ª( SHIFTƒL[‚ğ‰Ÿ‚µ‚È‚ª‚ç¶‰EƒL[‚Å‘I‘ğ )‚ÌF
#define DX_KEYINPSTRCOLOR_SELECT_STR_EDGE				(4)				// “ü—Í•¶š—ñ‚Ì‘I‘ğ•”•ª( SHIFTƒL[‚ğ‰Ÿ‚µ‚È‚ª‚ç¶‰EƒL[‚Å‘I‘ğ )‚Ì‰‚ÌF
#define DX_KEYINPSTRCOLOR_SELECT_STR_BACK				(5)				// “ü—Í•¶š—ñ‚Ì‘I‘ğ•”•ª( SHIFTƒL[‚ğ‰Ÿ‚µ‚È‚ª‚ç¶‰EƒL[‚Å‘I‘ğ )‚Ìü‚è‚ÌF
#define DX_KEYINPSTRCOLOR_IME_STR						(6)				// ‚h‚l‚dg—p‚Ì“ü—Í•¶š—ñ‚ÌF
#define DX_KEYINPSTRCOLOR_IME_STR_EDGE					(7)				// ‚h‚l‚dg—p‚Ì“ü—Í•¶š—ñ‚Ì‰‚ÌF
#define DX_KEYINPSTRCOLOR_IME_STR_BACK					(8)				// ‚h‚l‚dg—p‚Ì“ü—Í•¶š—ñ‚Ìü‚è‚ÌF
#define DX_KEYINPSTRCOLOR_IME_CURSOR					(9)				// ‚h‚l‚dg—p‚ÌƒJ[ƒ\ƒ‹‚ÌF
#define DX_KEYINPSTRCOLOR_IME_LINE						(10)			// ‚h‚l‚dg—p‚Ì•ÏŠ·•¶š—ñ‚Ì‰ºü‚ÌF
#define DX_KEYINPSTRCOLOR_IME_SELECT_STR				(11)			// ‚h‚l‚dg—p‚Ì‘I‘ğ‘ÎÛ‚Ì•ÏŠ·Œó•â•¶š—ñ‚ÌF
#define DX_KEYINPSTRCOLOR_IME_SELECT_STR_EDGE			(12)			// ‚h‚l‚dg—p‚Ì‘I‘ğ‘ÎÛ‚Ì•ÏŠ·Œó•â•¶š—ñ‚Ì‰‚ÌF
#define DX_KEYINPSTRCOLOR_IME_SELECT_STR_BACK			(13)			// ‚h‚l‚dg—p‚Ì‘I‘ğ‘ÎÛ‚Ì•ÏŠ·Œó•â•¶š—ñ‚Ìü‚è‚ÌF
#define DX_KEYINPSTRCOLOR_IME_CONV_WIN_STR				(14)			// ‚h‚l‚dg—p‚Ì•ÏŠ·Œó•âƒEƒCƒ“ƒhƒE“à‚Ì•¶š—ñ‚ÌF
#define DX_KEYINPSTRCOLOR_IME_CONV_WIN_STR_EDGE			(15)			// ‚h‚l‚dg—p‚Ì•ÏŠ·Œó•âƒEƒCƒ“ƒhƒE“à‚Ì•¶š—ñ‚Ì‰‚ÌF
#define DX_KEYINPSTRCOLOR_IME_CONV_WIN_SELECT_STR		(16)			// ‚h‚l‚dg—p‚Ì•ÏŠ·Œó•âƒEƒCƒ“ƒhƒE“à‚Å‘I‘ğ‚µ‚Ä‚¢‚é•¶š—ñ‚ÌF
#define DX_KEYINPSTRCOLOR_IME_CONV_WIN_SELECT_STR_EDGE	(17)			// ‚h‚l‚dg—p‚Ì•ÏŠ·Œó•âƒEƒCƒ“ƒhƒE“à‚Å‘I‘ğ‚µ‚Ä‚¢‚é•¶š—ñ‚Ì‰‚ÌF
#define DX_KEYINPSTRCOLOR_IME_CONV_WIN_SELECT_STR_BACK	(18)			// ‚h‚l‚dg—p‚Ì•ÏŠ·Œó•âƒEƒCƒ“ƒhƒE“à‚Å‘I‘ğ‚µ‚Ä‚¢‚é•¶š—ñ‚Ìü‚è‚ÌF
#define DX_KEYINPSTRCOLOR_IME_CONV_WIN_EDGE				(19)			// ‚h‚l‚dg—p‚Ì•ÏŠ·Œó•âƒEƒCƒ“ƒhƒE‚Ì‰‚ÌF
#define DX_KEYINPSTRCOLOR_IME_CONV_WIN_BACK				(20)			// ‚h‚l‚dg—p‚Ì•ÏŠ·Œó•âƒEƒCƒ“ƒhƒE‚Ì‰º’n‚ÌF
#define DX_KEYINPSTRCOLOR_IME_MODE_STR					(21)			// ‚h‚l‚dg—p‚Ì“ü—Íƒ‚[ƒh•¶š—ñ‚ÌF(w‘SŠp‚Ğ‚ç‚ª‚Èx“™)
#define DX_KEYINPSTRCOLOR_IME_MODE_STR_EDGE				(22)			// ‚h‚l‚dg—p‚Ì“ü—Íƒ‚[ƒh•¶š—ñ‚Ì‰‚ÌF
#define DX_KEYINPSTRCOLOR_NUM							(23)

// •¶š—ñ“ü—Íˆ—‚Ì“ü—Í•¶š”‚ªŒÀŠE‚É’B‚µ‚Ä‚¢‚éó‘Ô‚ÅA•¶š—ñ‚Ì––’[•”•ª‚Å“ü—Í‚ªs‚í‚ê‚½ê‡‚Ìˆ—ƒ‚[ƒh
#define DX_KEYINPSTR_ENDCHARAMODE_OVERWRITE				(0)				// •¶š”‚ªŒÀŠE‚É’B‚µ‚Ä‚¢‚éó‘Ô‚Å•¶š—ñ‚Ì––’[‚Å•¶š‚ª“ü—Í‚³‚ê‚½ê‡‚ÍAÅŒã‚Ì•¶š‚ğã‘‚«( ƒfƒtƒHƒ‹ƒg )
#define DX_KEYINPSTR_ENDCHARAMODE_NOTCHANGE				(1)				// •¶š”‚ªŒÀŠE‚É’B‚µ‚Ä‚¢‚éó‘Ô‚Å•¶š—ñ‚Ì––’[‚Å•¶š‚ª“ü—Í‚³‚ê‚½ê‡‚ÍA‰½‚à•Ï‰»‚µ‚È‚¢

// ƒtƒ‹ƒXƒNƒŠ[ƒ“‰ğ‘œ“xƒ‚[ƒh’è‹`
#define DX_FSRESOLUTIONMODE_DESKTOP					(0)					// ƒ‚ƒjƒ^[‚Ì‰æ–Êƒ‚[ƒh‚ğƒfƒXƒNƒgƒbƒv‰æ–Ê‚Æ“¯‚¶‚É‚µ‚Ä‚c‚wƒ‰ƒCƒuƒ‰ƒŠ‰æ–Ê‚ğŠg‘å‚µ‚Ä•\¦‚·‚éƒ‚[ƒh
#define DX_FSRESOLUTIONMODE_NATIVE					(1)					// ƒ‚ƒjƒ^[‚Ì‰ğ‘œ“x‚ğ‚c‚wƒ‰ƒCƒuƒ‰ƒŠ‰æ–Ê‚Ì‰ğ‘œ“x‚É‡‚í‚¹‚éƒ‚[ƒh
#define DX_FSRESOLUTIONMODE_MAXIMUM					(2)					// ƒ‚ƒjƒ^[‚Ì‰ğ‘œ“x‚ğÅ‘å‚É‚µ‚Ä‚c‚wƒ‰ƒCƒuƒ‰ƒŠ‰æ–Ê‚ğŠg‘å‚µ‚Ä•\¦‚·‚éƒ‚[ƒh

// ƒtƒ‹ƒXƒNƒŠ[ƒ“Šg‘åƒ‚[ƒh’è‹`
#define DX_FSSCALINGMODE_BILINEAR					(0)					// ƒoƒCƒŠƒjƒAƒ‚[ƒh( ƒsƒNƒZƒ‹‚ªŸø‚ñ‚ÅƒsƒNƒZƒ‹‚ÆƒsƒNƒZƒ‹‚Ì‹æØ‚è‚ª‚Í‚Á‚«‚è‚µ‚È‚¢ )
#define DX_FSSCALINGMODE_NEAREST					(1)					// Å‹ß“_ƒ‚[ƒh( ƒsƒNƒZƒ‹‚ªlŠp‚­‚­‚Á‚«‚è•\¦‚³‚ê‚é )

// SetGraphMode –ß‚è’l’è‹`
#define DX_CHANGESCREEN_OK							(0)					// ‰æ–Ê•ÏX‚Í¬Œ÷‚µ‚½
#define DX_CHANGESCREEN_RETURN						(-1)				// ‰æ–Ê‚Ì•ÏX‚Í¸”s‚µAŒ³‚Ì‰æ–Êƒ‚[ƒh‚É–ß‚³‚ê‚½
#define DX_CHANGESCREEN_DEFAULT						(-2)				// ‰æ–Ê‚Ì•ÏX‚Í¸”s‚µƒfƒtƒHƒ‹ƒg‚Ì‰æ–Êƒ‚[ƒh‚É•ÏX‚³‚ê‚½
#define DX_CHANGESCREEN_REFRESHNORMAL				(-3)				// ‰æ–Ê‚Ì•ÏX‚Í¬Œ÷‚µ‚½‚ªAƒŠƒtƒŒƒbƒVƒ…ƒŒ[ƒg‚Ì•ÏX‚Í¸”s‚µ‚½

// ƒXƒgƒŠ[ƒ€ƒf[ƒ^“Ç‚İ‚İˆ—ƒR[ƒhŠÈ—ª‰»ŠÖ˜A
#define STTELL( st )								((st)->ReadShred.Tell( (st)->DataPoint ))
#define STSEEK( st, pos, type )						((st)->ReadShred.Seek( (st)->DataPoint, (pos), (type) ))
#define STREAD( buf, length, num, st )				((st)->ReadShred.Read( (buf), (length), (num), (st)->DataPoint ))
#define STWRITE( buf, length, num, st )				((st)->ReadShred.Write( (buf), (length), (num), (st)->DataPoint ))
#define STEOF( st )									((st)->ReadShred.Eof( (st)->DataPoint ))
#define STCLOSE( st )								((st)->ReadShred.Close( (st)->DataPoint ))

// ƒXƒgƒŠ[ƒ€ƒf[ƒ^§Œä‚ÌƒV[ƒNƒ^ƒCƒv’è‹`
#define STREAM_SEEKTYPE_SET							(SEEK_SET)
#define STREAM_SEEKTYPE_END							(SEEK_END)
#define STREAM_SEEKTYPE_CUR							(SEEK_CUR)

// ƒOƒ‰ƒtƒBƒbƒNƒ[ƒh‚ÌƒCƒ[ƒWƒ^ƒCƒv
#define LOADIMAGE_TYPE_FILE							(0)				// ƒCƒ[ƒW‚Íƒtƒ@ƒCƒ‹‚Å‚ ‚é
#define LOADIMAGE_TYPE_MEM							(1)				// ƒCƒ[ƒW‚Íƒƒ‚ƒŠ‚Å‚ ‚é
#define LOADIMAGE_TYPE_NONE							(-1)			// ƒCƒ[ƒW‚Í–³‚¢



#ifndef DX_NON_NETWORK

// HTTP ƒGƒ‰[
#define HTTP_ERR_SERVER								(0)				// ƒT[ƒo[ƒGƒ‰[
#define HTTP_ERR_NOTFOUND							(1)				// ƒtƒ@ƒCƒ‹‚ªŒ©‚Â‚©‚ç‚È‚©‚Á‚½
#define HTTP_ERR_MEMORY								(2)				// ƒƒ‚ƒŠŠm•Û‚Ì¸”s
#define HTTP_ERR_LOST								(3)				// “r’†‚ÅØ’f‚³‚ê‚½
#define HTTP_ERR_NONE								(-1)			// ƒGƒ‰[‚Í•ñ‚³‚ê‚Ä‚¢‚È‚¢

// HTTP ˆ—‚ÌŒ‹‰Ê
#define HTTP_RES_COMPLETE							(0)				// ˆ—Š®—¹
#define HTTP_RES_STOP								(1)				// ˆ—’†~
#define HTTP_RES_ERROR								(2)				// ƒGƒ‰[I—¹
#define HTTP_RES_NOW								(-1)			// Œ»İis’†

#endif // DX_NON_NETWORK

#define DX_DEFINE_END

// ƒf[ƒ^Œ^’è‹`-------------------------------------------------------------------

// WAVEFORMATEX ‚Ì’è‹`
#ifndef _WAVEFORMATEX_
#define _WAVEFORMATEX_

struct tWAVEFORMATEX
{
	WORD					wFormatTag ;			// ƒtƒH[ƒ}ƒbƒg( WAVE_FORMAT_PCM( ’l‚Í 1 ) “™ )
	WORD					nChannels ;				// ƒ`ƒƒƒ“ƒlƒ‹”
	DWORD					nSamplesPerSec ;		// ‚P•b•Ó‚è‚ÌƒTƒ“ƒvƒ‹”
	DWORD					nAvgBytesPerSec ;		// ‚P•b•Ó‚è‚ÌƒoƒCƒg”( PCM‚Ìê‡ nSamplesPerSec * nBlockAlign )
	WORD					nBlockAlign ;			// ‘Sƒ`ƒƒƒ“ƒlƒ‹‚Ì‚PƒTƒ“ƒvƒ‹‚ğ‡‚í‚¹‚½ƒoƒCƒg”( wBitsPerSample / 8 * nChannels )
	WORD					wBitsPerSample ;		// ‚PƒTƒ“ƒvƒ‹•Ó‚è‚Ìƒrƒbƒg”
	WORD					cbSize ;				// Šg’£î•ñ‚ÌƒoƒCƒg”( Šg’£î•ñ‚ª–³‚¢ê‡‚Í 0 )
} ;

typedef tWAVEFORMATEX	WAVEFORMATEX, *PWAVEFORMATEX, NEAR *NPWAVEFORMATEX, FAR *LPWAVEFORMATEX ;

#endif // _WAVEFORMATEX_

// WAVEFORMAT ‚Ì’è‹`
#ifndef WAVE_FORMAT_PCM

struct waveformat_tag
{
	WORD					wFormatTag ;			// ƒtƒH[ƒ}ƒbƒg( WAVE_FORMAT_PCM( ’l‚Í 1 ) “™ )
	WORD					nChannels ;				// ƒ`ƒƒƒ“ƒlƒ‹”
	DWORD					nSamplesPerSec ;		// ‚P•b•Ó‚è‚ÌƒTƒ“ƒvƒ‹”
	DWORD					nAvgBytesPerSec ;		// ‚P•b•Ó‚è‚ÌƒoƒCƒg”( PCM‚Ìê‡ nSamplesPerSec * nBlockAlign )
	WORD					nBlockAlign ;			// ‘Sƒ`ƒƒƒ“ƒlƒ‹‚Ì‚PƒTƒ“ƒvƒ‹‚ğ‡‚í‚¹‚½ƒoƒCƒg”( wBitsPerSample / 8 * nChannels )
} ;

typedef waveformat_tag	WAVEFORMAT, *PWAVEFORMAT, NEAR *NPWAVEFORMAT, FAR *LPWAVEFORMAT ;

#define WAVE_FORMAT_PCM		1

#endif // WAVE_FORMAT_PCM

#ifndef DX_NON_NAMESPACE

namespace DxLib
{

#endif // DX_NON_NAMESPACE

#define DX_STRUCT_START

// ‚h‚l‚d“ü—Í•¶š—ñ‚Ì•`‰æ‚É•K—v‚Èî•ñ‚Ì“à‚Ì•¶ßî•ñ
typedef struct tagIMEINPUTCLAUSEDATA
{
	int						Position ;				// ‰½ƒoƒCƒg–Ú‚©‚ç
	int						Length ;				// ‰½ƒoƒCƒg‚©
} IMEINPUTCLAUSEDATA, *LPIMEINPUTCLAUSEDATA ;

// ‚h‚l‚d“ü—Í•¶š—ñ‚Ì•`‰æ‚É•K—v‚Èî•ñ
typedef struct tagIMEINPUTDATA
{
	const TCHAR *				InputString ;			// “ü—Í’†‚Ì•¶š—ñ

	int							CursorPosition ;		// ƒJ[ƒ\ƒ‹‚Ì“ü—Í•¶š—ñ’†‚ÌˆÊ’u(ƒoƒCƒg’PˆÊ)

	const IMEINPUTCLAUSEDATA *	ClauseData ;			// •¶ßî•ñ
	int							ClauseNum ;				// •¶ßî•ñ‚Ì”
	int							SelectClause ;			// ‘I‘ğ’†‚Ì•ªß( -1 ‚Ìê‡‚Í‚Ç‚Ì•¶ß‚É‚à‘®‚µ‚Ä‚¢‚È‚¢( ––”ö‚ÉƒJ[ƒ\ƒ‹‚ª‚ ‚é ) )

	int							CandidateNum ;			// •ÏŠ·Œó•â‚Ì”( 0‚Ìê‡‚Í•ÏŠ·’†‚Å‚Í‚È‚¢ )
	const TCHAR **				CandidateList ;			// •ÏŠ·Œó•â•¶š—ñƒŠƒXƒg( —áF‚”Ô–Ú‚ÌŒó•â‚ğ•`‰æ‚·‚éê‡  DrawString( 0, 0, data.CandidateList[ n ], GetColor(255,255,255) ); )
	int							SelectCandidate ;		// ‘I‘ğ’†‚Ì•ÏŠ·Œó•â

	int							ConvertFlag ;			// •¶š•ÏŠ·’†‚©‚Ç‚¤‚©( TRUE:•ÏŠ·’†  FALSE:•ÏŠ·’†‚Å‚Í‚È‚¢( •¶š’PˆÊ‚ÅƒJ[ƒ\ƒ‹‚ªˆÚ“®‚Å‚«‚éó‘Ô ) )
} IMEINPUTDATA, *LPIMEINPUTDATA ;

// •`‰æ•¶š—ñˆê•¶š‚Ìî•ñ
typedef struct tagDRAWCHARINFO
{
	TCHAR					Char[ 13 ] ;				// •¶š
	BYTE					Bytes ;						// •¶š‚ÌƒoƒCƒg”
	float					DrawX, DrawY ;				// •`‰æˆÊ’u
	float					SizeX, SizeY ;				// •`‰æƒTƒCƒY
} DRAWCHARINFO, *LPDRAWCHARINFO ;

// ‰æ–Êƒ‚[ƒhî•ñƒf[ƒ^Œ^
typedef struct tagDISPLAYMODEDATA
{
	int						Width ;				// …•½‰ğ‘œ“x
	int						Height ;			// ‚’¼‰ğ‘œ“x
	int						ColorBitDepth ;		// Fƒrƒbƒg[“x
	int						RefreshRate ;		// ƒŠƒtƒŒƒbƒVƒ…ƒŒ[ƒg( -1 ‚Ìê‡‚Í‹K’è’l )
} DISPLAYMODEDATA, *LPDISPLAYMODEDATA ;

// ƒ^ƒCƒ€ƒf[ƒ^Œ^
typedef struct tagDATEDATA
{
	int						Year ;							// ”N
	int						Mon ;							// Œ
	int						Day ;							// “ú
	int						Hour ;							// ŠÔ
	int						Min ;							// •ª
	int						Sec ;							// •b
} DATEDATA, *LPDATEDATA ;

// ƒtƒ@ƒCƒ‹î•ñ\‘¢‘Ì
typedef struct tagFILEINFO
{
	TCHAR					Name[ 260 ] ;		// ƒIƒuƒWƒFƒNƒg–¼
	int						DirFlag ;			// ƒfƒBƒŒƒNƒgƒŠ‚©‚Ç‚¤‚©( TRUE:ƒfƒBƒŒƒNƒgƒŠ  FALSE:ƒtƒ@ƒCƒ‹ )
	LONGLONG				Size ;				// ƒTƒCƒY
	DATEDATA				CreationTime ;		// ì¬“ú
	DATEDATA				LastWriteTime ;		// ÅIXV“ú
} FILEINFO, *LPFILEINFO ;

// ƒtƒ@ƒCƒ‹î•ñ\‘¢‘Ìi wchar_t ”Å j
typedef struct tagFILEINFOW
{
	wchar_t					Name[ 260 ] ;		// ƒIƒuƒWƒFƒNƒg–¼
	int						DirFlag ;			// ƒfƒBƒŒƒNƒgƒŠ‚©‚Ç‚¤‚©( TRUE:ƒfƒBƒŒƒNƒgƒŠ  FALSE:ƒtƒ@ƒCƒ‹ )
	LONGLONG				Size ;				// ƒTƒCƒY
	DATEDATA				CreationTime ;		// ì¬“ú
	DATEDATA				LastWriteTime ;		// ÅIXV“ú
} FILEINFOW, *LPFILEINFOW ;

// s—ñ\‘¢‘Ì
typedef struct tagMATRIX
{
	float					m[4][4] ;
} MATRIX, *LPMATRIX ;

typedef struct tagMATRIX_D
{
	double					m[4][4] ;
} MATRIX_D, *LPMATRIX_D ;

// ƒxƒNƒgƒ‹ƒf[ƒ^Œ^
typedef struct tagVECTOR
{
	float					x, y, z ;
} VECTOR, *LPVECTOR, FLOAT3, *LPFLOAT3 ;

typedef struct tagVECTOR_D
{
	double					x, y, z ;
} VECTOR_D, *LPVECTOR_D, DOUBLE3, *LPDOUBLE3 ;

// FLOAT2ŒÂƒf[ƒ^Œ^
typedef struct tagFLOAT2
{
	float					u, v ;
} FLOAT2 ;

// float Œ^‚ÌƒJƒ‰[’l
typedef struct tagCOLOR_F
{
	float					r, g, b, a ;
} COLOR_F, *LPCOLOR_F ;

// unsigned char Œ^‚ÌƒJƒ‰[’l
typedef struct tagCOLOR_U8
{
	BYTE					b, g, r, a ;
} COLOR_U8 ;

// FLOAT4ŒÂƒf[ƒ^Œ^
typedef struct tagFLOAT4
{
	float					x, y, z, w ;
} FLOAT4, *LPFLOAT4 ;

// DOUBLE4ŒÂƒf[ƒ^Œ^
typedef struct tagDOUBLE4
{
	double					x, y, z, w ;
} DOUBLE4, *LPDOUBLE4 ;

// INT4ŒÂƒf[ƒ^Œ^
typedef struct tagINT4
{
	int						x, y, z, w ;
} INT4 ;

#ifndef DX_NOTUSE_DRAWFUNCTION

// ‚Q‚c•`‰æ‚Ég—p‚·‚é’¸“_ƒf[ƒ^Œ^(DrawPrimitive2D—p)
typedef struct tagVERTEX2D
{
	VECTOR					pos ;
	float					rhw ;
	COLOR_U8				dif ;
	float					u, v ;
} VERTEX2D, *LPVERTEX2D ; 

// ‚Q‚c•`‰æ‚Ég—p‚·‚é’¸“_ƒf[ƒ^Œ^(DrawPrimitive2DToShader—p)
typedef struct tagVERTEX2DSHADER
{
	VECTOR					pos ;
	float					rhw ;
	COLOR_U8				dif ;
	COLOR_U8				spc ;
	float					u, v ;
	float					su, sv ;
} VERTEX2DSHADER, *LPVERTEX2DSHADER ; 

// ‚Q‚c•`‰æ‚Ég—p‚·‚é’¸“_ƒf[ƒ^Œ^(ŒöŠJ—p)
typedef struct tagVERTEX
{
	float					x, y ;
	float					u, v ;
	unsigned char			b, g, r, a ;
} VERTEX ;

// ‚R‚c•`‰æ‚Ég—p‚·‚é’¸“_ƒf[ƒ^Œ^( ‹Œƒo[ƒWƒ‡ƒ“‚Ì‚à‚Ì )
typedef struct tagVERTEX_3D
{
	VECTOR					pos ;
	unsigned char			b, g, r, a ;
	float					u, v ;
} VERTEX_3D, *LPVERTEX_3D ;

// ‚R‚c•`‰æ‚Ég—p‚·‚é’¸“_ƒf[ƒ^Œ^
typedef struct tagVERTEX3D
{
	VECTOR					pos ;						// À•W
	VECTOR					norm ;						// –@ü
	COLOR_U8				dif ;						// ƒfƒBƒtƒ…[ƒYƒJƒ‰[
	COLOR_U8				spc ;						// ƒXƒyƒLƒ…ƒ‰ƒJƒ‰[
	float					u, v ;						// ƒeƒNƒXƒ`ƒƒÀ•W
	float					su, sv ;					// •â•ƒeƒNƒXƒ`ƒƒÀ•W
} VERTEX3D, *LPVERTEX3D ;

// ‚R‚c•`‰æ‚Ég—p‚·‚é’¸“_ƒf[ƒ^Œ^( DrawPrimitive3DToShader—p )
// ’ˆÓcƒƒ“ƒo•Ï”‚É’Ç‰Á‚ª‚ ‚é‚©‚à‚µ‚ê‚Ü‚¹‚ñ‚Ì‚ÅAéŒ¾‚Ì‰Šú‰»( VERTEX3DSHADER Vertex = { 0.0f, 0.0f, ... ‚Æ‚¢‚¤‚æ‚¤‚È‚à‚Ì )‚Í‚µ‚È‚¢•û‚ª—Ç‚¢‚Å‚·
typedef struct tagVERTEX3DSHADER
{
	VECTOR					pos ;						// À•W
	FLOAT4					spos ;						// •â•À•W
	VECTOR					norm ;						// –@ü
	VECTOR					tan ;						// Úü
	VECTOR					binorm ;					// ]–@ü
	COLOR_U8				dif ;						// ƒfƒBƒtƒ…[ƒYƒJƒ‰[
	COLOR_U8				spc ;						// ƒXƒyƒLƒ…ƒ‰ƒJƒ‰[
	float					u, v ;						// ƒeƒNƒXƒ`ƒƒÀ•W
	float					su, sv ;					// •â•ƒeƒNƒXƒ`ƒƒÀ•W
} VERTEX3DSHADER, *LPVERTEX3DSHADER ;

// ƒ‰ƒCƒgƒpƒ‰ƒ[ƒ^
typedef struct tagLIGHTPARAM
{
	int						LightType ;					// ƒ‰ƒCƒg‚Ìƒ^ƒCƒv( DX_LIGHTTYPE_D3DLIGHT_POINT “™ )
	COLOR_F					Diffuse ;					// ƒfƒBƒtƒ…[ƒYƒJƒ‰[
	COLOR_F					Specular ;					// ƒXƒyƒLƒ…ƒ‰ƒJƒ‰[
	COLOR_F					Ambient ;					// ƒAƒ“ƒrƒGƒ“ƒgF
	VECTOR					Position ;					// ˆÊ’u
	VECTOR					Direction ;					// •ûŒü
	float					Range ;						// —LŒø‹——£
	float					Falloff ;					// ƒtƒH[ƒ‹ƒIƒt 1.0f ‚É‚µ‚Ä‚¨‚­‚Ì‚ªD‚Ü‚µ‚¢
	float					Attenuation0 ;				// ‹——£‚É‚æ‚éŒ¸ŠŒW”‚O
	float					Attenuation1 ;				// ‹——£‚É‚æ‚éŒ¸ŠŒW”‚P
	float					Attenuation2 ;				// ‹——£‚É‚æ‚éŒ¸ŠŒW”‚Q
	float					Theta ;						// ƒXƒ|ƒbƒgƒ‰ƒCƒg‚Ì“à•”ƒR[ƒ“‚ÌÆ–¾Šp“x( ƒ‰ƒWƒAƒ“ )
	float					Phi ;						// ƒXƒ|ƒbƒgƒ‰ƒCƒg‚ÌŠO•”ƒR[ƒ“‚ÌÆ–¾Šp“x
} LIGHTPARAM ;

// ƒ}ƒeƒŠƒAƒ‹ƒpƒ‰ƒ[ƒ^
typedef struct tagMATERIALPARAM
{
	COLOR_F					Diffuse ;					// ƒfƒBƒtƒ…[ƒYƒJƒ‰[
	COLOR_F					Ambient ;					// ƒAƒ“ƒrƒGƒ“ƒgƒJƒ‰[
	COLOR_F					Specular ;					// ƒXƒyƒLƒ…ƒ‰ƒJƒ‰[
	COLOR_F					Emissive ;					// ƒGƒ~ƒbƒVƒuƒJƒ‰[
	float					Power ;						// ƒXƒyƒLƒ…ƒ‰ƒnƒCƒ‰ƒCƒg‚Ì‘N–¾“x
} MATERIALPARAM ;

#endif // DX_NOTUSE_DRAWFUNCTION

// ƒ‰ƒCƒ“ƒqƒbƒgƒ`ƒFƒbƒNŒ‹‰ÊŠi”[—p\‘¢‘Ì
typedef struct tagHITRESULT_LINE
{
	int						HitFlag ;					// “–‚½‚Á‚½‚©‚Ç‚¤‚©( 1:“–‚½‚Á‚½  0:“–‚½‚ç‚È‚©‚Á‚½ )
	VECTOR					Position ;					// “–‚½‚Á‚½À•W
} HITRESULT_LINE ;

// ƒ‰ƒCƒ“ƒqƒbƒgƒ`ƒFƒbƒNŒ‹‰ÊŠi”[—p\‘¢‘Ì
typedef struct tagHITRESULT_LINE_D
{
	int						HitFlag ;					// “–‚½‚Á‚½‚©‚Ç‚¤‚©( 1:“–‚½‚Á‚½  0:“–‚½‚ç‚È‚©‚Á‚½ )
	VECTOR_D				Position ;					// “–‚½‚Á‚½À•W
} HITRESULT_LINE_D ;

// ŠÖ” Segment_Segment_Analyse ‚ÌŒ‹‰Ê‚ğó‚¯æ‚éˆ×‚Ì\‘¢‘Ì
typedef struct tagSEGMENT_SEGMENT_RESULT
{
	float					SegA_SegB_MinDist_Square ;	// ü•ª‚`‚Æü•ª‚a‚ªÅ‚àÚ‹ß‚·‚éÀ•WŠÔ‚Ì‹——£‚Ì“ñæ

	float					SegA_MinDist_Pos1_Pos2_t ;	// ü•ª‚`‚Æü•ª‚a‚ÉÅ‚àÚ‹ß‚·‚éÀ•W‚Ìü•ª‚`‚Ì t ( 0.0f ` 1.0f AÅ‹ß“_À•W = ( SegAPos2 - SegAPos1 ) * t + SegAPos1 )
	float					SegB_MinDist_Pos1_Pos2_t ;	// ü•ª‚a‚ªü•ª‚`‚ÉÅ‚àÚ‹ß‚·‚éÀ•W‚Ìü•ª‚a‚Ì t ( 0.0f ` 1.0f AÅ‹ß“_À•W = ( SegBPos2 - SegBPos1 ) * t + SegBPos1 )

	VECTOR					SegA_MinDist_Pos ;			// ü•ª‚`‚ªü•ª‚a‚ÉÅ‚àÚ‹ß‚·‚éü•ª‚`ã‚ÌÀ•W
	VECTOR					SegB_MinDist_Pos ;			// ü•ª‚a‚ªü•ª‚`‚ÉÅ‚àÚ‹ß‚·‚éü•ª‚aã‚ÌÀ•W
} SEGMENT_SEGMENT_RESULT ;

// ŠÖ” Segment_Segment_Analyse ‚ÌŒ‹‰Ê‚ğó‚¯æ‚éˆ×‚Ì\‘¢‘Ì
typedef struct tagSEGMENT_SEGMENT_RESULT_D
{
	double					SegA_SegB_MinDist_Square ;	// ü•ª‚`‚Æü•ª‚a‚ªÅ‚àÚ‹ß‚·‚éÀ•WŠÔ‚Ì‹——£‚Ì“ñæ

	double					SegA_MinDist_Pos1_Pos2_t ;	// ü•ª‚`‚Æü•ª‚a‚ÉÅ‚àÚ‹ß‚·‚éÀ•W‚Ìü•ª‚`‚Ì t ( 0.0 ` 1.0 AÅ‹ß“_À•W = ( SegAPos2 - SegAPos1 ) * t + SegAPos1 )
	double					SegB_MinDist_Pos1_Pos2_t ;	// ü•ª‚a‚ªü•ª‚`‚ÉÅ‚àÚ‹ß‚·‚éÀ•W‚Ìü•ª‚a‚Ì t ( 0.0 ` 1.0 AÅ‹ß“_À•W = ( SegBPos2 - SegBPos1 ) * t + SegBPos1 )

	VECTOR_D				SegA_MinDist_Pos ;			// ü•ª‚`‚ªü•ª‚a‚ÉÅ‚àÚ‹ß‚·‚éü•ª‚`ã‚ÌÀ•W
	VECTOR_D				SegB_MinDist_Pos ;			// ü•ª‚a‚ªü•ª‚`‚ÉÅ‚àÚ‹ß‚·‚éü•ª‚aã‚ÌÀ•W
} SEGMENT_SEGMENT_RESULT_D ;

// ŠÖ” Segment_Point_Analyse ‚ÌŒ‹‰Ê‚ğó‚¯æ‚éˆ×‚Ì\‘¢‘Ì
typedef struct tagSEGMENT_POINT_RESULT
{
	float					Seg_Point_MinDist_Square ;	// ü•ª‚Æ“_‚ªÅ‚àÚ‹ß‚·‚éÀ•WŠÔ‚Ì‹——£‚Ì“ñæ
	float					Seg_MinDist_Pos1_Pos2_t ;	// ü•ª‚ª“_‚ÉÅ‚àÚ‹ß‚·‚éÀ•W‚Ìü•ª‚Ì t ( 0.0f ` 1.0f AÅ‹ß“_À•W = ( SegPos2 - SegPos1 ) * t + SegPos1 )
	VECTOR					Seg_MinDist_Pos ;			// ü•ª‚ª“_‚ÉÅ‚àÚ‹ß‚·‚éü•ªã‚ÌÀ•W
} SEGMENT_POINT_RESULT ;

// ŠÖ” Segment_Point_Analyse ‚ÌŒ‹‰Ê‚ğó‚¯æ‚éˆ×‚Ì\‘¢‘Ì
typedef struct tagSEGMENT_POINT_RESULT_D
{
	double					Seg_Point_MinDist_Square ;	// ü•ª‚Æ“_‚ªÅ‚àÚ‹ß‚·‚éÀ•WŠÔ‚Ì‹——£‚Ì“ñæ
	double					Seg_MinDist_Pos1_Pos2_t ;	// ü•ª‚ª“_‚ÉÅ‚àÚ‹ß‚·‚éÀ•W‚Ìü•ª‚Ì t ( 0.0 ` 1.0 AÅ‹ß“_À•W = ( SegPos2 - SegPos1 ) * t + SegPos1 )
	VECTOR_D				Seg_MinDist_Pos ;			// ü•ª‚ª“_‚ÉÅ‚àÚ‹ß‚·‚éü•ªã‚ÌÀ•W
} SEGMENT_POINT_RESULT_D ;

// ŠÖ” Segment_Triangle_Analyse ‚ÌŒ‹‰Ê‚ğó‚¯æ‚éˆ×‚Ì\‘¢‘Ì
typedef struct tagSEGMENT_TRIANGLE_RESULT
{
	float					Seg_Tri_MinDist_Square ;	// ü•ª‚ÆOŠpŒ`‚ªÅ‚àÚ‹ß‚·‚éÀ•WŠÔ‚Ì‹——£‚Ì“ñæ

	float					Seg_MinDist_Pos1_Pos2_t ;	// ü•ª‚ªOŠpŒ`‚ÉÅ‚àÚ‹ß‚·‚éÀ•W‚Ìü•ª‚Ì t ( 0.0f ` 1.0f AÅ‹ß“_À•W = ( SegPos2 - SegPos1 ) * t + SegPos1 )
	VECTOR					Seg_MinDist_Pos ;			// ü•ª‚ªOŠpŒ`‚ÉÅ‚àÚ‹ß‚·‚éü•ªã‚ÌÀ•W

	float					Tri_MinDist_Pos1_w ;		// OŠpŒ`‚ªü•ª‚ÉÅ‚àÚ‹ß‚·‚éÀ•W‚ÌOŠpŒ`À•W‚P‚Ìd‚İ( Å‹ß“_À•W = TriPos1 * TriPos1_w + TriPos2 * TriPos2_w + TriPos3 * TriPos3_w )
	float					Tri_MinDist_Pos2_w ;		// OŠpŒ`‚ªü•ª‚ÉÅ‚àÚ‹ß‚·‚éÀ•W‚ÌOŠpŒ`À•W‚Q‚Ìd‚İ
	float					Tri_MinDist_Pos3_w ;		// OŠpŒ`‚ªü•ª‚ÉÅ‚àÚ‹ß‚·‚éÀ•W‚ÌOŠpŒ`À•W‚R‚Ìd‚İ
	VECTOR					Tri_MinDist_Pos ;			// OŠpŒ`‚ªü•ª‚ÉÅ‚àÚ‹ß‚·‚éOŠpŒ`ã‚ÌÀ•W
} SEGMENT_TRIANGLE_RESULT ;

// ŠÖ” Segment_Triangle_Analyse ‚ÌŒ‹‰Ê‚ğó‚¯æ‚éˆ×‚Ì\‘¢‘Ì
typedef struct tagSEGMENT_TRIANGLE_RESULT_D
{
	double					Seg_Tri_MinDist_Square ;	// ü•ª‚ÆOŠpŒ`‚ªÅ‚àÚ‹ß‚·‚éÀ•WŠÔ‚Ì‹——£‚Ì“ñæ

	double					Seg_MinDist_Pos1_Pos2_t ;	// ü•ª‚ªOŠpŒ`‚ÉÅ‚àÚ‹ß‚·‚éÀ•W‚Ìü•ª‚Ì t ( 0.0 ` 1.0 AÅ‹ß“_À•W = ( SegPos2 - SegPos1 ) * t + SegPos1 )
	VECTOR_D				Seg_MinDist_Pos ;			// ü•ª‚ªOŠpŒ`‚ÉÅ‚àÚ‹ß‚·‚éü•ªã‚ÌÀ•W

	double					Tri_MinDist_Pos1_w ;		// OŠpŒ`‚ªü•ª‚ÉÅ‚àÚ‹ß‚·‚éÀ•W‚ÌOŠpŒ`À•W‚P‚Ìd‚İ( Å‹ß“_À•W = TriPos1 * TriPos1_w + TriPos2 * TriPos2_w + TriPos3 * TriPos3_w )
	double					Tri_MinDist_Pos2_w ;		// OŠpŒ`‚ªü•ª‚ÉÅ‚àÚ‹ß‚·‚éÀ•W‚ÌOŠpŒ`À•W‚Q‚Ìd‚İ
	double					Tri_MinDist_Pos3_w ;		// OŠpŒ`‚ªü•ª‚ÉÅ‚àÚ‹ß‚·‚éÀ•W‚ÌOŠpŒ`À•W‚R‚Ìd‚İ
	VECTOR_D				Tri_MinDist_Pos ;			// OŠpŒ`‚ªü•ª‚ÉÅ‚àÚ‹ß‚·‚éOŠpŒ`ã‚ÌÀ•W
} SEGMENT_TRIANGLE_RESULT_D ;

// ŠÖ” Triangle_Point_Analyse ‚ÌŒ‹‰Ê‚ğó‚¯æ‚éˆ×‚Ì\‘¢‘Ì
typedef struct tagTRIANGLE_POINT_RESULT
{
	float					Tri_Pnt_MinDist_Square ;	// OŠpŒ`‚Æ“_‚ªÅ‚àÚ‹ß‚·‚éÀ•WŠÔ‚Ì‹——£‚Ì“ñæ

	float					Tri_MinDist_Pos1_w ;		// OŠpŒ`‚ª“_‚ÉÅ‚àÚ‹ß‚·‚éÀ•W‚ÌOŠpŒ`À•W‚P‚Ìd‚İ( Å‹ß“_À•W = TriPos1 * TriPos1_w + TriPos2 * TriPos2_w + TriPos3 * TriPos3_w )
	float					Tri_MinDist_Pos2_w ;		// OŠpŒ`‚ª“_‚ÉÅ‚àÚ‹ß‚·‚éÀ•W‚ÌOŠpŒ`À•W‚Q‚Ìd‚İ
	float					Tri_MinDist_Pos3_w ;		// OŠpŒ`‚ª“_‚ÉÅ‚àÚ‹ß‚·‚éÀ•W‚ÌOŠpŒ`À•W‚R‚Ìd‚İ
	VECTOR					Tri_MinDist_Pos ;			// OŠpŒ`‚ª“_‚ÉÅ‚àÚ‹ß‚·‚éOŠpŒ`ã‚ÌÀ•W
} TRIANGLE_POINT_RESULT ;

// ŠÖ” Triangle_Point_Analyse ‚ÌŒ‹‰Ê‚ğó‚¯æ‚éˆ×‚Ì\‘¢‘Ì
typedef struct tagTRIANGLE_POINT_RESULT_D
{
	double					Tri_Pnt_MinDist_Square ;	// OŠpŒ`‚Æ“_‚ªÅ‚àÚ‹ß‚·‚éÀ•WŠÔ‚Ì‹——£‚Ì“ñæ

	double					Tri_MinDist_Pos1_w ;		// OŠpŒ`‚ª“_‚ÉÅ‚àÚ‹ß‚·‚éÀ•W‚ÌOŠpŒ`À•W‚P‚Ìd‚İ( Å‹ß“_À•W = TriPos1 * TriPos1_w + TriPos2 * TriPos2_w + TriPos3 * TriPos3_w )
	double					Tri_MinDist_Pos2_w ;		// OŠpŒ`‚ª“_‚ÉÅ‚àÚ‹ß‚·‚éÀ•W‚ÌOŠpŒ`À•W‚Q‚Ìd‚İ
	double					Tri_MinDist_Pos3_w ;		// OŠpŒ`‚ª“_‚ÉÅ‚àÚ‹ß‚·‚éÀ•W‚ÌOŠpŒ`À•W‚R‚Ìd‚İ
	VECTOR_D				Tri_MinDist_Pos ;			// OŠpŒ`‚ª“_‚ÉÅ‚àÚ‹ß‚·‚éOŠpŒ`ã‚ÌÀ•W
} TRIANGLE_POINT_RESULT_D ;

// ŠÖ” Plane_Point_Analyse ‚ÌŒ‹‰Ê‚ğó‚¯æ‚éˆ×‚Ì\‘¢‘Ì
typedef struct tagPLANE_POINT_RESULT
{
	int						Pnt_Plane_Normal_Side ;		// “_‚ª•½–Ê‚Ì–@ü‚Ì‘¤‚É‚ ‚é‚©‚Ç‚¤‚©( 1:–@ü‚Ì‘¤‚É‚ ‚é  0:–@ü‚Æ”½‘Î‘¤‚É‚ ‚é )
	float					Plane_Pnt_MinDist_Square ;	// •½–Ê‚Æ“_‚Ì‹——£
	VECTOR					Plane_MinDist_Pos ;			// •½–Êã‚Ì“_‚Æ‚ÌÅ‹ß“_À•W
} PLANE_POINT_RESULT ;

// ŠÖ” Plane_Point_Analyse ‚ÌŒ‹‰Ê‚ğó‚¯æ‚éˆ×‚Ì\‘¢‘Ì
typedef struct tagPLANE_POINT_RESULT_D
{
	int						Pnt_Plane_Normal_Side ;		// “_‚ª•½–Ê‚Ì–@ü‚Ì‘¤‚É‚ ‚é‚©‚Ç‚¤‚©( 1:–@ü‚Ì‘¤‚É‚ ‚é  0:–@ü‚Æ”½‘Î‘¤‚É‚ ‚é )
	double					Plane_Pnt_MinDist_Square ;	// •½–Ê‚Æ“_‚Ì‹——£
	VECTOR_D				Plane_MinDist_Pos ;			// •½–Êã‚Ì“_‚Æ‚ÌÅ‹ß“_À•W
} PLANE_POINT_RESULT_D ;

#ifndef DX_NOTUSE_DRAWFUNCTION

// ƒRƒŠƒWƒ‡ƒ“Œ‹‰Ê‘ã“ü—pƒ|ƒŠƒSƒ“
typedef struct tagMV1_COLL_RESULT_POLY
{
	int						HitFlag ;							// ( MV1CollCheck_Line ‚Å‚Ì‚İ—LŒø )ƒqƒbƒgƒtƒ‰ƒO( 1:ƒqƒbƒg‚µ‚½  0:ƒqƒbƒg‚µ‚È‚©‚Á‚½ )
	VECTOR					HitPosition ;						// ( MV1CollCheck_Line ‚Å‚Ì‚İ—LŒø )ƒqƒbƒgÀ•W

	int						FrameIndex ;						// “–‚½‚Á‚½ƒ|ƒŠƒSƒ“‚ªŠÜ‚Ü‚ê‚éƒtƒŒ[ƒ€‚Ì”Ô†
	int						PolygonIndex ;						// “–‚½‚Á‚½ƒ|ƒŠƒSƒ“‚Ì”Ô†
	int						MaterialIndex ;						// “–‚½‚Á‚½ƒ|ƒŠƒSƒ“‚ªg—p‚µ‚Ä‚¢‚éƒ}ƒeƒŠƒAƒ‹‚Ì”Ô†
	VECTOR					Position[ 3 ] ;						// “–‚½‚Á‚½ƒ|ƒŠƒSƒ“‚ğŒ`¬‚·‚éO“_‚ÌÀ•W
	VECTOR					Normal ;							// “–‚½‚Á‚½ƒ|ƒŠƒSƒ“‚Ì–@ü
	float					PositionWeight[ 3 ] ;				// “–‚½‚Á‚½À•W‚ÍA“–‚½‚Á‚½ƒ|ƒŠƒSƒ“‚ÌO“_‚»‚ê‚¼‚ê‚Ç‚ÌŠ„‡‚Å‰e‹¿‚µ‚Ä‚¢‚é‚©A‚Ì’l( “–‚½‚Á‚½À•W = Position[ 0 ] * PositionWeight[ 0 ] + Position[ 1 ] * PositionWeight[ 1 ] + Position[ 2 ] * PositionWeight[ 2 ] )
} MV1_COLL_RESULT_POLY ;

// ƒRƒŠƒWƒ‡ƒ“Œ‹‰Ê‘ã“ü—pƒ|ƒŠƒSƒ“”z—ñ
typedef struct tagMV1_COLL_RESULT_POLY_DIM
{
	int						HitNum ;							// ƒqƒbƒg‚µ‚½ƒ|ƒŠƒSƒ“‚Ì”
	MV1_COLL_RESULT_POLY *	Dim ;								// ƒqƒbƒg‚µ‚½ƒ|ƒŠƒSƒ“‚Ì”z—ñ( HitNumŒÂ•ª‘¶İ‚·‚é )
} MV1_COLL_RESULT_POLY_DIM ;

// QÆ—p’¸“_\‘¢‘Ì
typedef struct tagMV1_REF_VERTEX
{
	VECTOR					Position ;							// ˆÊ’u
	VECTOR					Normal ;							// –@ü
	FLOAT2					TexCoord[ 2 ] ;						// ƒeƒNƒXƒ`ƒƒÀ•W
	COLOR_U8				DiffuseColor ;						// ƒfƒBƒtƒ…[ƒYƒJƒ‰[
	COLOR_U8				SpecularColor ;						// ƒXƒyƒLƒ…ƒ‰ƒJƒ‰[
} MV1_REF_VERTEX ;

// QÆ—pƒ|ƒŠƒSƒ“\‘¢‘Ì
typedef struct tagMV1_REF_POLYGON
{
	unsigned short			FrameIndex ;						// ‚±‚Ìƒ|ƒŠƒSƒ“‚ª‘®‚µ‚Ä‚¢‚éƒtƒŒ[ƒ€
	unsigned short			MaterialIndex ;						// g—p‚µ‚Ä‚¢‚éƒ}ƒeƒŠƒAƒ‹
	int						VIndexTarget ;						// VIndex ‚ªw‚·ƒCƒ“ƒfƒbƒNƒX‚ÌQÆæ( 1:ƒtƒŒ[ƒ€  0:ƒ‚ƒfƒ‹‘S‘Ì )
	int						VIndex[ 3 ] ;						// ‚RŠpŒ`ƒ|ƒŠƒSƒ“‚ğ¬‚·QÆ’¸“_‚ÌƒCƒ“ƒfƒbƒNƒX
	VECTOR					MinPosition ;						// ƒ|ƒŠƒSƒ“‚ğ¬‚·’¸“_À•W‚ÌÅ¬’l
	VECTOR					MaxPosition ;						// ƒ|ƒŠƒSƒ“‚ğ¬‚·’¸“_À•W‚ÌÅ‘å’l
} MV1_REF_POLYGON ;

// QÆ—pƒ|ƒŠƒSƒ“ƒf[ƒ^\‘¢‘Ì
typedef struct tagMV1_REF_POLYGONLIST
{
	int						PolygonNum ;						// QÆ—pƒ|ƒŠƒSƒ“‚Ì”
	int						VertexNum ;							// ’¸“_‚Ì”
	VECTOR					MinPosition ;						// ’¸“_À•W‚ÌÅ¬’l
	VECTOR					MaxPosition ;						// ’¸“_À•W‚ÌÅ‘å’l
	MV1_REF_POLYGON	*		Polygons ;							// QÆ—pƒ|ƒŠƒSƒ“”z—ñ
	MV1_REF_VERTEX *		Vertexs ;							// QÆ—p’¸“_”z—ñ
} MV1_REF_POLYGONLIST ;

#endif // DX_NOTUSE_DRAWFUNCTION




// ‚R‚cƒTƒEƒ“ƒhƒŠƒo[ƒuƒGƒtƒFƒNƒgƒpƒ‰ƒ[ƒ^\‘¢‘Ì
// ( ’ß‚Í MSDN ‚Ì XAUDIO2FX_REVERB_PARAMETERS \‘¢‘Ì‚Ì‰ğà‚ğ‚Ù‚Úˆø—p‚µ‚Ä‚¢‚Ü‚· )
typedef struct tagSOUND3D_REVERB_PARAM
{
	float					WetDryMix ;							// ƒŠƒo[ƒu‚Æ‚È‚éo—Í‚ÌŠ„‡( w’è‰Â”\”ÍˆÍ 0.0f ` 100.0f )

	unsigned int			ReflectionsDelay ;					// ƒ_ƒCƒŒƒNƒg ƒpƒX‚É‘Î‚·‚é‰Šú”½Ë‚Ì’x‰„ŠÔA’PˆÊ‚Íƒ~ƒŠ•b( w’è‰Â”\”ÍˆÍ 0 ` 300 )
	BYTE					ReverbDelay ;						// ‰Šú”½Ë‚É‘Î‚·‚éƒŠƒo[ƒu‚Ì’x‰„ŠÔA’PˆÊ‚Íƒ~ƒŠ•b( w’è‰Â”\”ÍˆÍ 0 ` 85 )
	BYTE					RearDelay ;							// ¶Œã•ûo—Í‚¨‚æ‚Ñ‰EŒã•ûo—Í‚Ì’x‰„ŠÔA’PˆÊ‚Íƒ~ƒŠ•b( w’è‰Â”\”ÍˆÍ 0 ` 5 )

	BYTE					PositionLeft ;						// ƒVƒ~ƒ…ƒŒ[ƒVƒ‡ƒ“‹óŠÔ‚É‚¨‚¯‚é‹’®Ò‚É‘Î‚·‚é¶“ü—Í‚ÌˆÊ’u( w’è‰Â”\”ÍˆÍ 0 ` 30 )
																// PositionLeft ‚ğÅ¬’l‚Éİ’è‚µ‚½ê‡A¶“ü—Í‚Í‹’®Ò‚Ì‹ß‚­‚É”z’u‚³‚ê‚Ü‚·B
																// ‚±‚ÌˆÊ’u‚Å‚ÍAƒTƒEƒ“ƒh ƒtƒB[ƒ‹ƒh‚É‚¨‚¢‚Ä‰Šú”½Ë‚ª—D¨‚É‚È‚èAc‹¿Œ¸Š‚Íã‚Ü‚Á‚ÄAU•‚ª¬‚³‚­‚È‚è‚Ü‚·B
																// PositionLeft ‚ğÅ‘å’l‚Éİ’è‚µ‚½ê‡A¶“ü—Í‚ÍƒVƒ~ƒ…ƒŒ[ƒVƒ‡ƒ“º“à‚Å‹’®Ò‚©‚çÅ‘åŒÀ‰“‚¢ˆÊ’u‚É”z’u‚³‚ê‚Ü‚·B
																// PositionLeft ‚Íc‹¿Œ¸ŠŠÔ (•”‰®‚Ìc‹¿Œø‰Ê) ‚É‰e‹¿‚¹‚¸A‹’®Ò‚É‘Î‚·‚é‰¹Œ¹‚ÌŒ©‚©‚¯‚ÌˆÊ’u‚Ì‚İ‚É‰e‹¿‚µ‚Ü‚·B
	BYTE					PositionRight ;						// PositionLeft ‚Æ“¯Œø‰Ê‚Ì‰E“ü—Í’l( w’è‰Â”\”ÍˆÍ 0 ` 30 )A‰E“ü—Í‚É‚Ì‚İ‰e‹¿‚ğ—^‚¦‚é
	BYTE					PositionMatrixLeft ;				// ‰¹Œ¹‚©‚ç‹’®Ò‚Ü‚Å‚Ì‹——£‚É‚æ‚éƒCƒ“ƒvƒŒƒbƒVƒ‡ƒ“‚ğ‘Œ¸‚³‚¹‚é’l( w’è‰Â”\”ÍˆÍ 0 ` 30 )
	BYTE					PositionMatrixRight ;				// ‰¹Œ¹‚©‚ç‹’®Ò‚Ü‚Å‚Ì‹——£‚É‚æ‚éƒCƒ“ƒvƒŒƒbƒVƒ‡ƒ“‚ğ‘Œ¸‚³‚¹‚Ü’l( w’è‰Â”\”ÍˆÍ 0 ` 30 )
	BYTE					EarlyDiffusion ;					// ŒÂX‚Ì•Ç‚Ì”½Ë“Á«’l( w’è‰Â”\”ÍˆÍ 0 ` 15 )A( Œ˜‚­•½‚ç‚È•\–Ê‚ğƒVƒ~ƒ…ƒŒ[ƒg‚·‚é‚É‚Í¬‚³‚È’l‚ğİ’è‚µAU—«‚Ì•\–Ê‚ğƒVƒ~ƒ…ƒŒ[ƒg‚·‚é‚É‚Í‘å‚«‚È’l‚ğİ’è‚µ‚Ü‚·B)
	BYTE					LateDiffusion ;						// ŒÂX‚Ì•Ç‚ÌƒŠƒo[ƒu“Á«’l( w’è‰Â”\”ÍˆÍ 0 ` 15 )A( Œ˜‚­•½‚ç‚È•\–Ê‚ğƒVƒ~ƒ…ƒŒ[ƒg‚·‚é‚É‚Í¬‚³‚È’l‚ğİ’è‚µAU—«‚Ì•\–Ê‚ğƒVƒ~ƒ…ƒŒ[ƒg‚·‚é‚É‚Í‘å‚«‚È’l‚ğİ’è‚µ‚Ü‚·B)
	BYTE					LowEQGain ;							// 1 kHz ‚É‚¨‚¯‚éŒ¸ŠŠÔ‚ğŠî€‚É‚µ‚Ä’áü”g”‚ÌŒ¸ŠŠÔ’²®’l( w’è‰Â”\”ÍˆÍ 0 ` 12 )
																// ’l‚ÆƒQƒCƒ“ (dB) ‚ÌŠÖŒW
																// ’l          0  1  2  3  4  5  6  7  8  9 10 11 12
																// ƒQƒCƒ“(dB) -8 -7 -6 -5 -4 -3 -2 -1  0 +1 +2 +3 +4
																// LowEQGain ‚Ì’l‚ª 8 ‚Ìê‡A’áü”g”‚ÌŒ¸ŠŠÔ‚Æ 1 kHz ‚É‚¨‚¯‚éŒ¸ŠŠÔ‚ª“™‚µ‚­‚È‚é‚±‚Æ‚É’ˆÓ‚µ‚Ä‚­‚¾‚³‚¢
	BYTE					LowEQCutoff ;						// LowEQGain ƒpƒ‰ƒ[ƒ^[‚É‚æ‚è§Œä‚³‚ê‚éƒ[ƒpƒX ƒtƒBƒ‹ƒ^[‚ÌÜ“_ü”g”‚Ìİ’è’l( w’è‰Â”\”ÍˆÍ 0 ` 9 )
																// ’l‚Æü”g” (Hz) ‚ÌŠÖŒW
																// ’l          0   1   2   3   4   5   6   7   8   9
																// ü”g”(Hz) 50 100 150 200 250 300 350 400 450 500
	BYTE					HighEQGain ;						// 1 kHz ‚É‚¨‚¯‚éŒ¸ŠŠÔ‚ğŠî€‚É‚µ‚Ä‚ü”g”‚ÌŒ¸ŠŠÔ’²®’l( w’è‰Â”\”ÍˆÍ 0 ` 8 )
																// ’l‚ÆƒQƒCƒ“ (dB) ‚ÌŠÖŒW
																// ’l          0  1  2  3  4  5  6  7 8
																// ƒQƒCƒ“(dB) -8 -7 -6 -5 -4 -3 -2 -1 0
																// 0 ‚Éİ’è‚·‚é‚ÆA‚ü”g”‚Ì‰¹‚ª 1 kHz ‚Ìê‡‚Æ“¯‚¶Š„‡‚ÅŒ¸Š‚µ‚Ü‚·BÅ‘å’l‚Éİ’è‚·‚é‚ÆA‚ü”g”‚Ì‰¹‚ª 1 kHz ‚Ìê‡‚æ‚è‚à‚Í‚é‚©‚É‚‚¢Š„‡‚ÅŒ¸Š‚µ‚Ü‚·B
	BYTE					HighEQCutoff ;						// HighEQGain ƒpƒ‰ƒ[ƒ^[‚É‚æ‚è§Œä‚³‚ê‚éƒnƒCƒpƒX ƒtƒBƒ‹ƒ^[‚ÌÜ“_ü”g”İ’è’l( w’è‰Â”\”ÍˆÍ 0 ` 14 )
																// ’l‚Æü”g” (kHz) ‚ÌŠÖŒW
																// ’l          0    1    2     3    4     5    6     7    8     9   10    11   12    13   14
																// ü”g”(kHz) 1  1.5    2   2.5    3   3.5    4   4.5    5   5.5    6   6.5    7   7.5    8

	float					RoomFilterFreq ;					// º“àƒGƒtƒFƒNƒg‚Ìƒ[ƒpƒX ƒtƒBƒ‹ƒ^[‚ÌÜ“_ü”g”A’PˆÊ‚Í Hz ( w’è‰Â”\”ÍˆÍ 20.0f ` 20000.0f )
	float					RoomFilterMain ;					// ‰Šú”½Ë‚ÆŒãŠúƒtƒB[ƒ‹ƒhc‹¿‚Ì—¼•û‚É“K—p‚³‚ê‚éƒ[ƒpƒX ƒtƒBƒ‹ƒ^[‚ÌƒpƒX ƒoƒ“ƒh‹­“xƒŒƒxƒ‹A’PˆÊ‚Í dB ( w’è‰Â”\”ÍˆÍ -100.0f ` 0.0f )
	float					RoomFilterHF ;						// Ü“_ü”g” (RoomFilterFreq) ‚Å‚Ì‰Šú”½Ë‚ÆŒãŠúƒtƒB[ƒ‹ƒhc‹¿‚Ì—¼•û‚É“K—p‚³‚ê‚éƒ[ƒpƒX ƒtƒBƒ‹ƒ^[‚ÌƒpƒX ƒoƒ“ƒh‹­“xƒŒƒxƒ‹A’PˆÊ‚Í dB ( w’è‰Â”\”ÍˆÍ -100.0f ` 0.0f )
	float					ReflectionsGain ;					// ‰Šú”½Ë‚Ì‹­“x/ƒŒƒxƒ‹‚ğ’²®’lA’PˆÊ‚Í dB ( w’è‰Â”\”ÍˆÍ -100.0f ` 20.0f )
	float					ReverbGain ;						// ƒŠƒo[ƒu‚Ì‹­“x/ƒŒƒxƒ‹‚ğ’²®’lA’PˆÊ‚Í dB ( w’è‰Â”\”ÍˆÍ -100.0f ` 20.0f )
	float					DecayTime ;							// 1 kHz ‚É‚¨‚¯‚éc‹¿Œ¸ŠŠÔA’PˆÊ‚Í•b ( w’è‰Â”\”ÍˆÍ 0.1f ` ãŒÀ’l“Á‚É‚È‚µ )A‚±‚ê‚ÍAƒtƒ‹ ƒXƒP[ƒ‹‚Ì“ü—ÍM†‚ª 60 dB Œ¸Š‚·‚é‚Ü‚Å‚ÌŠÔ‚Å‚·B
	float					Density ;							// ŒãŠúƒtƒB[ƒ‹ƒhc‹¿‚Ìƒ‚[ƒh–§“x‚ğ§Œä’lA’PˆÊ‚Íƒp[ƒZƒ“ƒg( w’è‰Â”\”ÍˆÍ 0.0f ` 100.0f )
																// –³F (colorless) ‚Ì‹óŠÔ‚Å‚ÍADensity ‚ğÅ‘å’l (100.0f ) ‚Éİ’è‚·‚é•K—v‚ª‚ ‚è‚Ü‚·B
																// Density ‚ğ¬‚³‚­‚·‚é‚ÆAƒTƒEƒ“ƒh‚Í‚­‚®‚à‚Á‚½‰¹ (‚­‚µŒ`ƒtƒBƒ‹ƒ^[‚ª“K—p‚³‚ê‚½‰¹) ‚É‚È‚è‚Ü‚·B
																// ‚±‚ê‚ÍƒTƒCƒ‚ğƒVƒ~ƒ…ƒŒ[ƒVƒ‡ƒ“‚·‚é‚Æ‚«‚É—LŒø‚ÈƒGƒtƒFƒNƒg‚Å‚·B
	float					RoomSize ;							// ‰¹‹¿‹óŠÔ‚ÌŒ©‚©‚¯ã‚ÌƒTƒCƒYA’PˆÊ‚ÍƒtƒB[ƒg( w’è‰Â”\”ÍˆÍ 1.0f (30.48 cm) ` 100.0f (30.48 m) )
} SOUND3D_REVERB_PARAM ;





// ƒXƒgƒŠ[ƒ€ƒf[ƒ^§Œä—pŠÖ”ƒ|ƒCƒ“ƒ^\‘¢‘Ìƒ^ƒCƒv‚Q
typedef struct tagSTREAMDATASHREDTYPE2
{
	DWORD_PTR				(*Open		)( const TCHAR *Path, int UseCacheFlag, int BlockReadFlag, int UseASyncReadFlag ) ;
	int						(*Close		)( DWORD_PTR Handle ) ;
	LONGLONG				(*Tell		)( DWORD_PTR Handle ) ;
	int						(*Seek		)( DWORD_PTR Handle, LONGLONG SeekPoint, int SeekType ) ;
	size_t					(*Read		)( void *Buffer, size_t BlockSize, size_t DataNum, DWORD_PTR Handle ) ;
	int						(*Eof		)( DWORD_PTR Handle ) ;
	int						(*IdleCheck	)( DWORD_PTR Handle ) ;
	int						(*ChDir		)( const TCHAR *Path ) ;
	int						(*GetDir	)( TCHAR *Buffer ) ;
	int						(*GetDirS	)( TCHAR *Buffer, size_t BufferSize ) ;
	DWORD_PTR				(*FindFirst	)( const TCHAR *FilePath, FILEINFO *Buffer ) ;		// –ß‚è’l: -1=ƒGƒ‰[  -1ˆÈŠO=FindHandle
	int						(*FindNext	)( DWORD_PTR FindHandle, FILEINFO *Buffer ) ;			// –ß‚è’l: -1=ƒGƒ‰[  0=¬Œ÷
	int						(*FindClose	)( DWORD_PTR FindHandle ) ;							// –ß‚è’l: -1=ƒGƒ‰[  0=¬Œ÷
} STREAMDATASHREDTYPE2 ;

// ƒXƒgƒŠ[ƒ€ƒf[ƒ^§Œä—pŠÖ”ƒ|ƒCƒ“ƒ^\‘¢‘Ìƒ^ƒCƒv‚Q‚Ì wchar_t g—p”Å
typedef struct tagSTREAMDATASHREDTYPE2W
{
	DWORD_PTR				(*Open		)( const wchar_t *Path, int UseCacheFlag, int BlockReadFlag, int UseASyncReadFlag ) ;
	int						(*Close		)( DWORD_PTR Handle ) ;
	LONGLONG				(*Tell		)( DWORD_PTR Handle ) ;
	int						(*Seek		)( DWORD_PTR Handle, LONGLONG SeekPoint, int SeekType ) ;
	size_t					(*Read		)( void *Buffer, size_t BlockSize, size_t DataNum, DWORD_PTR Handle ) ;
	int						(*Eof		)( DWORD_PTR Handle ) ;
	int						(*IdleCheck	)( DWORD_PTR Handle ) ;
	int						(*ChDir		)( const wchar_t *Path ) ;
	int						(*GetDir	)( wchar_t *Buffer ) ;
	int						(*GetDirS	)( wchar_t *Buffer, size_t BufferSize ) ;
	DWORD_PTR				(*FindFirst	)( const wchar_t *FilePath, FILEINFOW *Buffer ) ;		// –ß‚è’l: -1=ƒGƒ‰[  -1ˆÈŠO=FindHandle
	int						(*FindNext	)( DWORD_PTR FindHandle, FILEINFOW *Buffer ) ;			// –ß‚è’l: -1=ƒGƒ‰[  0=¬Œ÷
	int						(*FindClose	)( DWORD_PTR FindHandle ) ;								// –ß‚è’l: -1=ƒGƒ‰[  0=¬Œ÷
} STREAMDATASHREDTYPE2W ;

// ƒXƒgƒŠ[ƒ€ƒf[ƒ^§Œä—pŠÖ”ƒ|ƒCƒ“ƒ^\‘¢‘Ì
typedef struct tagSTREAMDATASHRED
{
	LONGLONG				(*Tell		)( void *StreamDataPoint ) ;
	int						(*Seek		)( void *StreamDataPoint, LONGLONG SeekPoint, int SeekType ) ;
	size_t					(*Read		)( void *Buffer, size_t BlockSize, size_t DataNum, void *StreamDataPoint ) ;
//	size_t					(*Write		)( void *Buffer, size_t BlockSize, size_t DataNum, void *StreamDataPoint ) ;
	int						(*Eof		)( void *StreamDataPoint ) ;
	int						(*IdleCheck	)( void *StreamDataPoint ) ;
	int						(*Close		)( void *StreamDataPoint ) ;
} STREAMDATASHRED, *LPSTREAMDATASHRED ;

// ƒXƒgƒŠ[ƒ€ƒf[ƒ^§Œä—pƒf[ƒ^\‘¢‘Ì
typedef struct tagSTREAMDATA
{
	STREAMDATASHRED			ReadShred ;
	void					*DataPoint ;
} STREAMDATA ;





// ƒpƒŒƒbƒgî•ñ\‘¢‘Ì
typedef struct tagCOLORPALETTEDATA
{
	unsigned char			Blue ;
	unsigned char			Green ;
	unsigned char			Red ;
	unsigned char			Alpha ;
} COLORPALETTEDATA ;

// ƒJƒ‰[\‘¢î•ñ\‘¢‘Ì
typedef struct tagCOLORDATA
{
	unsigned char			Format ;										// ƒtƒH[ƒ}ƒbƒg( DX_BASEIMAGE_FORMAT_NORMAL “™ )

	unsigned char			ChannelNum ;									// ƒ`ƒƒƒ“ƒlƒ‹”
	unsigned char			ChannelBitDepth ;								// ‚Pƒ`ƒƒƒ“ƒlƒ‹•Ó‚è‚Ìƒrƒbƒg[“x
	unsigned char			FloatTypeFlag ;									// •‚“®¬”“_Œ^‚©‚Ç‚¤‚©( TRUE:•‚“®¬”“_Œ^  FALSE:®”Œ^ )
	unsigned char			PixelByte ;										// ‚PƒsƒNƒZƒ‹‚ ‚½‚è‚ÌƒoƒCƒg”

	// ˆÈ‰º‚Í ChannelNum –”‚Í ChannelBitDepth ‚ª 0 ‚Ì‚Ì‚İ—LŒø
	unsigned char			ColorBitDepth ;									// ƒrƒbƒg[“x
	unsigned char			NoneLoc, NoneWidth ;							// g‚í‚ê‚Ä‚¢‚È‚¢ƒrƒbƒg‚ÌƒAƒhƒŒƒX‚Æ•
	unsigned char			RedWidth, GreenWidth, BlueWidth, AlphaWidth ;	// ŠeF‚Ìƒrƒbƒg•
	unsigned char			RedLoc	, GreenLoc  , BlueLoc  , AlphaLoc   ;	// ŠeF‚Ì”z’u‚³‚ê‚Ä‚¢‚éƒrƒbƒgƒAƒhƒŒƒX
	unsigned int			RedMask , GreenMask , BlueMask , AlphaMask  ;	// ŠeF‚Ìƒrƒbƒgƒ}ƒXƒN
	unsigned int			NoneMask ;										// g‚í‚ê‚Ä‚¢‚È‚¢ƒrƒbƒg‚Ìƒ}ƒXƒN
	int						MaxPaletteNo ;									// g—p‚µ‚Ä‚¢‚éƒpƒŒƒbƒg”Ô†‚ÌÅ‘å’l( 0 ‚Ìê‡‚Í 255 ‚Æ‚İ‚È‚· )

	// memo : ‚±‚±‚æ‚èã‚Éƒƒ“ƒo[•Ï”‚ğ’Ç‰Á‚µ‚½‚ç DxBaseImage.cpp ‚Ì NS_GraphColorMatchBltVer2 ‚ÌƒAƒZƒ“ƒuƒ‰‚Å‚ÌƒpƒŒƒbƒgƒf[ƒ^QÆ‚ÌƒŠƒeƒ‰ƒ‹’l‚ğC³‚·‚é•K—v‚ ‚è
	COLORPALETTEDATA		Palette[ 256 ] ;								// ƒpƒŒƒbƒg( ColorBitDepth ‚ª‚WˆÈ‰º‚Ìê‡‚Ì‚İ—LŒø )
} COLORDATA, *LPCOLORDATA ;

// Šî–{ƒCƒ[ƒWƒf[ƒ^\‘¢‘Ì
typedef struct tagBASEIMAGE
{
	COLORDATA				ColorData ;							// Fî•ñ
	int						Width, Height, Pitch ;				// •A‚‚³Aƒsƒbƒ`
	void					*GraphData ;						// ƒOƒ‰ƒtƒBƒbƒNƒCƒ[ƒW
	int						MipMapCount ;						// ƒ~ƒbƒvƒ}ƒbƒv‚Ì”
	int						GraphDataCount ;					// ƒOƒ‰ƒtƒBƒbƒNƒCƒ[ƒW‚Ì”
} BASEIMAGE, GRAPHIMAGE, *LPGRAPHIMAGE ;

// ƒ‰ƒCƒ“ƒf[ƒ^Œ^
typedef struct tagLINEDATA
{
	int						x1, y1, x2, y2 ;					// À•W
	unsigned int			color ;								// F
	int						pal ;								// ƒpƒ‰ƒ[ƒ^
} LINEDATA, *LPLINEDATA ;

// À•Wƒf[ƒ^Œ^
typedef struct tagPOINTDATA
{
	int						x, y ;								// À•W
	unsigned int			color ;								// F
	int						pal ;								// ƒpƒ‰ƒ[ƒ^
} POINTDATA, *LPPOINTDATA ;

#ifndef DX_NOTUSE_DRAWFUNCTION

// ƒCƒ[ƒWƒtƒH[ƒ}ƒbƒgƒf[ƒ^
typedef struct tagIMAGEFORMATDESC
{
	unsigned char			TextureFlag ;					// ƒeƒNƒXƒ`ƒƒ‚©Aƒtƒ‰ƒO( TRUE:ƒeƒNƒXƒ`ƒƒ  FALSE:•W€ƒT[ƒtƒFƒX )
	unsigned char			CubeMapTextureFlag ;			// ƒLƒ…[ƒuƒ}ƒbƒvƒeƒNƒXƒ`ƒƒ‚©Aƒtƒ‰ƒO( TRUE:ƒLƒ…[ƒuƒ}ƒbƒvƒeƒNƒXƒ`ƒƒ@FALSE:‚»‚êˆÈŠO )
	unsigned char			AlphaChFlag ;					// ƒ¿ƒ`ƒƒƒ“ƒlƒ‹‚Í‚ ‚é‚©Aƒtƒ‰ƒO	( TRUE:‚ ‚é  FALSE:‚È‚¢ )
	unsigned char			DrawValidFlag ;					// •`‰æ‰Â”\‚©Aƒtƒ‰ƒO( TRUE:‰Â”\  FALSE:•s‰Â”\ )
	unsigned char			SystemMemFlag ;					// ƒVƒXƒeƒ€ƒƒ‚ƒŠã‚É‘¶İ‚µ‚Ä‚¢‚é‚©Aƒtƒ‰ƒO( TRUE:ƒVƒXƒeƒ€ƒƒ‚ƒŠã  FALSE:‚u‚q‚`‚lã )( •W€ƒT[ƒtƒFƒX‚Ì‚Ì‚İ—LŒø )
	unsigned char			UseManagedTextureFlag ;			// ƒ}ƒl[ƒWƒhƒeƒNƒXƒ`ƒƒ‚ğg—p‚·‚é‚©Aƒtƒ‰ƒO
	unsigned char			UseLinearMapTextureFlag ;		// ƒeƒNƒXƒ`ƒƒ‚Ìƒƒ‚ƒŠƒf[ƒ^”z’u‚ÉƒŠƒjƒA‚ª‘I‘ğ‚Å‚«‚éê‡‚Íƒf[ƒ^”z’u•û®‚ğƒŠƒjƒA‚É‚·‚é‚©‚Ç‚¤‚©( TRUE:ƒŠƒjƒA‚ª‰Â”\‚Èê‡‚ÍƒŠƒjƒA‚É‚·‚é  FALSE:ƒŠƒjƒA‚ª‰Â”\‚Èê‡‚à“Á‚ÉƒŠƒjƒA‚ğw’è‚µ‚È‚¢ )
	unsigned char			PlatformTextureFormat ;			// ŠÂ‹«ˆË‘¶‚ÌƒeƒNƒXƒ`ƒƒƒtƒH[ƒ}ƒbƒg‚ğ’¼Úw’è‚·‚é‚½‚ß‚Ég—p‚·‚é‚½‚ß‚Ì•Ï”( DX_TEXTUREFORMAT_DIRECT3D9_R8G8B8 ‚È‚Ç )

	unsigned char			BaseFormat ;					// Šî–{ƒtƒH[ƒ}ƒbƒg( DX_BASEIMAGE_FORMAT_NORMAL “™ )
	unsigned char			MipMapCount ;					// ƒ~ƒbƒvƒ}ƒbƒv‚Ì”
	unsigned char			AlphaTestFlag ;					// ƒ¿ƒeƒXƒgƒ`ƒƒƒ“ƒlƒ‹‚Í‚ ‚é‚©Aƒtƒ‰ƒO( TRUE:‚ ‚é  FALSE:‚È‚¢ )( ƒeƒNƒXƒ`ƒƒ‚Ìê‡‚Ì‚İ—LŒø )
	unsigned char			FloatTypeFlag ;					// •‚“®¬”“_Œ^‚©‚Ç‚¤‚©
	unsigned char			ColorBitDepth ;					// F[“x( ƒeƒNƒXƒ`ƒƒ‚Ìê‡‚Ì‚İ—LŒø )
	unsigned char			ChannelNum ;					// ƒ`ƒƒƒ“ƒlƒ‹‚Ì”
	unsigned char			ChannelBitDepth ;				// ‚Pƒ`ƒƒƒ“ƒlƒ‹•Ó‚è‚Ìƒrƒbƒg[“x( ƒeƒNƒXƒ`ƒƒ‚Ìê‡‚Ì‚İ—LŒøA0 ‚Ìê‡‚Í ColorBitDepth ‚ªg—p‚³‚ê‚é )
	unsigned char			BlendGraphFlag ;				// ƒuƒŒƒ“ƒh—p‰æ‘œ‚©Aƒtƒ‰ƒO
	unsigned char			UsePaletteFlag ;				// ƒpƒŒƒbƒg‚ğg—p‚µ‚Ä‚¢‚é‚©Aƒtƒ‰ƒO( SystemMemFlag ‚ª TRUE ‚Ìê‡‚Ì‚İ—LŒø )

	unsigned char			MSSamples ;						// ƒ}ƒ‹ƒ`ƒTƒ“ƒvƒŠƒ“ƒO”( •`‰æ‘ÎÛ‚Ìê‡g—p )
	unsigned char			MSQuality ;						// ƒ}ƒ‹ƒ`ƒTƒ“ƒvƒŠƒ“ƒOƒNƒIƒŠƒeƒB( •`‰æ‘ÎÛ‚Ìê‡g—p )
} IMAGEFORMATDESC ;

#endif // DX_NOTUSE_DRAWFUNCTION

// DirectInput ‚ÌƒWƒ‡ƒCƒpƒbƒh“ü—Íî•ñ
typedef struct tagDINPUT_JOYSTATE
{
	int						X ;								// ƒXƒeƒBƒbƒN‚Ì‚w²ƒpƒ‰ƒ[ƒ^( -1000`1000 )
	int						Y ;								// ƒXƒeƒBƒbƒN‚Ì‚x²ƒpƒ‰ƒ[ƒ^( -1000`1000 )
	int						Z ;								// ƒXƒeƒBƒbƒN‚Ì‚y²ƒpƒ‰ƒ[ƒ^( -1000`1000 )
	int						Rx ;							// ƒXƒeƒBƒbƒN‚Ì‚w²‰ñ“]ƒpƒ‰ƒ[ƒ^( -1000`1000 )
	int						Ry ;							// ƒXƒeƒBƒbƒN‚Ì‚x²‰ñ“]ƒpƒ‰ƒ[ƒ^( -1000`1000 )
	int						Rz ;							// ƒXƒeƒBƒbƒN‚Ì‚y²‰ñ“]ƒpƒ‰ƒ[ƒ^( -1000`1000 )
	int						Slider[ 2 ] ;					// ƒXƒ‰ƒCƒ_[“ñ‚Â
	unsigned int			POV[ 4 ] ;						// ƒnƒbƒgƒXƒCƒbƒ`‚S‚Â( 0xffffffff:“ü—Í‚È‚µ 0:ã 4500:‰Eã 9000:‰E 13500:‰E‰º 18000:‰º 22500:¶‰º 27000:¶ 31500:¶ã )
	unsigned char			Buttons[ 32 ] ;					// ƒ{ƒ^ƒ“‚R‚QŒÂ( ‰Ÿ‚³‚ê‚½ƒ{ƒ^ƒ“‚Í 128 ‚É‚È‚é )
} DINPUT_JOYSTATE ;

// XInput ‚ÌƒWƒ‡ƒCƒpƒbƒh“ü—Íî•ñ
typedef struct tagXINPUT_STATE
{
	unsigned char			Buttons[ 16 ] ;					// ƒ{ƒ^ƒ“‚P‚UŒÂ( “Yš‚É‚Í XINPUT_BUTTON_DPAD_UP “™‚ğg—p‚·‚éA0:‰Ÿ‚³‚ê‚Ä‚¢‚È‚¢  1:‰Ÿ‚³‚ê‚Ä‚¢‚é )
	unsigned char			LeftTrigger ;					// ¶ƒgƒŠƒK[( 0`255 )
	unsigned char			RightTrigger ;					// ‰EƒgƒŠƒK[( 0`255 )
	short					ThumbLX ;						// ¶ƒXƒeƒBƒbƒN‚Ì‰¡²’l( -32768 ` 32767 )
	short					ThumbLY ;						// ¶ƒXƒeƒBƒbƒN‚Ìc²’l( -32768 ` 32767 )
	short					ThumbRX ;						// ‰EƒXƒeƒBƒbƒN‚Ì‰¡²’l( -32768 ` 32767 )
	short					ThumbRY ;						// ‰EƒXƒeƒBƒbƒN‚Ìc²’l( -32768 ` 32767 )
} XINPUT_STATE ;

// ƒ^ƒbƒ`ƒpƒlƒ‹‚Ì‚P‰ÓŠ•ª‚Ìƒ^ƒbƒ`‚Ìî•ñ
typedef struct tagTOUCHINPUTPOINT
{
	DWORD					Device ;						// ƒ^ƒbƒ`‚³‚ê‚½ƒfƒoƒCƒX
	DWORD					ID ;							// ƒ^ƒbƒ`‚ğ”»•Ê‚·‚é‚½‚ß‚Ì‚h‚c
	int						PositionX ;						// ƒ^ƒbƒ`‚³‚ê‚½À•WX
	int						PositionY ;						// ƒ^ƒbƒ`‚³‚ê‚½À•WY
} TOUCHINPUTPOINT ;

// ƒ^ƒbƒ`ƒpƒlƒ‹‚Ìƒ^ƒbƒ`‚Ìî•ñ
typedef struct tagTOUCHINPUTDATA
{
	LONGLONG				Time ;							// î•ñ‚ÌŠÔ

	int						PointNum ;						// —LŒø‚Èƒ^ƒbƒ`î•ñ‚Ì”
	TOUCHINPUTPOINT			Point[ TOUCHINPUTPOINT_MAX ] ;	// ƒ^ƒbƒ`î•ñ
} TOUCHINPUTDATA ;






// WinSocketsg—p‚ÌƒAƒhƒŒƒXw’è—p\‘¢‘Ì
typedef struct tagIPDATA
{
	unsigned char			d1, d2, d3, d4 ;				// ƒAƒhƒŒƒX’l
} IPDATA, *LPIPDATA ;

typedef struct tagIPDATA_IPv6
{
	union
	{
		unsigned char			Byte[ 16 ] ;
		unsigned short			Word[ 8 ] ;
	} ;
} IPDATA_IPv6 ;

#define DX_STRUCT_END


#ifndef DX_NON_NAMESPACE

}

#endif // DX_NON_NAMESPACE

// ŠÖ”ƒvƒƒgƒ^ƒCƒvéŒ¾------------------------------------------------------------------

#ifdef __WINDOWS__
#include "DxFunctionWin.h"
#endif

#ifdef __psp2__
#include "DxFunctionPSVita.h"
#endif

#ifdef __ORBIS__
#include "DxFunctionPS4.h"
#endif

#ifdef __ANDROID__
#include "DxFunctionAndroid.h"
#endif

#ifdef NN_NINTENDO_SDK
#include "DxFunctionNSW.h"
#endif


#ifndef DX_NON_NAMESPACE

namespace DxLib
{

#endif // DX_NON_NAMESPACE

#define DX_FUNCTION_START

// DxSystem.cppŠÖ”ƒvƒƒgƒ^ƒCƒvéŒ¾

// ‰Šú‰»I—¹ŒnŠÖ”
extern	int			DxLib_Init( void ) ;													// ƒ‰ƒCƒuƒ‰ƒŠ‰Šú‰»‚ğs‚¤
extern	int			DxLib_End( void ) ;														// ƒ‰ƒCƒuƒ‰ƒŠg—p‚ÌŒãn––‚ğs‚¤

extern	int			DxLib_GlobalStructInitialize( void ) ;									// ƒ‰ƒCƒuƒ‰ƒŠ‚Ì“à•”‚Åg—p‚µ‚Ä‚¢‚é\‘¢‘Ì‚ğƒ[ƒ‰Šú‰»‚µ‚ÄADxLib_Init ‚Ì‘O‚És‚Á‚½İ’è‚ğ–³Œø‰»‚·‚é( DxLib_Init ‚Ì‘O‚Å‚Ì‚İ—LŒø )
extern	int			DxLib_IsInit( void ) ;													// ƒ‰ƒCƒuƒ‰ƒŠ‚ª‰Šú‰»‚³‚ê‚Ä‚¢‚é‚©‚Ç‚¤‚©‚ğæ“¾‚·‚é( –ß‚è’l: TRUE=‰Šú‰»‚³‚ê‚Ä‚¢‚é  FALSE=‚³‚ê‚Ä‚¢‚È‚¢ )

// ƒGƒ‰[ŠÖŒWŠÖ”
extern	int			GetLastErrorCode( void ) ;												// ÅŒã‚É”­¶‚µ‚½ƒGƒ‰[‚ÌƒGƒ‰[ƒR[ƒh‚ğæ“¾‚·‚é( –ß‚è’l@0:ƒGƒ‰[‚ª”­¶‚µ‚Ä‚¢‚È‚¢A–”‚ÍƒGƒ‰[ƒR[ƒho—Í‚É‘Î‰‚µ‚½ƒGƒ‰[‚ª”­¶‚µ‚Ä‚¢‚È‚¢@@0ˆÈŠOFƒGƒ‰[ƒR[ƒhADX_ERRORCODE_WIN_DESKTOP_24BIT_COLOR ‚È‚Ç )
extern	int			GetLastErrorMessage( TCHAR *StringBuffer, int StringBufferBytes ) ;		// ÅŒã‚É”­¶‚µ‚½ƒGƒ‰[‚ÌƒGƒ‰[ƒƒbƒZ[ƒW‚ğw’è‚Ì•¶š—ñƒoƒbƒtƒ@‚Éæ“¾‚·‚é

// ƒƒbƒZ[ƒWˆ—ŠÖ”
extern	int			ProcessMessage( void ) ;												// ƒEƒCƒ“ƒhƒEƒY‚ÌƒƒbƒZ[ƒWƒ‹[ƒv‚É‘ã‚í‚éˆ—‚ğs‚¤

// İ’èŒnŠÖ”
extern	int			SetAlwaysRunFlag( int Flag ) ;											// ƒAƒvƒŠ‚ª”ñƒAƒNƒeƒBƒuó‘Ô‚Å‚àˆ—‚ğÀs‚·‚é‚©‚Ç‚¤‚©‚ğİ’è‚·‚é( TRUE:Às‚·‚é  FALSE:’â~‚·‚é( ƒfƒtƒHƒ‹ƒg ) )

// ƒEƒGƒCƒgŒnŠÖ”
extern	int			WaitTimer( int WaitTime ) ;												// w’è‚ÌŠÔ‚¾‚¯ˆ—‚ğ‚Æ‚ß‚é
#ifndef DX_NON_INPUT
extern	int			WaitKey( void ) ;														// ƒL[‚Ì“ü—Í‘Ò‚¿‚ğs‚¤
#endif // DX_NON_INPUT

// ƒJƒEƒ“ƒ^‹y‚Ñæ“¾ŒnŠÖ”
extern	int			GetNowCount(				int UseRDTSCFlag = FALSE ) ;				// ƒ~ƒŠ•b’PˆÊ‚Ì¸“x‚ğ‚ÂƒJƒEƒ“ƒ^‚ÌŒ»İ’l‚ğ“¾‚é
extern	LONGLONG	GetNowHiPerformanceCount(	int UseRDTSCFlag = FALSE ) ;				// GetNowCount‚Ì‚¸“xƒo[ƒWƒ‡ƒ“
extern	int			GetDateTime(				DATEDATA *DateBuf ) ;						// Œ»İ‚ğæ“¾‚·‚é 

// —”æ“¾
extern	int			GetRand( int RandMax ) ;												// —”‚ğæ“¾‚·‚é( RandMax : •Ô‚Á‚Ä—ˆ‚é’l‚ÌÅ‘å’l )
extern	int			SRand(	 int Seed ) ;													// —”‚Ì‰Šú’l‚ğİ’è‚·‚é








// DxLog.cppŠÖ”ƒvƒƒgƒ^ƒCƒvéŒ¾

#ifndef DX_NON_LOG
// ƒƒOƒtƒ@ƒCƒ‹ŠÖ”
extern	int			LogFileAdd(			 const TCHAR *String ) ;							// ƒƒOƒtƒ@ƒCƒ‹( Log.txt ) ‚É•¶š—ñ‚ğo—Í‚·‚é
extern 	int			LogFileFmtAdd(		 const TCHAR *FormatString , ... ) ;				// ‘®•t‚«‚Å ƒƒOƒtƒ@ƒCƒ‹( Log.txt ) ‚É•¶š—ñ‚ğo—Í‚·‚é( ‘®‚Í printf ‚Æ“¯‚¶ )
extern	int			LogFileTabAdd(		 void ) ;											// ƒƒOƒtƒ@ƒCƒ‹( Log.txt ) ‚Éo—Í‚·‚é•¶š—ñ‚Ì‘O‚É•t‚¯‚éƒ^ƒu‚Ì”‚ğˆê‚Â‘‚â‚·
extern	int			LogFileTabSub(		 void ) ;											// ƒƒOƒtƒ@ƒCƒ‹( Log.txt ) ‚Éo—Í‚·‚é•¶š—ñ‚Ì‘O‚É•t‚¯‚éƒ^ƒu‚Ì”‚ğˆê‚ÂŒ¸‚ç‚·
extern	int			ErrorLogAdd(		 const TCHAR *String ) ;							// LogFileAdd ‚Ì‹Œ–¼ÌŠÖ”
extern 	int			ErrorLogFmtAdd(		 const TCHAR *FormatString , ... ) ;				// LogFileFmtAdd ‚Ì‹Œ–¼ÌŠÖ”
extern	int			ErrorLogTabAdd(		 void ) ;											// LogFileTabAdd ‚Ì‹Œ–¼ÌŠÖ”
extern	int			ErrorLogTabSub(		 void ) ;											// LogFileTabSub ‚Ì‹Œ–¼ÌŠÖ”
extern	int			SetUseTimeStampFlag( int UseFlag ) ;									// ƒƒOƒtƒ@ƒCƒ‹( Log.txt ) ‚Éo—Í‚·‚é•¶š—ñ‚Ì‘O‚É‹N“®‚µ‚Ä‚©‚ç‚ÌŠÔ‚ğ•t‚¯‚é‚©‚Ç‚¤‚©‚ğİ’è‚·‚é( TRUE:•t‚¯‚é( ƒfƒtƒHƒ‹ƒg)  FALSE:•t‚¯‚È‚¢ )
extern 	int			AppLogAdd(			 const TCHAR *String , ... ) ;						// LogFileFmtAdd ‚Æ“¯‚¶‹@”\‚ÌŠÖ”

// ƒƒOo—Íİ’èŠÖ”
extern	int			SetOutApplicationLogValidFlag(	int Flag ) ;							// ƒƒOƒtƒ@ƒCƒ‹( Log.txt ) ‚ğì¬‚·‚é‚©‚Ç‚¤‚©‚ğİ’è‚·‚é( TRUE:ì¬‚·‚é( ƒfƒtƒHƒ‹ƒg )  FALSE:ì¬‚µ‚È‚¢ )ADxLib_Init ‚Ì‘O‚Å‚Ì‚İg—p‰Â”\@
extern	int			SetApplicationLogFileName(      const TCHAR *FileName ) ;				// ƒƒOƒtƒ@ƒCƒ‹‚Ì–¼‘O‚ğİ’è‚·‚é( Log.txt ˆÈŠO‚É‚µ‚½‚¢ê‡‚Ég—p )
extern	int			SetApplicationLogSaveDirectory(	const TCHAR *DirectoryPath ) ;			// ƒƒOƒtƒ@ƒCƒ‹( Log.txt ) ‚ğ•Û‘¶‚·‚éƒfƒBƒŒƒNƒgƒŠƒpƒX‚ğİ’è‚·‚é
extern	int			SetUseDateNameLogFile(			int Flag ) ;							// ƒƒOƒtƒ@ƒCƒ‹–¼‚É“ú•t‚ğ‚Â‚¯‚é‚©‚Ç‚¤‚©‚ğƒZƒbƒg‚·‚é( TRUE:•t‚¯‚é  FALSE:•t‚¯‚È‚¢( ƒfƒtƒHƒ‹ƒg ) )

#ifndef DX_NON_PRINTF_DX

// ƒƒOo—Í‹@”\ŠÖ”
extern	int			SetLogDrawOutFlag(	 int DrawFlag ) ;									// printfDx ‚ÌŒ‹‰Ê‚ğ‰æ–Ê‚Éo—Í‚·‚é‚©‚Ç‚¤‚©‚ğİ’è‚·‚éATRUE:o—Í‚ğs‚¤  FALSE:o—Í‚ğs‚í‚È‚¢( printfDx ‚ğÀs‚·‚é‚Æ“à•”‚Å SetLogDrawOutFlag( TRUE ) ; ‚ªŒÄ‚Î‚ê‚Ü‚· )
extern 	int			GetLogDrawFlag(		 void ) ;											// printfDx ‚ÌŒ‹‰Ê‚ğ‰æ–Ê‚Éo—Í‚·‚é‚©‚Ç‚¤‚©‚Ìİ’è‚ğæ“¾‚·‚é( –ß‚è’l  TRUE:o—Í‚ğs‚¤  FALSE:o—Í‚ğs‚í‚È‚¢ )
extern	int			SetLogFontSize(		 int Size ) ;										// printfDx ‚ÌŒ‹‰Ê‚ğ‰æ–Ê‚Éo—Í‚·‚éÛ‚Ég—p‚·‚éƒtƒHƒ“ƒg‚ÌƒTƒCƒY‚ğİ’è‚·‚é
extern	int			SetLogFontHandle(	 int FontHandle ) ;									// printfDx ‚ÌŒ‹‰Ê‚ğ‰æ–Ê‚Éo—Í‚·‚éÛ‚Ég—p‚·‚éƒtƒHƒ“ƒg‚Ìƒnƒ“ƒhƒ‹‚ğ•ÏX‚·‚é
extern	int			SetLogDrawArea(		 int x1, int y1, int x2, int y2 ) ;					// printfDx ‚ÌŒ‹‰Ê‚ğ‰æ–Ê‚Éo—Í‚·‚éÛ‚Ì•`‰æ‚·‚é—Ìˆæ‚ğİ’è‚·‚é

// ŠÈˆÕ‰æ–Êo—ÍŠÖ”
extern 	int			printfDx(			 const TCHAR *FormatString , ... ) ;				// printf ‚Æ“¯‚¶ˆø”‚Å‰æ–Ê‚É•¶š—ñ‚ğ•\¦‚·‚é‚½‚ß‚ÌŠÖ”
extern	int			putsDx(				 const TCHAR *String, int NewLine = TRUE ) ;		// puts ‚Æ“¯‚¶ˆø”‚Å‰æ–Ê‚É•¶š—ñ‚ğ•\¦‚·‚é‚½‚ß‚ÌŠÖ”
extern	int			clsDx(				 void ) ;											// printfDx ‚ÌŒ‹‰Ê‚ğƒŠƒZƒbƒg‚·‚é‚½‚ß‚ÌŠÖ”
#endif // DX_NON_PRINTF_DX

#endif // DX_NON_LOG












#ifndef DX_NON_ASYNCLOAD

// DxASyncLoad.cppŠÖ”ƒvƒƒgƒ^ƒCƒvéŒ¾

// ”ñ“¯Šú“Ç‚İ‚İŠÖŒW
extern	int			SetUseASyncLoadFlag(			int Flag ) ;								// “Ç‚İ‚İˆ—Œn‚ÌŠÖ”‚Å”ñ“¯Šú“Ç‚İ‚İ‚ğs‚¤‚©‚Ç‚¤‚©‚ğİ’è‚·‚é( ”ñ“¯Šú“Ç‚İ‚İ‚É‘Î‰‚µ‚Ä‚¢‚éŠÖ”‚Ì‚İ—LŒø )( TRUE:”ñ“¯Šú“Ç‚İ‚İ‚ğs‚¤  FALSE:”ñ“¯Šú“Ç‚İ‚İ‚ğs‚í‚È‚¢( ƒfƒtƒHƒ‹ƒg ) )
extern	int			CheckHandleASyncLoad(			int Handle ) ;								// ƒnƒ“ƒhƒ‹‚Ì”ñ“¯Šú“Ç‚İ‚İ‚ªŠ®—¹‚µ‚Ä‚¢‚é‚©‚Ç‚¤‚©‚ğæ“¾‚·‚é( TRUE:‚Ü‚¾Š®—¹‚µ‚Ä‚¢‚È‚¢  FALSE:Š®—¹‚µ‚Ä‚¢‚é  -1:ƒGƒ‰[ )
extern	int			GetHandleASyncLoadResult(		int Handle ) ;								// ƒnƒ“ƒhƒ‹‚Ì”ñ“¯Šú“Ç‚İ‚İˆ—‚Ì–ß‚è’l‚ğæ“¾‚·‚é( ”ñ“¯Šú“Ç‚İ‚İ’†‚Ìê‡‚Íˆê‚Â‘O‚Ì”ñ“¯Šú“Ç‚İ‚İˆ—‚Ì–ß‚è’l‚ª•Ô‚Á‚Ä‚«‚Ü‚· )
extern	int			SetASyncLoadFinishDeleteFlag(	int Handle ) ;								// ƒnƒ“ƒhƒ‹‚Ì”ñ“¯Šú“Ç‚İ‚İˆ—‚ªŠ®—¹‚µ‚½‚çƒnƒ“ƒhƒ‹‚ğíœ‚·‚éƒtƒ‰ƒO‚ğ—§‚Ä‚é
extern	int			GetASyncLoadNum(				void ) ;									// ”ñ“¯Šú“Ç‚İ‚İ’†‚Ìˆ—‚Ì”‚ğæ“¾‚·‚é
extern	int			SetASyncLoadThreadNum(			int ThreadNum ) ;							// ”ñ“¯Šú“Ç‚İ‚İˆ—‚ğs‚¤ƒXƒŒƒbƒh‚Ì”‚ğİ’è‚·‚é( ThreadNum ‚Éw’è‚Å‚«‚é”‚Í 1 ` 32 )

#endif // DX_NON_ASYNCLOAD











// DxHandle.cppŠÖ”ƒvƒƒgƒ^ƒCƒvéŒ¾

extern	int			SetDeleteHandleFlag(		int Handle, int *DeleteFlag ) ;				// ƒnƒ“ƒhƒ‹‚ªíœ‚³‚ê‚½‚Æ‚«‚É|‚P‚ªİ’è‚³‚ê‚é•Ï”‚ğ“o˜^‚·‚é















// ƒ}ƒEƒXŠÖŒWŠÖ”
extern	int			SetMouseDispFlag(		int DispFlag ) ;												// ƒ}ƒEƒXƒ|ƒCƒ“ƒ^‚Ì•\¦ó‘Ô‚ğİ’è‚·‚é( DispFlag:ƒ}ƒEƒXƒ|ƒCƒ“ƒ^‚ğ•\¦‚·‚é‚©‚Ç‚¤‚©( TRUE:•\¦‚·‚é  FALSE:•\¦‚µ‚È‚¢ )
#ifndef DX_NON_INPUT
extern	int			GetMousePoint(			int *XBuf, int *YBuf ) ;										// ƒ}ƒEƒXƒ|ƒCƒ“ƒ^‚ÌˆÊ’u‚ğæ“¾‚·‚é
extern	int			SetMousePoint(			int PointX, int PointY ) ;										// ƒ}ƒEƒXƒ|ƒCƒ“ƒ^‚ÌˆÊ’u‚ğİ’è‚·‚é
extern	int			GetMouseInput(			void ) ;														// ƒ}ƒEƒX‚Ìƒ{ƒ^ƒ“‚Ì‰Ÿ‰ºó‘Ô‚ğæ“¾‚·‚é
extern	int			GetMouseWheelRotVol(	int CounterReset = TRUE ) ;										// ‚’¼ƒ}ƒEƒXƒzƒC[ƒ‹‚Ì‰ñ“]—Ê‚ğæ“¾‚·‚é
extern	int			GetMouseHWheelRotVol(	int CounterReset = TRUE ) ;										// …•½ƒ}ƒEƒXƒzƒC[ƒ‹‚Ì‰ñ“]—Ê‚ğæ“¾‚·‚é
extern	float		GetMouseWheelRotVolF(	int CounterReset = TRUE ) ;										// ‚’¼ƒ}ƒEƒXƒzƒC[ƒ‹‚Ì‰ñ“]—Ê‚ğæ“¾‚·‚é( –ß‚è’l‚ª float Œ^ )
extern	float		GetMouseHWheelRotVolF(	int CounterReset = TRUE ) ;										// …•½ƒ}ƒEƒXƒzƒC[ƒ‹‚Ì‰ñ“]—Ê‚ğæ“¾‚·‚é( –ß‚è’l‚ª float Œ^ )
extern	int			GetMouseInputLog(		int *Button, int *ClickX, int *ClickY, int LogDelete = TRUE ) ;					// ƒ}ƒEƒX‚Ìƒ{ƒ^ƒ“‚ğ‰Ÿ‚µ‚½î•ñ‚ğˆê‚Âæ“¾‚·‚é( Button:‰Ÿ‚³‚ê‚½ƒ{ƒ^ƒ“( MOUSE_INPUT_LEFT “™ )‚ğŠi”[‚·‚é•Ï”‚ÌƒAƒhƒŒƒX  ClickX:‰Ÿ‚³‚ê‚½‚Ì‚wÀ•W‚ğŠi”[‚·‚é•Ï”‚ÌƒAƒhƒŒƒX  ClickY:‰Ÿ‚³‚ê‚½‚Ì‚xÀ•W‚ğŠi”[‚·‚é•Ï”‚ÌƒAƒhƒŒƒX   LogDelete:æ“¾‚µ‚½‰Ÿ‰ºî•ñˆê‚Â•ª‚ğƒƒO‚©‚çíœ‚·‚é‚©‚Ç‚¤‚©( TRUE:íœ‚·‚é  FALSE:íœ‚µ‚È‚¢A‚Â‚Ü‚èŸ‚É‚±‚ÌŠÖ”‚ªŒÄ‚Î‚ê‚½‚Æ‚«‚É“¯‚¶’l‚ğæ“¾‚·‚é‚±‚Æ‚É‚È‚é )@@–ß‚è’l  0:‰Ÿ‚³‚ê‚½î•ñæ“¾‚Å‚«‚½@-1:‰Ÿ‚³‚ê‚½î•ñ‚ª–³‚©‚Á‚½A‚Â‚Ü‚è‘O‰ñ‚ÌŒÄ‚Ño‚µ( ‚Ü‚½‚Í‹N“®‚©‚çÅ‰‚ÌŒÄ‚Ño‚µ )‚ÌŠÔ‚Éˆê“x‚àƒ}ƒEƒX‚Ìƒ{ƒ^ƒ“‚ª‰Ÿ‚³‚ê‚È‚©‚Á‚½ )
extern	int			GetMouseInputLog2(		int *Button, int *ClickX, int *ClickY, int *LogType, int LogDelete = TRUE ) ;	// ƒ}ƒEƒX‚Ìƒ{ƒ^ƒ“‚ğ‰Ÿ‚µ‚½‚è—£‚µ‚½‚è‚µ‚½î•ñ‚ğˆê‚Âæ“¾‚·‚é( Button:‰Ÿ‚³‚ê‚½‚è—£‚³‚ê‚½‚è‚µ‚½ƒ{ƒ^ƒ“( MOUSE_INPUT_LEFT “™ )‚ğŠi”[‚·‚é•Ï”‚ÌƒAƒhƒŒƒX  ClickX:‰Ÿ‚³‚ê‚½‚è—£‚³‚ê‚½‚è‚µ‚½‚Ì‚wÀ•W‚ğŠi”[‚·‚é•Ï”‚ÌƒAƒhƒŒƒX  ClickY:‰Ÿ‚³‚ê‚½‚è—£‚³‚ê‚½‚è‚µ‚½‚Ì‚xÀ•W‚ğŠi”[‚·‚é•Ï”‚ÌƒAƒhƒŒƒX   LogDelete:æ“¾‚µ‚½‰Ÿ‚³‚ê‚½‚è—£‚³‚ê‚½‚è‚µ‚½î•ñˆê‚Â•ª‚ğƒƒO‚©‚çíœ‚·‚é‚©‚Ç‚¤‚©( TRUE:íœ‚·‚é  FALSE:íœ‚µ‚È‚¢A‚Â‚Ü‚èŸ‚É‚±‚ÌŠÖ”‚ªŒÄ‚Î‚ê‚½‚Æ‚«‚É“¯‚¶’l‚ğæ“¾‚·‚é‚±‚Æ‚É‚È‚é )@@–ß‚è’l  0:‰Ÿ‚³‚ê‚½‚è—£‚³‚ê‚½‚è‚µ‚½î•ñæ“¾‚Å‚«‚½@-1:‰Ÿ‚³‚ê‚½‚è—£‚³‚ê‚½‚è‚µ‚½î•ñ‚ª–³‚©‚Á‚½A‚Â‚Ü‚è‘O‰ñ‚ÌŒÄ‚Ño‚µ( ‚Ü‚½‚Í‹N“®‚©‚çÅ‰‚ÌŒÄ‚Ño‚µ )‚ÌŠÔ‚Éˆê“x‚àƒ}ƒEƒX‚Ìƒ{ƒ^ƒ“‚ª‰Ÿ‚³‚ê‚½‚è—£‚³‚ê‚½‚è‚µ‚È‚©‚Á‚½ )
#endif // DX_NON_INPUT












// ƒ^ƒbƒ`ƒpƒlƒ‹“ü—ÍŠÖŒWŠÖ”
#ifndef DX_NON_INPUT
extern	int				GetTouchInputNum( void ) ;																// ƒ^ƒbƒ`‚³‚ê‚Ä‚¢‚é”‚ğæ“¾‚·‚é
extern	int				GetTouchInput( int InputNo, int *PositionX, int *PositionY, int *ID = NULL , int *Device = NULL ) ;		// ƒ^ƒbƒ`‚Ìî•ñ‚ğæ“¾‚·‚é

extern	int				GetTouchInputLogNum( void ) ;															// ƒXƒgƒbƒN‚³‚ê‚Ä‚¢‚éƒ^ƒbƒ`î•ñ‚Ì”‚ğæ“¾‚·‚é
extern	int				ClearTouchInputLog( void ) ;															// ƒXƒgƒbƒN‚³‚ê‚Ä‚¢‚éƒ^ƒbƒ`î•ñ‚ğƒNƒŠƒA‚·‚é
extern	TOUCHINPUTDATA	GetTouchInputLogOne( int PeekFlag = FALSE ) ;											// ƒXƒgƒbƒN‚³‚ê‚Ä‚¢‚éƒ^ƒbƒ`î•ñ‚©‚çˆê”ÔŒÃ‚¢î•ñ‚ğ‚Ğ‚Æ‚Âæ“¾‚·‚é
extern	int				GetTouchInputLog( TOUCHINPUTDATA *TouchData, int GetNum, int PeekFlag = FALSE ) ;		// ƒXƒgƒbƒN‚³‚ê‚Ä‚¢‚éƒ^ƒbƒ`î•ñ‚©‚çŒÃ‚¢‡‚Éw’è”ƒoƒbƒtƒ@‚Éæ“¾‚·‚é( –ß‚è’l  -1:ƒGƒ‰[  0ˆÈã:æ“¾‚µ‚½î•ñ‚Ì” )

extern	int				GetTouchInputDownLogNum( void ) ;														// ƒXƒgƒbƒN‚³‚ê‚Ä‚¢‚éƒ^ƒbƒ`‚³‚ên‚ß‚½î•ñ‚Ì”‚ğæ“¾‚·‚é
extern	int				ClearTouchInputDownLog( void ) ;														// ƒXƒgƒbƒN‚³‚ê‚Ä‚¢‚éƒ^ƒbƒ`‚³‚ên‚ß‚½î•ñ‚ğƒNƒŠƒA‚·‚é
extern	TOUCHINPUTPOINT	GetTouchInputDownLogOne( int PeekFlag = FALSE ) ;										// ƒXƒgƒbƒN‚³‚ê‚Ä‚¢‚éƒ^ƒbƒ`‚³‚ên‚ß‚½î•ñ‚©‚çˆê”ÔŒÃ‚¢î•ñ‚ğ‚Ğ‚Æ‚Âæ“¾‚·‚é
extern	int				GetTouchInputDownLog( TOUCHINPUTPOINT *PointData, int GetNum, int PeekFlag = FALSE ) ;	// ƒXƒgƒbƒN‚³‚ê‚Ä‚¢‚éƒ^ƒbƒ`‚³‚ên‚ß‚½î•ñ‚©‚çŒÃ‚¢‡‚Éw’è”ƒoƒbƒtƒ@‚Éæ“¾‚·‚é( –ß‚è’l  -1:ƒGƒ‰[  0ˆÈã:æ“¾‚µ‚½î•ñ‚Ì” )

extern	int				GetTouchInputUpLogNum( void ) ;															// ƒXƒgƒbƒN‚³‚ê‚Ä‚¢‚éƒ^ƒbƒ`‚ª—£‚³‚ê‚½î•ñ‚Ì”‚ğæ“¾‚·‚é
extern	int				ClearTouchInputUpLog( void ) ;															// ƒXƒgƒbƒN‚³‚ê‚Ä‚¢‚éƒ^ƒbƒ`‚ª—£‚³‚ê‚½î•ñ‚ğƒNƒŠƒA‚·‚é
extern	TOUCHINPUTPOINT	GetTouchInputUpLogOne( int PeekFlag = FALSE ) ;											// ƒXƒgƒbƒN‚³‚ê‚Ä‚¢‚éƒ^ƒbƒ`‚ª—£‚³‚ê‚½î•ñ‚©‚çˆê”ÔŒÃ‚¢î•ñ‚ğ‚Ğ‚Æ‚Âæ“¾‚·‚é
extern	int				GetTouchInputUpLog( TOUCHINPUTPOINT *PointData, int GetNum, int PeekFlag = FALSE ) ;	// ƒXƒgƒbƒN‚³‚ê‚Ä‚¢‚éƒ^ƒbƒ`‚ª—£‚³‚ê‚½î•ñ‚©‚çŒÃ‚¢‡‚Éw’è”ƒoƒbƒtƒ@‚Éæ“¾‚·‚é( –ß‚è’l  -1:ƒGƒ‰[  0ˆÈã:æ“¾‚µ‚½î•ñ‚Ì” )

#endif // DX_NON_INPUT















// DxMemory.cppŠÖ”ƒvƒƒgƒ^ƒCƒvéŒ¾

// ƒƒ‚ƒŠŠm•ÛŒnŠÖ”
extern	void*		DxAlloc(						size_t AllocSize , const char *File = NULL , int Line = -1 ) ;					// w’è‚ÌƒTƒCƒY‚Ìƒƒ‚ƒŠ‚ğŠm•Û‚·‚é( AllocSize:Šm•Û‚·‚éƒƒ‚ƒŠ‚ÌƒTƒCƒY( ’PˆÊ:byte )  File:DxAlloc‚ğŒÄ‚ñ‚¾ƒ\[ƒXƒtƒ@ƒCƒ‹–¼( ƒfƒoƒbƒO—p )  Line:DxAlloc‚ğŒÄ‚ñ‚¾ƒ\[ƒXƒtƒ@ƒCƒ‹’†‚Ìs”Ô†( ƒfƒoƒbƒO—p )@@–ß‚è’l  NULL:ƒƒ‚ƒŠ‚ÌŠm•Û¸”s   NULLˆÈŠO:Šm•Û‚µ‚½ƒƒ‚ƒŠ—Ìˆæ‚Ìæ“ªƒAƒhƒŒƒX )
extern	void*		DxCalloc(						size_t AllocSize , const char *File = NULL , int Line = -1 ) ;					// w’è‚ÌƒTƒCƒY‚Ìƒƒ‚ƒŠ‚ğŠm•Û‚µ‚ÄA‚O‚Å–„‚ß‚éA‰Šú‰»Œã‚É‚O‚Å–„‚ß‚éˆÈŠO‚Í DxAlloc ‚Æ“®ì‚Í“¯‚¶
extern	void*		DxRealloc(						void *Memory , size_t AllocSize , const char *File = NULL , int Line = -1 ) ;	// ƒƒ‚ƒŠ‚ÌÄŠm•Û‚ğs‚¤( Memory:ÄŠm•Û‚ğs‚¤ƒƒ‚ƒŠ—Ìˆæ‚Ìæ“ªƒAƒhƒŒƒX( DxAlloc ‚Ì–ß‚è’l )  AllocSize:V‚µ‚¢Šm•ÛƒTƒCƒY@File‚ÆLine ‚Ìà–¾‚Í DxAlloc ‚Ì’ß‚Ì’Ê‚è @–ß‚è’l NULL:ƒƒ‚ƒŠ‚ÌÄŠm•Û¸”s@NULLˆÈŠO:ÄŠm•Û‚µ‚½V‚µ‚¢ƒƒ‚ƒŠ—Ìˆæ‚Ìæ“ªƒAƒhƒŒƒX@)
extern	void		DxFree(							void *Memory ) ;																// ƒƒ‚ƒŠ‚ğ‰ğ•ú‚·‚é( Memory:‰ğ•ú‚·‚éƒƒ‚ƒŠ—Ìˆæ‚Ìæ“ªƒAƒhƒŒƒX( DxAlloc ‚Ì–ß‚è’l ) )
extern	size_t		DxSetAllocSizeTrap(				size_t Size ) ;																	// —ñ‹“‘ÎÛ‚É‚·‚éƒƒ‚ƒŠ‚ÌŠm•Û—e—Ê‚ğƒZƒbƒg‚·‚é
extern	int			DxSetAllocPrintFlag(			int Flag ) ;																	// ‚c‚wƒ‰ƒCƒuƒ‰ƒŠ“à‚Åƒƒ‚ƒŠŠm•Û‚ªs‚í‚ê‚é‚Éî•ñ‚ğo—Í‚·‚é‚©‚Ç‚¤‚©‚ğƒZƒbƒg‚·‚é
extern	size_t		DxGetAllocSize(					void ) ;																		// DxAlloc ‚â DxCalloc ‚ÅŠm•Û‚µ‚Ä‚¢‚éƒƒ‚ƒŠƒTƒCƒY‚ğæ“¾‚·‚é
extern	int			DxGetAllocNum(					void ) ;																		// DxAlloc ‚â DxCalloc ‚ÅŠm•Û‚µ‚Ä‚¢‚éƒƒ‚ƒŠ‚Ì”‚ğæ“¾‚·‚é
extern	void		DxDumpAlloc(					void ) ;																		// DxAlloc ‚â DxCalloc ‚ÅŠm•Û‚µ‚Ä‚¢‚éƒƒ‚ƒŠ‚ğ—ñ‹“‚·‚é
extern	void		DxDrawAlloc(					int x, int y, int Width, int Height ) ;											// DxAlloc ‚â DxCalloc ‚ÅŠm•Û‚µ‚Ä‚¢‚éƒƒ‚ƒŠ‚Ìó‹µ‚ğ•`‰æ‚·‚é
extern	int			DxErrorCheckAlloc(				void ) ;																		// Šm•Û‚µ‚½ƒƒ‚ƒŠî•ñ‚ª”j‰ó‚³‚ê‚Ä‚¢‚È‚¢‚©’²‚×‚é( -1:”j‰ó‚ ‚è  0:‚È‚µ )
extern	int			DxSetAllocSizeOutFlag(			int Flag ) ;																	// ƒƒ‚ƒŠ‚ªŠm•ÛA‰ğ•ú‚ªs‚í‚ê‚é“x‚ÉŠm•Û‚µ‚Ä‚¢‚éƒƒ‚ƒŠ‚Ì—e—Ê‚ğo—Í‚·‚é‚©‚Ç‚¤‚©‚Ìƒtƒ‰ƒO‚ğƒZƒbƒg‚·‚é
extern	int			DxSetAllocMemoryErrorCheckFlag(	int Flag ) ;																	// ƒƒ‚ƒŠ‚ÌŠm•ÛA‰ğ•ú‚ªs‚í‚ê‚é“x‚ÉŠm•Û‚µ‚Ä‚¢‚éƒƒ‚ƒŠŠm•Ûî•ñ‚ª”j‘¹‚µ‚Ä‚¢‚È‚¢‚©’²‚×‚é‚©‚Ç‚¤‚©‚Ìƒtƒ‰ƒO‚ğƒZƒbƒg‚·‚é














// DxBaseFunc.cpp ŠÖ”ƒvƒƒgƒ^ƒCƒvéŒ¾

// •¶šƒR[ƒhŠÖŒW
extern	int				GetCharBytes( int CharCodeFormat /* DX_CHARCODEFORMAT_SHIFTJIS “™ */ , const void *String ) ;	// •¶š—ñ‚Ìæ“ª‚Ì•¶š‚ÌƒoƒCƒg”‚ğæ“¾‚·‚é
extern	int				ConvertStringCharCodeFormat( int SrcCharCodeFormat /* DX_CHARCODEFORMAT_SHIFTJIS “™ */ , const void *SrcString, int DestCharCodeFormat /* DX_CHARCODEFORMAT_SHIFTJIS “™ */ , void *DestStringBuffer ) ;		// •¶š—ñ‚Ì•¶šƒR[ƒhŒ`®‚ğ•Ê‚Ì•¶šƒR[ƒhŒ`®‚É•ÏŠ·‚·‚é
extern	int				SetUseCharCodeFormat( int CharCodeFormat /* DX_CHARCODEFORMAT_SHIFTJIS “™ */ ) ;		// •¶š—ñ‚Ìˆø”‚Ì•¶šƒR[ƒhŒ`®‚ğİ’è‚·‚é( •¶š—ñ•`‰æŒnŠÖ”‚Æ‚»‚Ì‘¼ˆê•”ŠÖ”‚ğœ‚­ )( UNICODE”Å‚Å‚Í–³Œø )
extern	int				Get_wchar_t_CharCodeFormat( void ) ;													// wchar_tŒ^‚Ì•¶šƒR[ƒhŒ`®‚ğæ“¾‚·‚é( –ß‚è’lF DX_CHARCODEFORMAT_UTF16LE ‚È‚Ç )

// •¶š—ñŠÖŒW
extern	void			strcpyDx(      TCHAR *Dest,                   const TCHAR *Src ) ;						// strcpy ‚Æ“¯“™‚Ì‹@”\( ƒ}ƒ‹ƒ`ƒoƒCƒg•¶š—ñ”Å‚Å‚Í•¶šƒR[ƒhŒ`®‚Æ‚µ‚Ä SetUseCharCodeFormat ‚Åİ’è‚µ‚½Œ`®‚ªg—p‚³‚ê‚Ü‚· )
extern	void			strcpy_sDx(    TCHAR *Dest, size_t DestBytes, const TCHAR *Src ) ;						// strcpy_s ‚Æ“¯“™‚Ì‹@”\( ƒ}ƒ‹ƒ`ƒoƒCƒg•¶š—ñ”Å‚Å‚Í•¶šƒR[ƒhŒ`®‚Æ‚µ‚Ä SetUseCharCodeFormat ‚Åİ’è‚µ‚½Œ`®‚ªg—p‚³‚ê‚Ü‚· )
extern	void			strpcpyDx(     TCHAR *Dest,                   const TCHAR *Src, int Pos ) ;				// ˆÊ’uw’è•t‚« strcpyAPos ‚ÍƒRƒs[ŠJnˆÊ’u@( ƒ}ƒ‹ƒ`ƒoƒCƒg•¶š—ñ”Å‚Å‚Í•¶šƒR[ƒhŒ`®‚Æ‚µ‚Ä SetUseCharCodeFormat ‚Åİ’è‚µ‚½Œ`®‚ªg—p‚³‚ê‚Ü‚· )
extern	void			strpcpy_sDx(   TCHAR *Dest, size_t DestBytes, const TCHAR *Src, int Pos ) ;				// ˆÊ’uw’è•t‚« strcpy_sAPos ‚ÍƒRƒs[ŠJnˆÊ’u@( ƒ}ƒ‹ƒ`ƒoƒCƒg•¶š—ñ”Å‚Å‚Í•¶šƒR[ƒhŒ`®‚Æ‚µ‚Ä SetUseCharCodeFormat ‚Åİ’è‚µ‚½Œ`®‚ªg—p‚³‚ê‚Ü‚· )
extern	void			strpcpy2Dx(    TCHAR *Dest,                   const TCHAR *Src, int Pos ) ;				// ˆÊ’uw’è•t‚« strcpyAPos ‚ÍƒRƒs[ŠJnˆÊ’u( ‘SŠp•¶š‚à 1 ˆµ‚¢ )@( ƒ}ƒ‹ƒ`ƒoƒCƒg•¶š—ñ”Å‚Å‚Í•¶šƒR[ƒhŒ`®‚Æ‚µ‚Ä SetUseCharCodeFormat ‚Åİ’è‚µ‚½Œ`®‚ªg—p‚³‚ê‚Ü‚· )
extern	void			strpcpy2_sDx(  TCHAR *Dest, size_t DestBytes, const TCHAR *Src, int Pos ) ;				// ˆÊ’uw’è•t‚« strcpy_sAPos ‚ÍƒRƒs[ŠJnˆÊ’u( ‘SŠp•¶š‚à 1 ˆµ‚¢ )@( ƒ}ƒ‹ƒ`ƒoƒCƒg•¶š—ñ”Å‚Å‚Í•¶šƒR[ƒhŒ`®‚Æ‚µ‚Ä SetUseCharCodeFormat ‚Åİ’è‚µ‚½Œ`®‚ªg—p‚³‚ê‚Ü‚· )
extern	void			strncpyDx(     TCHAR *Dest,                   const TCHAR *Src, int Num ) ;				// strncpy ‚Æ“¯“™‚Ì‹@”\( ƒ}ƒ‹ƒ`ƒoƒCƒg•¶š—ñ”Å‚Å‚Í•¶šƒR[ƒhŒ`®‚Æ‚µ‚Ä SetUseCharCodeFormat ‚Åİ’è‚µ‚½Œ`®‚ªg—p‚³‚ê‚Ü‚· )
extern	void			strncpy_sDx(   TCHAR *Dest, size_t DestBytes, const TCHAR *Src, int Num ) ;				// strncpy_s ‚Æ“¯“™‚Ì‹@”\( ƒ}ƒ‹ƒ`ƒoƒCƒg•¶š—ñ”Å‚Å‚Í•¶šƒR[ƒhŒ`®‚Æ‚µ‚Ä SetUseCharCodeFormat ‚Åİ’è‚µ‚½Œ`®‚ªg—p‚³‚ê‚Ü‚· )
extern	void			strncpy2Dx(    TCHAR *Dest,                   const TCHAR *Src, int Num ) ;				// strncpy ‚Ì Num ‚ª•¶š”( ‘SŠp•¶š‚à 1 ˆµ‚¢ )‚É‚È‚Á‚½‚à‚ÌAI’[‚É•K‚¸ƒkƒ‹•¶š‚ª‘ã“ü‚³‚ê‚é( ƒ}ƒ‹ƒ`ƒoƒCƒg•¶š—ñ”Å‚Å‚Í•¶šƒR[ƒhŒ`®‚Æ‚µ‚Ä SetUseCharCodeFormat ‚Åİ’è‚µ‚½Œ`®‚ªg—p‚³‚ê‚Ü‚· )
extern	void			strncpy2_sDx(  TCHAR *Dest, size_t DestBytes, const TCHAR *Src, int Num ) ;				// strncpy_s ‚Ì Num ‚ª•¶š”( ‘SŠp•¶š‚à 1 ˆµ‚¢ )‚É‚È‚Á‚½‚à‚ÌAI’[‚É•K‚¸ƒkƒ‹•¶š‚ª‘ã“ü‚³‚ê‚é( ƒ}ƒ‹ƒ`ƒoƒCƒg•¶š—ñ”Å‚Å‚Í•¶šƒR[ƒhŒ`®‚Æ‚µ‚Ä SetUseCharCodeFormat ‚Åİ’è‚µ‚½Œ`®‚ªg—p‚³‚ê‚Ü‚· )
extern	void			strrncpyDx(    TCHAR *Dest,                   const TCHAR *Src, int Num ) ;				// strncpy ‚Ì•¶š—ñ‚ÌI’[‚©‚ç‚Ì•¶š”w’è”Å( ƒ}ƒ‹ƒ`ƒoƒCƒg•¶š—ñ”Å‚Å‚Í•¶šƒR[ƒhŒ`®‚Æ‚µ‚Ä SetUseCharCodeFormat ‚Åİ’è‚µ‚½Œ`®‚ªg—p‚³‚ê‚Ü‚· )
extern	void			strrncpy_sDx(  TCHAR *Dest, size_t DestBytes, const TCHAR *Src, int Num ) ;				// strncpy_s ‚Ì•¶š—ñ‚ÌI’[‚©‚ç‚Ì•¶š”w’è”Å( ƒ}ƒ‹ƒ`ƒoƒCƒg•¶š—ñ”Å‚Å‚Í•¶šƒR[ƒhŒ`®‚Æ‚µ‚Ä SetUseCharCodeFormat ‚Åİ’è‚µ‚½Œ`®‚ªg—p‚³‚ê‚Ü‚· )
extern	void			strrncpy2Dx(   TCHAR *Dest,                   const TCHAR *Src, int Num ) ;				// strncpy ‚Ì•¶š—ñ‚ÌI’[‚©‚ç‚Ì•¶š”( ‘SŠp•¶š‚à 1 ˆµ‚¢ )w’è”ÅAI’[‚É•K‚¸ƒkƒ‹•¶š‚ª‘ã“ü‚³‚ê‚é( ƒ}ƒ‹ƒ`ƒoƒCƒg•¶š—ñ”Å‚Å‚Í•¶šƒR[ƒhŒ`®‚Æ‚µ‚Ä SetUseCharCodeFormat ‚Åİ’è‚µ‚½Œ`®‚ªg—p‚³‚ê‚Ü‚· )
extern	void			strrncpy2_sDx( TCHAR *Dest, size_t DestBytes, const TCHAR *Src, int Num ) ;				// strncpy_s ‚Ì•¶š—ñ‚ÌI’[‚©‚ç‚Ì•¶š”( ‘SŠp•¶š‚à 1 ˆµ‚¢ )w’è”ÅAI’[‚É•K‚¸ƒkƒ‹•¶š‚ª‘ã“ü‚³‚ê‚é( ƒ}ƒ‹ƒ`ƒoƒCƒg•¶š—ñ”Å‚Å‚Í•¶šƒR[ƒhŒ`®‚Æ‚µ‚Ä SetUseCharCodeFormat ‚Åİ’è‚µ‚½Œ`®‚ªg—p‚³‚ê‚Ü‚· )
extern	void			strpncpyDx(    TCHAR *Dest,                   const TCHAR *Src, int Pos, int Num ) ;	// strncpy ‚ÌƒRƒs[ŠJnˆÊ’uw’è”ÅAPos ‚ÍƒRƒs[ŠJnˆÊ’uANum ‚Í•¶š”( ƒ}ƒ‹ƒ`ƒoƒCƒg•¶š—ñ”Å‚Å‚Í•¶šƒR[ƒhŒ`®‚Æ‚µ‚Ä SetUseCharCodeFormat ‚Åİ’è‚µ‚½Œ`®‚ªg—p‚³‚ê‚Ü‚· )
extern	void			strpncpy_sDx(  TCHAR *Dest, size_t DestBytes, const TCHAR *Src, int Pos, int Num ) ;	// strncpy_s ‚ÌƒRƒs[ŠJnˆÊ’uw’è”ÅAPos ‚ÍƒRƒs[ŠJnˆÊ’uANum ‚Í•¶š”( ƒ}ƒ‹ƒ`ƒoƒCƒg•¶š—ñ”Å‚Å‚Í•¶šƒR[ƒhŒ`®‚Æ‚µ‚Ä SetUseCharCodeFormat ‚Åİ’è‚µ‚½Œ`®‚ªg—p‚³‚ê‚Ü‚· )
extern	void			strpncpy2Dx(   TCHAR *Dest,                   const TCHAR *Src, int Pos, int Num ) ;	// strncpy ‚ÌƒRƒs[ŠJnˆÊ’uw’è”ÅAPos ‚ÍƒRƒs[ŠJnˆÊ’u( ‘SŠp•¶š‚à 1 ˆµ‚¢ )ANum ‚Í•¶š”( ‘SŠp•¶š‚à 1 ˆµ‚¢ )AI’[‚É•K‚¸ƒkƒ‹•¶š‚ª‘ã“ü‚³‚ê‚é( ƒ}ƒ‹ƒ`ƒoƒCƒg•¶š—ñ”Å‚Å‚Í•¶šƒR[ƒhŒ`®‚Æ‚µ‚Ä SetUseCharCodeFormat ‚Åİ’è‚µ‚½Œ`®‚ªg—p‚³‚ê‚Ü‚· )
extern	void			strpncpy2_sDx( TCHAR *Dest, size_t DestBytes, const TCHAR *Src, int Pos, int Num ) ;	// strncpy_s ‚ÌƒRƒs[ŠJnˆÊ’uw’è”ÅAPos ‚ÍƒRƒs[ŠJnˆÊ’u( ‘SŠp•¶š‚à 1 ˆµ‚¢ )ANum ‚Í•¶š”( ‘SŠp•¶š‚à 1 ˆµ‚¢ )AI’[‚É•K‚¸ƒkƒ‹•¶š‚ª‘ã“ü‚³‚ê‚é( ƒ}ƒ‹ƒ`ƒoƒCƒg•¶š—ñ”Å‚Å‚Í•¶šƒR[ƒhŒ`®‚Æ‚µ‚Ä SetUseCharCodeFormat ‚Åİ’è‚µ‚½Œ`®‚ªg—p‚³‚ê‚Ü‚· )
extern	void			strcatDx(      TCHAR *Dest,                   const TCHAR *Src ) ;						// strcat ‚Æ“¯“™‚Ì‹@”\( ƒ}ƒ‹ƒ`ƒoƒCƒg•¶š—ñ”Å‚Å‚Í•¶šƒR[ƒhŒ`®‚Æ‚µ‚Ä SetUseCharCodeFormat ‚Åİ’è‚µ‚½Œ`®‚ªg—p‚³‚ê‚Ü‚· )
extern	void			strcat_sDx(    TCHAR *Dest, size_t DestBytes, const TCHAR *Src ) ;						// strcat_s ‚Æ“¯“™‚Ì‹@”\( ƒ}ƒ‹ƒ`ƒoƒCƒg•¶š—ñ”Å‚Å‚Í•¶šƒR[ƒhŒ`®‚Æ‚µ‚Ä SetUseCharCodeFormat ‚Åİ’è‚µ‚½Œ`®‚ªg—p‚³‚ê‚Ü‚· )
extern	size_t			strlenDx(      const TCHAR *Str ) ;												// strlen ‚Æ“¯“™‚Ì‹@”\( ƒ}ƒ‹ƒ`ƒoƒCƒg•¶š—ñ”Å‚Å‚Í•¶šƒR[ƒhŒ`®‚Æ‚µ‚Ä SetUseCharCodeFormat ‚Åİ’è‚µ‚½Œ`®‚ªg—p‚³‚ê‚Ü‚· )
extern	size_t			strlen2Dx(     const TCHAR *Str ) ;												// strlen ‚Ì–ß‚è’l‚ª•¶š”( ‘SŠp•¶š‚à 1 ˆµ‚¢ )‚É‚È‚Á‚½‚à‚Ì( ƒ}ƒ‹ƒ`ƒoƒCƒg•¶š—ñ”Å‚Å‚Í•¶šƒR[ƒhŒ`®‚Æ‚µ‚Ä SetUseCharCodeFormat ‚Åİ’è‚µ‚½Œ`®‚ªg—p‚³‚ê‚Ü‚· )
extern	int				strcmpDx(      const TCHAR *Str1, const TCHAR *Str2 ) ;							// strcmp ‚Æ“¯“™‚Ì‹@”\( ƒ}ƒ‹ƒ`ƒoƒCƒg•¶š—ñ”Å‚Å‚Í•¶šƒR[ƒhŒ`®‚Æ‚µ‚Ä SetUseCharCodeFormat ‚Åİ’è‚µ‚½Œ`®‚ªg—p‚³‚ê‚Ü‚· )
extern	int				stricmpDx(     const TCHAR *Str1, const TCHAR *Str2 ) ;							// stricmp ‚Æ“¯“™‚Ì‹@”\( ƒ}ƒ‹ƒ`ƒoƒCƒg•¶š—ñ”Å‚Å‚Í•¶šƒR[ƒhŒ`®‚Æ‚µ‚Ä SetUseCharCodeFormat ‚Åİ’è‚µ‚½Œ`®‚ªg—p‚³‚ê‚Ü‚· )
extern	int				strncmpDx(     const TCHAR *Str1, const TCHAR *Str2, int Num ) ;				// strncmp ‚Æ“¯“™‚Ì‹@”\( ƒ}ƒ‹ƒ`ƒoƒCƒg•¶š—ñ”Å‚Å‚Í•¶šƒR[ƒhŒ`®‚Æ‚µ‚Ä SetUseCharCodeFormat ‚Åİ’è‚µ‚½Œ`®‚ªg—p‚³‚ê‚Ü‚· )
extern	int				strncmp2Dx(    const TCHAR *Str1, const TCHAR *Str2, int Num ) ;				// strncmp ‚Ì Num ‚ª•¶š”( ‘SŠp•¶š‚à 1 ˆµ‚¢ )‚É‚È‚Á‚½‚à‚Ì( ƒ}ƒ‹ƒ`ƒoƒCƒg•¶š—ñ”Å‚Å‚Í•¶šƒR[ƒhŒ`®‚Æ‚µ‚Ä SetUseCharCodeFormat ‚Åİ’è‚µ‚½Œ`®‚ªg—p‚³‚ê‚Ü‚· )
extern	int				strpncmpDx(    const TCHAR *Str1, const TCHAR *Str2, int Pos, int Num ) ;		// strncmp ‚Ì”äŠrŠJnˆÊ’uw’è”ÅAPos ‚ª Str1 ‚Ì”äŠrŠJnˆÊ’uANum ‚ª•¶š”( ƒ}ƒ‹ƒ`ƒoƒCƒg•¶š—ñ”Å‚Å‚Í•¶šƒR[ƒhŒ`®‚Æ‚µ‚Ä SetUseCharCodeFormat ‚Åİ’è‚µ‚½Œ`®‚ªg—p‚³‚ê‚Ü‚· )
extern	int				strpncmp2Dx(   const TCHAR *Str1, const TCHAR *Str2, int Pos, int Num ) ;		// strncmp ‚Ì”äŠrŠJnˆÊ’uw’è”ÅAPos ‚ª Str1 ‚Ì”äŠrŠJnˆÊ’u( ‘SŠp•¶š‚à 1 ˆµ‚¢ )ANum ‚ª•¶š”( ‘SŠp•¶š‚à 1 ˆµ‚¢ )( ƒ}ƒ‹ƒ`ƒoƒCƒg•¶š—ñ”Å‚Å‚Í•¶šƒR[ƒhŒ`®‚Æ‚µ‚Ä SetUseCharCodeFormat ‚Åİ’è‚µ‚½Œ`®‚ªg—p‚³‚ê‚Ü‚· )
extern	DWORD			strgetchrDx(   const TCHAR *Str, int Pos, int *CharNums = NULL ) ;				// •¶š—ñ‚Ìw’è‚ÌˆÊ’u‚Ì•¶šƒR[ƒh‚ğæ“¾‚·‚éAPos ‚Íæ“¾‚·‚éˆÊ’uACharNums ‚Í•¶š”‚ğ‘ã“ü‚·‚é•Ï”‚ÌƒAƒhƒŒƒXA–ß‚è’l‚Í•¶šƒR[ƒh( ƒ}ƒ‹ƒ`ƒoƒCƒg•¶š—ñ”Å‚Å‚Í•¶šƒR[ƒhŒ`®‚Æ‚µ‚Ä SetUseCharCodeFormat ‚Åİ’è‚µ‚½Œ`®‚ªg—p‚³‚ê‚Ü‚· )
extern	DWORD			strgetchr2Dx(  const TCHAR *Str, int Pos, int *CharNums = NULL ) ;				// •¶š—ñ‚Ìw’è‚ÌˆÊ’u‚Ì•¶šƒR[ƒh‚ğæ“¾‚·‚éAPos ‚Íæ“¾‚·‚éˆÊ’u( ‘SŠp•¶š‚à 1 ˆµ‚¢ )ACharNums ‚Í•¶š”‚ğ‘ã“ü‚·‚é•Ï”‚ÌƒAƒhƒŒƒXA–ß‚è’l‚Í•¶šƒR[ƒh( ƒ}ƒ‹ƒ`ƒoƒCƒg•¶š—ñ”Å‚Å‚Í•¶šƒR[ƒhŒ`®‚Æ‚µ‚Ä SetUseCharCodeFormat ‚Åİ’è‚µ‚½Œ`®‚ªg—p‚³‚ê‚Ü‚· )
extern	int				strputchrDx(   TCHAR *Str, int Pos, DWORD CharCode ) ;							// •¶š—ñ‚Ìw’è‚ÌˆÊ’u‚É•¶šƒR[ƒh‚ğ‘‚«‚ŞAPos ‚Í‘‚«‚ŞˆÊ’uACharCode ‚Í•¶šƒR[ƒhA–ß‚è’l‚Í‘‚«‚ñ‚¾•¶š”( ƒ}ƒ‹ƒ`ƒoƒCƒg•¶š—ñ”Å‚Å‚Í•¶šƒR[ƒhŒ`®‚Æ‚µ‚Ä SetUseCharCodeFormat ‚Åİ’è‚µ‚½Œ`®‚ªg—p‚³‚ê‚Ü‚· )
extern	int				strputchr2Dx(  TCHAR *Str, int Pos, DWORD CharCode ) ;							// •¶š—ñ‚Ìw’è‚ÌˆÊ’u‚É•¶šƒR[ƒh‚ğ‘‚«‚ŞAPos ‚Í‘‚«‚ŞˆÊ’u( ‘SŠp•¶š‚à 1 ˆµ‚¢ )ACharCode ‚Í•¶šƒR[ƒhA–ß‚è’l‚Í‘‚«‚ñ‚¾•¶š”( ƒ}ƒ‹ƒ`ƒoƒCƒg•¶š—ñ”Å‚Å‚Í•¶šƒR[ƒhŒ`®‚Æ‚µ‚Ä SetUseCharCodeFormat ‚Åİ’è‚µ‚½Œ`®‚ªg—p‚³‚ê‚Ü‚· )
extern	const TCHAR *	strposDx(      const TCHAR *Str, int Pos ) ;									// •¶š—ñ‚Ìw’è‚ÌˆÊ’u‚ÌƒAƒhƒŒƒX‚ğæ“¾‚·‚éAPos ‚Íæ“¾‚·‚éˆÊ’u@( ƒ}ƒ‹ƒ`ƒoƒCƒg•¶š—ñ”Å‚Å‚Í•¶šƒR[ƒhŒ`®‚Æ‚µ‚Ä SetUseCharCodeFormat ‚Åİ’è‚µ‚½Œ`®‚ªg—p‚³‚ê‚Ü‚· )
extern	const TCHAR *	strpos2Dx(     const TCHAR *Str, int Pos ) ;									// •¶š—ñ‚Ìw’è‚ÌˆÊ’u‚ÌƒAƒhƒŒƒX‚ğæ“¾‚·‚éAPos ‚Íæ“¾‚·‚éˆÊ’u( ‘SŠp•¶š‚à 1 ˆµ‚¢ )@( ƒ}ƒ‹ƒ`ƒoƒCƒg•¶š—ñ”Å‚Å‚Í•¶šƒR[ƒhŒ`®‚Æ‚µ‚Ä SetUseCharCodeFormat ‚Åİ’è‚µ‚½Œ`®‚ªg—p‚³‚ê‚Ü‚· )
extern	const TCHAR *	strstrDx(      const TCHAR *Str1, const TCHAR *Str2 ) ;							// strstr ‚Æ“¯“™‚Ì‹@”\( ƒ}ƒ‹ƒ`ƒoƒCƒg•¶š—ñ”Å‚Å‚Í•¶šƒR[ƒhŒ`®‚Æ‚µ‚Ä SetUseCharCodeFormat ‚Åİ’è‚µ‚½Œ`®‚ªg—p‚³‚ê‚Ü‚· )
extern	int				strstr2Dx(     const TCHAR *Str1, const TCHAR *Str2 ) ;							// strstr ‚Ì–ß‚è’l‚ª•¶š—ñæ“ª‚©‚ç‚Ì•¶š”( ‘SŠp•¶š‚à 1 ˆµ‚¢ ) ‚É‚È‚Á‚½‚à‚Ì( ƒ}ƒ‹ƒ`ƒoƒCƒg•¶š—ñ”Å‚Å‚Í•¶šƒR[ƒhŒ`®‚Æ‚µ‚Ä SetUseCharCodeFormat ‚Åİ’è‚µ‚½Œ`®‚ªg—p‚³‚ê‚Ü‚· )
extern	const TCHAR *	strrstrDx(     const TCHAR *Str1, const TCHAR *Str2 ) ;							// strrstr ‚Æ“¯“™‚Ì‹@”\( ƒ}ƒ‹ƒ`ƒoƒCƒg•¶š—ñ”Å‚Å‚Í•¶šƒR[ƒhŒ`®‚Æ‚µ‚Ä SetUseCharCodeFormat ‚Åİ’è‚µ‚½Œ`®‚ªg—p‚³‚ê‚Ü‚· )
extern	int				strrstr2Dx(    const TCHAR *Str1, const TCHAR *Str2 ) ;							// strrstr ‚Ì–ß‚è’l‚ª•¶š—ñæ“ª‚©‚ç‚Ì•¶š”( ‘SŠp•¶š‚à 1 ˆµ‚¢ ) ‚É‚È‚Á‚½‚à‚Ì( ƒ}ƒ‹ƒ`ƒoƒCƒg•¶š—ñ”Å‚Å‚Í•¶šƒR[ƒhŒ`®‚Æ‚µ‚Ä SetUseCharCodeFormat ‚Åİ’è‚µ‚½Œ`®‚ªg—p‚³‚ê‚Ü‚· )
extern	const TCHAR *	strchrDx(      const TCHAR *Str, DWORD CharCode ) ;								// strchr ‚Æ“¯“™‚Ì‹@”\( ƒ}ƒ‹ƒ`ƒoƒCƒg•¶š—ñ”Å‚Å‚Í•¶šƒR[ƒhŒ`®‚Æ‚µ‚Ä SetUseCharCodeFormat ‚Åİ’è‚µ‚½Œ`®‚ªg—p‚³‚ê‚Ü‚· )
extern	int				strchr2Dx(     const TCHAR *Str, DWORD CharCode ) ;								// strchr ‚Ì–ß‚è’l‚ª•¶š—ñæ“ª‚©‚ç‚Ì•¶š”( ‘SŠp•¶š‚à 1 ˆµ‚¢ ) ‚É‚È‚Á‚½‚à‚Ì( ƒ}ƒ‹ƒ`ƒoƒCƒg•¶š—ñ”Å‚Å‚Í•¶šƒR[ƒhŒ`®‚Æ‚µ‚Ä SetUseCharCodeFormat ‚Åİ’è‚µ‚½Œ`®‚ªg—p‚³‚ê‚Ü‚· )
extern	const TCHAR *	strrchrDx(     const TCHAR *Str, DWORD CharCode ) ;								// strrchr ‚Æ“¯“™‚Ì‹@”\( ƒ}ƒ‹ƒ`ƒoƒCƒg•¶š—ñ”Å‚Å‚Í•¶šƒR[ƒhŒ`®‚Æ‚µ‚Ä SetUseCharCodeFormat ‚Åİ’è‚µ‚½Œ`®‚ªg—p‚³‚ê‚Ü‚· )
extern	int				strrchr2Dx(    const TCHAR *Str, DWORD CharCode ) ;								// strrchr ‚Ì–ß‚è’l‚ª•¶š—ñæ“ª‚©‚ç‚Ì•¶š”( ‘SŠp•¶š‚à 1 ˆµ‚¢ ) ‚É‚È‚Á‚½‚à‚Ì( ƒ}ƒ‹ƒ`ƒoƒCƒg•¶š—ñ”Å‚Å‚Í•¶šƒR[ƒhŒ`®‚Æ‚µ‚Ä SetUseCharCodeFormat ‚Åİ’è‚µ‚½Œ`®‚ªg—p‚³‚ê‚Ü‚· )
extern	TCHAR *			struprDx(      TCHAR *Str ) ;													// strupr ‚Æ“¯“™‚Ì‹@”\( ƒ}ƒ‹ƒ`ƒoƒCƒg•¶š—ñ”Å‚Å‚Í•¶šƒR[ƒhŒ`®‚Æ‚µ‚Ä SetUseCharCodeFormat ‚Åİ’è‚µ‚½Œ`®‚ªg—p‚³‚ê‚Ü‚· )
extern	int				vsprintfDx(    TCHAR *Buffer,                    const TCHAR *FormatString, va_list Arg ) ;	// vsprintf ‚Æ“¯“™‚Ì‹@”\( ƒ}ƒ‹ƒ`ƒoƒCƒg•¶š—ñ”Å‚Å‚Í•¶šƒR[ƒhŒ`®‚Æ‚µ‚Ä SetUseCharCodeFormat ‚Åİ’è‚µ‚½Œ`®‚ªg—p‚³‚ê‚Ü‚· )
extern	int				vsnprintfDx(   TCHAR *Buffer, size_t BufferSize, const TCHAR *FormatString, va_list Arg ) ;	// vsnprintf ‚Æ“¯“™‚Ì‹@”\( ƒ}ƒ‹ƒ`ƒoƒCƒg•¶š—ñ”Å‚Å‚Í•¶šƒR[ƒhŒ`®‚Æ‚µ‚Ä SetUseCharCodeFormat ‚Åİ’è‚µ‚½Œ`®‚ªg—p‚³‚ê‚Ü‚· )
extern	int				sprintfDx(     TCHAR *Buffer,                    const TCHAR *FormatString, ... ) ;			// sprintf ‚Æ“¯“™‚Ì‹@”\( ƒ}ƒ‹ƒ`ƒoƒCƒg•¶š—ñ”Å‚Å‚Í•¶šƒR[ƒhŒ`®‚Æ‚µ‚Ä SetUseCharCodeFormat ‚Åİ’è‚µ‚½Œ`®‚ªg—p‚³‚ê‚Ü‚· )
extern	int				snprintfDx(    TCHAR *Buffer, size_t BufferSize, const TCHAR *FormatString, ... ) ;			// snprintf ‚Æ“¯“™‚Ì‹@”\( ƒ}ƒ‹ƒ`ƒoƒCƒg•¶š—ñ”Å‚Å‚Í•¶šƒR[ƒhŒ`®‚Æ‚µ‚Ä SetUseCharCodeFormat ‚Åİ’è‚µ‚½Œ`®‚ªg—p‚³‚ê‚Ü‚· )
extern	TCHAR *			itoaDx(        int Value, TCHAR *Buffer,                     int Radix ) ;		// itoa ‚Æ“¯“™‚Ì‹@”\( ƒ}ƒ‹ƒ`ƒoƒCƒg•¶š—ñ”Å‚Å‚Í•¶šƒR[ƒhŒ`®‚Æ‚µ‚Ä SetUseCharCodeFormat ‚Åİ’è‚µ‚½Œ`®‚ªg—p‚³‚ê‚Ü‚· )
extern	TCHAR *			itoa_sDx(      int Value, TCHAR *Buffer, size_t BufferBytes, int Radix ) ;		// itoa_s ‚Æ“¯“™‚Ì‹@”\( ƒ}ƒ‹ƒ`ƒoƒCƒg•¶š—ñ”Å‚Å‚Í•¶šƒR[ƒhŒ`®‚Æ‚µ‚Ä SetUseCharCodeFormat ‚Åİ’è‚µ‚½Œ`®‚ªg—p‚³‚ê‚Ü‚· )
extern	int				atoiDx(        const TCHAR *Str ) ;												// atoi ‚Æ“¯“™‚Ì‹@”\( ƒ}ƒ‹ƒ`ƒoƒCƒg•¶š—ñ”Å‚Å‚Í•¶šƒR[ƒhŒ`®‚Æ‚µ‚Ä SetUseCharCodeFormat ‚Åİ’è‚µ‚½Œ`®‚ªg—p‚³‚ê‚Ü‚· )
extern	double			atofDx(        const TCHAR *Str ) ;												// atof ‚Æ“¯“™‚Ì‹@”\( ƒ}ƒ‹ƒ`ƒoƒCƒg•¶š—ñ”Å‚Å‚Í•¶šƒR[ƒhŒ`®‚Æ‚µ‚Ä SetUseCharCodeFormat ‚Åİ’è‚µ‚½Œ`®‚ªg—p‚³‚ê‚Ü‚· )
extern	int				vsscanfDx(     const TCHAR *String, const TCHAR *FormatString, va_list Arg ) ;	// vsscanf ‚Æ“¯“™‚Ì‹@”\( ƒ}ƒ‹ƒ`ƒoƒCƒg•¶š—ñ”Å‚Å‚Í•¶šƒR[ƒhŒ`®‚Æ‚µ‚Ä SetUseCharCodeFormat ‚Åİ’è‚µ‚½Œ`®‚ªg—p‚³‚ê‚Ü‚· )
extern	int				sscanfDx(      const TCHAR *String, const TCHAR *FormatString, ... ) ;			// sscanf ‚Æ“¯“™‚Ì‹@”\( ƒ}ƒ‹ƒ`ƒoƒCƒg•¶š—ñ”Å‚Å‚Í•¶šƒR[ƒhŒ`®‚Æ‚µ‚Ä SetUseCharCodeFormat ‚Åİ’è‚µ‚½Œ`®‚ªg—p‚³‚ê‚Ü‚· )


















// DxNetwork.cppŠÖ”ƒvƒƒgƒ^ƒCƒvéŒ¾

#ifndef DX_NON_NETWORK

// ’ÊMŠÖŒW
extern	int			ProcessNetMessage(				int RunReleaseProcess = FALSE ) ;														// ’ÊMƒƒbƒZ[ƒW‚Ìˆ—‚ğ‚·‚éŠÖ”

extern	int			GetHostIPbyName(				const TCHAR *HostName, IPDATA      *IPDataBuf ) ;										// ‚c‚m‚rƒT[ƒo[‚ğg‚Á‚ÄƒzƒXƒg–¼‚©‚ç‚h‚oƒAƒhƒŒƒX‚ğæ“¾‚·‚é( IPv4”Å )
extern	int			GetHostIPbyName_IPv6(			const TCHAR *HostName, IPDATA_IPv6 *IPDataBuf ) ;										// ‚c‚m‚rƒT[ƒo[‚ğg‚Á‚ÄƒzƒXƒg–¼‚©‚ç‚h‚oƒAƒhƒŒƒX‚ğæ“¾‚·‚é( IPv6”Å )
extern 	int			ConnectNetWork(					IPDATA      IPData, int Port = -1 ) ;													// ‘¼ƒ}ƒVƒ“‚ÉÚ‘±‚·‚é( IPv4”Å )
extern	int			ConnectNetWork_IPv6(			IPDATA_IPv6 IPData, int Port = -1 ) ;													// ‘¼ƒ}ƒVƒ“‚ÉÚ‘±‚·‚é( IPv6”Å )
extern 	int			ConnectNetWork_ASync(			IPDATA      IPData, int Port = -1 ) ;													// ‘¼ƒ}ƒVƒ“‚ÉÚ‘±‚·‚é( IPv4”Å )A”ñ“¯Šú”Å
extern	int			ConnectNetWork_IPv6_ASync(		IPDATA_IPv6 IPData, int Port = -1 ) ;													// ‘¼ƒ}ƒVƒ“‚ÉÚ‘±‚·‚é( IPv6”Å )A”ñ“¯Šú”Å
extern 	int			PreparationListenNetWork(		int Port = -1 ) ;																		// Ú‘±‚ğó‚¯‚ç‚ê‚éó‘Ô‚É‚·‚é( IPv4”Å )
extern 	int			PreparationListenNetWork_IPv6(	int Port = -1 ) ;																		// Ú‘±‚ğó‚¯‚ç‚ê‚éó‘Ô‚É‚·‚é( IPv6”Å )
extern 	int			StopListenNetWork(				void ) ;																				// Ú‘±‚ğó‚¯‚Â‚¯ó‘Ô‚Ì‰ğœ
extern 	int			CloseNetWork(					int NetHandle ) ;																		// Ú‘±‚ğI—¹‚·‚é

extern 	int			GetNetWorkAcceptState(			int NetHandle ) ;																		// Ú‘±ó‘Ô‚ğæ“¾‚·‚é
extern 	int			GetNetWorkDataLength(			int NetHandle ) ;																		// óMƒf[ƒ^‚Ì—Ê‚ğ“¾‚é
extern	int			GetNetWorkSendDataLength(		int NetHandle ) ;																		// –¢‘—M‚Ìƒf[ƒ^‚Ì—Ê‚ğ“¾‚é 
extern 	int			GetNewAcceptNetWork(			void ) ;																				// V‚½‚ÉÚ‘±‚µ‚½’ÊM‰ñü‚ğ“¾‚é
extern 	int			GetLostNetWork(					void ) ;																				// Ú‘±‚ğØ’f‚³‚ê‚½’ÊM‰ñü‚ğ“¾‚é
extern 	int			GetNetWorkIP(					int NetHandle, IPDATA      *IpBuf ) ;													// Ú‘±æ‚Ì‚h‚o‚ğ“¾‚é( IPv4”Å )
extern 	int			GetNetWorkIP_IPv6(				int NetHandle, IPDATA_IPv6 *IpBuf ) ;													// Ú‘±æ‚Ì‚h‚o‚ğ“¾‚é( IPv6”Å )
extern	int			GetMyIPAddress(					IPDATA *IpBuf, int IpBufLength = 1 , int *IpNum = NULL ) ;							// ©•ª‚Ì‚h‚o‚ğ“¾‚é
extern	int			SetConnectTimeOutWait(			int Time ) ;																			// Ú‘±‚Ìƒ^ƒCƒ€ƒAƒEƒg‚Ü‚Å‚ÌŠÔ‚ğİ’è‚·‚é
extern	int			SetUseDXNetWorkProtocol(		int Flag ) ;																			// ‚c‚wƒ‰ƒCƒuƒ‰ƒŠ‚Ì’ÊMŒ`‘Ô‚ğg‚¤‚©‚Ç‚¤‚©‚ğƒZƒbƒg‚·‚é
extern	int			GetUseDXNetWorkProtocol(		void ) ; 																				// ‚c‚wƒ‰ƒCƒuƒ‰ƒŠ‚Ì’ÊMŒ`‘Ô‚ğg‚¤‚©‚Ç‚¤‚©‚ğæ“¾‚·‚é
extern	int			SetUseDXProtocol(				int Flag ) ;																			// SetUseDXNetWorkProtocol ‚Ì•Ê–¼
extern	int			GetUseDXProtocol(				void ) ; 																				// GetUseDXNetWorkProtocol ‚Ì•Ê–¼
extern	int			SetNetWorkCloseAfterLostFlag(	int Flag ) ;																			// Ú‘±‚ªØ’f‚³‚ê‚½’¼Œã‚ÉÚ‘±ƒnƒ“ƒhƒ‹‚ğ‰ğ•ú‚·‚é‚©‚Ç‚¤‚©‚Ìƒtƒ‰ƒO‚ğƒZƒbƒg‚·‚é
extern	int			GetNetWorkCloseAfterLostFlag(	void ) ;																				// Ú‘±‚ªØ’f‚³‚ê‚½’¼Œã‚ÉÚ‘±ƒnƒ“ƒhƒ‹‚ğ‰ğ•ú‚·‚é‚©‚Ç‚¤‚©‚Ìƒtƒ‰ƒO‚ğæ“¾‚·‚é
//extern	int			SetProxySetting( int UseFlag, const char *Address, int Port ) ;														// ‚g‚s‚s‚o’ÊM‚Åg—p‚·‚éƒvƒƒLƒVİ’è‚ğs‚¤
//extern	int			GetProxySetting( int *UseFlagBuffer, char *AddressBuffer, int *PortBuffer ) ;										// ‚g‚s‚s‚o’ÊM‚Åg—p‚·‚éƒvƒƒLƒVİ’è‚ğæ“¾‚·‚é
//extern	int			SetIEProxySetting( void ) ;																							// ‚h‚d‚ÌƒvƒƒLƒVİ’è‚ğ“K‰‚·‚é

extern 	int			NetWorkRecv(			int NetHandle, void *Buffer, int Length ) ;														// óM‚µ‚½ƒf[ƒ^‚ğ“Ç‚İ‚Ş
extern	int			NetWorkRecvToPeek(		int NetHandle, void *Buffer, int Length ) ;														// óM‚µ‚½ƒf[ƒ^‚ğ“Ç‚İ‚ŞA“Ç‚İ‚ñ‚¾ƒf[ƒ^‚Íƒoƒbƒtƒ@‚©‚çíœ‚³‚ê‚È‚¢
extern	int			NetWorkRecvBufferClear(	int NetHandle ) ;																				// óM‚µ‚½ƒf[ƒ^‚ğƒNƒŠƒA‚·‚é
extern 	int			NetWorkSend(			int NetHandle, const void *Buffer, int Length ) ;												// ƒf[ƒ^‚ğ‘—M‚·‚é

extern	int			MakeUDPSocket(			int RecvPort = -1 ) ;																			// UDP‚ğg—p‚µ‚½’ÊM‚ğs‚¤ƒ\ƒPƒbƒgƒnƒ“ƒhƒ‹‚ğì¬‚·‚é( RecvPort ‚ğ -1 ‚É‚·‚é‚Æ‘—Mê—p‚Ìƒ\ƒPƒbƒgƒnƒ“ƒhƒ‹‚É‚È‚è‚Ü‚· )
extern	int			MakeUDPSocket_IPv6(		int RecvPort = -1 ) ;																			// UDP‚ğg—p‚µ‚½’ÊM‚ğs‚¤ƒ\ƒPƒbƒgƒnƒ“ƒhƒ‹‚ğì¬‚·‚é( RecvPort ‚ğ -1 ‚É‚·‚é‚Æ‘—Mê—p‚Ìƒ\ƒPƒbƒgƒnƒ“ƒhƒ‹‚É‚È‚è‚Ü‚· )( IPv6”Å )
extern	int			DeleteUDPSocket(		int NetUDPHandle ) ;																			// UDP‚ğg—p‚µ‚½’ÊM‚ğs‚¤ƒ\ƒPƒbƒgƒnƒ“ƒhƒ‹‚ğíœ‚·‚é
extern	int			NetWorkSendUDP(			int NetUDPHandle, IPDATA       SendIP, int SendPort,  const void *Buffer, int Length ) ;			// UDP‚ğg—p‚µ‚½’ÊM‚Åw’è‚Ì‚h‚o‚Éƒf[ƒ^‚ğ‘—M‚·‚éALength ‚ÍÅ‘å65507ASendPort ‚ğ -1 ‚É‚·‚é‚Æ MakeUDPSocket ‚É RecvPort ‚Å“n‚µ‚½ƒ|[ƒg‚ªg—p‚³‚ê‚Ü‚·( –ß‚è’l  0ˆÈã;‘—M‚Å‚«‚½ƒf[ƒ^ƒTƒCƒY  -1:ƒGƒ‰[  -2:‘—Mƒf[ƒ^‚ª‘å‚«‚·‚¬‚é  -3:‘—M€”õ‚ª‚Å‚«‚Ä‚¢‚È‚¢  )
extern	int			NetWorkSendUDP_IPv6(	int NetUDPHandle, IPDATA_IPv6  SendIP, int SendPort,  const void *Buffer, int Length ) ;			// UDP‚ğg—p‚µ‚½’ÊM‚Åw’è‚Ì‚h‚o‚Éƒf[ƒ^‚ğ‘—M‚·‚éALength ‚ÍÅ‘å65507ASendPort ‚ğ -1 ‚É‚·‚é‚Æ MakeUDPSocket ‚É RecvPort ‚Å“n‚µ‚½ƒ|[ƒg‚ªg—p‚³‚ê‚Ü‚·( –ß‚è’l  0ˆÈã;‘—M‚Å‚«‚½ƒf[ƒ^ƒTƒCƒY  -1:ƒGƒ‰[  -2:‘—Mƒf[ƒ^‚ª‘å‚«‚·‚¬‚é  -3:‘—M€”õ‚ª‚Å‚«‚Ä‚¢‚È‚¢  )( IPv6”Å )
extern	int			NetWorkRecvUDP(			int NetUDPHandle, IPDATA      *RecvIP, int *RecvPort,       void *Buffer, int Length, int Peek ) ;	// UDP‚ğg—p‚µ‚½’ÊM‚Åƒf[ƒ^‚ğóM‚·‚éAPeek ‚É TRUE ‚ğ“n‚·‚ÆóM‚É¬Œ÷‚µ‚Ä‚àƒf[ƒ^‚ğóMƒLƒ…[‚©‚çíœ‚µ‚Ü‚¹‚ñ( –ß‚è’l  0ˆÈã:óM‚µ‚½ƒf[ƒ^‚ÌƒTƒCƒY  -1:ƒGƒ‰[  -2:ƒoƒbƒtƒ@‚ÌƒTƒCƒY‚ª‘«‚è‚È‚¢  -3:óMƒf[ƒ^‚ª‚È‚¢ )
extern	int			NetWorkRecvUDP_IPv6(	int NetUDPHandle, IPDATA_IPv6 *RecvIP, int *RecvPort,       void *Buffer, int Length, int Peek ) ;	// UDP‚ğg—p‚µ‚½’ÊM‚Åƒf[ƒ^‚ğóM‚·‚éAPeek ‚É TRUE ‚ğ“n‚·‚ÆóM‚É¬Œ÷‚µ‚Ä‚àƒf[ƒ^‚ğóMƒLƒ…[‚©‚çíœ‚µ‚Ü‚¹‚ñ( –ß‚è’l  0ˆÈã:óM‚µ‚½ƒf[ƒ^‚ÌƒTƒCƒY  -1:ƒGƒ‰[  -2:ƒoƒbƒtƒ@‚ÌƒTƒCƒY‚ª‘«‚è‚È‚¢  -3:óMƒf[ƒ^‚ª‚È‚¢ )( IPv6”Å )
//extern int		CheckNetWorkSendUDP(	int NetUDPHandle ) ;																			// UDP‚ğg—p‚µ‚½’ÊM‚Åƒf[ƒ^‚ª‘—M‚Å‚«‚éó‘Ô‚©‚Ç‚¤‚©‚ğ’²‚×‚é( –ß‚è’l  -1:ƒGƒ‰[  TRUE:‘—M‰Â”\  FALSE:‘—M•s‰Â”\ )
extern	int			CheckNetWorkRecvUDP(	int NetUDPHandle ) ;																			// UDP‚ğg—p‚µ‚½’ÊM‚ÅV‚½‚ÈóMƒf[ƒ^‚ª‘¶İ‚·‚é‚©‚Ç‚¤‚©‚ğ’²‚×‚é( –ß‚è’l  -1:ƒGƒ‰[  TRUE:óMƒf[ƒ^‚ ‚è  FALSE:óMƒf[ƒ^‚È‚µ )

/*	g—p•s‰Â
extern	int			HTTP_FileDownload(			const char *FileURL, const char *SavePath = NULL , void **SaveBufferP = NULL , int *FileSize = NULL , char **ParamList = NULL ) ;						// HTTP ‚ğg—p‚µ‚Äƒlƒbƒgƒ[ƒNã‚Ìƒtƒ@ƒCƒ‹‚ğƒ_ƒEƒ“ƒ[ƒh‚·‚é
extern	int			HTTP_GetFileSize(			const char *FileURL ) ;																		// HTTP ‚ğg—p‚µ‚Äƒlƒbƒgƒ[ƒNã‚Ìƒtƒ@ƒCƒ‹‚ÌƒTƒCƒY‚ğ“¾‚é

extern	int			HTTP_StartFileDownload(		const char *FileURL, const char *SavePath, void **SaveBufferP = NULL , char **ParamList = NULL ) ;	// HTTP ‚ğg—p‚µ‚½ƒlƒbƒgƒ[ƒNã‚Ìƒtƒ@ƒCƒ‹‚ğƒ_ƒEƒ“ƒ[ƒh‚·‚éˆ—‚ğŠJn‚·‚é
extern	int			HTTP_StartGetFileSize(		const char *FileURL ) ;																		// HTTP ‚ğg—p‚µ‚½ƒlƒbƒgƒ[ƒNã‚Ìƒtƒ@ƒCƒ‹‚ÌƒTƒCƒY‚ğ“¾‚éˆ—‚ğŠJn‚·‚é
extern	int			HTTP_Close(					int HttpHandle ) ;																			// HTTP ‚Ìˆ—‚ğI—¹‚µAƒnƒ“ƒhƒ‹‚ğ‰ğ•ú‚·‚é
extern	int			HTTP_CloseAll(				void ) ;																					// ‘S‚Ä‚Ìƒnƒ“ƒhƒ‹‚É‘Î‚µ‚Ä HTTP_Close ‚ğs‚¤
extern	int			HTTP_GetState(				int HttpHandle ) ;																			// HTTP ˆ—‚ÌŒ»İ‚Ìó‘Ô‚ğ“¾‚é( NET_RES_COMPLETE “™ )
extern	int			HTTP_GetError(				int HttpHandle ) ;																			// HTTP ˆ—‚ÅƒGƒ‰[‚ª”­¶‚µ‚½ê‡AƒGƒ‰[‚Ì“à—e‚ğ“¾‚é( HTTP_ERR_NONE “™ )
extern	int			HTTP_GetDownloadFileSize(	int HttpHandle ) ;																			// HTTP ˆ—‚Å‘ÎÛ‚Æ‚È‚Á‚Ä‚¢‚éƒtƒ@ƒCƒ‹‚ÌƒTƒCƒY‚ğ“¾‚é( –ß‚è’l: -1 = ƒGƒ‰[Eá‚µ‚­‚Í‚Ü‚¾ƒtƒ@ƒCƒ‹‚ÌƒTƒCƒY‚ğæ“¾‚µ‚Ä‚¢‚È‚¢  0ˆÈã = ƒtƒ@ƒCƒ‹‚ÌƒTƒCƒY )
extern	int			HTTP_GetDownloadedFileSize( int HttpHandle ) ;																			// HTTP ˆ—‚ÅŠù‚Éƒ_ƒEƒ“ƒ[ƒh‚µ‚½ƒtƒ@ƒCƒ‹‚ÌƒTƒCƒY‚ğæ“¾‚·‚é

extern	int			fgetsForNetHandle(			int NetHandle, char *strbuffer ) ;															// fgets ‚Ìƒlƒbƒgƒ[ƒNƒnƒ“ƒhƒ‹”Å( -1:æ“¾‚Å‚«‚¸ 0:æ“¾‚Å‚«‚½ )
extern	int			URLAnalys(					const char *URL, char *HostBuf = NULL , char *PathBuf = NULL , char *FileNameBuf = NULL , int *PortBuf = NULL ) ;	// ‚t‚q‚k‚ğ‰ğÍ‚·‚é
extern	int			URLConvert(					char *URL, int ParamConvert = TRUE , int NonConvert = FALSE ) ;								// HTTP ‚É“n‚¹‚È‚¢‹L†‚ªg‚í‚ê‚½•¶š—ñ‚ğ“n‚¹‚é‚æ‚¤‚È•¶š—ñ‚É•ÏŠ·‚·‚é( –ß‚è’l: -1 = ƒGƒ‰[  0ˆÈã = •ÏŠ·Œã‚Ì•¶š—ñ‚ÌƒTƒCƒY )
extern	int			URLParamAnalysis(			char **ParamList, char **ParamStringP ) ;													// HTTP —pƒpƒ‰ƒ[ƒ^ƒŠƒXƒg‚©‚çˆê‚Â‚Ìƒpƒ‰ƒ[ƒ^•¶š—ñ‚ğì¬‚·‚é( –ß‚è’l:  -1 = ƒGƒ‰[  0ˆÈã = ƒpƒ‰ƒ[ƒ^‚Ì•¶š—ñ‚Ì’·‚³ )
*/

#endif // DX_NON_NETWORK
















// DxInputString.cppŠÖ”ƒvƒƒgƒ^ƒCƒvéŒ¾

#ifndef DX_NON_INPUTSTRING

// •¶šƒR[ƒhƒoƒbƒtƒ@‘€ìŠÖŒW
extern	int			StockInputChar(		TCHAR CharCode ) ;								// •¶šƒR[ƒhƒoƒbƒtƒ@‚É•¶šƒR[ƒh‚ğƒXƒgƒbƒN‚·‚é
extern	int			ClearInputCharBuf(	void ) ;										// •¶šƒR[ƒhƒoƒbƒtƒ@‚ğƒNƒŠƒA‚·‚é
extern	TCHAR		GetInputChar(		int DeleteFlag ) ;								// •¶šƒR[ƒhƒoƒbƒtƒ@‚É—­‚Ü‚Á‚½ƒf[ƒ^‚©‚ç•¶šƒR[ƒh‚ğˆê‚Âæ“¾‚·‚é
extern	TCHAR		GetInputCharWait(	int DeleteFlag ) ;								// •¶šƒR[ƒhƒoƒbƒtƒ@‚É—­‚Ü‚Á‚½ƒf[ƒ^‚©‚ç•¶šƒR[ƒh‚ğˆê‚Âæ“¾‚·‚éAƒoƒbƒtƒ@‚É‚È‚É‚à•¶šƒR[ƒh‚ª‚È‚¢ê‡‚Í•¶šƒR[ƒh‚ªƒoƒbƒtƒ@‚Éˆê•¶š•ª—­‚Ü‚é‚Ü‚Å‘Ò‚Â

extern	int			GetOneChar(			TCHAR *CharBuffer, int DeleteFlag ) ;			// •¶šƒR[ƒhƒoƒbƒtƒ@‚É—­‚Ü‚Á‚½ƒf[ƒ^‚©‚ç‚P•¶š•ªæ“¾‚·‚é
extern	int			GetOneCharWait(		TCHAR *CharBuffer, int DeleteFlag ) ;			// •¶šƒR[ƒhƒoƒbƒtƒ@‚É—­‚Ü‚Á‚½ƒf[ƒ^‚©‚ç‚P•¶š•ªæ“¾‚·‚éAƒoƒbƒtƒ@‚É‰½‚à•¶šƒR[ƒh‚ª‚È‚¢ê‡‚Í•¶šƒR[ƒh‚ªƒoƒbƒtƒ@‚Éˆê•¶š•ª—­‚Ü‚é‚Ü‚Å‘Ò‚Â
extern	int			GetCtrlCodeCmp(		TCHAR Char ) ;									// w’è‚Ì•¶šƒR[ƒh‚ªƒAƒXƒL[ƒRƒ“ƒgƒ[ƒ‹ƒR[ƒh‚©’²‚×‚é

#endif // DX_NON_INPUTSTRING

#ifndef DX_NON_KEYEX

extern	int			DrawIMEInputString(				int x, int y, int SelectStringNum , int DrawCandidateList = TRUE ) ;	// ‰æ–Êã‚É“ü—Í’†‚Ì•¶š—ñ‚ğ•`‰æ‚·‚é
extern	int			SetUseIMEFlag(					int UseFlag ) ;							// ‚h‚l‚d‚ğg—p‚·‚é‚©‚Ç‚¤‚©‚ğİ’è‚·‚é
extern	int			SetInputStringMaxLengthIMESync(	int Flag ) ;							// ‚h‚l‚d‚Å“ü—Í‚Å‚«‚éÅ‘å•¶š”‚ğ MakeKeyInput ‚Ìİ’è‚É‡‚í‚¹‚é‚©‚Ç‚¤‚©‚ğƒZƒbƒg‚·‚é( TRUE:‚ ‚í‚¹‚é  FALSE:‚ ‚í‚¹‚È‚¢(ƒfƒtƒHƒ‹ƒg) )
extern	int			SetIMEInputStringMaxLength(		int Length ) ;							// ‚h‚l‚d‚Åˆê“x‚É“ü—Í‚Å‚«‚éÅ‘å•¶š”‚ğİ’è‚·‚é( 0:§ŒÀ‚È‚µ  1ˆÈã:w’è‚Ì•¶š”‚Å§ŒÀ )

#endif // DX_NON_KEYEX

extern	int			GetStringPoint(				const TCHAR *String, int Point ) ;			// ‘SŠp•¶šA”¼Šp•¶š“ü‚è—‚ê‚é’†‚©‚çw’è‚Ì•¶š”‚Å‚Ì”¼Šp•¶š”‚ğ“¾‚é
extern	int			GetStringPoint2(			const TCHAR *String, int Point ) ;			// ‘SŠp•¶šA”¼Šp•¶š“ü‚è—‚ê‚é’†‚©‚çw’è‚Ì”¼Šp•¶š”‚Å‚Ì•¶š”‚ğ“¾‚é
extern	int			GetStringLength(			const TCHAR *String ) ;						// ‘SŠp•¶šA”¼Šp•¶š“ü‚è—‚ê‚é’†‚©‚ç•¶š”‚ğæ“¾‚·‚é

#ifndef DX_NON_FONT
extern	int			DrawObtainsString(			int x, int y, int AddY, const TCHAR *String, unsigned int StrColor, unsigned int StrEdgeColor = 0 , int FontHandle = -1 , unsigned int SelectBackColor = 0xffffffff , unsigned int SelectStrColor = 0 , unsigned int SelectStrEdgeColor = 0xffffffff , int SelectStart = -1 , int SelectEnd = -1 ) ;		// •`‰æ‰Â”\—Ìˆæ‚Éû‚Ü‚é‚æ‚¤‚É‰üs‚µ‚È‚ª‚ç•¶š—ñ‚ğ•`‰æ
extern	int			DrawObtainsString_CharClip(	int x, int y, int AddY, const TCHAR *String, unsigned int StrColor, unsigned int StrEdgeColor = 0 , int FontHandle = -1 , unsigned int SelectBackColor = 0xffffffff , unsigned int SelectStrColor = 0 , unsigned int SelectStrEdgeColor = 0xffffffff , int SelectStart = -1 , int SelectEnd = -1 ) ;		// •`‰æ‰Â”\—Ìˆæ‚Éû‚Ü‚é‚æ‚¤‚É‰üs‚µ‚È‚ª‚ç•¶š—ñ‚ğ•`‰æ( ƒNƒŠƒbƒv‚ª•¶š’PˆÊ )
extern	int			GetObtainsStringCharPosition(			int x, int y, int AddY, const TCHAR *String, int StrLen, int *PosX, int *PosY, int FontHandle = -1 ) ;		// •`‰æ‰Â”\—Ìˆæ‚Éû‚Ü‚é‚æ‚¤‚É‰üs‚µ‚È‚ª‚ç•¶š—ñ‚ğ•`‰æ‚µ‚½ê‡‚Ì•¶š—ñ‚Ì––’[‚ÌÀ•W‚ğæ“¾‚·‚é
extern	int			GetObtainsStringCharPosition_CharClip(	int x, int y, int AddY, const TCHAR *String, int StrLen, int *PosX, int *PosY, int FontHandle = -1 ) ;		// •`‰æ‰Â”\—Ìˆæ‚Éû‚Ü‚é‚æ‚¤‚É‰üs‚µ‚È‚ª‚ç•¶š—ñ‚ğ•`‰æ‚µ‚½ê‡‚Ì•¶š—ñ‚Ì––’[‚ÌÀ•W‚ğæ“¾‚·‚é( ƒNƒŠƒbƒv‚ª•¶š’PˆÊ )
#endif // DX_NON_FONT
extern	int			DrawObtainsBox(				int x1, int y1, int x2, int y2, int AddY, unsigned int Color, int FillFlag ) ;																																										// •`‰æ‰Â”\—Ìˆæ‚Éû‚Ü‚é‚æ‚¤‚É•â³‚ğ‰Á‚¦‚È‚ª‚ç‹éŒ`‚ğ•`‰æ

#ifndef DX_NON_KEYEX

extern	int			InputStringToCustom(		int x, int y, size_t BufLength, TCHAR *StrBuffer, int CancelValidFlag, int SingleCharOnlyFlag, int NumCharOnlyFlag, int DoubleCharOnlyFlag = FALSE , int EnableNewLineFlag = FALSE , int DisplayCandidateList = TRUE ) ;		// •¶š—ñ‚Ì“ü—Íæ“¾

extern	int			KeyInputString(				int x, int y, size_t CharMaxLength, TCHAR *StrBuffer, int CancelValidFlag ) ;														// •¶š—ñ‚Ì“ü—Íæ“¾
extern	int			KeyInputSingleCharString(	int x, int y, size_t CharMaxLength, TCHAR *StrBuffer, int CancelValidFlag ) ;														// ”¼Šp•¶š—ñ‚Ì‚İ‚Ì“ü—Íæ“¾
extern	int			KeyInputNumber(				int x, int y, int MaxNum, int MinNum, int CancelValidFlag ) ;																	// ”’l‚Ì“ü—Íæ“¾

extern	int			GetIMEInputModeStr(			TCHAR *GetBuffer ) ;																											// IME‚Ì“ü—Íƒ‚[ƒh•¶š—ñ‚ğæ“¾‚·‚é
extern	const IMEINPUTDATA* GetIMEInputData(	void ) ;																														// IME‚Å“ü—Í’†‚Ì•¶š—ñ‚Ìî•ñ‚ğæ“¾‚·‚é
extern	int			SetKeyInputStringColor(		ULONGLONG NmlStr, ULONGLONG NmlCur, ULONGLONG IMEStrBack, ULONGLONG IMECur, ULONGLONG IMELine, ULONGLONG IMESelectStr, ULONGLONG IMEModeStr , ULONGLONG NmlStrE = 0 , ULONGLONG IMESelectStrE = 0 , ULONGLONG IMEModeStrE = 0 , ULONGLONG IMESelectWinE = ULL_PARAM( 0xffffffffffffffff ) ,	ULONGLONG IMESelectWinF = ULL_PARAM( 0xffffffffffffffff ) , ULONGLONG SelectStrBackColor = ULL_PARAM( 0xffffffffffffffff ) , ULONGLONG SelectStrColor = ULL_PARAM( 0xffffffffffffffff ) , ULONGLONG SelectStrEdgeColor = ULL_PARAM( 0xffffffffffffffff ), ULONGLONG IMEStr = ULL_PARAM( 0xffffffffffffffff ), ULONGLONG IMEStrE = ULL_PARAM( 0xffffffffffffffff )  ) ;	// ( SetKeyInputStringColor2 ‚Ì‹ŒŠÖ” )InputStringŠÖ”g—p‚Ì•¶š‚ÌŠeF‚ğ•ÏX‚·‚é
extern	int			SetKeyInputStringColor2(	int TargetColor /* DX_KEYINPSTRCOLOR_NORMAL_STR “™ */ , unsigned int Color ) ;													// InputStringŠÖ”g—p‚Ì•¶š‚ÌŠeF‚ğ•ÏX‚·‚é
extern	int			ResetKeyInputStringColor2(	int TargetColor /* DX_KEYINPSTRCOLOR_NORMAL_STR “™ */ ) ;																		// SetKeyInputStringColor2 ‚Åİ’è‚µ‚½F‚ğƒfƒtƒHƒ‹ƒg‚É–ß‚·
extern	int			SetKeyInputStringFont(		int FontHandle ) ;																												// ƒL[“ü—Í•¶š—ñ•`‰æŠÖ˜A‚Åg—p‚·‚éƒtƒHƒ“ƒg‚Ìƒnƒ“ƒhƒ‹‚ğ•ÏX‚·‚é(-1‚ÅƒfƒtƒHƒ‹ƒg‚ÌƒtƒHƒ“ƒgƒnƒ“ƒhƒ‹)
extern	int			SetKeyInputStringEndCharaMode( int EndCharaMode /* DX_KEYINPSTR_ENDCHARAMODE_OVERWRITE “™ */ ) ;															// ƒL[“ü—Í•¶š—ñˆ—‚Ì“ü—Í•¶š”‚ªŒÀŠE‚É’B‚µ‚Ä‚¢‚éó‘Ô‚ÅA•¶š—ñ‚Ì––’[•”•ª‚Å“ü—Í‚ªs‚í‚ê‚½ê‡‚Ìˆ—ƒ‚[ƒh‚ğ•ÏX‚·‚é
extern	int			DrawKeyInputModeString(		int x, int y ) ;																												// “ü—Íƒ‚[ƒh•¶š—ñ‚ğ•`‰æ‚·‚é

extern	int			InitKeyInput(				void ) ;																														// ƒL[“ü—Íƒf[ƒ^‰Šú‰»
extern	int			MakeKeyInput(				size_t MaxStrLength, int CancelValidFlag, int SingleCharOnlyFlag, int NumCharOnlyFlag, int DoubleCharOnlyFlag = FALSE , int EnableNewLineFlag = FALSE ) ;			// V‚µ‚¢ƒL[“ü—Íƒnƒ“ƒhƒ‹‚Ìì¬
extern	int			DeleteKeyInput(				int InputHandle ) ;																												// ƒL[“ü—Íƒnƒ“ƒhƒ‹‚Ìíœ
extern	int			SetActiveKeyInput(			int InputHandle ) ;																												// w’è‚ÌƒL[“ü—Íƒnƒ“ƒhƒ‹‚ğƒAƒNƒeƒBƒu‚É‚·‚é( -1 ‚ğw’è‚·‚é‚ÆƒAƒNƒeƒBƒu‚ÈƒL[“ü—Íƒnƒ“ƒhƒ‹‚ª–³‚¢ó‘Ô‚É‚È‚è‚Ü‚· )
extern	int			GetActiveKeyInput(			void ) ;																														// Œ»İƒAƒNƒeƒBƒu‚É‚È‚Á‚Ä‚¢‚éƒL[“ü—Íƒnƒ“ƒhƒ‹‚ğæ“¾‚·‚é
extern	int			CheckKeyInput(				int InputHandle ) ;																												// ƒL[“ü—Íƒnƒ“ƒhƒ‹‚Ì“ü—Í‚ªI—¹‚µ‚Ä‚¢‚é‚©æ“¾‚·‚é
extern	int			ReStartKeyInput(			int InputHandle ) ;																												// “ü—Í‚ªŠ®—¹‚µ‚½ƒL[“ü—Íƒnƒ“ƒhƒ‹‚ğÄ“x•ÒWó‘Ô‚É–ß‚·
extern	int			ProcessActKeyInput(			void ) ;																														// ƒL[“ü—Íƒnƒ“ƒhƒ‹ˆ—ŠÖ”
extern	int			DrawKeyInputString(			int x, int y, int InputHandle , int DrawCandidateList = TRUE ) ;																								// ƒL[“ü—Íƒnƒ“ƒhƒ‹‚Ì“ü—Í’†î•ñ‚Ì•`‰æ
extern	int			SetKeyInputDrawArea(		int x1, int y1, int x2, int y2, int InputHandle ) ;																				// ƒL[“ü—Íƒnƒ“ƒhƒ‹‚Ì“ü—Í’†•¶š—ñ‚ğ•`‰æ‚·‚éÛ‚Ì•`‰æ”ÍˆÍ‚ğİ’è‚·‚é

extern	int			SetKeyInputSelectArea(		int  SelectStart, int  SelectEnd, int InputHandle ) ;																			// ƒL[“ü—Íƒnƒ“ƒhƒ‹‚Ìw’è‚Ì—Ìˆæ‚ğ‘I‘ğó‘Ô‚É‚·‚é( SelectStart ‚Æ SelectEnd ‚É -1 ‚ğw’è‚·‚é‚Æ‘I‘ğó‘Ô‚ª‰ğœ‚³‚ê‚Ü‚· )
extern	int			GetKeyInputSelectArea(		int *SelectStart, int *SelectEnd, int InputHandle ) ;																			// ƒL[“ü—Íƒnƒ“ƒhƒ‹‚Ì‘I‘ğ—Ìˆæ‚ğæ“¾‚·‚é
extern	int			SetKeyInputDrawStartPos(	int DrawStartPos, int InputHandle ) ;																							// ƒL[“ü—Íƒnƒ“ƒhƒ‹‚Ì•`‰æŠJn•¶šˆÊ’u‚ğİ’è‚·‚é
extern	int			GetKeyInputDrawStartPos(	int InputHandle ) ;																												// ƒL[“ü—Íƒnƒ“ƒhƒ‹‚Ì•`‰æŠJn•¶šˆÊ’u‚ğæ“¾‚·‚é
extern	int			SetKeyInputCursorBrinkTime(	int Time ) ;																													// ƒL[“ü—Íƒnƒ“ƒhƒ‹‚ÌƒL[“ü—Í‚ÌƒJ[ƒ\ƒ‹‚Ì“_–Å‚·‚é‘‚³‚ğƒZƒbƒg‚·‚é
extern	int			SetKeyInputCursorBrinkFlag(	int Flag ) ;																													// ƒL[“ü—Íƒnƒ“ƒhƒ‹‚ÌƒL[“ü—Í‚ÌƒJ[ƒ\ƒ‹‚ğ“_–Å‚³‚¹‚é‚©‚Ç‚¤‚©‚ğƒZƒbƒg‚·‚é
extern	int			SetKeyInputString(			const TCHAR *String, int InputHandle ) ;																						// ƒL[“ü—Íƒnƒ“ƒhƒ‹‚Éw’è‚Ì•¶š—ñ‚ğƒZƒbƒg‚·‚é
extern	int			SetKeyInputNumber(			int   Number,        int InputHandle ) ;																						// ƒL[“ü—Íƒnƒ“ƒhƒ‹‚Éw’è‚Ì”’l‚ğ•¶š‚É’u‚«Š·‚¦‚ÄƒZƒbƒg‚·‚é
extern	int			SetKeyInputNumberToFloat(	float Number,        int InputHandle ) ;																						// ƒL[“ü—Íƒnƒ“ƒhƒ‹‚Éw’è‚Ì•‚“®¬”“_’l‚ğ•¶š‚É’u‚«Š·‚¦‚ÄƒZƒbƒg‚·‚é
extern	int			GetKeyInputString(			TCHAR *StrBuffer,    int InputHandle ) ;																						// ƒL[“ü—Íƒnƒ“ƒhƒ‹‚Ì“ü—Í’†‚Ì•¶š—ñ‚ğæ“¾‚·‚é
extern	int			GetKeyInputNumber(			int InputHandle ) ;																												// ƒL[“ü—Íƒnƒ“ƒhƒ‹‚Ì“ü—Í’†‚Ì•¶š—ñ‚ğ®”’l‚Æ‚µ‚Äæ“¾‚·‚é
extern	float		GetKeyInputNumberToFloat(	int InputHandle ) ;																												// ƒL[“ü—Íƒnƒ“ƒhƒ‹‚Ì“ü—Í’†‚Ì•¶š—ñ‚ğ•‚“®¬”“_’l‚Æ‚µ‚Äæ“¾‚·‚é
extern	int			SetKeyInputCursorPosition(	int Position,        int InputHandle ) ;																						// ƒL[“ü—Íƒnƒ“ƒhƒ‹‚ÌŒ»İ‚ÌƒJ[ƒ\ƒ‹ˆÊ’u‚ğİ’è‚·‚é
extern	int			GetKeyInputCursorPosition(	int InputHandle ) ;																												// ƒL[“ü—Íƒnƒ“ƒhƒ‹‚ÌŒ»İ‚ÌƒJ[ƒ\ƒ‹ˆÊ’u‚ğæ“¾‚·‚é

#endif // DX_NON_KEYEX











// DxFile.cppŠÖ”ƒvƒƒgƒ^ƒCƒvéŒ¾

// ƒtƒ@ƒCƒ‹ƒAƒNƒZƒXŠÖ”
extern	int			FileRead_open(				const TCHAR *FilePath , int ASync = FALSE ) ;					// ƒtƒ@ƒCƒ‹‚ğŠJ‚­
extern	int			FileRead_open_mem(			const void *FileImage, size_t FileImageSize ) ;					// ƒƒ‚ƒŠ‚É“WŠJ‚³‚ê‚½ƒtƒ@ƒCƒ‹‚ğŠJ‚­
extern	LONGLONG	FileRead_size(				const TCHAR *FilePath ) ;										// ƒtƒ@ƒCƒ‹‚ÌƒTƒCƒY‚ğæ“¾‚·‚é
extern	int			FileRead_close(				int FileHandle ) ;												// ƒtƒ@ƒCƒ‹‚ğ•Â‚¶‚é
extern	LONGLONG	FileRead_tell(				int FileHandle ) ;												// ƒtƒ@ƒCƒ‹ƒ|ƒCƒ“ƒ^‚Ì“Ç‚İ‚İˆÊ’u‚ğæ“¾‚·‚é
extern	int			FileRead_seek(				int FileHandle , LONGLONG Offset , int Origin ) ;				// ƒtƒ@ƒCƒ‹ƒ|ƒCƒ“ƒ^‚Ì“Ç‚İ‚İˆÊ’u‚ğ•ÏX‚·‚é
extern	int			FileRead_read(				void *Buffer , int ReadSize , int FileHandle ) ;				// ƒtƒ@ƒCƒ‹‚©‚çƒf[ƒ^‚ğ“Ç‚İ‚Ş
extern	int			FileRead_idle_chk(			int FileHandle ) ;												// ƒtƒ@ƒCƒ‹“Ç‚İ‚İ‚ªŠ®—¹‚µ‚Ä‚¢‚é‚©‚Ç‚¤‚©‚ğæ“¾‚·‚é
extern	int			FileRead_eof(				int FileHandle ) ;												// ƒtƒ@ƒCƒ‹‚Ì“Ç‚İ‚İˆÊ’u‚ªI’[‚É’B‚µ‚Ä‚¢‚é‚©‚Ç‚¤‚©‚ğæ“¾‚·‚é
extern	int			FileRead_set_format(		int FileHandle, int CharCodeFormat /* DX_CHARCODEFORMAT_SHIFTJIS “™ */ ) ;	// ƒtƒ@ƒCƒ‹‚Ì•¶šƒR[ƒhŒ`®‚ğİ’è‚·‚é( ƒeƒLƒXƒgƒtƒ@ƒCƒ‹—p )
extern	int			FileRead_gets(				TCHAR *Buffer , int BufferSize , int FileHandle ) ;				// ƒtƒ@ƒCƒ‹‚©‚ç•¶š—ñ‚ğ“Ç‚İo‚·
extern	TCHAR		FileRead_getc(				int FileHandle ) ;												// ƒtƒ@ƒCƒ‹‚©‚çˆê•¶š“Ç‚İo‚·
extern	int			FileRead_scanf(				int FileHandle , const TCHAR *Format , ... ) ;					// ƒtƒ@ƒCƒ‹‚©‚ç‘®‰»‚³‚ê‚½ƒf[ƒ^‚ğ“Ç‚İo‚·

extern	DWORD_PTR	FileRead_createInfo(		const TCHAR *ObjectPath ) ;										// ƒtƒ@ƒCƒ‹î•ñƒnƒ“ƒhƒ‹‚ğì¬‚·‚é( –ß‚è’l  -1:ƒGƒ‰[  -1ˆÈŠO:ƒtƒ@ƒCƒ‹î•ñƒnƒ“ƒhƒ‹ )
extern	int			FileRead_getInfoNum(		DWORD_PTR FileInfoHandle ) ;									// ƒtƒ@ƒCƒ‹î•ñƒnƒ“ƒhƒ‹’†‚Ìƒtƒ@ƒCƒ‹‚Ì”‚ğæ“¾‚·‚é
extern	int			FileRead_getInfo(			int Index , FILEINFO *Buffer , DWORD_PTR FileInfoHandle ) ;		// ƒtƒ@ƒCƒ‹î•ñƒnƒ“ƒhƒ‹’†‚Ìƒtƒ@ƒCƒ‹‚Ìî•ñ‚ğæ“¾‚·‚é
extern	int			FileRead_deleteInfo(		DWORD_PTR FileInfoHandle ) ;									// ƒtƒ@ƒCƒ‹î•ñƒnƒ“ƒhƒ‹‚ğíœ‚·‚é

extern	DWORD_PTR	FileRead_findFirst(			const TCHAR *FilePath, FILEINFO *Buffer ) ;						// w’è‚Ìƒtƒ@ƒCƒ‹–”‚ÍƒtƒHƒ‹ƒ_‚Ìî•ñ‚ğæ“¾‚µAƒtƒ@ƒCƒ‹ŒŸõƒnƒ“ƒhƒ‹‚àì¬‚·‚é( –ß‚è’l: -1=ƒGƒ‰[  -1ˆÈŠO=ƒtƒ@ƒCƒ‹ŒŸõƒnƒ“ƒhƒ‹ )
extern	int			FileRead_findNext(			DWORD_PTR FindHandle, FILEINFO *Buffer ) ;						// ğŒ‚Ì‡’v‚·‚éŸ‚Ìƒtƒ@ƒCƒ‹‚Ìî•ñ‚ğæ“¾‚·‚é( –ß‚è’l: -1=ƒGƒ‰[  0=¬Œ÷ )
extern	int			FileRead_findClose(			DWORD_PTR FindHandle ) ;										// ƒtƒ@ƒCƒ‹ŒŸõƒnƒ“ƒhƒ‹‚ğ•Â‚¶‚é( –ß‚è’l: -1=ƒGƒ‰[  0=¬Œ÷ )

extern	int			FileRead_fullyLoad(			const TCHAR *FilePath ) ;										// w’è‚Ìƒtƒ@ƒCƒ‹‚Ì“à—e‚ğ‘S‚Äƒƒ‚ƒŠ‚É“Ç‚İ‚İA‚»‚Ìî•ñ‚ÌƒAƒNƒZƒX‚É•K—v‚Èƒnƒ“ƒhƒ‹‚ğ•Ô‚·( –ß‚è’l  -1:ƒGƒ‰[  -1ˆÈŠO:ƒnƒ“ƒhƒ‹ )Ag‚¢I‚í‚Á‚½‚çƒnƒ“ƒhƒ‹‚Í FileRead_fullyLoad_delete ‚Åíœ‚·‚é•K—v‚ª‚ ‚è‚Ü‚·
extern	int			FileRead_fullyLoad_delete(	int FLoadHandle ) ;												// FileRead_fullyLoad ‚Å“Ç‚İ‚ñ‚¾ƒtƒ@ƒCƒ‹‚Ìƒnƒ“ƒhƒ‹‚ğíœ‚·‚é
extern	const void*	FileRead_fullyLoad_getImage( int FLoadHandle ) ;											// FileRead_fullyLoad ‚Å“Ç‚İ‚ñ‚¾ƒtƒ@ƒCƒ‹‚Ì“à—e‚ğŠi”[‚µ‚½ƒƒ‚ƒŠƒAƒhƒŒƒX‚ğæ“¾‚·‚é
extern	LONGLONG	FileRead_fullyLoad_getSize(	int FLoadHandle ) ;												// FileRead_fullyLoad ‚Å“Ç‚İ‚ñ‚¾ƒtƒ@ƒCƒ‹‚ÌƒTƒCƒY‚ğæ“¾‚·‚é

// İ’èŠÖŒWŠÖ”
extern	int			GetStreamFunctionDefault(	void ) ;														// ‚c‚wƒ‰ƒCƒuƒ‰ƒŠ‚ÅƒXƒgƒŠ[ƒ€ƒf[ƒ^ƒAƒNƒZƒX‚Ég—p‚·‚éŠÖ”‚ªƒfƒtƒHƒ‹ƒg‚Ì‚à‚Ì‚©’²‚×‚é( TRUE:ƒfƒtƒHƒ‹ƒg‚Ì‚à‚Ì  FALSE:ƒfƒtƒHƒ‹ƒg‚Å‚Í‚È‚¢ )
extern	int			ChangeStreamFunction(		const STREAMDATASHREDTYPE2  *StreamThread  ) ;					// ‚c‚wƒ‰ƒCƒuƒ‰ƒŠ‚ÅƒXƒgƒŠ[ƒ€ƒf[ƒ^ƒAƒNƒZƒX‚Ég—p‚·‚éŠÖ”‚ğ•ÏX‚·‚é
extern	int			ChangeStreamFunctionW(		const STREAMDATASHREDTYPE2W *StreamThreadW ) ;					// ‚c‚wƒ‰ƒCƒuƒ‰ƒŠ‚ÅƒXƒgƒŠ[ƒ€ƒf[ƒ^ƒAƒNƒZƒX‚Ég—p‚·‚éŠÖ”‚ğ•ÏX‚·‚é( wchar_t g—p”Å )

// •â•ŠÖŒWŠÖ”
extern int			ConvertFullPath( const TCHAR *Src, TCHAR *Dest, const TCHAR *CurrentDir = NULL ) ;			// ƒtƒ‹ƒpƒX‚Å‚Í‚È‚¢ƒpƒX•¶š—ñ‚ğƒtƒ‹ƒpƒX‚É•ÏŠ·‚·‚é( CurrentDir ‚Íƒtƒ‹ƒpƒX‚Å‚ ‚é•K—v‚ª‚ ‚é(Œê”ö‚Éw\x‚ª‚ ‚Á‚Ä‚à–³‚­‚Ä‚à—Ç‚¢) )( CurrentDir ‚ª NULL ‚Ìê‡‚ÍŒ»İ‚ÌƒJƒŒƒ“ƒgƒfƒBƒŒƒNƒgƒŠ‚ğg—p‚·‚é )












// DxInput.cppŠÖ”ƒvƒƒgƒ^ƒCƒvéŒ¾

#ifndef DX_NON_INPUT

// “ü—Íó‘Ôæ“¾ŠÖ”
extern	int			CheckHitKey(							int KeyCode ) ;															// ƒL[ƒ{[ƒh‚Ì‰Ÿ‰ºó‘Ô‚ğæ“¾‚·‚é
extern	int			CheckHitKeyAll(							int CheckType = DX_CHECKINPUT_ALL ) ;									// ‚Ç‚ê‚©ˆê‚Â‚Å‚àƒL[‚ª‰Ÿ‚³‚ê‚Ä‚¢‚é‚©‚Ç‚¤‚©‚ğæ“¾( ‰Ÿ‚³‚ê‚Ä‚¢‚½‚ç–ß‚è’l‚ª 0 ˆÈŠO‚É‚È‚é )
extern	int			GetHitKeyStateAll(						DX_CHAR *KeyStateArray ) ;												// ‚·‚×‚Ä‚ÌƒL[‚Ì‰Ÿ‰ºó‘Ô‚ğæ“¾‚·‚é( KeyStateBuf:charŒ^256ŒÂ•ª‚Ì”z—ñ‚Ìæ“ªƒAƒhƒŒƒX )
extern	int			GetJoypadNum(							void ) ;																// ƒWƒ‡ƒCƒpƒbƒh‚ªÚ‘±‚³‚ê‚Ä‚¢‚é”‚ğæ“¾‚·‚é
extern	int			GetJoypadInputState(					int InputType ) ;														// ƒWƒ‡ƒCƒpƒbƒh‚Ì“ü—Íó‘Ô‚ğæ“¾‚·‚é
extern	int			GetJoypadAnalogInput(					int *XBuf, int *YBuf, int InputType ) ;									// ƒWƒ‡ƒCƒpƒbƒh‚ÌƒAƒiƒƒO“I‚ÈƒXƒeƒBƒbƒN“ü—Íî•ñ‚ğ“¾‚é
extern	int			GetJoypadAnalogInputRight(				int *XBuf, int *YBuf, int InputType ) ;									// ( g—p”ñ„§ )ƒWƒ‡ƒCƒpƒbƒh‚ÌƒAƒiƒƒO“I‚ÈƒXƒeƒBƒbƒN“ü—Íî•ñ‚ğ“¾‚é(‰EƒXƒeƒBƒbƒN—p)
extern	int			GetJoypadDirectInputState(				int InputType, DINPUT_JOYSTATE *DInputState ) ;							// DirectInput ‚©‚ç“¾‚ç‚ê‚éƒWƒ‡ƒCƒpƒbƒh‚Ì¶‚Ìƒf[ƒ^‚ğæ“¾‚·‚é( DX_INPUT_KEY ‚â DX_INPUT_KEY_PAD1 ‚È‚ÇAƒL[ƒ{[ƒh‚ª—‚Şƒ^ƒCƒv‚ğ InputType ‚É“n‚·‚ÆƒGƒ‰[‚Æ‚È‚è -1 ‚ğ•Ô‚· )
extern	int			CheckJoypadXInput(						int InputType ) ;														// w’è‚Ì“ü—ÍƒfƒoƒCƒX‚ª XInput ‚É‘Î‰‚µ‚Ä‚¢‚é‚©‚Ç‚¤‚©‚ğæ“¾‚·‚é( –ß‚è’l  TRUE:XInput‘Î‰‚Ì“ü—ÍƒfƒoƒCƒX  FALSE:XInput”ñ‘Î‰‚Ì“ü—ÍƒfƒoƒCƒX   -1:ƒGƒ‰[ )( DX_INPUT_KEY ‚â DX_INPUT_KEY_PAD1 ‚È‚ÇAƒL[ƒ{[ƒh‚ª—‚Şƒ^ƒCƒv‚ğ InputType ‚É“n‚·‚ÆƒGƒ‰[‚Æ‚È‚è -1 ‚ğ•Ô‚· )
extern	int			GetJoypadXInputState(					int InputType, XINPUT_STATE *XInputState ) ;							// XInput ‚©‚ç“¾‚ç‚ê‚é“ü—ÍƒfƒoƒCƒX( Xbox360ƒRƒ“ƒgƒ[ƒ‰“™ )‚Ì¶‚Ìƒf[ƒ^‚ğæ“¾‚·‚é( XInput”ñ‘Î‰‚Ìƒpƒbƒh‚Ìê‡‚ÍƒGƒ‰[‚Æ‚È‚è -1 ‚ğ•Ô‚·ADX_INPUT_KEY ‚â DX_INPUT_KEY_PAD1 ‚È‚ÇAƒL[ƒ{[ƒh‚ª—‚Şƒ^ƒCƒv‚ğ InputType ‚É“n‚·‚ÆƒGƒ‰[‚Æ‚È‚è -1 ‚ğ•Ô‚· )
extern	int			SetJoypadInputToKeyInput(				int InputType, int PadInput, int KeyInput1, int KeyInput2 = -1 , int KeyInput3 = -1 , int KeyInput4 = -1  ) ; // ƒWƒ‡ƒCƒpƒbƒh‚Ì“ü—Í‚É‘Î‰‚µ‚½ƒL[ƒ{[ƒh‚Ì“ü—Í‚ğİ’è‚·‚é( InputType:İ’è‚ğ•ÏX‚·‚éƒpƒbƒh‚Ì¯•Êq( DX_INPUT_PAD1“™ )@@PadInput:İ’è‚ğ•ÏX‚·‚éƒpƒbƒhƒ{ƒ^ƒ“‚Ì¯•Êq( PAD_INPUT_1 “™ )@@KeyInput1:PadInput ‚ğ‰Ÿ‰º‚µ‚½‚±‚Æ‚É‚·‚éƒL[ƒR[ƒh( KEY_INPUT_A ‚È‚Ç )‚»‚Ì‚P@@KeyInput2:‚»‚Ì‚QA-1‚Åİ’è‚È‚µ@@KeyInput3:‚»‚Ì‚RA-1‚Åİ’è‚È‚µ@@KeyInput4:‚»‚Ì‚SA-1‚Åİ’è‚È‚µ )
extern	int			SetJoypadDeadZone(						int InputType, double Zone ) ;											// ƒWƒ‡ƒCƒpƒbƒh‚Ì–³Œøƒ][ƒ“‚Ìİ’è‚ğs‚¤( InputType:İ’è‚ğ•ÏX‚·‚éƒpƒbƒh‚Ì¯•Êq( DX_INPUT_PAD1“™ )   Zone:V‚µ‚¢–³Œøƒ][ƒ“( 0.0 ` 1.0 )AƒfƒtƒHƒ‹ƒg’l‚Í 0.35 )
extern	int			StartJoypadVibration(					int InputType, int Power, int Time, int EffectIndex = -1 ) ;			// ƒWƒ‡ƒCƒpƒbƒh‚ÌU“®‚ğŠJn‚·‚é
extern	int			StopJoypadVibration(					int InputType, int EffectIndex = -1 ) ;									// ƒWƒ‡ƒCƒpƒbƒh‚ÌU“®‚ğ’â~‚·‚é
extern	int			GetJoypadPOVState(						int InputType, int POVNumber ) ;										// ƒWƒ‡ƒCƒpƒbƒh‚Ì‚o‚n‚u“ü—Í‚Ìó‘Ô‚ğ“¾‚é( –ß‚è’l@w’è‚ÌPOVƒf[ƒ^‚ÌŠp“xA’PˆÊ‚ÍŠp“x‚Ì‚P‚O‚O”{( 90“x‚È‚ç 9000 ) ’†SˆÊ’u‚É‚ ‚éê‡‚Í -1 ‚ª•Ô‚é )
extern	int			ReSetupJoypad(							void ) ;																// ƒWƒ‡ƒCƒpƒbƒh‚ÌÄƒZƒbƒgƒAƒbƒv‚ğs‚¤( V‚½‚ÉÚ‘±‚³‚ê‚½ƒWƒ‡ƒCƒpƒbƒh‚ª‚ ‚Á‚½‚çŒŸo‚³‚ê‚é )

extern	int			SetUseJoypadVibrationFlag(				int Flag ) ;															// ƒWƒ‡ƒCƒpƒbƒh‚ÌU“®‹@”\‚ğg—p‚·‚é‚©‚Ç‚¤‚©‚ğİ’è‚·‚é( TRUE:g—p‚·‚é@@FALSE:g—p‚µ‚È‚¢ )

#endif // DX_NON_INPUT







#ifndef DX_NOTUSE_DRAWFUNCTION

// ‰æ‘œˆ—ŒnŠÖ”ƒvƒƒgƒ^ƒCƒvéŒ¾

// ƒOƒ‰ƒtƒBƒbƒNƒnƒ“ƒhƒ‹ì¬ŠÖŒWŠÖ”
extern	int			MakeGraph(						int SizeX, int SizeY, int NotUse3DFlag = FALSE ) ;							// w’èƒTƒCƒY‚ÌƒOƒ‰ƒtƒBƒbƒNƒnƒ“ƒhƒ‹‚ğì¬‚·‚é
extern	int			MakeScreen(						int SizeX, int SizeY, int UseAlphaChannel = FALSE ) ;						// SetDrawScreen ‚Å•`‰æ‘ÎÛ‚É‚Å‚«‚éƒOƒ‰ƒtƒBƒbƒNƒnƒ“ƒhƒ‹‚ğì¬‚·‚é
extern	int			DerivationGraph(				int   SrcX, int   SrcY, int   Width, int   Height, int SrcGraphHandle ) ;	// w’è‚ÌƒOƒ‰ƒtƒBƒbƒNƒnƒ“ƒhƒ‹‚Ìw’è•”•ª‚¾‚¯‚ğ”²‚«o‚µ‚ÄV‚½‚ÈƒOƒ‰ƒtƒBƒbƒNƒnƒ“ƒhƒ‹‚ğì¬‚·‚é
extern	int			DerivationGraphF(				float SrcX, float SrcY, float Width, float Height, int SrcGraphHandle ) ;	// w’è‚ÌƒOƒ‰ƒtƒBƒbƒNƒnƒ“ƒhƒ‹‚Ìw’è•”•ª‚¾‚¯‚ğ”²‚«o‚µ‚ÄV‚½‚ÈƒOƒ‰ƒtƒBƒbƒNƒnƒ“ƒhƒ‹‚ğì¬‚·‚é( float”Å )
extern	int			DeleteGraph(					int GrHandle, int LogOutFlag = FALSE ) ;									// ƒOƒ‰ƒtƒBƒbƒNƒnƒ“ƒhƒ‹‚ğíœ‚·‚é
extern	int			DeleteSharingGraph(				int GrHandle ) ;															// w’è‚ÌƒOƒ‰ƒtƒBƒbƒNƒnƒ“ƒhƒ‹‚ÆA“¯‚¶ƒOƒ‰ƒtƒBƒbƒNƒnƒ“ƒhƒ‹‚©‚ç”h¶‚µ‚Ä‚¢‚éƒOƒ‰ƒtƒBƒbƒNƒnƒ“ƒhƒ‹( DerivationGraph ‚Å”h¶‚µ‚½ƒnƒ“ƒhƒ‹ALoadDivGraph “Ç‚İ‚ñ‚Åì¬‚³‚ê‚½•¡”‚Ìƒnƒ“ƒhƒ‹ )‚ğˆê“x‚Éíœ‚·‚é
extern	int			GetGraphNum(					void ) ;																	// —LŒø‚ÈƒOƒ‰ƒtƒBƒbƒNƒnƒ“ƒhƒ‹‚Ì”‚ğæ“¾‚·‚é
extern	int			FillGraph(						int GrHandle, int Red, int Green, int Blue, int Alpha = 255 ) ;				// ƒOƒ‰ƒtƒBƒbƒNƒnƒ“ƒhƒ‹‚ğw’è‚ÌF‚Å“h‚è‚Â‚Ô‚·
extern	int			SetGraphLostFlag(				int GrHandle, int *LostFlag ) ;												// w’è‚ÌƒOƒ‰ƒtƒBƒbƒNƒnƒ“ƒhƒ‹‚ªíœ‚³‚ê‚½Û‚É 1 ‚É‚·‚é•Ï”‚ÌƒAƒhƒŒƒX‚ğİ’è‚·‚é
extern	int			InitGraph(						int LogOutFlag = FALSE ) ;													// ‚·‚×‚Ä‚ÌƒOƒ‰ƒtƒBƒbƒNƒnƒ“ƒhƒ‹‚ğíœ‚·‚é
extern	int			ReloadFileGraphAll(				void ) ;																	// ƒtƒ@ƒCƒ‹‚©‚ç‰æ‘œ‚ğ“Ç‚İ‚ñ‚¾‘S‚Ä‚ÌƒOƒ‰ƒtƒBƒbƒNƒnƒ“ƒhƒ‹‚É‚Â‚¢‚ÄAÄ“xƒtƒ@ƒCƒ‹‚©‚ç‰æ‘œ‚ğ“Ç‚İ‚Ş

// ƒVƒƒƒhƒEƒ}ƒbƒvƒnƒ“ƒhƒ‹ŠÖŒWŠÖ”
extern	int			MakeShadowMap(					int SizeX, int SizeY ) ;													// ƒVƒƒƒhƒEƒ}ƒbƒvƒnƒ“ƒhƒ‹‚ğì¬‚·‚é
extern	int			DeleteShadowMap(				int SmHandle ) ;															// ƒVƒƒƒhƒEƒ}ƒbƒvƒnƒ“ƒhƒ‹‚ğíœ‚·‚é
extern	int			SetShadowMapLightDirection(		int SmHandle, VECTOR Direction ) ;											// ƒVƒƒƒhƒEƒ}ƒbƒv‚ª‘z’è‚·‚éƒ‰ƒCƒg‚Ì•ûŒü‚ğİ’è‚·‚é
extern	int			ShadowMap_DrawSetup(			int SmHandle ) ;															// ƒVƒƒƒhƒEƒ}ƒbƒv‚Ö‚Ì•`‰æ‚Ì€”õ‚ğs‚¤
extern	int			ShadowMap_DrawEnd(				void ) ;																	// ƒVƒƒƒhƒEƒ}ƒbƒv‚Ö‚Ì•`‰æ‚ğI—¹‚·‚é
extern	int			SetUseShadowMap(				int SmSlotIndex, int SmHandle ) ;											// •`‰æ‚Åg—p‚·‚éƒVƒƒƒhƒEƒ}ƒbƒv‚ğw’è‚·‚éA—LŒø‚ÈƒXƒƒbƒg‚Í‚O`‚QASmHandle ‚É -1 ‚ğ“n‚·‚Æw’è‚ÌƒXƒƒbƒg‚ÌƒVƒƒƒhƒEƒ}ƒbƒv‚ğ‰ğœ
extern	int			SetShadowMapDrawArea(			int SmHandle, VECTOR MinPosition, VECTOR MaxPosition ) ;					// ƒVƒƒƒhƒEƒ}ƒbƒv‚É•`‰æ‚·‚éÛ‚Ì”ÍˆÍ‚ğİ’è‚·‚é( ‚±‚ÌŠÖ”‚Å•`‰æ”ÍˆÍ‚ğİ’è‚µ‚È‚¢ê‡‚Í‹‘ä‚ğŠg‘å‚µ‚½”ÍˆÍ‚ª•`‰æ”ÍˆÍ‚Æ‚È‚é )
extern	int			ResetShadowMapDrawArea(			int SmHandle ) ;															// SetShadowMapDrawArea ‚Ìİ’è‚ğ‰ğœ‚·‚é
extern	int			SetShadowMapAdjustDepth(		int SmHandle, float Depth ) ;												// ƒVƒƒƒhƒEƒ}ƒbƒv‚ğg—p‚µ‚½•`‰æ‚Ì•â³[“x‚ğİ’è‚·‚é
extern	int			GetShadowMapViewProjectionMatrix( int SmHandle, MATRIX *MatrixBuffer ) ;									// ƒVƒƒƒhƒEƒ}ƒbƒvì¬‚â“K—p‚Ég—p‚·‚éƒrƒ…[s—ñ‚ÆË‰es—ñ‚ğæZ‚µ‚½s—ñ‚ğæ“¾‚·‚é
extern	int			TestDrawShadowMap(				int SmHandle, int x1, int y1, int x2, int y2 ) ;							// ƒVƒƒƒhƒEƒ}ƒbƒv‚ğ‰æ–Ê‚ÉƒeƒXƒg•`‰æ‚·‚é

// ƒOƒ‰ƒtƒBƒbƒNƒnƒ“ƒhƒ‹‚Ö‚Ì‰æ‘œ“]‘—ŠÖ”
extern	int			BltBmpToGraph(					const COLORDATA *BmpColorData, HBITMAP RgbBmp, HBITMAP AlphaBmp,                                                                      int CopyPointX, int CopyPointY,                              int  GrHandle ) ;					// ‚a‚l‚o‚Ì“à—e‚ğƒOƒ‰ƒtƒBƒbƒNƒnƒ“ƒhƒ‹‚É“]‘—
extern	int			BltBmpToDivGraph(				const COLORDATA *BmpColorData, HBITMAP RgbBmp, HBITMAP AlphaBmp,                                                                      int AllNum, int XNum, int YNum, int Width, int Height, const int *GrHandle, int ReverseFlag ) ;	// ‚a‚l‚o‚Ì“à—e‚ğ•ªŠ„ì¬‚µ‚½ƒOƒ‰ƒtƒBƒbƒNƒnƒ“ƒhƒ‹‚½‚¿‚É“]‘—
extern	int			BltBmpOrGraphImageToGraph(		const COLORDATA *BmpColorData, HBITMAP RgbBmp, HBITMAP AlphaBmp, int BmpFlag, const BASEIMAGE *RgbBaseImage, const BASEIMAGE *AlphaBaseImage, int CopyPointX, int CopyPointY,                              int  GrHandle ) ;					// ‚a‚l‚o ‚© BASEIMAGE ‚ğƒOƒ‰ƒtƒBƒbƒNƒnƒ“ƒhƒ‹‚É“]‘—
extern	int			BltBmpOrGraphImageToGraph2(		const COLORDATA *BmpColorData, HBITMAP RgbBmp, HBITMAP AlphaBmp, int BmpFlag, const BASEIMAGE *RgbBaseImage, const BASEIMAGE *AlphaBaseImage, const RECT *SrcRect, int DestX, int DestY,                   int  GrHandle ) ;					// ‚a‚l‚o ‚© BASEIMAGE ‚Ìw’è‚Ì—Ìˆæ‚ğƒOƒ‰ƒtƒBƒbƒNƒnƒ“ƒhƒ‹‚É“]‘—
extern	int			BltBmpOrGraphImageToDivGraph(	const COLORDATA *BmpColorData, HBITMAP RgbBmp, HBITMAP AlphaBmp, int BmpFlag, const BASEIMAGE *RgbBaseImage, const BASEIMAGE *AlphaBaseImage, int AllNum, int XNum, int YNum, int   Width, int   Height, const int *GrHandle, int ReverseFlag ) ;	// ‚a‚l‚o ‚© BASEIMAGE ‚ğ•ªŠ„ì¬‚µ‚½ƒOƒ‰ƒtƒBƒbƒNƒnƒ“ƒhƒ‹‚½‚¿‚É“]‘—
extern	int			BltBmpOrGraphImageToDivGraphF(	const COLORDATA *BmpColorData, HBITMAP RgbBmp, HBITMAP AlphaBmp, int BmpFlag, const BASEIMAGE *RgbBaseImage, const BASEIMAGE *AlphaBaseImage, int AllNum, int XNum, int YNum, float Width, float Height, const int *GrHandle, int ReverseFlag ) ;	// ‚a‚l‚o ‚© BASEIMAGE ‚ğ•ªŠ„ì¬‚µ‚½ƒOƒ‰ƒtƒBƒbƒNƒnƒ“ƒhƒ‹‚½‚¿‚É“]‘—( floatŒ^ )

// ‰æ‘œ‚©‚çƒOƒ‰ƒtƒBƒbƒNƒnƒ“ƒhƒ‹‚ğì¬‚·‚éŠÖ”
extern	int			LoadBmpToGraph(					const TCHAR *FileName, int TextureFlag, int ReverseFlag, int SurfaceMode = DX_MOVIESURFACE_NORMAL ) ;										// ‰æ‘œƒtƒ@ƒCƒ‹‚©‚çƒOƒ‰ƒtƒBƒbƒNƒnƒ“ƒhƒ‹‚ğì¬‚·‚é
extern	int			LoadGraph(						const TCHAR *FileName, int NotUse3DFlag = FALSE ) ;																							// ‰æ‘œƒtƒ@ƒCƒ‹‚©‚çƒOƒ‰ƒtƒBƒbƒNƒnƒ“ƒhƒ‹‚ğì¬‚·‚é
extern	int			LoadReverseGraph(				const TCHAR *FileName, int NotUse3DFlag = FALSE ) ;																							// ‰æ‘œƒtƒ@ƒCƒ‹‚ğ”½“]‚µ‚½‚à‚Ì‚ÅƒOƒ‰ƒtƒBƒbƒNƒnƒ“ƒhƒ‹‚ğì¬‚·‚é
extern	int			LoadDivGraph(					const TCHAR *FileName, int AllNum, int XNum, int YNum, int   XSize, int   YSize, int *HandleArray, int NotUse3DFlag = FALSE ) ;				// ‰æ‘œƒtƒ@ƒCƒ‹‚ğ•ªŠ„‚µ‚ÄƒOƒ‰ƒtƒBƒbƒNƒnƒ“ƒhƒ‹‚ğì¬‚·‚é
extern	int			LoadDivGraphF(					const TCHAR *FileName, int AllNum, int XNum, int YNum, float XSize, float YSize, int *HandleArray, int NotUse3DFlag = FALSE ) ;				// ‰æ‘œƒtƒ@ƒCƒ‹‚ğ•ªŠ„‚µ‚ÄƒOƒ‰ƒtƒBƒbƒNƒnƒ“ƒhƒ‹‚ğì¬‚·‚é
extern	int			LoadDivBmpToGraph(				const TCHAR *FileName, int AllNum, int XNum, int YNum, int   SizeX, int   SizeY, int *HandleArray, int TextureFlag, int ReverseFlag ) ;		// ‰æ‘œƒtƒ@ƒCƒ‹‚ğ•ªŠ„‚µ‚ÄƒOƒ‰ƒtƒBƒbƒNƒnƒ“ƒhƒ‹‚ğì¬‚·‚é
extern	int			LoadDivBmpToGraphF(				const TCHAR *FileName, int AllNum, int XNum, int YNum, float SizeX, float SizeY, int *HandleArray, int TextureFlag, int ReverseFlag ) ;		// ‰æ‘œƒtƒ@ƒCƒ‹‚ğ•ªŠ„‚µ‚ÄƒOƒ‰ƒtƒBƒbƒNƒnƒ“ƒhƒ‹‚ğì¬‚·‚é
extern	int			LoadReverseDivGraph(			const TCHAR *FileName, int AllNum, int XNum, int YNum, int   XSize, int   YSize, int *HandleArray, int NotUse3DFlag = FALSE ) ;				// ‰æ‘œƒtƒ@ƒCƒ‹‚ğ”½“]‚µ‚½‚à‚Ì‚ğ•ªŠ„‚µ‚ÄƒOƒ‰ƒtƒBƒbƒNƒnƒ“ƒhƒ‹‚ğì¬‚·‚é
extern	int			LoadReverseDivGraphF(			const TCHAR *FileName, int AllNum, int XNum, int YNum, float XSize, float YSize, int *HandleArray, int NotUse3DFlag = FALSE ) ;				// ‰æ‘œƒtƒ@ƒCƒ‹‚ğ”½“]‚µ‚½‚à‚Ì‚ğ•ªŠ„‚µ‚ÄƒOƒ‰ƒtƒBƒbƒNƒnƒ“ƒhƒ‹‚ğì¬‚·‚é
extern	int			LoadBlendGraph(					const TCHAR *FileName ) ;																													// ‰æ‘œƒtƒ@ƒCƒ‹‚©‚çƒuƒŒƒ“ƒh—pƒOƒ‰ƒtƒBƒbƒNƒnƒ“ƒhƒ‹‚ğì¬‚·‚é

extern	int			CreateGraphFromMem(				const void *RGBFileImage, int RGBFileImageSize,               const void *AlphaFileImage = NULL , int AlphaFileImageSize = 0 ,                  int TextureFlag = TRUE , int ReverseFlag = FALSE ) ;																			// ƒƒ‚ƒŠã‚Ì‰æ‘œƒCƒ[ƒW‚©‚çƒOƒ‰ƒtƒBƒbƒNƒnƒ“ƒhƒ‹‚ğì¬‚·‚é
extern	int			ReCreateGraphFromMem(           const void *RGBFileImage, int RGBFileImageSize, int GrHandle, const void *AlphaFileImage = NULL , int AlphaFileImageSize = 0 ,                  int TextureFlag = TRUE , int ReverseFlag = FALSE ) ;																			// ƒƒ‚ƒŠã‚Ì‰æ‘œƒCƒ[ƒW‚©‚çŠù‘¶‚ÌƒOƒ‰ƒtƒBƒbƒNƒnƒ“ƒhƒ‹‚Éƒf[ƒ^‚ğ“]‘—‚·‚é
extern	int			CreateDivGraphFromMem(          const void *RGBFileImage, int RGBFileImageSize, int AllNum, int XNum, int YNum, int   SizeX, int   SizeY,       int *HandleArray,               int TextureFlag = TRUE , int ReverseFlag = FALSE , const void *AlphaFileImage = NULL , int AlphaFileImageSize = 0 ) ;			// ƒƒ‚ƒŠã‚Ì‰æ‘œƒCƒ[ƒW‚©‚ç•ªŠ„ƒOƒ‰ƒtƒBƒbƒNƒnƒ“ƒhƒ‹‚ğì¬‚·‚é
extern	int			CreateDivGraphFFromMem(         const void *RGBFileImage, int RGBFileImageSize, int AllNum, int XNum, int YNum, float SizeX, float SizeY,       int *HandleArray,               int TextureFlag = TRUE , int ReverseFlag = FALSE , const void *AlphaFileImage = NULL , int AlphaFileImageSize = 0 ) ;			// ƒƒ‚ƒŠã‚Ì‰æ‘œƒCƒ[ƒW‚©‚ç•ªŠ„ƒOƒ‰ƒtƒBƒbƒNƒnƒ“ƒhƒ‹‚ğì¬‚·‚é( float”Å )
extern	int			ReCreateDivGraphFromMem(        const void *RGBFileImage, int RGBFileImageSize, int AllNum, int XNum, int YNum, int   SizeX, int   SizeY, const int *HandleArray,               int TextureFlag = TRUE , int ReverseFlag = FALSE , const void *AlphaFileImage = NULL , int AlphaFileImageSize = 0 ) ;			// ƒƒ‚ƒŠã‚Ì‰æ‘œƒCƒ[ƒW‚©‚çŠù‘¶‚Ì•ªŠ„ƒOƒ‰ƒtƒBƒbƒNƒnƒ“ƒhƒ‹‚Éƒf[ƒ^‚ğ“]‘—‚·‚é
extern	int			ReCreateDivGraphFFromMem(       const void *RGBFileImage, int RGBFileImageSize, int AllNum, int XNum, int YNum, float SizeX, float SizeY, const int *HandleArray,               int TextureFlag = TRUE , int ReverseFlag = FALSE , const void *AlphaFileImage = NULL , int AlphaFileImageSize = 0 ) ;			// ƒƒ‚ƒŠã‚Ì‰æ‘œƒCƒ[ƒW‚©‚çŠù‘¶‚Ì•ªŠ„ƒOƒ‰ƒtƒBƒbƒNƒnƒ“ƒhƒ‹‚Éƒf[ƒ^‚ğ“]‘—‚·‚é( float”Å )
extern	int			CreateGraphFromBmp(             const BITMAPINFO *RGBBmpInfo, const void *RGBBmpImage,               const BITMAPINFO *AlphaBmpInfo = NULL , const void *AlphaBmpImage = NULL , int TextureFlag = TRUE , int ReverseFlag = FALSE ) ;																			// ƒrƒbƒgƒ}ƒbƒvƒf[ƒ^‚©‚çƒOƒ‰ƒtƒBƒbƒNƒnƒ“ƒhƒ‹‚ğì¬‚·‚é
extern	int			ReCreateGraphFromBmp(           const BITMAPINFO *RGBBmpInfo, const void *RGBBmpImage, int GrHandle, const BITMAPINFO *AlphaBmpInfo = NULL , const void *AlphaBmpImage = NULL , int TextureFlag = TRUE , int ReverseFlag = FALSE ) ;																			// ƒrƒbƒgƒ}ƒbƒvƒf[ƒ^‚©‚çŠù‘¶‚ÌƒOƒ‰ƒtƒBƒbƒNƒnƒ“ƒhƒ‹‚Éƒf[ƒ^‚ğ“]‘—‚·‚é
extern	int			CreateDivGraphFromBmp(          const BITMAPINFO *RGBBmpInfo, const void *RGBBmpImage, int AllNum, int XNum, int YNum, int   SizeX, int   SizeY,       int *HandleArray,        int TextureFlag = TRUE , int ReverseFlag = FALSE , const BITMAPINFO *AlphaBmpInfo = NULL , const void *AlphaBmpImage = NULL ) ;	// ƒrƒbƒgƒ}ƒbƒvƒf[ƒ^‚©‚ç•ªŠ„ƒOƒ‰ƒtƒBƒbƒNƒnƒ“ƒhƒ‹‚ğì¬‚·‚é
extern	int			CreateDivGraphFFromBmp(         const BITMAPINFO *RGBBmpInfo, const void *RGBBmpImage, int AllNum, int XNum, int YNum, float SizeX, float SizeY,       int *HandleArray,        int TextureFlag = TRUE , int ReverseFlag = FALSE , const BITMAPINFO *AlphaBmpInfo = NULL , const void *AlphaBmpImage = NULL ) ;	// ƒrƒbƒgƒ}ƒbƒvƒf[ƒ^‚©‚ç•ªŠ„ƒOƒ‰ƒtƒBƒbƒNƒnƒ“ƒhƒ‹‚ğì¬‚·‚é( float”Å )
extern	int			ReCreateDivGraphFromBmp(        const BITMAPINFO *RGBBmpInfo, const void *RGBBmpImage, int AllNum, int XNum, int YNum, int   SizeX, int   SizeY, const int *HandleArray,        int TextureFlag = TRUE , int ReverseFlag = FALSE , const BITMAPINFO *AlphaBmpInfo = NULL , const void *AlphaBmpImage = NULL ) ;	// ƒrƒbƒgƒ}ƒbƒvƒf[ƒ^‚©‚çŠù‘¶‚Ì•ªŠ„ƒOƒ‰ƒtƒBƒbƒNƒnƒ“ƒhƒ‹‚Éƒf[ƒ^‚ğ“]‘—‚·‚é
extern	int			ReCreateDivGraphFFromBmp(       const BITMAPINFO *RGBBmpInfo, const void *RGBBmpImage, int AllNum, int XNum, int YNum, float SizeX, float SizeY, const int *HandleArray,        int TextureFlag = TRUE , int ReverseFlag = FALSE , const BITMAPINFO *AlphaBmpInfo = NULL , const void *AlphaBmpImage = NULL ) ;	// ƒrƒbƒgƒ}ƒbƒvƒf[ƒ^‚©‚çŠù‘¶‚Ì•ªŠ„ƒOƒ‰ƒtƒBƒbƒNƒnƒ“ƒhƒ‹‚Éƒf[ƒ^‚ğ“]‘—‚·‚é( float”Å )
extern	int			CreateDXGraph(					const BASEIMAGE *RgbBaseImage, const BASEIMAGE *AlphaBaseImage,                                                                                 int TextureFlag ) ;																									// Šî–{ƒCƒ[ƒWƒf[ƒ^‚©‚çƒTƒCƒY‚ğŠ„‚èo‚µA‚»‚ê‚É‡‚Á‚½ƒOƒ‰ƒtƒBƒbƒNƒnƒ“ƒhƒ‹‚ğì¬‚·‚é
extern	int			CreateGraphFromGraphImage(      const BASEIMAGE *RgbBaseImage,                                                                                                                  int TextureFlag = TRUE , int ReverseFlag = FALSE ) ;																// Šî–{ƒCƒ[ƒWƒf[ƒ^‚©‚çƒOƒ‰ƒtƒBƒbƒNƒnƒ“ƒhƒ‹‚ğì¬‚·‚é
extern	int			CreateGraphFromGraphImage(      const BASEIMAGE *RgbBaseImage, const BASEIMAGE *AlphaBaseImage,                                                                                 int TextureFlag = TRUE , int ReverseFlag = FALSE ) ;																// Šî–{ƒCƒ[ƒWƒf[ƒ^‚©‚çƒOƒ‰ƒtƒBƒbƒNƒnƒ“ƒhƒ‹‚ğì¬‚·‚é
extern	int			ReCreateGraphFromGraphImage(    const BASEIMAGE *RgbBaseImage,                                  int GrHandle,                                                                   int TextureFlag = TRUE , int ReverseFlag = FALSE ) ;																// Šî–{ƒCƒ[ƒWƒf[ƒ^‚©‚çŠù‘¶‚ÌƒOƒ‰ƒtƒBƒbƒNƒnƒ“ƒhƒ‹‚Éƒf[ƒ^‚ğ“]‘—‚·‚é
extern	int			ReCreateGraphFromGraphImage(    const BASEIMAGE *RgbBaseImage, const BASEIMAGE *AlphaBaseImage, int GrHandle,                                                                   int TextureFlag = TRUE , int ReverseFlag = FALSE ) ;																// Šî–{ƒCƒ[ƒWƒf[ƒ^‚©‚çŠù‘¶‚ÌƒOƒ‰ƒtƒBƒbƒNƒnƒ“ƒhƒ‹‚Éƒf[ƒ^‚ğ“]‘—‚·‚é
extern	int			CreateDivGraphFromGraphImage(         BASEIMAGE *RgbBaseImage,                                  int AllNum, int XNum, int YNum, int   SizeX, int   SizeY,       int *HandleArray, int TextureFlag = TRUE , int ReverseFlag = FALSE ) ;																// Šî–{ƒCƒ[ƒWƒf[ƒ^‚©‚ç•ªŠ„ƒOƒ‰ƒtƒBƒbƒNƒnƒ“ƒhƒ‹‚ğì¬‚·‚é
extern	int			CreateDivGraphFFromGraphImage(        BASEIMAGE *RgbBaseImage,                                  int AllNum, int XNum, int YNum, float SizeX, float SizeY,       int *HandleArray, int TextureFlag = TRUE , int ReverseFlag = FALSE ) ;																// Šî–{ƒCƒ[ƒWƒf[ƒ^‚©‚ç•ªŠ„ƒOƒ‰ƒtƒBƒbƒNƒnƒ“ƒhƒ‹‚ğì¬‚·‚é( float”Å )
extern	int			CreateDivGraphFromGraphImage(         BASEIMAGE *RgbBaseImage, const BASEIMAGE *AlphaBaseImage, int AllNum, int XNum, int YNum, int   SizeX, int   SizeY,       int *HandleArray, int TextureFlag = TRUE , int ReverseFlag = FALSE ) ;																// Šî–{ƒCƒ[ƒWƒf[ƒ^‚©‚ç•ªŠ„ƒOƒ‰ƒtƒBƒbƒNƒnƒ“ƒhƒ‹‚ğì¬‚·‚é
extern	int			CreateDivGraphFFromGraphImage(        BASEIMAGE *RgbBaseImage, const BASEIMAGE *AlphaBaseImage, int AllNum, int XNum, int YNum, float SizeX, float SizeY,       int *HandleArray, int TextureFlag = TRUE , int ReverseFlag = FALSE ) ;																// Šî–{ƒCƒ[ƒWƒf[ƒ^‚©‚ç•ªŠ„ƒOƒ‰ƒtƒBƒbƒNƒnƒ“ƒhƒ‹‚ğì¬‚·‚é( float”Å )
extern	int			ReCreateDivGraphFromGraphImage(       BASEIMAGE *RgbBaseImage,                                  int AllNum, int XNum, int YNum, int   SizeX, int   SizeY, const int *HandleArray, int TextureFlag = TRUE , int ReverseFlag = FALSE ) ;																// Šî–{ƒCƒ[ƒWƒf[ƒ^‚©‚çŠù‘¶‚Ì•ªŠ„ƒOƒ‰ƒtƒBƒbƒNƒnƒ“ƒhƒ‹‚Éƒf[ƒ^‚ğ“]‘—‚·‚é
extern	int			ReCreateDivGraphFFromGraphImage(      BASEIMAGE *RgbBaseImage,                                  int AllNum, int XNum, int YNum, float SizeX, float SizeY, const int *HandleArray, int TextureFlag = TRUE , int ReverseFlag = FALSE ) ;																// Šî–{ƒCƒ[ƒWƒf[ƒ^‚©‚çŠù‘¶‚Ì•ªŠ„ƒOƒ‰ƒtƒBƒbƒNƒnƒ“ƒhƒ‹‚Éƒf[ƒ^‚ğ“]‘—‚·‚é( float”Å )
extern	int			ReCreateDivGraphFromGraphImage(       BASEIMAGE *RgbBaseImage, const BASEIMAGE *AlphaBaseImage, int AllNum, int XNum, int YNum, int   SizeX, int   SizeY, const int *HandleArray, int TextureFlag = TRUE , int ReverseFlag = FALSE ) ;																// Šî–{ƒCƒ[ƒWƒf[ƒ^‚©‚çŠù‘¶‚Ì•ªŠ„ƒOƒ‰ƒtƒBƒbƒNƒnƒ“ƒhƒ‹‚Éƒf[ƒ^‚ğ“]‘—‚·‚é
extern	int			ReCreateDivGraphFFromGraphImage(      BASEIMAGE *RgbBaseImage, const BASEIMAGE *AlphaBaseImage, int AllNum, int XNum, int YNum, float SizeX, float SizeY, const int *HandleArray, int TextureFlag = TRUE , int ReverseFlag = FALSE ) ;																// Šî–{ƒCƒ[ƒWƒf[ƒ^‚©‚çŠù‘¶‚Ì•ªŠ„ƒOƒ‰ƒtƒBƒbƒNƒnƒ“ƒhƒ‹‚Éƒf[ƒ^‚ğ“]‘—‚·‚é( float”Å )
extern	int			CreateGraph(                    int Width, int Height, int Pitch, const void *RGBImage, const void *AlphaImage = NULL , int GrHandle = -1 ) ;																																			// ƒƒ‚ƒŠã‚Ìƒrƒbƒgƒ}ƒbƒvƒCƒ[ƒW‚©‚çƒOƒ‰ƒtƒBƒbƒNƒnƒ“ƒhƒ‹‚ğì¬‚·‚é
extern	int			CreateDivGraph(                 int Width, int Height, int Pitch, const void *RGBImage, int AllNum, int XNum, int YNum, int   SizeX, int   SizeY, int *HandleArray, const void *AlphaImage = NULL ) ;																					// ƒƒ‚ƒŠã‚Ìƒrƒbƒgƒ}ƒbƒvƒCƒ[ƒW‚©‚ç•ªŠ„ƒOƒ‰ƒtƒBƒbƒNƒnƒ“ƒhƒ‹‚ğì¬‚·‚é
extern	int			CreateDivGraphF(                int Width, int Height, int Pitch, const void *RGBImage, int AllNum, int XNum, int YNum, float SizeX, float SizeY, int *HandleArray, const void *AlphaImage = NULL ) ;																					// ƒƒ‚ƒŠã‚Ìƒrƒbƒgƒ}ƒbƒvƒCƒ[ƒW‚©‚ç•ªŠ„ƒOƒ‰ƒtƒBƒbƒNƒnƒ“ƒhƒ‹‚ğì¬‚·‚é( float”Å )
extern	int			ReCreateGraph(                  int Width, int Height, int Pitch, const void *RGBImage, int GrHandle, const void *AlphaImage = NULL ) ;																																					// ƒƒ‚ƒŠã‚Ìƒrƒbƒgƒ}ƒbƒvƒCƒ[ƒW‚©‚çƒOƒ‰ƒtƒBƒbƒNƒnƒ“ƒhƒ‹‚ğÄì¬‚·‚é
#ifndef DX_NON_SOFTIMAGE
extern	int			CreateBlendGraphFromSoftImage(  int SIHandle ) ;																														// ƒ\ƒtƒgƒEƒGƒA‚Åˆµ‚¤ƒCƒ[ƒW‚©‚çƒuƒŒƒ“ƒh—p‰æ‘œƒOƒ‰ƒtƒBƒbƒNƒnƒ“ƒhƒ‹‚ğì¬‚·‚é( -1:ƒGƒ‰[  -1ˆÈŠO:ƒuƒŒƒ“ƒh—pƒOƒ‰ƒtƒBƒbƒNƒnƒ“ƒhƒ‹ )
extern	int			CreateGraphFromSoftImage(       int SIHandle ) ;																														// ƒ\ƒtƒgƒEƒGƒA‚Åˆµ‚¤ƒCƒ[ƒW‚©‚çƒOƒ‰ƒtƒBƒbƒNƒnƒ“ƒhƒ‹‚ğì¬‚·‚é( -1:ƒGƒ‰[  -1ˆÈŠO:ƒOƒ‰ƒtƒBƒbƒNƒnƒ“ƒhƒ‹ )
extern	int			CreateGraphFromRectSoftImage(   int SIHandle, int x, int y, int SizeX, int SizeY ) ;																					// ƒ\ƒtƒgƒEƒGƒA‚Åˆµ‚¤ƒCƒ[ƒW‚Ìw’è‚Ì—Ìˆæ‚ğg‚Á‚ÄƒOƒ‰ƒtƒBƒbƒNƒnƒ“ƒhƒ‹‚ğì¬‚·‚é( -1:ƒGƒ‰[  -1ˆÈŠO:ƒOƒ‰ƒtƒBƒbƒNƒnƒ“ƒhƒ‹ )
extern	int			ReCreateGraphFromSoftImage(     int SIHandle, int GrHandle ) ;																											// ƒ\ƒtƒgƒEƒGƒA‚Åˆµ‚¤ƒCƒ[ƒW‚©‚çŠù‘¶‚ÌƒOƒ‰ƒtƒBƒbƒNƒnƒ“ƒhƒ‹‚É‰æ‘œƒf[ƒ^‚ğ“]‘—‚·‚é
extern	int			ReCreateGraphFromRectSoftImage( int SIHandle, int x, int y, int SizeX, int SizeY, int GrHandle ) ;																		// ƒ\ƒtƒgƒEƒGƒA‚Åˆµ‚¤ƒCƒ[ƒW‚©‚çŠù‘¶‚ÌƒOƒ‰ƒtƒBƒbƒNƒnƒ“ƒhƒ‹‚É‰æ‘œƒf[ƒ^‚ğ“]‘—‚·‚é
extern	int			CreateDivGraphFromSoftImage(    int SIHandle, int AllNum, int XNum, int YNum, int   SizeX, int   SizeY, int *HandleArray ) ;											// ƒ\ƒtƒgƒEƒGƒA‚Åˆµ‚¤ƒCƒ[ƒW‚©‚ç•ªŠ„ƒOƒ‰ƒtƒBƒbƒNƒnƒ“ƒhƒ‹‚ğì¬‚·‚é
extern	int			CreateDivGraphFFromSoftImage(   int SIHandle, int AllNum, int XNum, int YNum, float SizeX, float SizeY, int *HandleArray ) ;											// ƒ\ƒtƒgƒEƒGƒA‚Åˆµ‚¤ƒCƒ[ƒW‚©‚ç•ªŠ„ƒOƒ‰ƒtƒBƒbƒNƒnƒ“ƒhƒ‹‚ğì¬‚·‚é( float”Å )
#endif // DX_NON_SOFTIMAGE
extern	int			CreateGraphFromBaseImage(       const BASEIMAGE *BaseImage ) ;																											// Šî–{ƒCƒ[ƒWƒf[ƒ^‚©‚çƒOƒ‰ƒtƒBƒbƒNƒnƒ“ƒhƒ‹‚ğì¬‚·‚é
extern	int			CreateGraphFromRectBaseImage(   const BASEIMAGE *BaseImage, int x, int y, int SizeX, int SizeY ) ;																		// Šî–{ƒCƒ[ƒWƒf[ƒ^‚Ìw’è‚Ì—Ìˆæ‚ğg‚Á‚ÄƒOƒ‰ƒtƒBƒbƒNƒnƒ“ƒhƒ‹‚ğì¬‚·‚é
extern	int			ReCreateGraphFromBaseImage(     const BASEIMAGE *BaseImage,                                     int GrHandle ) ;														// Šî–{ƒCƒ[ƒWƒf[ƒ^‚©‚çŠù‘¶‚ÌƒOƒ‰ƒtƒBƒbƒNƒnƒ“ƒhƒ‹‚É‰æ‘œƒf[ƒ^‚ğ“]‘—‚·‚é
extern	int			ReCreateGraphFromRectBaseImage( const BASEIMAGE *BaseImage, int x, int y, int SizeX, int SizeY, int GrHandle ) ;														// Šî–{ƒCƒ[ƒWƒf[ƒ^‚Ìw’è‚Ì—Ìˆæ‚ğg‚Á‚ÄŠù‘¶‚ÌƒOƒ‰ƒtƒBƒbƒNƒnƒ“ƒhƒ‹‚É‰æ‘œƒf[ƒ^‚ğ“]‘—‚·‚é
extern	int			CreateDivGraphFromBaseImage(          BASEIMAGE *BaseImage, int AllNum, int XNum, int YNum, int   SizeX, int   SizeY, int *HandleArray ) ;								// Šî–{ƒCƒ[ƒWƒf[ƒ^‚©‚ç•ªŠ„ƒOƒ‰ƒtƒBƒbƒNƒnƒ“ƒhƒ‹‚ğì¬‚·‚é
extern	int			CreateDivGraphFFromBaseImage(         BASEIMAGE *BaseImage, int AllNum, int XNum, int YNum, float SizeX, float SizeY, int *HandleArray ) ;								// Šî–{ƒCƒ[ƒWƒf[ƒ^‚©‚ç•ªŠ„ƒOƒ‰ƒtƒBƒbƒNƒnƒ“ƒhƒ‹‚ğì¬‚·‚é( float”Å )
extern	int			ReloadGraph(					const TCHAR *FileName, int GrHandle, int ReverseFlag = FALSE ) ;																		// ‰æ‘œƒtƒ@ƒCƒ‹‚©‚çƒOƒ‰ƒtƒBƒbƒNƒnƒ“ƒhƒ‹‚Ö‰æ‘œƒf[ƒ^‚ğ“]‘—‚·‚é
extern	int			ReloadDivGraph(					const TCHAR *FileName, int AllNum, int XNum, int YNum, int   XSize, int   YSize, const int *HandleArray, int ReverseFlag = FALSE ) ;	// ‰æ‘œƒtƒ@ƒCƒ‹‚©‚çƒOƒ‰ƒtƒBƒbƒNƒnƒ“ƒhƒ‹‚½‚¿‚Ö‰æ‘œƒf[ƒ^‚ğ•ªŠ„“]‘—‚·‚é
extern	int			ReloadDivGraphF(				const TCHAR *FileName, int AllNum, int XNum, int YNum, float XSize, float YSize, const int *HandleArray, int ReverseFlag = FALSE ) ;	// ‰æ‘œƒtƒ@ƒCƒ‹‚©‚çƒOƒ‰ƒtƒBƒbƒNƒnƒ“ƒhƒ‹‚½‚¿‚Ö‰æ‘œƒf[ƒ^‚ğ•ªŠ„“]‘—‚·‚é( float”Å )
extern	int			ReloadReverseGraph(				const TCHAR *FileName, int GrHandle ) ;																									// ReloadGraph ‚Ì‰æ‘œ”½“]ˆ—’Ç‰Á”Å
extern	int			ReloadReverseDivGraph(			const TCHAR *FileName, int AllNum, int XNum, int YNum, int   XSize, int   YSize, const int *HandleArray ) ;								// ReloadDivGraph ‚Ì‰æ‘œ”½“]ˆ—’Ç‰Á”Å
extern	int			ReloadReverseDivGraphF(			const TCHAR *FileName, int AllNum, int XNum, int YNum, float XSize, float YSize, const int *HandleArray ) ;								// ReloadDivGraph ‚Ì‰æ‘œ”½“]ˆ—’Ç‰Á”Å( float”Å )

// ƒOƒ‰ƒtƒBƒbƒNƒnƒ“ƒhƒ‹ì¬İ’èŒWŠÖ”
extern	int			SetGraphColorBitDepth(						int ColorBitDepth ) ;							// SetCreateGraphColorBitDepth ‚Ì‹Œ–¼Ì
extern 	int			GetGraphColorBitDepth(						void ) ;										// GetCreateGraphColorBitDepth ‚Ì‹Œ–¼Ì
extern	int			SetCreateGraphColorBitDepth(				int BitDepth ) ;								// ì¬‚·‚éƒOƒ‰ƒtƒBƒbƒNƒnƒ“ƒhƒ‹‚ÌF[“x‚ğİ’è‚·‚é
extern	int			GetCreateGraphColorBitDepth(				void ) ;										// ì¬‚·‚éƒOƒ‰ƒtƒBƒbƒNƒnƒ“ƒhƒ‹‚ÌF[“x‚ğæ“¾‚·‚é
extern	int			SetCreateGraphChannelBitDepth(				int BitDepth ) ;								// ì¬‚·‚éƒOƒ‰ƒtƒBƒbƒNƒnƒ“ƒhƒ‹‚Ì‚Pƒ`ƒƒƒ“ƒlƒ‹•Ó‚è‚Ìƒrƒbƒg[“x‚ğİ’è‚·‚é
extern	int			GetCreateGraphChannelBitDepth(				void ) ;										// ì¬‚·‚éƒOƒ‰ƒtƒBƒbƒNƒnƒ“ƒhƒ‹‚Ì‚Pƒ`ƒƒƒ“ƒlƒ‹•Ó‚è‚Ìƒrƒbƒg[“x‚ğæ“¾‚·‚é
extern	int			SetDrawValidGraphCreateFlag(				int Flag ) ;									// SetDrawScreen ‚Éˆø”‚Æ‚µ‚Ä“n‚¹‚é( •`‰æ‘ÎÛ‚Æ‚µ‚Äg—p‚Å‚«‚é )ƒOƒ‰ƒtƒBƒbƒNƒnƒ“ƒhƒ‹‚ğì¬‚·‚é‚©‚Ç‚¤‚©‚ğİ’è‚·‚é( TRUE:•`‰æ‰Â”\ƒOƒ‰ƒtƒBƒbƒNƒnƒ“ƒhƒ‹‚ğì¬‚·‚é  FLASE:’Êí‚ÌƒOƒ‰ƒtƒBƒbƒNƒnƒ“ƒhƒ‹‚ğì¬‚·‚é( ƒfƒtƒHƒ‹ƒg ) )
extern	int			GetDrawValidGraphCreateFlag(				void ) ;										// SetDrawScreen ‚Éˆø”‚Æ‚µ‚Ä“n‚¹‚é( •`‰æ‘ÎÛ‚Æ‚µ‚Äg—p‚Å‚«‚é )ƒOƒ‰ƒtƒBƒbƒNƒnƒ“ƒhƒ‹‚ğì¬‚·‚é‚©‚Ç‚¤‚©‚ğİ’è‚ğæ“¾‚·‚é
extern	int			SetDrawValidFlagOf3DGraph(					int Flag ) ;									// SetDrawValidGraphCreateFlag ‚Ì‹Œ–¼Ì
extern	int			SetLeftUpColorIsTransColorFlag(				int Flag ) ;									// ‰æ‘œƒtƒ@ƒCƒ‹‚©‚çƒOƒ‰ƒtƒBƒbƒNƒnƒ“ƒhƒ‹‚ğì¬‚·‚éÛ‚É‰æ‘œ¶ã‚ÌF‚ğ“§‰ßF‚Æ‚µ‚Äˆµ‚¤‚©‚Ç‚¤‚©‚ğİ’è‚·‚é( TRUE:“§‰ßF‚Æ‚µ‚Äˆµ‚¤ @FALSE:“§‰ßF‚Æ‚µ‚Äˆµ‚í‚È‚¢( ƒfƒtƒHƒ‹ƒg ) )
extern	int			SetUsePaletteGraphFlag(						int Flag ) ;									// “Ç‚İ‚Ş‰æ‘œ‚ªƒpƒŒƒbƒg‰æ‘œ‚Ìê‡AƒpƒŒƒbƒg‰æ‘œ‚Æ‚µ‚Äg—p‚Å‚«‚éê‡‚ÍƒpƒŒƒbƒg‰æ‘œ‚Æ‚µ‚Äg—p‚·‚é‚©‚Ç‚¤‚©‚ğİ’è‚·‚é( TRUE:ƒpƒŒƒbƒg‰æ‘œ‚Æ‚µ‚Äg—p‚Å‚«‚éê‡‚ÍƒpƒŒƒbƒg‰æ‘œ‚Æ‚µ‚Äg—p‚·‚é( ƒfƒtƒHƒ‹ƒg )  FALSE:ƒpƒŒƒbƒg‰æ‘œ‚Æ‚µ‚Äg—p‚Å‚«‚éê‡‚àƒpƒŒƒbƒg‰æ‘œ‚Æ‚µ‚Ä‚Íg—p‚µ‚È‚¢( ’Êíƒ^ƒCƒv‚Ì‰æ‘œ‚É•ÏŠ·‚µ‚Äg—p‚·‚é ) )
extern	int			SetUseBlendGraphCreateFlag(					int Flag ) ;									// ƒuƒŒƒ“ƒhˆ——p‰æ‘œ‚ğì¬‚·‚é‚©‚Ç‚¤‚©( —v‚Í‰æ‘œ‚ÌÔ¬•ª‚ğƒ¿¬•ª‚Æ‚µ‚Äˆµ‚¤‚©‚Ç‚¤‚© )‚Ìİ’è‚ğs‚¤( TRUE:ƒuƒŒƒ“ƒh‰æ‘œ‚Æ‚µ‚Ä“Ç‚İ‚Ş  FALSE:’Êí‰æ‘œ‚Æ‚µ‚Ä“Ç‚İ‚Ş( ƒfƒtƒHƒ‹ƒg ) )
extern	int			GetUseBlendGraphCreateFlag(					void ) ;										// ƒuƒŒƒ“ƒhˆ——p‰æ‘œ‚ğì¬‚·‚é‚©‚Ç‚¤‚©( —v‚Í‰æ‘œ‚ÌÔ¬•ª‚ğƒ¿¬•ª‚Æ‚µ‚Äˆµ‚¤‚©‚Ç‚¤‚© )‚Ìİ’è‚ğæ“¾‚·‚é
extern	int			SetUseAlphaTestGraphCreateFlag(				int Flag ) ;									// ƒAƒ‹ƒtƒ@ƒeƒXƒg‚ğg—p‚·‚éƒOƒ‰ƒtƒBƒbƒNƒnƒ“ƒhƒ‹‚ğì¬‚·‚é‚©‚Ç‚¤‚©‚ğİ’è‚·‚é( TRUE:ƒAƒ‹ƒtƒ@ƒeƒXƒg‚ğg—p‚·‚é( ƒfƒtƒHƒ‹ƒg )  FALSE:ƒAƒ‹ƒtƒ@ƒeƒXƒg‚ğg—p‚µ‚È‚¢ )
extern	int			GetUseAlphaTestGraphCreateFlag(				void ) ;										// ƒAƒ‹ƒtƒ@ƒeƒXƒg‚ğg—p‚·‚éƒOƒ‰ƒtƒBƒbƒNƒnƒ“ƒhƒ‹‚ğì¬‚·‚é‚©‚Ç‚¤‚©‚ğæ“¾‚·‚é
extern	int			SetUseAlphaTestFlag(						int Flag ) ;									// SetUseAlphaTestGraphCreateFlag ‚Ì‹Œ–¼Ì
extern	int			GetUseAlphaTestFlag(						void ) ;										// GetUseAlphaTestGraphCreateFlag ‚Ì‹Œ–¼Ì
extern	int			SetCubeMapTextureCreateFlag(				int Flag ) ;									// ƒLƒ…[ƒuƒ}ƒbƒvƒeƒNƒXƒ`ƒƒ‚ğì¬‚·‚é‚©‚Ç‚¤‚©‚Ìƒtƒ‰ƒO‚ğİ’è‚·‚é
extern	int			GetCubeMapTextureCreateFlag(				void ) ;										// ƒLƒ…[ƒuƒ}ƒbƒvƒeƒNƒXƒ`ƒƒ‚ğì¬‚·‚é‚©‚Ç‚¤‚©‚Ìƒtƒ‰ƒO‚ğæ“¾‚·‚é
extern	int			SetUseNoBlendModeParam(						int Flag ) ;									// SetDrawBlendMode ŠÖ”‚Ì‘æˆêˆø”‚É DX_BLENDMODE_NOBLEND ‚ğ‘ã“ü‚µ‚½Û‚ÉAƒfƒtƒHƒ‹ƒg‚Å‚Í‘æ“ñˆø”‚Í“à•”‚Å‚Q‚T‚T‚ğw’è‚µ‚½‚±‚Æ‚É‚È‚é‚ªA‚»‚Ì©“®‚Q‚T‚T‰»‚ğ‚µ‚È‚¢‚©‚Ç‚¤‚©‚ğİ’è‚·‚é( TRUE:‚µ‚È‚¢(‘æ“ñˆø”‚Ì’l‚ªg—p‚³‚ê‚é)   FALSE:‚·‚é(‘æ“ñˆø”‚Ì’l‚Í–³‹‚³‚ê‚Ä 255 ‚ªí‚Ég—p‚³‚ê‚é)(ƒfƒtƒHƒ‹ƒg) )ƒ¿ƒ`ƒƒƒ“ƒlƒ‹•t‚«‰æ‘œ‚É‘Î‚µ‚Ä•`‰æ‚ğs‚¤ê‡‚Ì‚İˆÓ–¡‚ª‚ ‚éŠÖ”
extern	int			SetDrawValidAlphaChannelGraphCreateFlag(	int Flag ) ;									// SetDrawScreen ‚Ìˆø”‚Æ‚µ‚Ä“n‚¹‚é( •`‰æ‘ÎÛ‚Æ‚µ‚Äg—p‚Å‚«‚é )ƒ¿ƒ`ƒƒƒ“ƒlƒ‹•t‚«ƒOƒ‰ƒtƒBƒbƒNƒnƒ“ƒhƒ‹‚ğì¬‚·‚é‚©‚Ç‚¤‚©‚ğİ’è‚·‚é( SetDrawValidGraphCreateFlag ŠÖ”‚Å•`‰æ‘ÎÛ‚Æ‚µ‚Äg—p‚Å‚«‚éƒOƒ‰ƒtƒBƒbƒNƒnƒ“ƒhƒ‹‚ğì¬‚·‚é‚æ‚¤‚Éİ’è‚³‚ê‚Ä‚¢‚È‚¢‚ÆŒø‰Ê‚ ‚è‚Ü‚¹‚ñ )( TRUE:ƒ¿ƒ`ƒƒƒ“ƒlƒ‹•t‚«   FALSE:ƒ¿ƒ`ƒƒƒ“ƒlƒ‹‚È‚µ( ƒfƒtƒHƒ‹ƒg ) )
extern	int			GetDrawValidAlphaChannelGraphCreateFlag(	void ) ;										// SetDrawScreen ‚Ìˆø”‚Æ‚µ‚Ä“n‚¹‚é( •`‰æ‘ÎÛ‚Æ‚µ‚Äg—p‚Å‚«‚é )ƒ¿ƒ`ƒƒƒ“ƒlƒ‹•t‚«ƒOƒ‰ƒtƒBƒbƒNƒnƒ“ƒhƒ‹‚ğì¬‚·‚é‚©‚Ç‚¤‚©‚ğæ“¾‚·‚é
extern	int			SetDrawValidFloatTypeGraphCreateFlag(		int Flag ) ;									// SetDrawScreen ‚Ìˆø”‚Æ‚µ‚Ä“n‚¹‚é( •`‰æ‘ÎÛ‚Æ‚µ‚Äg—p‚Å‚«‚é )ƒsƒNƒZƒ‹ƒtƒH[ƒ}ƒbƒg‚ª•‚“®¬”“_Œ^‚ÌƒOƒ‰ƒtƒBƒbƒNƒnƒ“ƒhƒ‹‚ğì¬‚·‚é‚©‚Ç‚¤‚©‚ğİ’è‚·‚é( SetDrawValidGraphCreateFlag ŠÖ”‚Å•`‰æ‘ÎÛ‚Æ‚µ‚Äg—p‚Å‚«‚éƒOƒ‰ƒtƒBƒbƒNƒnƒ“ƒhƒ‹‚ğì¬‚·‚é‚æ‚¤‚Éİ’è‚³‚ê‚Ä‚¢‚È‚¢‚ÆŒø‰Ê‚ ‚è‚Ü‚¹‚ñ )AƒOƒ‰ƒtƒBƒbƒNƒXƒfƒoƒCƒX‚ª•‚“®¬”“_Œ^‚ÌƒsƒNƒZƒ‹ƒtƒH[ƒ}ƒbƒg‚É‘Î‰‚µ‚Ä‚¢‚È‚¢ê‡‚ÍƒOƒ‰ƒtƒBƒbƒNƒnƒ“ƒhƒ‹‚Ìì¬‚É¸”s‚·‚é( TRUE:•‚“®¬”“_Œ^@@FALSE:®”Œ^( ƒfƒtƒHƒ‹ƒg ) )
extern	int			GetDrawValidFloatTypeGraphCreateFlag(		void ) ;										// SetDrawScreen ‚Ìˆø”‚Æ‚µ‚Ä“n‚¹‚é( •`‰æ‘ÎÛ‚Æ‚µ‚Äg—p‚Å‚«‚é )ƒsƒNƒZƒ‹ƒtƒH[ƒ}ƒbƒg‚ª•‚“®¬”“_Œ^‚ÌƒOƒ‰ƒtƒBƒbƒNƒnƒ“ƒhƒ‹‚ğì¬‚·‚é‚©‚Ç‚¤‚©‚ğæ“¾‚·‚é
extern	int			SetDrawValidGraphCreateZBufferFlag(			int Flag ) ;									// SetDrawScreen ‚Ìˆø”‚Æ‚µ‚Ä“n‚¹‚é( •`‰æ‘ÎÛ‚Æ‚µ‚Äg—p‚Å‚«‚é )ƒOƒ‰ƒtƒBƒbƒNƒnƒ“ƒhƒ‹‚ğì¬‚·‚éÛ‚Éê—p‚Ì‚yƒoƒbƒtƒ@‚àì¬‚·‚é‚©‚Ç‚¤‚©‚ğİ’è‚·‚é( TRUE:ê—p‚Ì‚yƒoƒbƒtƒ@‚ğì¬‚·‚é( ƒfƒtƒHƒ‹ƒg )  FALSE:ê—p‚Ì‚yƒoƒbƒtƒ@‚Íì¬‚µ‚È‚¢ )
extern	int			GetDrawValidGraphCreateZBufferFlag(			void ) ;										// SetDrawScreen ‚Ìˆø”‚Æ‚µ‚Ä“n‚¹‚é( •`‰æ‘ÎÛ‚Æ‚µ‚Äg—p‚Å‚«‚é )ƒOƒ‰ƒtƒBƒbƒNƒnƒ“ƒhƒ‹‚ğì¬‚·‚éÛ‚Éê—p‚Ì‚yƒoƒbƒtƒ@‚àì¬‚·‚é‚©‚Ç‚¤‚©‚ğæ“¾‚·‚é
extern	int			SetCreateDrawValidGraphZBufferBitDepth(		int BitDepth ) ;								// SetDrawScreen ‚Ìˆø”‚Æ‚µ‚Ä“n‚¹‚é( •`‰æ‘ÎÛ‚Æ‚µ‚Äg—p‚Å‚«‚é )ƒOƒ‰ƒtƒBƒbƒNƒnƒ“ƒhƒ‹‚É“K—p‚·‚é‚yƒoƒbƒtƒ@‚Ìƒrƒbƒg[“x‚ğİ’è‚·‚é( BitDepth:ƒrƒbƒg[“x( w’è‰Â”\‚È’l‚Í 16, 24, 32 ‚Ì‰½‚ê‚©( SetDrawValidGraphCreateFlag ŠÖ”‚Å•`‰æ‘ÎÛ‚Æ‚µ‚Äg—p‚Å‚«‚éƒOƒ‰ƒtƒBƒbƒNƒnƒ“ƒhƒ‹‚ğì¬‚·‚é‚æ‚¤‚Éİ’è‚³‚ê‚Ä‚¢‚È‚¢‚ÆŒø‰Ê‚ ‚è‚Ü‚¹‚ñ )
extern	int			GetCreateDrawValidGraphZBufferBitDepth(		void ) ;										// SetDrawScreen ‚Ìˆø”‚Æ‚µ‚Ä“n‚¹‚é( •`‰æ‘ÎÛ‚Æ‚µ‚Äg—p‚Å‚«‚é )ƒOƒ‰ƒtƒBƒbƒNƒnƒ“ƒhƒ‹‚É“K—p‚·‚é‚yƒoƒbƒtƒ@‚Ìƒrƒbƒg[“x‚ğæ“¾‚·‚é
extern	int			SetCreateDrawValidGraphMipLevels(			int MipLevels ) ;								// SetDrawScreen ‚Ìˆø”‚Æ‚µ‚Ä“n‚¹‚é( •`‰æ‘ÎÛ‚Æ‚µ‚Äg—p‚Å‚«‚é )ƒOƒ‰ƒtƒBƒbƒNƒnƒ“ƒhƒ‹‚É“K—p‚·‚éMipMap‚ÌƒŒƒxƒ‹‚ğİ’è‚·‚é
extern	int			GetCreateDrawValidGraphMipLevels(			void ) ;										// SetDrawScreen ‚Ìˆø”‚Æ‚µ‚Ä“n‚¹‚é( •`‰æ‘ÎÛ‚Æ‚µ‚Äg—p‚Å‚«‚é )ƒOƒ‰ƒtƒBƒbƒNƒnƒ“ƒhƒ‹‚É“K—p‚·‚éMipMap‚ÌƒŒƒxƒ‹‚ğæ“¾‚·‚é
extern	int			SetCreateDrawValidGraphChannelNum(			int ChannelNum ) ;								// SetDrawScreen ‚Ìˆø”‚Æ‚µ‚Ä“n‚¹‚é( •`‰æ‘ÎÛ‚Æ‚µ‚Äg—p‚Å‚«‚é )ƒOƒ‰ƒtƒBƒbƒNƒnƒ“ƒhƒ‹‚É“K—p‚·‚éF‚Ìƒ`ƒƒƒ“ƒlƒ‹”‚ğİ’è‚·‚é( ChannelNum:ƒ`ƒƒƒ“ƒlƒ‹”( w’è‰Â”\‚È’l‚Í 1, 2, 4 ‚Ì‰½‚ê‚©( SetDrawValidGraphCreateFlag ŠÖ”‚Å•`‰æ‘ÎÛ‚Æ‚µ‚Äg—p‚Å‚«‚éƒOƒ‰ƒtƒBƒbƒNƒnƒ“ƒhƒ‹‚ğì¬‚·‚é‚æ‚¤‚Éİ’è‚³‚ê‚Ä‚¢‚È‚¢‚ÆŒø‰Ê‚ ‚è‚Ü‚¹‚ñ )
extern	int			GetCreateDrawValidGraphChannelNum(			void ) ;										// SetDrawScreen ‚Ìˆø”‚Æ‚µ‚Ä“n‚¹‚é( •`‰æ‘ÎÛ‚Æ‚µ‚Äg—p‚Å‚«‚é )ƒOƒ‰ƒtƒBƒbƒNƒnƒ“ƒhƒ‹‚É“K—p‚·‚éF‚Ìƒ`ƒƒƒ“ƒlƒ‹”‚ğæ“¾‚·‚é
extern	int			SetCreateDrawValidGraphMultiSample(			int Samples, int Quality ) ;					// SetDrawScreen ‚Ìˆø”‚Æ‚µ‚Ä“n‚¹‚é( •`‰æ‘ÎÛ‚Æ‚µ‚Äg—p‚Å‚«‚é )ƒOƒ‰ƒtƒBƒbƒNƒnƒ“ƒhƒ‹‚É“K—p‚·‚éƒ}ƒ‹ƒ`ƒTƒ“ƒvƒŠƒ“ƒO( ƒAƒ“ƒ`ƒGƒCƒŠƒAƒVƒ“ƒO )İ’è‚ğs‚¤( Samples:ƒ}ƒ‹ƒ`ƒTƒ“ƒvƒ‹ˆ—‚Ég—p‚·‚éƒhƒbƒg”( ‘½‚¢‚Ù‚Çd‚­‚È‚è‚Ü‚· )  Quality:ƒ}ƒ‹ƒ`ƒTƒ“ƒvƒ‹ˆ—‚Ì•i¿ )
extern	int			SetDrawValidMultiSample(					int Samples, int Quality ) ;					// SetCreateDrawValidGraphMultiSample ‚Ì‹Œ–¼Ì
extern	int			GetMultiSampleQuality(						int Samples ) ;									// w’è‚Ìƒ}ƒ‹ƒ`ƒTƒ“ƒvƒ‹”‚Åg—p‚Å‚«‚éÅ‘åƒNƒIƒŠƒeƒB’l‚ğæ“¾‚·‚é( –ß‚è’l‚ªƒ}ƒCƒiƒX‚Ìê‡‚Íˆø”‚ÌƒTƒ“ƒvƒ‹”‚ªg—p‚Å‚«‚È‚¢‚±‚Æ‚ğ¦‚µ‚Ü‚· )
extern	int			SetUseTransColor(							int Flag ) ;									// “§‰ßF‹@”\‚ğg—p‚·‚é‚©‚Ç‚¤‚©‚ğİ’è‚·‚é( TRUE:g—p‚·‚é( ƒfƒtƒHƒ‹ƒg )  FALSE:g—p‚µ‚È‚¢ )
extern	int			SetUseTransColorGraphCreateFlag(			int Flag ) ;									// “§‰ßF‹@”\‚ğg—p‚·‚é‚±‚Æ‚ğ‘O’ñ‚Æ‚µ‚½‰æ‘œƒf[ƒ^‚Ì“Ç‚İ‚İˆ—‚ğs‚¤‚©‚Ç‚¤‚©‚ğİ’è‚·‚é( TRUE ‚É‚·‚é‚Æ SetDrawMode( DX_DRAWMODE_BILINEAR ); ‚ğ‚µ‚½ó‘Ô‚Å DrawGraphF “™‚Ì•‚“®¬”“_Œ^À•W‚ğó‚¯æ‚éŠÖ”‚Å¬”“_ˆÈ‰º‚Ì’l‚ğw’è‚µ‚½ê‡‚É”­¶‚·‚é•`‰æŒ‹‰Ê‚Ì•s©‘R‚ğŠÉ˜a‚·‚éŒø‰Ê‚ª‚ ‚è‚Ü‚· ( ƒfƒtƒHƒ‹ƒg‚Í FALSE ) )
extern 	int			SetUseGraphAlphaChannel(					int Flag ) ;									// SetUseAlphaChannelGraphCreateFlag ‚Ì‹Œ–¼Ì
extern 	int			GetUseGraphAlphaChannel(					void ) ;										// GetUseAlphaChannelGraphCreateFlag ‚Ì‹Œ–¼Ì
extern 	int			SetUseAlphaChannelGraphCreateFlag(			int Flag ) ;									// ƒ¿ƒ`ƒƒƒ“ƒlƒ‹•t‚«ƒOƒ‰ƒtƒBƒbƒNƒnƒ“ƒhƒ‹‚ğì¬‚·‚é‚©‚Ç‚¤‚©‚ğİ’è‚·‚é( TRUE:ƒ¿ƒ`ƒƒƒ“ƒlƒ‹•t‚«   FALSE:ƒ¿ƒ`ƒƒƒ“ƒlƒ‹–³‚µ )
extern 	int			GetUseAlphaChannelGraphCreateFlag(			void ) ;										// ƒ¿ƒ`ƒƒƒ“ƒlƒ‹•t‚«ƒOƒ‰ƒtƒBƒbƒNƒnƒ“ƒhƒ‹‚ğì¬‚·‚é‚©‚Ç‚¤‚©‚ğæ“¾‚·‚é( TRUE:ƒ¿ƒ`ƒƒƒ“ƒlƒ‹•t‚«   FALSE:ƒ¿ƒ`ƒƒƒ“ƒlƒ‹–³‚µ )
extern	int			SetUseNotManageTextureFlag(					int Flag ) ;									// Direct3D ‚ÌŠÇ—ƒeƒNƒXƒ`ƒƒ‹@”\‚ğg—p‚·‚éƒOƒ‰ƒtƒBƒbƒNƒnƒ“ƒhƒ‹‚ğì¬‚·‚é‚©‚Ç‚¤‚©‚ğİ’è‚·‚é( TRUE:ŠÇ—‹@”\‚ğg—p‚·‚é( ƒfƒtƒHƒ‹ƒg )  FALSE:ŠÇ—‹@”\‚ğg—p‚µ‚È‚¢ )AŠÇ—‹@”\‚ğg—p‚·‚é‚ÆƒOƒ‰ƒtƒBƒbƒNƒXƒfƒoƒCƒX‚Ì‚u‚q‚`‚l—e—ÊˆÈã‚Ì‰æ‘œ‚ğˆµ‚¤‚±‚Æ‚ª‚Å‚«‚é‘ã‚í‚è‚ÉƒVƒXƒeƒ€ƒƒ‚ƒŠ‚Ìg—p—Ê‚ª‘‚¦‚Ü‚·
extern	int			GetUseNotManageTextureFlag(					void ) ;										// Direct3D ‚ÌŠÇ—ƒeƒNƒXƒ`ƒƒ‹@”\‚ğg—p‚·‚éƒOƒ‰ƒtƒBƒbƒNƒnƒ“ƒhƒ‹‚ğì¬‚·‚é‚©‚Ç‚¤‚©‚ğæ“¾‚·‚é
extern	int			SetUsePlatformTextureFormat(				int PlatformTextureFormat ) ;					// ì¬‚·‚éƒOƒ‰ƒtƒBƒbƒNƒnƒ“ƒhƒ‹‚Åg—p‚·‚éŠÂ‹«ˆË‘¶‚ÌƒeƒNƒXƒ`ƒƒƒtƒH[ƒ}ƒbƒg‚ğw’è‚·‚é( Direct3D9ŠÂ‹«‚È‚ç DX_TEXTUREFORMAT_DIRECT3D9_R8G8B8 ‚È‚ÇA0 ‚ğ“n‚·‚Æ‰ğœ )
extern	int			GetUsePlatformTextureFormat(				void ) ;										// ì¬‚·‚éƒOƒ‰ƒtƒBƒbƒNƒnƒ“ƒhƒ‹‚Åg—p‚·‚éŠÂ‹«ˆË‘¶‚ÌƒeƒNƒXƒ`ƒƒƒtƒH[ƒ}ƒbƒg‚ğæ“¾‚·‚é
extern	int			SetTransColor(								int Red, int Green, int Blue ) ;				// ì¬‚·‚éƒOƒ‰ƒtƒBƒbƒNƒnƒ“ƒhƒ‹‚É“K—p‚·‚é“§‰ßF‚ğİ’è‚·‚é( Red,Green,Blue:“§‰ßF‚ğŒõ‚Ì‚RŒ´F‚Å•\‚µ‚½‚à‚Ì( ŠeF‚O`‚Q‚T‚T ) )
extern	int			GetTransColor(								int *Red, int *Green, int *Blue ) ;				// ì¬‚·‚éƒOƒ‰ƒtƒBƒbƒNƒnƒ“ƒhƒ‹‚É“K—p‚·‚é“§‰ßF‚ğæ“¾‚·‚é
extern	int			SetUseDivGraphFlag(							int Flag ) ;									// ‚Q‚Ì‚æ‚Å‚Í‚È‚¢ƒTƒCƒY‚Ì‰æ‘œ‚ğ•¡”‚ÌƒeƒNƒXƒ`ƒƒ‚ğg—p‚µ‚Ä‚u‚q‚`‚l‚Ì–³‘Ê‚ğÈ‚­‚©‚Ç‚¤‚©‚ğİ’è‚·‚é( TRUE:•¡”‚ÌƒeƒNƒXƒ`ƒƒ‚ğg—p‚·‚é   FALSE:‚È‚é‚×‚­ˆê–‡‚ÌƒeƒNƒXƒ`ƒƒ‚ÅÏ‚Ü‚·( ƒfƒtƒHƒ‹ƒg ) )A•¡”‚ÌƒeƒNƒXƒ`ƒƒ‚ğg—p‚·‚éê‡‚Í‚u‚q‚`‚l—e—Ê‚Ìß–ñ‚ª‚Å‚«‚é‘ã‚í‚è‚É‘¬“x‚Ì’á‰º‚âƒoƒCƒŠƒjƒAƒtƒBƒ‹ƒ^ƒŠƒ“ƒO•`‰æ‚ÉƒeƒNƒXƒ`ƒƒ‚ÆƒeƒNƒXƒ`ƒƒ‚Ì‹«–Ú‚ª—Ç‚­Œ©‚é‚Æ‚í‚©‚é“™‚Ì•¾ŠQ‚ª‚ ‚è‚Ü‚·
extern	int			SetUseAlphaImageLoadFlag(					int Flag ) ;									// LoadGraph ‚È‚Ç‚ÌÛ‚Éƒtƒ@ƒCƒ‹–¼‚Ì––”ö‚É _a ‚ª•t‚¢‚½ƒAƒ‹ƒtƒ@ƒ`ƒƒƒ“ƒlƒ‹—p‚Ì‰æ‘œƒtƒ@ƒCƒ‹‚ğ’Ç‰Á‚Å“Ç‚İ‚Şˆ—‚ğs‚¤‚©‚Ç‚¤‚©‚ğİ’è‚·‚é( TRUE:s‚¤( ƒfƒtƒHƒ‹ƒg )  FALSE:s‚í‚È‚¢ )
extern	int			SetUseMaxTextureSize(						int Size ) ;									// g—p‚·‚éƒeƒNƒXƒ`ƒƒ[‚ÌÅ‘åƒTƒCƒY‚ğİ’è‚·‚é( ƒfƒtƒHƒ‹ƒg‚Å‚ÍƒOƒ‰ƒtƒBƒbƒNƒXƒfƒoƒCƒX‚ª‘Î‰‚µ‚Ä‚¢‚éÅ‘åƒeƒNƒXƒ`ƒƒ[ƒTƒCƒYAˆø”‚É 0 ‚ğ“n‚·‚ÆƒfƒtƒHƒ‹ƒgİ’è‚É‚È‚è‚Ü‚· )
extern	int			SetUseGraphBaseDataBackup(					int Flag ) ;									// ƒOƒ‰ƒtƒBƒbƒNƒnƒ“ƒhƒ‹‚ğì¬‚·‚éÛ‚Ég—p‚µ‚½‰æ‘œƒf[ƒ^‚ÌƒoƒbƒNƒAƒbƒv‚ğ‚µ‚Ä Direct3DDevice ‚ÌƒfƒoƒCƒXƒƒXƒg‚Ég—p‚·‚é‚©‚Ç‚¤‚©‚ğİ’è‚·‚é( TRUE:ƒoƒbƒNƒAƒbƒv‚ğ‚·‚é( ƒfƒtƒHƒ‹ƒg )  FALSE:ƒoƒbƒNƒAƒbƒv‚ğ‚µ‚È‚¢ )AƒoƒbƒNƒAƒbƒv‚ğ‚µ‚È‚¢‚Æƒƒ‚ƒŠ‚Ìß–ñ‚É‚È‚è‚Ü‚·‚ªA•œ‹A‚ÉŠ|‚©‚éŠÔ‚ª’·‚­‚È‚èAƒƒ‚ƒŠã‚Ìƒtƒ@ƒCƒ‹ƒCƒ[ƒW‚©‚çƒOƒ‰ƒtƒBƒbƒNƒnƒ“ƒhƒ‹‚ğì¬‚µ‚½ê‡‚Í©“®•œ‹A‚ª‚Å‚«‚È‚¢‚È‚Ç‚Ì•¾ŠQ‚ª‚ ‚è‚Ü‚·
extern	int			GetUseGraphBaseDataBackup(					void ) ;										// ƒOƒ‰ƒtƒBƒbƒNƒnƒ“ƒhƒ‹‚ğì¬‚·‚éÛ‚Ég—p‚µ‚½‰æ‘œƒf[ƒ^‚ÌƒoƒbƒNƒAƒbƒv‚ğ‚µ‚Ä Direct3DDevice ‚ÌƒfƒoƒCƒXƒƒXƒg‚Ég—p‚·‚é‚©‚Ç‚¤‚©‚ğæ“¾‚·‚é
extern	int			SetUseSystemMemGraphCreateFlag(				int Flag ) ;									// ( Œ»İŒø‰Ê‚È‚µ )ƒOƒ‰ƒtƒBƒbƒNƒnƒ“ƒhƒ‹‚ª‚Â‰æ‘œƒf[ƒ^‚ğƒVƒXƒeƒ€ƒƒ‚ƒŠã‚Éì¬‚·‚é‚©‚Ç‚¤‚©‚ğİ’è‚·‚é( TRUE:ƒVƒXƒeƒ€ƒƒ‚ƒŠã‚Éì¬  FALSE:‚u‚q‚`‚lã‚Éì¬( ƒfƒtƒHƒ‹ƒg ) )
extern	int			GetUseSystemMemGraphCreateFlag(				void ) ;										// ( Œ»İŒø‰Ê‚È‚µ )ƒOƒ‰ƒtƒBƒbƒNƒnƒ“ƒhƒ‹‚ª‚Â‰æ‘œƒf[ƒ^‚ğƒVƒXƒeƒ€ƒƒ‚ƒŠã‚Éì¬‚·‚é‚©‚Ç‚¤‚©‚ğæ“¾‚·‚é

// ‰æ‘œî•ñŠÖŒWŠÖ”
extern	const unsigned int* GetFullColorImage(				int GrHandle ) ;																		// w’è‚ÌƒOƒ‰ƒtƒBƒbƒNƒnƒ“ƒhƒ‹‚Ì‚`‚q‚f‚a‚WƒCƒ[ƒW‚ğæ“¾‚·‚é( Œ»İ“®‰æƒtƒ@ƒCƒ‹‚ğƒOƒ‰ƒtƒBƒbƒNƒnƒ“ƒhƒ‹‚Å“Ç‚İ‚ñ‚¾ê‡‚Ì‚İg—p‰Â”\ )

extern	int			GraphLock(						int GrHandle, int *PitchBuf, void **DataPointBuf, COLORDATA **ColorDataPP = NULL, int WriteOnly = FALSE ) ;	// ƒOƒ‰ƒtƒBƒbƒNƒƒ‚ƒŠ—Ìˆæ‚ÌƒƒbƒN
extern	int			GraphUnLock(					int GrHandle ) ;																							// ƒOƒ‰ƒtƒBƒbƒNƒƒ‚ƒŠ—Ìˆæ‚ÌƒƒbƒN‰ğœ

extern	int			SetUseGraphZBuffer(				int GrHandle, int UseFlag, int BitDepth = -1 ) ;										// ƒOƒ‰ƒtƒBƒbƒNƒnƒ“ƒhƒ‹ê—p‚Ì‚yƒoƒbƒtƒ@‚ğ‚Â‚©‚Ç‚¤‚©‚ğİ’è‚·‚é( GrHandle:‘ÎÛ‚Æ‚È‚éƒOƒ‰ƒtƒBƒbƒNƒnƒ“ƒhƒ‹( •`‰æ‘ÎÛ‚Æ‚µ‚Äg—p‰Â”\‚ÈƒOƒ‰ƒtƒBƒbƒNƒnƒ“ƒhƒ‹‚Ì‚İ—LŒø )  UseFlag:ê—p‚Ì‚yƒoƒbƒtƒ@‚ğ‚Â‚©‚Ç‚¤‚©( TRUE:‚Â( ƒfƒtƒHƒ‹ƒg )  FALSE:‚½‚È‚¢ )  BitDepth:ƒrƒbƒg[“x( 16 or 24 or 32 ) )
extern	int			CopyGraphZBufferImage(			int DestGrHandle, int SrcGrHandle ) ;													// ƒOƒ‰ƒtƒBƒbƒNƒnƒ“ƒhƒ‹‚Ì‚yƒoƒbƒtƒ@‚Ìó‘Ô‚ğ•Ê‚ÌƒOƒ‰ƒtƒBƒbƒNƒnƒ“ƒhƒ‹‚Ì‚yƒoƒbƒtƒ@‚ÉƒRƒs[‚·‚é( DestGrHandle ‚à SrcGrHandle ‚à‚yƒoƒbƒtƒ@‚ğ‚Á‚Ä‚¢‚é•`‰æ‘ÎÛ‚É‚Å‚«‚éƒOƒ‰ƒtƒBƒbƒNƒnƒ“ƒhƒ‹‚ÅAƒTƒCƒY‚ª“¯‚¶‚Å‚ ‚èAŠ‚Âƒ}ƒ‹ƒ`ƒTƒ“ƒvƒŠƒ“ƒO( ƒAƒ“ƒ`ƒGƒCƒŠƒAƒX )İ’è‚ª–³‚¢‚±‚Æ‚ªğŒ )

extern	int			SetDeviceLostDeleteGraphFlag(	int GrHandle, int DeleteFlag ) ;														// ƒOƒ‰ƒtƒBƒbƒNƒXƒfƒoƒCƒX‚ÌƒfƒoƒCƒXƒƒXƒg”­¶‚Éw’è‚ÌƒOƒ‰ƒtƒBƒbƒNƒnƒ“ƒhƒ‹‚ğíœ‚·‚é‚©‚Ç‚¤‚©‚ğİ’è‚·‚é( TRUE:ƒfƒoƒCƒXƒƒXƒg‚Éíœ‚·‚é  FALSE:ƒfƒoƒCƒXƒƒXƒg‚ª”­¶‚µ‚Ä‚àíœ‚µ‚È‚¢ )

extern	int			GetGraphSize(					int GrHandle, int   *SizeXBuf, int   *SizeYBuf ) ;										// ƒOƒ‰ƒtƒBƒbƒNƒnƒ“ƒhƒ‹‚ª‚Â‰æ‘œ‚ÌƒTƒCƒY‚ğ“¾‚é
extern	int			GetGraphSizeF(					int GrHandle, float *SizeXBuf, float *SizeYBuf ) ;										// ƒOƒ‰ƒtƒBƒbƒNƒnƒ“ƒhƒ‹‚ª‚Â‰æ‘œ‚ÌƒTƒCƒY‚ğ“¾‚é( floatŒ^ )
extern	int			GetGraphTextureSize(			int GrHandle, int   *SizeXBuf, int   *SizeYBuf ) ;										// ƒOƒ‰ƒtƒBƒbƒNƒnƒ“ƒhƒ‹‚ª‚Âˆê‚Â–Ú‚ÌƒeƒNƒXƒ`ƒƒ‚ÌƒTƒCƒY‚ğ“¾‚é
extern	int			GetGraphMipmapCount(			int GrHandle ) ;																		// ƒOƒ‰ƒtƒBƒbƒNƒnƒ“ƒhƒ‹‚ª‚ÂƒeƒNƒXƒ`ƒƒ‚Ìƒ~ƒbƒvƒ}ƒbƒvƒŒƒxƒ‹”‚ğæ“¾‚·‚é
extern	int			GetGraphFilePath(				int GrHandle, TCHAR *FilePathBuffer ) ;													// ƒOƒ‰ƒtƒBƒbƒNƒnƒ“ƒhƒ‹‚ª‰æ‘œƒtƒ@ƒCƒ‹‚©‚ç“Ç‚İ‚Ü‚ê‚Ä‚¢‚½ê‡A‚»‚Ì‰æ‘œ‚Ìƒtƒ@ƒCƒ‹ƒpƒX‚ğæ“¾‚·‚é

extern	const COLORDATA* GetTexColorData(			int AlphaCh, int AlphaTest, int ColorBitDepth, int DrawValid = FALSE ) ;				// ƒJƒ‰[ƒf[ƒ^‚ğ“¾‚é
extern	const COLORDATA* GetTexColorData(			const IMAGEFORMATDESC *Format ) ;														// ƒtƒH[ƒ}ƒbƒg‚ÉŠî‚Ã‚¢‚½ƒJƒ‰[ƒf[ƒ^‚ğ“¾‚é
extern	const COLORDATA* GetTexColorData(			int FormatIndex ) ;																		// w’è‚ÌƒtƒH[ƒ}ƒbƒgƒCƒ“ƒfƒbƒNƒX‚ÌƒJƒ‰[ƒf[ƒ^‚ğ“¾‚é
extern	int			GetMaxGraphTextureSize(			int *SizeX, int *SizeY ) ;																// ƒOƒ‰ƒtƒBƒbƒNƒXƒfƒoƒCƒX‚ª‘Î‰‚µ‚Ä‚¢‚éÅ‘åƒeƒNƒXƒ`ƒƒƒTƒCƒY‚ğæ“¾‚·‚é
extern	int			GetValidRestoreShredPoint(		void ) ;																				// ƒOƒ‰ƒtƒBƒbƒNƒnƒ“ƒhƒ‹‚Ì‰æ‘œ‚ğ•œŒ³‚·‚éŠÖ”‚ª“o˜^‚³‚ê‚Ä‚¢‚é‚©‚Ç‚¤‚©‚ğæ“¾‚·‚é( TRUE:“o˜^‚³‚ê‚Ä‚¢‚é  FALSE:“o˜^‚³‚ê‚Ä‚¢‚È‚¢ )
extern	int			GetCreateGraphColorData(		COLORDATA *ColorData, IMAGEFORMATDESC *Format ) ;										// ( Œ»İŒø‰Ê‚È‚µ )‚±‚ê‚©‚çV‚½‚ÉƒOƒ‰ƒtƒBƒbƒN‚ğì¬‚·‚éê‡‚Ég—p‚·‚éƒJƒ‰[î•ñ‚ğæ“¾‚·‚é

// ‰æ‘œƒpƒŒƒbƒg‘€ìŠÖŒWŠÖ”( ƒ\ƒtƒgƒEƒGƒA‰æ‘œ‚Ì‚İg—p‰Â”\ )
extern	int			GetGraphPalette(				int GrHandle, int ColorIndex, int *Red, int *Green, int *Blue ) ;						// ƒOƒ‰ƒtƒBƒbƒNƒnƒ“ƒhƒ‹‚ÌƒpƒŒƒbƒg‚ğæ“¾‚·‚é( ƒ\ƒtƒgƒEƒGƒAƒŒƒ“ƒ_ƒŠƒ“ƒOƒ‚[ƒh‚ÅAŠ‚ÂƒpƒŒƒbƒg‰æ‘œ‚Ìê‡‚Ì‚İg—p‰Â”\ )
extern  int			GetGraphOriginalPalette(		int GrHandle, int ColorIndex, int *Red, int *Green, int *Blue ) ;						// ƒOƒ‰ƒtƒBƒbƒNƒnƒ“ƒhƒ‹‚Ì SetGraphPalette ‚Å•ÏX‚·‚é‘O‚ÌƒpƒŒƒbƒg‚ğæ“¾‚·‚é( ƒ\ƒtƒgƒEƒGƒAƒŒƒ“ƒ_ƒŠƒ“ƒOƒ‚[ƒh‚ÅAŠ‚ÂƒpƒŒƒbƒg‰æ‘œ‚Ìê‡‚Ì‚İg—p‰Â”\ )
extern	int			SetGraphPalette(				int GrHandle, int ColorIndex, unsigned int Color ) ;									// ƒOƒ‰ƒtƒBƒbƒNƒnƒ“ƒhƒ‹‚ÌƒpƒŒƒbƒg‚ğ•ÏX‚·‚é( ƒ\ƒtƒgƒEƒGƒAƒŒƒ“ƒ_ƒŠƒ“ƒOƒ‚[ƒh‚ÅAŠ‚ÂƒpƒŒƒbƒg‰æ‘œ‚Ìê‡‚Ì‚İg—p‰Â”\ )
extern	int			ResetGraphPalette(				int GrHandle ) ;																		// SetGraphPalette ‚Å•ÏX‚µ‚½ƒpƒŒƒbƒg‚ğ‘S‚ÄŒ³‚É–ß‚·( ƒ\ƒtƒgƒEƒGƒAƒŒƒ“ƒ_ƒŠƒ“ƒOƒ‚[ƒh‚ÅAŠ‚ÂƒpƒŒƒbƒg‰æ‘œ‚Ìê‡‚Ì‚İg—p‰Â”\ )

// }Œ`•`‰æŠÖ”
extern	int			DrawLine(         int   x1, int   y1, int   x2, int   y2,                                         unsigned int Color, int   Thickness = 1    ) ;							// ü‚ğ•`‰æ‚·‚é
extern	int			DrawLineAA(       float x1, float y1, float x2, float y2,                                         unsigned int Color, float Thickness = 1.0f ) ;							// ü‚ğ•`‰æ‚·‚é( ƒAƒ“ƒ`ƒGƒCƒŠƒAƒX•t‚« )
extern	int			DrawBox(          int   x1, int   y1, int   x2, int   y2,                                         unsigned int Color, int FillFlag ) ;										// lŠpŒ`‚ğ•`‰æ‚·‚é
extern	int			DrawBoxAA(        float x1, float y1, float x2, float y2,                                         unsigned int Color, int FillFlag, float LineThickness = 1.0f ) ;			// lŠpŒ`‚ğ•`‰æ‚·‚é( ƒAƒ“ƒ`ƒGƒCƒŠƒAƒX•t‚« )
extern	int			DrawFillBox(      int   x1, int   y1, int   x2, int   y2,                                         unsigned int Color ) ;													// ’†g‚ğ“h‚è‚Â‚Ô‚·lŠpŒ`‚ğ•`‰æ‚·‚é
extern	int			DrawLineBox(      int   x1, int   y1, int   x2, int   y2,                                         unsigned int Color ) ;													// ˜g‚¾‚¯‚ÌlŠpŒ`‚Ì•`‰æ ‚·‚é
extern	int			DrawCircle(       int   x,  int   y,  int   r,                                                    unsigned int Color, int FillFlag = TRUE, int   LineThickness = 1    ) ;	// ‰~‚ğ•`‰æ‚·‚é
extern	int			DrawCircleAA(     float x,  float y,  float r,            int posnum,                             unsigned int Color, int FillFlag = TRUE, float LineThickness = 1.0f ) ;	// ‰~‚ğ•`‰æ‚·‚é( ƒAƒ“ƒ`ƒGƒCƒŠƒAƒX•t‚« )
extern	int			DrawOval(         int   x,  int   y,  int   rx, int   ry,                                         unsigned int Color, int FillFlag,        int   LineThickness = 1    ) ;	// ‘È‰~‚ğ•`‰æ‚·‚é
extern	int			DrawOvalAA(       float x,  float y,  float rx, float ry, int posnum,                             unsigned int Color, int FillFlag,        float LineThickness = 1.0f ) ;	// ‘È‰~‚ğ•`‰æ‚·‚é( ƒAƒ“ƒ`ƒGƒCƒŠƒAƒX•t‚« )
extern	int			DrawOval_Rect(    int   x1, int   y1, int   x2, int   y2,                                         unsigned int Color, int FillFlag ) ;										// w’è‚Ì‹éŒ`‚Éû‚Ü‚é‰~( ‘È‰~ )‚ğ•`‰æ‚·‚é
extern	int			DrawTriangle(     int   x1, int   y1, int   x2, int   y2, int   x3, int   y3,                     unsigned int Color, int FillFlag ) ;										// OŠpŒ`‚ğ•`‰æ‚·‚é
extern	int			DrawTriangleAA(   float x1, float y1, float x2, float y2, float x3, float y3,                     unsigned int Color, int FillFlag, float LineThickness = 1.0f ) ;			// OŠpŒ`‚ğ•`‰æ‚·‚é( ƒAƒ“ƒ`ƒGƒCƒŠƒAƒX•t‚« )
extern	int			DrawQuadrangle(   int   x1, int   y1, int   x2, int   y2, int   x3, int   y3, int   x4, int   y4, unsigned int Color, int FillFlag ) ;										// lŠpŒ`‚ğ•`‰æ‚·‚é
extern	int			DrawQuadrangleAA( float x1, float y1, float x2, float y2, float x3, float y3, float x4, float y4, unsigned int Color, int FillFlag, float LineThickness = 1.0f ) ;			// lŠpŒ`‚ğ•`‰æ‚·‚é( ƒAƒ“ƒ`ƒGƒCƒŠƒAƒX•t‚« )
extern	int			DrawRoundRect(    int   x1, int   y1, int   x2, int   y2, int   rx, int   ry,                     unsigned int Color, int FillFlag ) ;										// Šp‚ÌŠÛ‚¢lŠpŒ`‚ğ•`‰æ‚·‚é
extern	int			DrawRoundRectAA(  float x1, float y1, float x2, float y2, float rx, float ry, int posnum,         unsigned int Color, int FillFlag, float LineThickness = 1.0f ) ;			// Šp‚ÌŠÛ‚¢lŠpŒ`‚ğ•`‰æ‚·‚é( ƒAƒ“ƒ`ƒGƒCƒŠƒAƒX•t‚« )
extern 	int			DrawPixel(        int   x,  int   y,                                                              unsigned int Color ) ;													// “_‚ğ•`‰æ‚·‚é

extern	int			Paint(			int x, int y, unsigned int FillColor, ULONGLONG BoundaryColor = ULL_PARAM( 0xffffffffffffffff ) ) ;						// w’è“_‚©‚ç‹«ŠEF‚ª‚ ‚é‚Æ‚±‚ë‚Ü‚Å“h‚è‚Â‚Ô‚·(‹«ŠEF‚ğ -1 ‚É‚·‚é‚Æw’è“_‚ÌF‚Ì—Ìˆæ‚ğ“h‚è‚Â‚Ô‚·)

extern 	int			DrawPixelSet(   const POINTDATA *PointDataArray, int Num ) ;																	// “_‚ÌW‡‚ğ•`‰æ‚·‚é
extern	int			DrawLineSet(    const LINEDATA *LineDataArray,   int Num ) ;																	// ü‚ÌW‡‚ğ•`‰æ‚·‚é

extern	int			DrawPixel3D(     VECTOR   Pos,                                                                 unsigned int Color ) ;						// ‚R‚c‚Ì“_‚ğ•`‰æ‚·‚é
extern	int			DrawPixel3DD(    VECTOR_D Pos,                                                                 unsigned int Color ) ;						// ‚R‚c‚Ì“_‚ğ•`‰æ‚·‚é
extern	int			DrawLine3D(      VECTOR   Pos1,   VECTOR   Pos2,                                               unsigned int Color ) ;						// ‚R‚c‚Ìü•ª‚ğ•`‰æ‚·‚é
extern	int			DrawLine3DD(     VECTOR_D Pos1,   VECTOR_D Pos2,                                               unsigned int Color ) ;						// ‚R‚c‚Ìü•ª‚ğ•`‰æ‚·‚é
extern	int			DrawTriangle3D(  VECTOR   Pos1,   VECTOR   Pos2, VECTOR   Pos3,                                unsigned int Color, int FillFlag ) ;		// ‚R‚c‚ÌOŠpŒ`‚ğ•`‰æ‚·‚é
extern	int			DrawTriangle3DD( VECTOR_D Pos1,   VECTOR_D Pos2, VECTOR_D Pos3,                                unsigned int Color, int FillFlag ) ;		// ‚R‚c‚ÌOŠpŒ`‚ğ•`‰æ‚·‚é
extern	int			DrawCube3D(      VECTOR   Pos1,   VECTOR   Pos2,                            unsigned int DifColor, unsigned int SpcColor, int FillFlag ) ;		// ‚R‚c‚Ì—§•û‘Ì‚ğ•`‰æ‚·‚é
extern	int			DrawCube3DD(     VECTOR_D Pos1,   VECTOR_D Pos2,                            unsigned int DifColor, unsigned int SpcColor, int FillFlag ) ;		// ‚R‚c‚Ì—§•û‘Ì‚ğ•`‰æ‚·‚é
extern	int			DrawSphere3D(    VECTOR   CenterPos,                  float  r, int DivNum, unsigned int DifColor, unsigned int SpcColor, int FillFlag ) ;		// ‚R‚c‚Ì‹…‘Ì‚ğ•`‰æ‚·‚é
extern	int			DrawSphere3DD(   VECTOR_D CenterPos,                  double r, int DivNum, unsigned int DifColor, unsigned int SpcColor, int FillFlag ) ;		// ‚R‚c‚Ì‹…‘Ì‚ğ•`‰æ‚·‚é
extern	int			DrawCapsule3D(   VECTOR   Pos1,   VECTOR   Pos2,      float  r, int DivNum, unsigned int DifColor, unsigned int SpcColor, int FillFlag ) ;		// ‚R‚c‚ÌƒJƒvƒZƒ‹‚ğ•`‰æ‚·‚é
extern	int			DrawCapsule3DD(  VECTOR_D Pos1,   VECTOR_D Pos2,      double r, int DivNum, unsigned int DifColor, unsigned int SpcColor, int FillFlag ) ;		// ‚R‚c‚ÌƒJƒvƒZƒ‹‚ğ•`‰æ‚·‚é
extern	int			DrawCone3D(      VECTOR   TopPos, VECTOR   BottomPos, float  r, int DivNum, unsigned int DifColor, unsigned int SpcColor, int FillFlag ) ;		// ‚R‚c‚Ì‰~‚ğ•`‰æ‚·‚é
extern	int			DrawCone3DD(     VECTOR_D TopPos, VECTOR_D BottomPos, double r, int DivNum, unsigned int DifColor, unsigned int SpcColor, int FillFlag ) ;		// ‚R‚c‚Ì‰~‚ğ•`‰æ‚·‚é

// ‰æ‘œ•`‰æŠÖ”
extern	int			LoadGraphScreen(          int x, int y, const TCHAR *GraphName, int TransFlag ) ;										// ‰æ‘œƒtƒ@ƒCƒ‹‚ğ“Ç‚İ‚±‚ñ‚Å‰æ–Ê‚É•`‰æ‚·‚é

extern	int			DrawGraph(                int x, int y,                                                                 int GrHandle, int TransFlag ) ;										// ‰æ‘œ‚Ì“™”{•`‰æ
extern	int			DrawExtendGraph(          int x1, int y1, int x2, int y2,                                               int GrHandle, int TransFlag ) ;										// ‰æ‘œ‚ÌŠg‘å•`‰æ
extern	int			DrawRotaGraph(            int x, int y,                 double ExRate,                    double Angle, int GrHandle, int TransFlag, int TurnFlag = FALSE ) ;				// ‰æ‘œ‚Ì‰ñ“]•`‰æ
extern	int			DrawRotaGraph2(           int x, int y, int cx, int cy, double ExtRate,                   double Angle, int GrHandle, int TransFlag, int TurnFlag = FALSE ) ;				// ‰æ‘œ‚Ì‰ñ“]•`‰æ‚Q( ‰ñ“]’†Sw’è•t‚« )
extern	int			DrawRotaGraph3(           int x, int y, int cx, int cy, double ExtRateX, double ExtRateY, double Angle, int GrHandle, int TransFlag, int TurnFlag = FALSE ) ; 				// ‰æ‘œ‚Ì‰ñ“]•`‰æ‚R( ‰ñ“]’†Sw’è•t‚«{c‰¡Šg‘å—¦•Êw’è”Å )
extern	int			DrawRotaGraphFast(        int x, int y,                 float  ExRate,                    float  Angle, int GrHandle, int TransFlag, int TurnFlag = FALSE ) ;				// ‰æ‘œ‚Ì‰ñ“]•`‰æ( ‚‘¬”ÅAÀ•WŒvZ‚ÌƒAƒ‹ƒSƒŠƒYƒ€‚ªŠÈ—ª‰»‚³‚ê‚Ä‚¢‚Ü‚·A•`‰æŒ‹‰Ê‚É•s“s‡‚ª–³‚¯‚ê‚Î‚±‚¿‚ç‚Ì•û‚ª‚‘¬‚Å‚· )
extern	int			DrawRotaGraphFast2(       int x, int y, int cx, int cy, float  ExtRate,                   float  Angle, int GrHandle, int TransFlag, int TurnFlag = FALSE ) ;				// ‰æ‘œ‚Ì‰ñ“]•`‰æ‚Q( ‰ñ“]’†Sw’è•t‚« )( ‚‘¬”ÅAÀ•WŒvZ‚ÌƒAƒ‹ƒSƒŠƒYƒ€‚ªŠÈ—ª‰»‚³‚ê‚Ä‚¢‚Ü‚·A•`‰æŒ‹‰Ê‚É•s“s‡‚ª–³‚¯‚ê‚Î‚±‚¿‚ç‚Ì•û‚ª‚‘¬‚Å‚· )
extern	int			DrawRotaGraphFast3(       int x, int y, int cx, int cy, float  ExtRateX, float  ExtRateY, float  Angle, int GrHandle, int TransFlag, int TurnFlag = FALSE ) ; 				// ‰æ‘œ‚Ì‰ñ“]•`‰æ‚R( ‰ñ“]’†Sw’è•t‚«{c‰¡Šg‘å—¦•Êw’è”Å )( ‚‘¬”ÅAÀ•WŒvZ‚ÌƒAƒ‹ƒSƒŠƒYƒ€‚ªŠÈ—ª‰»‚³‚ê‚Ä‚¢‚Ü‚·A•`‰æŒ‹‰Ê‚É•s“s‡‚ª–³‚¯‚ê‚Î‚±‚¿‚ç‚Ì•û‚ª‚‘¬‚Å‚· )
extern	int			DrawModiGraph(            int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4,               int GrHandle, int TransFlag ) ;										// ‰æ‘œ‚Ì©—R•ÏŒ`•`‰æ
extern	int			DrawTurnGraph(            int x, int y,                                                                 int GrHandle, int TransFlag ) ;										// ‰æ‘œ‚Ì¶‰E”½“]•`‰æ

extern	int			DrawGraphF(               float xf, float yf,                                                                       int GrHandle, int TransFlag ) ;							// ‰æ‘œ‚Ì•`‰æ( À•Ww’è‚ª float ”Å )
extern	int			DrawExtendGraphF(         float x1f, float y1f, float x2f, float y2,                                                int GrHandle, int TransFlag ) ;							// ‰æ‘œ‚ÌŠg‘å•`‰æ( À•Ww’è‚ª float ”Å )
extern	int			DrawRotaGraphF(           float xf, float yf,                       double ExRate,                    double Angle, int GrHandle, int TransFlag, int TurnFlag = FALSE ) ;	// ‰æ‘œ‚Ì‰ñ“]•`‰æ( À•Ww’è‚ª float ”Å )
extern	int			DrawRotaGraph2F(          float xf, float yf, float cxf, float cyf, double ExtRate,                   double Angle, int GrHandle, int TransFlag, int TurnFlag = FALSE ) ;	// ‰æ‘œ‚Ì‰ñ“]•`‰æ‚Q( ‰ñ“]’†Sw’è•t‚« )( À•Ww’è‚ª float ”Å )
extern	int			DrawRotaGraph3F(          float xf, float yf, float cxf, float cyf, double ExtRateX, double ExtRateY, double Angle, int GrHandle, int TransFlag, int TurnFlag = FALSE ) ; 	// ‰æ‘œ‚Ì‰ñ“]•`‰æ‚R( ‰ñ“]’†Sw’è•t‚«{c‰¡Šg‘å—¦•Êw’è”Å )( À•Ww’è‚ª float ”Å )
extern	int			DrawRotaGraphFastF(       float xf, float yf,                       float  ExRate,                    float  Angle, int GrHandle, int TransFlag, int TurnFlag = FALSE ) ;	// ‰æ‘œ‚Ì‰ñ“]•`‰æ( À•Ww’è‚ª float ”Å )( ‚‘¬”ÅAÀ•WŒvZ‚ÌƒAƒ‹ƒSƒŠƒYƒ€‚ªŠÈ—ª‰»‚³‚ê‚Ä‚¢‚Ü‚·A•`‰æŒ‹‰Ê‚É•s“s‡‚ª–³‚¯‚ê‚Î‚±‚¿‚ç‚Ì•û‚ª‚‘¬‚Å‚· )
extern	int			DrawRotaGraphFast2F(      float xf, float yf, float cxf, float cyf, float  ExtRate,                   float  Angle, int GrHandle, int TransFlag, int TurnFlag = FALSE ) ;	// ‰æ‘œ‚Ì‰ñ“]•`‰æ‚Q( ‰ñ“]’†Sw’è•t‚« )( À•Ww’è‚ª float ”Å )( ‚‘¬”ÅAÀ•WŒvZ‚ÌƒAƒ‹ƒSƒŠƒYƒ€‚ªŠÈ—ª‰»‚³‚ê‚Ä‚¢‚Ü‚·A•`‰æŒ‹‰Ê‚É•s“s‡‚ª–³‚¯‚ê‚Î‚±‚¿‚ç‚Ì•û‚ª‚‘¬‚Å‚· )
extern	int			DrawRotaGraphFast3F(      float xf, float yf, float cxf, float cyf, float  ExtRateX, float  ExtRateY, float  Angle, int GrHandle, int TransFlag, int TurnFlag = FALSE ) ; 	// ‰æ‘œ‚Ì‰ñ“]•`‰æ‚R( ‰ñ“]’†Sw’è•t‚«{c‰¡Šg‘å—¦•Êw’è”Å )( À•Ww’è‚ª float ”Å )( ‚‘¬”ÅAÀ•WŒvZ‚ÌƒAƒ‹ƒSƒŠƒYƒ€‚ªŠÈ—ª‰»‚³‚ê‚Ä‚¢‚Ü‚·A•`‰æŒ‹‰Ê‚É•s“s‡‚ª–³‚¯‚ê‚Î‚±‚¿‚ç‚Ì•û‚ª‚‘¬‚Å‚· )
extern	int			DrawModiGraphF(           float x1, float y1, float x2, float y2, float x3, float y3, float x4, float y4,           int GrHandle, int TransFlag ) ;							// ‰æ‘œ‚Ì©—R•ÏŒ`•`‰æ( À•Ww’è‚ª float ”Å )
extern	int			DrawTurnGraphF(           float xf, float yf,                                                                       int GrHandle, int TransFlag ) ;							// ‰æ‘œ‚Ì¶‰E”½“]•`‰æ( À•Ww’è‚ª float ”Å )

extern	int			DrawChipMap(              int Sx, int Sy, int XNum, int YNum, const int *MapData, int ChipTypeNum, int MapDataPitch, const int *ChipGrHandle, int TransFlag ) ;																											// ƒ`ƒbƒv‰æ‘œ‚ğg‚Á‚½‚Q‚cƒ}ƒbƒv•`‰æ
extern	int			DrawChipMap(              int MapWidth, int MapHeight,        const int *MapData, int ChipTypeNum,                   const int *ChipGrHandle, int TransFlag, int MapDrawPointX, int MapDrawPointY, int MapDrawWidth, int MapDrawHeight, int ScreenX, int ScreenY ) ;	// ƒ`ƒbƒv‰æ‘œ‚ğg‚Á‚½‚Q‚cƒ}ƒbƒv•`‰æ
extern	int			DrawTile(                 int x1, int y1, int x2, int y2, int Tx, int Ty, double ExtRate, double Angle, int GrHandle, int TransFlag ) ;																																	// ‰æ‘œ‚ğw’è—Ìˆæ‚Éƒ^ƒCƒ‹ó‚É•`‰æ‚·‚é

extern	int			DrawRectGraph(            int DestX,  int DestY,                          int SrcX, int SrcY, int    Width, int    Height,                         int GraphHandle, int TransFlag, int TurnFlag ) ;				// ‰æ‘œ‚Ìw’è‹éŒ`•”•ª‚Ì‚İ‚ğ“™”{•`‰æ
extern	int			DrawRectExtendGraph(      int DestX1, int DestY1, int DestX2, int DestY2, int SrcX, int SrcY, int SrcWidth, int SrcHeight,                         int GraphHandle, int TransFlag ) ;							// ‰æ‘œ‚Ìw’è‹éŒ`•”•ª‚Ì‚İ‚ğŠg‘å•`‰æ
extern	int			DrawRectRotaGraph(        int x, int y, int SrcX, int SrcY, int Width, int Height, double ExtRate, double Angle,                                   int GraphHandle, int TransFlag, int TurnFlag ) ;				// ‰æ‘œ‚Ìw’è‹éŒ`•”•ª‚Ì‚İ‚ğ‰ñ“]•`‰æ
extern	int			DrawRectRotaGraph2(       int x, int y, int SrcX, int SrcY, int Width, int Height, int cx, int cy, double ExtRate,  double Angle,                  int GraphHandle, int TransFlag, int TurnFlag ) ;				// ‰æ‘œ‚Ìw’è‹éŒ`•”•ª‚Ì‚İ‚ğ‰ñ“]•`‰æ‚Q( ‰ñ“]’†Sw’è•t‚« )
extern	int			DrawRectRotaGraph3(       int x, int y, int SrcX, int SrcY, int Width, int Height, int cx, int cy, double ExtRateX, double ExtRateY, double Angle, int GraphHandle, int TransFlag, int TurnFlag ) ;				// ‰æ‘œ‚Ìw’è‹éŒ`•”•ª‚Ì‚İ‚ğ‰ñ“]•`‰æ‚R( ‰ñ“]’†Sw’è•t‚«{c‰¡Šg‘å—¦•Êw’è”Å )
extern	int			DrawRectRotaGraphFast(    int x, int y, int SrcX, int SrcY, int Width, int Height, float ExtRate, float Angle,                                   int GraphHandle, int TransFlag, int TurnFlag ) ;				// ‰æ‘œ‚Ìw’è‹éŒ`•”•ª‚Ì‚İ‚ğ‰ñ“]•`‰æ( ‚‘¬”ÅAÀ•WŒvZ‚ÌƒAƒ‹ƒSƒŠƒYƒ€‚ªŠÈ—ª‰»‚³‚ê‚Ä‚¢‚Ü‚·A•`‰æŒ‹‰Ê‚É•s“s‡‚ª–³‚¯‚ê‚Î‚±‚¿‚ç‚Ì•û‚ª‚‘¬‚Å‚· )
extern	int			DrawRectRotaGraphFast2(   int x, int y, int SrcX, int SrcY, int Width, int Height, int cx, int cy, float ExtRate,  float Angle,                  int GraphHandle, int TransFlag, int TurnFlag ) ;				// ‰æ‘œ‚Ìw’è‹éŒ`•”•ª‚Ì‚İ‚ğ‰ñ“]•`‰æ‚Q( ‰ñ“]’†Sw’è•t‚« )( ‚‘¬”ÅAÀ•WŒvZ‚ÌƒAƒ‹ƒSƒŠƒYƒ€‚ªŠÈ—ª‰»‚³‚ê‚Ä‚¢‚Ü‚·A•`‰æŒ‹‰Ê‚É•s“s‡‚ª–³‚¯‚ê‚Î‚±‚¿‚ç‚Ì•û‚ª‚‘¬‚Å‚· )
extern	int			DrawRectRotaGraphFast3(   int x, int y, int SrcX, int SrcY, int Width, int Height, int cx, int cy, float ExtRateX, float ExtRateY, float Angle, int GraphHandle, int TransFlag, int TurnFlag ) ;				// ‰æ‘œ‚Ìw’è‹éŒ`•”•ª‚Ì‚İ‚ğ‰ñ“]•`‰æ‚R( ‰ñ“]’†Sw’è•t‚«{c‰¡Šg‘å—¦•Êw’è”Å )( ‚‘¬”ÅAÀ•WŒvZ‚ÌƒAƒ‹ƒSƒŠƒYƒ€‚ªŠÈ—ª‰»‚³‚ê‚Ä‚¢‚Ü‚·A•`‰æŒ‹‰Ê‚É•s“s‡‚ª–³‚¯‚ê‚Î‚±‚¿‚ç‚Ì•û‚ª‚‘¬‚Å‚· )
extern	int			DrawRectModiGraph(        int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4, int SrcX, int SrcY, int Width, int Height,               int GraphHandle, int TransFlag ) ;							// ‰æ‘œ‚Ìw’è‹éŒ`•”•ª‚Ì‚İ‚ğ©—R•ÏŒ`•`‰æ

extern	int			DrawRectGraphF(           float DestX,  float DestY,                              int SrcX, int SrcY, int    Width, int    Height,                           int GraphHandle, int TransFlag, int TurnFlag ) ;	// ‰æ‘œ‚Ìw’è‹éŒ`•”•ª‚Ì‚İ‚ğ“™”{•`‰æ( À•Ww’è‚ª float ”Å )
extern	int			DrawRectExtendGraphF(     float DestX1, float DestY1, float DestX2, float DestY2, int SrcX, int SrcY, int SrcWidth, int SrcHeight,                           int GraphHandle, int TransFlag ) ;					// ‰æ‘œ‚Ìw’è‹éŒ`•”•ª‚Ì‚İ‚ğŠg‘å•`‰æ( À•Ww’è‚ª float ”Å )
extern	int			DrawRectRotaGraphF(       float x, float y, int SrcX, int SrcY, int Width, int Height,                       double ExtRate,                   double Angle, int GraphHandle, int TransFlag, int TurnFlag ) ;	// ‰æ‘œ‚Ìw’è‹éŒ`•”•ª‚Ì‚İ‚ğ‰ñ“]•`‰æ( À•Ww’è‚ª float ”Å )
extern	int			DrawRectRotaGraph2F(      float x, float y, int SrcX, int SrcY, int Width, int Height, float cxf, float cyf, double ExtRate,                   double Angle, int GraphHandle, int TransFlag, int TurnFlag ) ;	// ‰æ‘œ‚Ìw’è‹éŒ`•”•ª‚Ì‚İ‚ğ‰ñ“]•`‰æ‚Q( ‰ñ“]’†Sw’è•t‚« )( À•Ww’è‚ª float ”Å )
extern	int			DrawRectRotaGraph3F(      float x, float y, int SrcX, int SrcY, int Width, int Height, float cxf, float cyf, double ExtRateX, double ExtRateY, double Angle, int GraphHandle, int TransFlag, int TurnFlag ) ;	// ‰æ‘œ‚Ìw’è‹éŒ`•”•ª‚Ì‚İ‚ğ‰ñ“]•`‰æ‚R( ‰ñ“]’†Sw’è•t‚«{c‰¡Šg‘å—¦•Êw’è”Å )( À•Ww’è‚ª float ”Å )
extern	int			DrawRectRotaGraphFastF(   float x, float y, int SrcX, int SrcY, int Width, int Height,                       float ExtRate,                    float  Angle, int GraphHandle, int TransFlag, int TurnFlag ) ;	// ‰æ‘œ‚Ìw’è‹éŒ`•”•ª‚Ì‚İ‚ğ‰ñ“]•`‰æ( À•Ww’è‚ª float ”Å )( ‚‘¬”ÅAÀ•WŒvZ‚ÌƒAƒ‹ƒSƒŠƒYƒ€‚ªŠÈ—ª‰»‚³‚ê‚Ä‚¢‚Ü‚·A•`‰æŒ‹‰Ê‚É•s“s‡‚ª–³‚¯‚ê‚Î‚±‚¿‚ç‚Ì•û‚ª‚‘¬‚Å‚· )
extern	int			DrawRectRotaGraphFast2F(  float x, float y, int SrcX, int SrcY, int Width, int Height, float cxf, float cyf, float ExtRate,                    float  Angle, int GraphHandle, int TransFlag, int TurnFlag ) ;	// ‰æ‘œ‚Ìw’è‹éŒ`•”•ª‚Ì‚İ‚ğ‰ñ“]•`‰æ‚Q( ‰ñ“]’†Sw’è•t‚« )( À•Ww’è‚ª float ”Å )( ‚‘¬”ÅAÀ•WŒvZ‚ÌƒAƒ‹ƒSƒŠƒYƒ€‚ªŠÈ—ª‰»‚³‚ê‚Ä‚¢‚Ü‚·A•`‰æŒ‹‰Ê‚É•s“s‡‚ª–³‚¯‚ê‚Î‚±‚¿‚ç‚Ì•û‚ª‚‘¬‚Å‚· )
extern	int			DrawRectRotaGraphFast3F(  float x, float y, int SrcX, int SrcY, int Width, int Height, float cxf, float cyf, float ExtRateX,  float  ExtRateY, float  Angle, int GraphHandle, int TransFlag, int TurnFlag ) ;	// ‰æ‘œ‚Ìw’è‹éŒ`•”•ª‚Ì‚İ‚ğ‰ñ“]•`‰æ‚R( ‰ñ“]’†Sw’è•t‚«{c‰¡Šg‘å—¦•Êw’è”Å )( À•Ww’è‚ª float ”Å )( ‚‘¬”ÅAÀ•WŒvZ‚ÌƒAƒ‹ƒSƒŠƒYƒ€‚ªŠÈ—ª‰»‚³‚ê‚Ä‚¢‚Ü‚·A•`‰æŒ‹‰Ê‚É•s“s‡‚ª–³‚¯‚ê‚Î‚±‚¿‚ç‚Ì•û‚ª‚‘¬‚Å‚· )
extern	int			DrawRectModiGraphF(       float x1, float y1, float x2, float y2, float x3, float y3, float x4, float y4, int SrcX, int SrcY, int Width, int Height,         int GraphHandle, int TransFlag ) ;					// ‰æ‘œ‚Ìw’è‹éŒ`•”•ª‚Ì‚İ‚ğ©—R•ÏŒ`•`‰æ( À•Ww’è‚ª float ”Å )

extern	int			DrawBlendGraph(           int x, int y, int GrHandle, int TransFlag,                 int BlendGraph, int BorderParam, int BorderRange ) ;									// ƒuƒŒƒ“ƒh‰æ‘œ‚Æ‡¬‚µ‚Ä‰æ‘œ‚ğ“™”{•`‰æ‚·‚é
extern	int			DrawBlendGraphPos(        int x, int y, int GrHandle, int TransFlag, int bx, int by, int BlendGraph, int BorderParam, int BorderRange ) ;									// ƒuƒŒƒ“ƒh‰æ‘œ‚Æ‡¬‚µ‚Ä‰æ‘œ‚ğ“™”{•`‰æ‚·‚é( ƒuƒŒƒ“ƒh‰æ‘œ‚Ì‹N“_À•W‚ğw’è‚·‚éˆø”•t‚« )

extern	int			DrawCircleGauge(          int CenterX, int CenterY, double Percent, int GrHandle, double StartPercent = 0.0 ) ;																				// ‰~ƒOƒ‰ƒt“I‚È•`‰æ‚ğs‚¤( GrHandle ‚Ì‰æ‘œ‚Ìã‰º¶‰E‚Ì’[‚Í“§‰ßF‚É‚µ‚Ä‚¨‚­•K—v‚ª‚ ‚è‚Ü‚· )

extern	int			DrawGraphToZBuffer(       int X, int Y,                                                                 int GrHandle, int WriteZMode /* DX_ZWRITE_MASK “™ */ ) ;							// ‚yƒoƒbƒtƒ@‚É‘Î‚µ‚Ä‰æ‘œ‚Ì“™”{•`‰æ
extern	int			DrawTurnGraphToZBuffer(   int x, int y,                                                                 int GrHandle, int WriteZMode /* DX_ZWRITE_MASK “™ */ ) ;							// ‚yƒoƒbƒtƒ@‚É‘Î‚µ‚Ä‰æ‘œ‚Ì¶‰E”½“]•`‰æ
extern	int			DrawExtendGraphToZBuffer( int x1, int y1, int x2, int y2,                                               int GrHandle, int WriteZMode /* DX_ZWRITE_MASK “™ */ ) ;							// ‚yƒoƒbƒtƒ@‚É‘Î‚µ‚Ä‰æ‘œ‚ÌŠg‘å•`‰æ
extern	int			DrawRotaGraphToZBuffer(   int x, int y, double ExRate, double Angle,                                    int GrHandle, int WriteZMode /* DX_ZWRITE_MASK “™ */ , int TurnFlag = FALSE ) ;		// ‚yƒoƒbƒtƒ@‚É‘Î‚µ‚Ä‰æ‘œ‚Ì‰ñ“]•`‰æ
extern	int			DrawRotaGraph2ToZBuffer(  int x, int y, int cx, int cy, double ExtRate,                   double Angle, int GrHandle, int WriteZMode /* DX_ZWRITE_MASK “™ */ , int TurnFlag = FALSE ) ;		// ‚yƒoƒbƒtƒ@‚É‘Î‚µ‚Ä‰æ‘œ‚Ì‰ñ“]•`‰æ‚Q( ‰ñ“]’†Sw’è•t‚« )
extern	int			DrawRotaGraph3ToZBuffer(  int x, int y, int cx, int cy, double ExtRateX, double ExtRateY, double Angle, int GrHandle, int WriteZMode /* DX_ZWRITE_MASK “™ */ , int TurnFlag = FALSE ) ; 	// ‚yƒoƒbƒtƒ@‚É‘Î‚µ‚Ä‰æ‘œ‚Ì‰ñ“]•`‰æ‚R( ‰ñ“]’†Sw’è•t‚«{c‰¡Šg‘å—¦•Êw’è”Å )
extern	int			DrawRotaGraphFastToZBuffer(   int x, int y, float ExRate, float Angle,                                   int GrHandle, int WriteZMode /* DX_ZWRITE_MASK “™ */ , int TurnFlag = FALSE ) ;	// ‚yƒoƒbƒtƒ@‚É‘Î‚µ‚Ä‰æ‘œ‚Ì‰ñ“]•`‰æ( ‚‘¬”ÅAÀ•WŒvZ‚ÌƒAƒ‹ƒSƒŠƒYƒ€‚ªŠÈ—ª‰»‚³‚ê‚Ä‚¢‚Ü‚·A•`‰æŒ‹‰Ê‚É•s“s‡‚ª–³‚¯‚ê‚Î‚±‚¿‚ç‚Ì•û‚ª‚‘¬‚Å‚· )
extern	int			DrawRotaGraphFast2ToZBuffer(  int x, int y, int cx, int cy, float ExtRate,                  float Angle, int GrHandle, int WriteZMode /* DX_ZWRITE_MASK “™ */ , int TurnFlag = FALSE ) ;	// ‚yƒoƒbƒtƒ@‚É‘Î‚µ‚Ä‰æ‘œ‚Ì‰ñ“]•`‰æ‚Q( ‰ñ“]’†Sw’è•t‚« )( ‚‘¬”ÅAÀ•WŒvZ‚ÌƒAƒ‹ƒSƒŠƒYƒ€‚ªŠÈ—ª‰»‚³‚ê‚Ä‚¢‚Ü‚·A•`‰æŒ‹‰Ê‚É•s“s‡‚ª–³‚¯‚ê‚Î‚±‚¿‚ç‚Ì•û‚ª‚‘¬‚Å‚· )
extern	int			DrawRotaGraphFast3ToZBuffer(  int x, int y, int cx, int cy, float ExtRateX, float ExtRateY, float Angle, int GrHandle, int WriteZMode /* DX_ZWRITE_MASK “™ */ , int TurnFlag = FALSE ) ; 	// ‚yƒoƒbƒtƒ@‚É‘Î‚µ‚Ä‰æ‘œ‚Ì‰ñ“]•`‰æ‚R( ‰ñ“]’†Sw’è•t‚«{c‰¡Šg‘å—¦•Êw’è”Å )( ‚‘¬”ÅAÀ•WŒvZ‚ÌƒAƒ‹ƒSƒŠƒYƒ€‚ªŠÈ—ª‰»‚³‚ê‚Ä‚¢‚Ü‚·A•`‰æŒ‹‰Ê‚É•s“s‡‚ª–³‚¯‚ê‚Î‚±‚¿‚ç‚Ì•û‚ª‚‘¬‚Å‚· )
extern	int			DrawModiGraphToZBuffer(   int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4,               int GrHandle, int WriteZMode /* DX_ZWRITE_MASK “™ */ ) ;							// ‚yƒoƒbƒtƒ@‚É‘Î‚µ‚Ä‰æ‘œ‚Ì©—R•ÏŒ`•`‰æ
extern	int			DrawBoxToZBuffer(         int x1, int y1, int x2, int y2,                                               int FillFlag, int WriteZMode /* DX_ZWRITE_MASK “™ */ ) ;							// ‚yƒoƒbƒtƒ@‚É‘Î‚µ‚Ä‹éŒ`‚Ì•`‰æ
extern	int			DrawCircleToZBuffer(      int x, int y, int r,                                                          int FillFlag, int WriteZMode /* DX_ZWRITE_MASK “™ */ ) ;							// ‚yƒoƒbƒtƒ@‚É‘Î‚µ‚Ä‰~‚Ì•`‰æ
extern	int			DrawTriangleToZBuffer(    int x1, int y1, int x2, int y2, int x3, int y3,                               int FillFlag, int WriteZMode /* DX_ZWRITE_MASK “™ */ ) ;							// ‚yƒoƒbƒtƒ@‚É‘Î‚µ‚ÄOŠpŒ`‚ğ•`‰æ‚·‚é
extern	int			DrawQuadrangleToZBuffer(  int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4,               int FillFlag, int WriteZMode /* DX_ZWRITE_MASK “™ */ ) ;							// ‚yƒoƒbƒtƒ@‚É‘Î‚µ‚ÄlŠpŒ`‚ğ•`‰æ‚·‚é
extern	int			DrawRoundRectToZBuffer(   int x1, int y1, int x2, int y2, int rx, int ry,                               int FillFlag, int WriteZMode /* DX_ZWRITE_MASK “™ */ ) ;							// ‚yƒoƒbƒtƒ@‚É‘Î‚µ‚ÄŠp‚ÌŠÛ‚¢lŠpŒ`‚ğ•`‰æ‚·‚é

extern	int			DrawPolygon(                             const VERTEX    *VertexArray, int PolygonNum,                                                                                                       int GrHandle, int TransFlag, int UVScaling = FALSE ) ;		// ‚Q‚cƒ|ƒŠƒSƒ“‚ğ•`‰æ‚·‚é( Vertex:OŠpŒ`‚ğŒ`¬‚·‚é’¸“_”z—ñ‚Ìæ“ªƒAƒhƒŒƒX( ’¸“_‚Ì”‚Íƒ|ƒŠƒSƒ“‚Ì”~‚R )  PolygonNum:•`‰æ‚·‚éƒ|ƒŠƒSƒ“‚Ì”  GrHandle:g—p‚·‚éƒOƒ‰ƒtƒBƒbƒNƒnƒ“ƒhƒ‹  TransFlag:“§‰ßFˆ—‚ğs‚¤‚©‚Ç‚¤‚©( TRUE:s‚¤  FALSE:s‚í‚È‚¢ )  UVScaling:Šî–{FALSE‚ÅOK )
extern	int			DrawPolygon2D(                           const VERTEX2D  *VertexArray, int PolygonNum,                                                                                                       int GrHandle, int TransFlag ) ;							// ‚Q‚cƒ|ƒŠƒSƒ“‚ğ•`‰æ‚·‚é
extern	int			DrawPolygon3D(                           const VERTEX3D  *VertexArray, int PolygonNum,                                                                                                       int GrHandle, int TransFlag ) ;							// ‚R‚cƒ|ƒŠƒSƒ“‚ğ•`‰æ‚·‚é
extern	int			DrawPolygonIndexed2D(                    const VERTEX2D  *VertexArray, int VertexNum, const unsigned short *IndexArray, int PolygonNum,                                                      int GrHandle, int TransFlag ) ;							// ‚Q‚cƒ|ƒŠƒSƒ“‚ğ•`‰æ‚·‚é( ’¸“_ƒCƒ“ƒfƒbƒNƒX‚ğg—p )
extern	int			DrawPolygonIndexed3D(                    const VERTEX3D  *VertexArray, int VertexNum, const unsigned short *IndexArray, int PolygonNum,                                                      int GrHandle, int TransFlag ) ;							// ‚R‚cƒ|ƒŠƒSƒ“‚ğ•`‰æ‚·‚é( ’¸“_ƒCƒ“ƒfƒbƒNƒX‚ğg—p )
extern	int			DrawPolygonIndexed3DBase(                const VERTEX_3D *VertexArray, int VertexNum, const unsigned short *IndexArray, int IndexNum,   int PrimitiveType /* DX_PRIMTYPE_TRIANGLELIST “™ */, int GrHandle, int TransFlag ) ;							// ‚R‚cƒ|ƒŠƒSƒ“‚ğ•`‰æ‚·‚é( ’¸“_ƒCƒ“ƒfƒbƒNƒX‚ğg—p )( ‹Œƒo[ƒWƒ‡ƒ“—p )
extern	int			DrawPolygon3DBase(                       const VERTEX_3D *VertexArray, int VertexNum,                                                   int PrimitiveType /* DX_PRIMTYPE_TRIANGLELIST “™ */, int GrHandle, int TransFlag ) ;							// ‚R‚cƒ|ƒŠƒSƒ“‚ğ•`‰æ‚·‚é( ‹Œƒo[ƒWƒ‡ƒ“—p )
extern	int			DrawPolygon3D(                           const VERTEX_3D *VertexArray, int PolygonNum,                                                                                                       int GrHandle, int TransFlag ) ;							// ‚R‚cƒ|ƒŠƒSƒ“‚ğ•`‰æ‚·‚é( ‹Œƒo[ƒWƒ‡ƒ“—p )

extern	int			DrawPolygonBase(                         const VERTEX    *VertexArray, int VertexNum,                                                   int PrimitiveType /* DX_PRIMTYPE_TRIANGLELIST “™ */, int GrHandle, int TransFlag, int UVScaling = FALSE ) ;		// ‚Q‚cƒvƒŠƒ~ƒeƒBƒu‚ğ•`‰æ‚·‚é
extern	int			DrawPrimitive2D(                         const VERTEX2D  *VertexArray, int VertexNum,                                                   int PrimitiveType /* DX_PRIMTYPE_TRIANGLELIST “™ */, int GrHandle, int TransFlag ) ;							// ‚Q‚cƒvƒŠƒ~ƒeƒBƒu‚ğ•`‰æ‚·‚é
extern	int			DrawPrimitive3D(                         const VERTEX3D  *VertexArray, int VertexNum,                                                   int PrimitiveType /* DX_PRIMTYPE_TRIANGLELIST “™ */, int GrHandle, int TransFlag ) ;							// ‚R‚cƒvƒŠƒ~ƒeƒBƒu‚ğ•`‰æ‚·‚é
extern	int			DrawPrimitiveIndexed2D(                  const VERTEX2D  *VertexArray, int VertexNum, const unsigned short *IndexArray, int IndexNum,   int PrimitiveType /* DX_PRIMTYPE_TRIANGLELIST “™ */, int GrHandle, int TransFlag ) ;							// ‚Q‚cƒvƒŠƒ~ƒeƒBƒu‚ğ•`‰æ‚·‚é(’¸“_ƒCƒ“ƒfƒbƒNƒXg—p)
extern	int			DrawPrimitiveIndexed3D(                  const VERTEX3D  *VertexArray, int VertexNum, const unsigned short *IndexArray, int IndexNum,   int PrimitiveType /* DX_PRIMTYPE_TRIANGLELIST “™ */, int GrHandle, int TransFlag ) ;							// ‚R‚cƒvƒŠƒ~ƒeƒBƒu‚ğ•`‰æ‚·‚é(’¸“_ƒCƒ“ƒfƒbƒNƒXg—p)

extern	int			DrawPolygon3D_UseVertexBuffer(           int VertexBufHandle,                                                                                                                                                               int GrHandle, int TransFlag ) ;		// ’¸“_ƒoƒbƒtƒ@‚ğg—p‚µ‚Ä‚R‚cƒ|ƒŠƒSƒ“‚ğ•`‰æ‚·‚é
extern	int			DrawPrimitive3D_UseVertexBuffer(         int VertexBufHandle,                     int PrimitiveType  /* DX_PRIMTYPE_TRIANGLELIST “™ */,                                                                                     int GrHandle, int TransFlag ) ;		// ’¸“_ƒoƒbƒtƒ@‚ğg—p‚µ‚Ä‚R‚cƒvƒŠƒ~ƒeƒBƒu‚ğ•`‰æ‚·‚é
extern	int			DrawPrimitive3D_UseVertexBuffer2(        int VertexBufHandle,                     int PrimitiveType  /* DX_PRIMTYPE_TRIANGLELIST “™ */,                 int StartVertex, int UseVertexNum,                                  int GrHandle, int TransFlag ) ;		// ’¸“_ƒoƒbƒtƒ@‚ğg—p‚µ‚Ä‚R‚cƒvƒŠƒ~ƒeƒBƒu‚ğ•`‰æ‚·‚é
extern	int			DrawPolygonIndexed3D_UseVertexBuffer(    int VertexBufHandle, int IndexBufHandle,                                                                                                                                           int GrHandle, int TransFlag ) ;		// ’¸“_ƒoƒbƒtƒ@‚ÆƒCƒ“ƒfƒbƒNƒXƒoƒbƒtƒ@‚ğg—p‚µ‚Ä‚R‚cƒ|ƒŠƒSƒ“‚ğ•`‰æ‚·‚é
extern	int			DrawPrimitiveIndexed3D_UseVertexBuffer(  int VertexBufHandle, int IndexBufHandle, int PrimitiveType  /* DX_PRIMTYPE_TRIANGLELIST “™ */,                                                                                     int GrHandle, int TransFlag ) ;		// ’¸“_ƒoƒbƒtƒ@‚ÆƒCƒ“ƒfƒbƒNƒXƒoƒbƒtƒ@‚ğg—p‚µ‚Ä‚R‚cƒvƒŠƒ~ƒeƒBƒu‚ğ•`‰æ‚·‚é
extern	int			DrawPrimitiveIndexed3D_UseVertexBuffer2( int VertexBufHandle, int IndexBufHandle, int PrimitiveType  /* DX_PRIMTYPE_TRIANGLELIST “™ */, int BaseVertex, int StartVertex, int UseVertexNum, int StartIndex, int UseIndexNum, int GrHandle, int TransFlag ) ;		// ’¸“_ƒoƒbƒtƒ@‚ÆƒCƒ“ƒfƒbƒNƒXƒoƒbƒtƒ@‚ğg—p‚µ‚Ä‚R‚cƒvƒŠƒ~ƒeƒBƒu‚ğ•`‰æ‚·‚é

extern	int			DrawGraph3D(                             float x, float y, float z,                                                                     int GrHandle, int TransFlag ) ;								// ‰æ‘œ‚Ì‚R‚c•`‰æ
extern	int			DrawExtendGraph3D(                       float x, float y, float z, double ExRateX, double ExRateY,                                     int GrHandle, int TransFlag ) ;								// ‰æ‘œ‚ÌŠg‘å‚R‚c•`‰æ
extern	int			DrawRotaGraph3D(                         float x, float y, float z, double ExRate, double Angle,                                        int GrHandle, int TransFlag, int TurnFlag = FALSE ) ;		// ‰æ‘œ‚Ì‰ñ“]‚R‚c•`‰æ
extern	int			DrawRota2Graph3D(                        float x, float y, float z, float cx, float cy, double ExtRateX, double ExtRateY, double Angle, int GrHandle, int TransFlag, int TurnFlag = FALSE ) ;		// ‰æ‘œ‚Ì‰ñ“]‚R‚c•`‰æ(‰ñ“]’†Sw’èŒ^)
extern	int			DrawModiBillboard3D(                     VECTOR Pos, float x1, float y1, float x2, float y2, float x3, float y3, float x4, float y4,    int GrHandle, int TransFlag ) ;								// ‰æ‘œ‚Ì©—R•ÏŒ`‚R‚c•`‰æ
extern	int			DrawBillboard3D(                         VECTOR Pos, float cx, float cy, float Size, float Angle,                                       int GrHandle, int TransFlag, int TurnFlag = FALSE ) ;		// ‚R‚c‹óŠÔã‚É‰æ‘œ‚ğ•`‰æ


// •`‰æİ’èŠÖŒWŠÖ”
extern	int			SetDrawMode(						int DrawMode ) ;												// •`‰æƒ‚[ƒh‚ğİ’è‚·‚é
extern	int			GetDrawMode(						void ) ;														// •`‰æƒ‚[ƒh‚ğæ“¾‚·‚é
extern	int			SetDrawBlendMode(					int BlendMode, int BlendParam ) ;								// •`‰æƒuƒŒƒ“ƒhƒ‚[ƒh‚ğİ’è‚·‚é
extern	int			GetDrawBlendMode(					int *BlendMode, int *BlendParam ) ;								// •`‰æƒuƒŒƒ“ƒhƒ‚[ƒh‚ğæ“¾‚·‚é
extern	int			SetDrawAlphaTest(					int TestMode, int TestParam ) ;									// •`‰æ‚ÌƒAƒ‹ƒtƒ@ƒeƒXƒg‚Ìİ’è‚ğs‚¤( TestMode:ƒeƒXƒgƒ‚[ƒh( DX_CMP_GREATER“™ -1‚ÅƒfƒtƒHƒ‹ƒg“®ì‚É–ß‚· )  TestParam:•`‰æƒAƒ‹ƒtƒ@’l‚Æ‚Ì”äŠr‚Ég—p‚·‚é’l( 0`255 ) )
extern	int			SetBlendGraph(						int BlendGraph, int BorderParam, int BorderRange ) ;			// ( SetBlendGraphParam ‚Ì BlendType = DX_BLENDGRAPHTYPE_WIPE ‚Ìˆ—‚ğs‚¤‹ŒŠÖ” )•`‰æˆ—‚É•`‰æ‚·‚é‰æ‘œ‚ÆƒuƒŒƒ“ƒh‚·‚éƒ¿ƒ`ƒƒƒ“ƒlƒ‹•t‚«‰æ‘œ‚ğƒZƒbƒg‚·‚é( BlendGraph ‚ğ -1 ‚ÅƒuƒŒƒ“ƒh‹@”\‚ğ–³Œø )
extern	int			SetBlendGraphParam(					int BlendGraph, int BlendType, ... ) ;							// •`‰æˆ—‚É•`‰æ‚·‚é‰æ‘œ‚ÆƒuƒŒƒ“ƒh‚·‚é‰æ‘œ‚ÌƒuƒŒƒ“ƒhİ’è‚ğs‚¤ABlendGraph ‚ğ -1 ‚É‚·‚ê‚Îİ’è‚ğ‰ğœA‚»‚Ìê‡ BlendType ‚Æ‚»‚ÌŒã‚ë‚Ìƒpƒ‰ƒ[ƒ^‚Í–³‹‚³‚ê‚é
//		int			SetBlendGraphParam(					int BlendGraph, int BlendType = DX_BLENDGRAPHTYPE_NORMAL, int Ratio = ( 0( ƒuƒŒƒ“ƒh—¦‚O“ )`255( ƒuƒŒƒ“ƒh—¦‚P‚O‚O“ ) ) ) ;
//		int			SetBlendGraphParam(					int BlendGraph, int BlendType = DX_BLENDGRAPHTYPE_WIPE, int BorderParam = ‹«ŠEˆÊ’u(‚O`‚Q‚T‚T), int BorderRange = ‹«ŠE•(w’è‚Å‚«‚é’l‚Í‚PA‚U‚SA‚P‚Q‚WA‚Q‚T‚T‚Ì‚S‚Â) ) ;
//		int			SetBlendGraphParam(					int BlendGraph, int BlendType = DX_BLENDGRAPHTYPE_ALPHA ) ;
extern	int			SetBlendGraphPosition(				int x, int y ) ;												// ƒuƒŒƒ“ƒh‰æ‘œ‚Ì‹N“_À•W‚ğƒZƒbƒg‚·‚é
extern	int			SetBlendGraphPositionMode(			int BlendGraphPositionMode /* DX_BLENDGRAPH_POSMODE_DRAWGRAPH ‚È‚Ç */ ) ;	// ƒuƒŒƒ“ƒh‰æ‘œ‚Ì“K‰À•Wƒ‚[ƒh‚ğİ’è‚·‚é
extern	int			SetDrawBright(						int RedBright, int GreenBright, int BlueBright ) ;				// •`‰æ‹P“x‚ğİ’è‚·‚é
extern	int			GetDrawBright(						int *Red, int *Green, int *Blue ) ;								// •`‰æ‹P“x‚ğæ“¾‚·‚é
extern	int			SetIgnoreDrawGraphColor(			int EnableFlag ) ;												// •`‰æ‚·‚é‰æ‘œ‚Ì‚q‚f‚a¬•ª‚ğ–³‹‚·‚é‚©‚Ç‚¤‚©‚ğw’è‚·‚é( EnableFlag:‚±‚Ì‹@”\‚ğg‚¤‚©‚Ç‚¤‚©( TRUE:g‚¤  FALSE:g‚í‚È‚¢( ƒfƒtƒHƒ‹ƒg ) ) )
extern	int			SetMaxAnisotropy(					int MaxAnisotropy ) ;											// Å‘åˆÙ•û«’l‚ğİ’è‚·‚é
extern	int			SetUseLarge3DPositionSupport(		int UseFlag ) ;													// ‚R‚cˆ—‚Åg—p‚·‚éÀ•W’l‚ª 10000000.0f ‚È‚Ç‚Ì‘å‚«‚È’l‚É‚È‚Á‚Ä‚à•`‰æ‚Ì•ö‚ê‚ğ¬‚³‚­—}‚¦‚éˆ—‚ğg—p‚·‚é‚©‚Ç‚¤‚©‚ğİ’è‚·‚éADxLib_Init ‚ÌŒÄ‚Ño‚µ‘O‚Å‚Ì‚İg—p‰Â”\( TRUE:•`‰æ‚Ì•ö‚ê‚ğ—}‚¦‚éˆ—‚ğg—p‚·‚é( CPU•‰‰×‚ªã‚ª‚è‚Ü‚· )@@FALSE:•`‰æ‚Ì•ö‚ê‚ğ—}‚¦‚éˆ—‚Íg—p‚µ‚È‚¢( ƒfƒtƒHƒ‹ƒg ) )

extern	int			SetUseZBufferFlag(					int Flag ) ;													// ‚yƒoƒbƒtƒ@‚ğg—p‚·‚é‚©‚Ç‚¤‚©‚ğİ’è‚·‚é( ‚Q‚c‚Æ‚R‚c•`‰æ‚É‰e‹¿ )( TRUE:‚yƒoƒbƒtƒ@‚ğg—p‚·‚é  FALSE:‚yƒoƒbƒtƒ@‚ğg—p‚µ‚È‚¢( ƒfƒtƒHƒ‹ƒg ) )
extern	int			SetWriteZBufferFlag(				int Flag ) ;													// ‚yƒoƒbƒtƒ@‚É‘‚«‚İ‚ğs‚¤‚©‚Ç‚¤‚©‚ğİ’è‚·‚é( ‚Q‚c‚Æ‚R‚c•`‰æ‚É‰e‹¿ )( TRUE:‘‚«‚İ‚ğs‚¤  FALSE:‘‚«‚İ‚ğs‚í‚È‚¢( ƒfƒtƒHƒ‹ƒg ) )
extern	int			SetZBufferCmpType(					int CmpType /* DX_CMP_NEVER “™ */ ) ;							// ‚yƒoƒbƒtƒ@‚Ì‚y’l‚Æ‘‚«‚Ş‚y’l‚Æ‚Ì”äŠrƒ‚[ƒh‚ğİ’è‚·‚é( ‚Q‚c‚Æ‚R‚c•`‰æ‚É‰e‹¿ )( CmpType:DX_CMP_NEVER“™( ƒfƒtƒHƒ‹ƒg:DX_CMP_LESSEQUAL ) )
extern	int			SetZBias(							int Bias ) ;													// ‘‚«‚Ş‚y’l‚ÌƒoƒCƒAƒX‚ğİ’è‚·‚é( ‚Q‚c‚Æ‚R‚c•`‰æ‚É‰e‹¿ )( Bias:ƒoƒCƒAƒX’l( ƒfƒtƒHƒ‹ƒg:0 ) )
extern	int			SetUseZBuffer3D(					int Flag ) ;													// ‚yƒoƒbƒtƒ@‚ğg—p‚·‚é‚©‚Ç‚¤‚©‚ğİ’è‚·‚é( ‚R‚c•`‰æ‚Ì‚İ‚É‰e‹¿ )( TRUE:‚yƒoƒbƒtƒ@‚ğg—p‚·‚é  FALSE:‚yƒoƒbƒtƒ@‚ğg—p‚µ‚È‚¢( ƒfƒtƒHƒ‹ƒg ) )
extern	int			SetWriteZBuffer3D(					int Flag ) ;													// ‚yƒoƒbƒtƒ@‚É‘‚«‚İ‚ğs‚¤‚©‚Ç‚¤‚©‚ğİ’è‚·‚é( ‚R‚c•`‰æ‚Ì‚İ‚É‰e‹¿ )( TRUE:‘‚«‚İ‚ğs‚¤  FALSE:‘‚«‚İ‚ğs‚í‚È‚¢( ƒfƒtƒHƒ‹ƒg ) )
extern	int			SetZBufferCmpType3D(				int CmpType /* DX_CMP_NEVER “™ */ ) ;							// ‚yƒoƒbƒtƒ@‚Ì‚y’l‚Æ‘‚«‚Ş‚y’l‚Æ‚Ì”äŠrƒ‚[ƒh‚ğİ’è‚·‚é( ‚R‚c•`‰æ‚Ì‚İ‚É‰e‹¿ )( CmpType:DX_CMP_NEVER“™( ƒfƒtƒHƒ‹ƒg:DX_CMP_LESSEQUAL ) )
extern	int			SetZBias3D(							int Bias ) ;													// ‘‚«‚Ş‚y’l‚ÌƒoƒCƒAƒX‚ğİ’è‚·‚é( ‚R‚c•`‰æ‚Ì‚İ‚É‰e‹¿ )( Bias:ƒoƒCƒAƒX’l( ƒfƒtƒHƒ‹ƒg:0 ) )
extern	int			SetDrawZ(							float Z ) ;														// ‚Q‚c•`‰æ‚Å‚yƒoƒbƒtƒ@‚É‘‚«‚Ş‚y’l‚ğİ’è‚·‚é( Z:‘‚«‚Ş‚y’l( ƒfƒtƒHƒ‹ƒg:0.2f ) )

extern	int			SetDrawArea(						int x1, int y1, int x2, int y2 ) ;								// •`‰æ‰Â”\—Ìˆæ‚Ìİ’è‚·‚é
extern	int			GetDrawArea(						RECT *Rect ) ;													// •`‰æ‰Â”\—Ìˆæ‚ğæ“¾‚·‚é
extern	int			SetDrawAreaFull(					void ) ;														// •`‰æ‰Â”\—Ìˆæ‚ğ•`‰æ‘ÎÛ‰æ–Ê‘S‘Ì‚É‚·‚é
extern	int			SetDraw3DScale(						float Scale ) ;													// ‚R‚c•`‰æ‚ÌŠg‘å—¦‚ğİ’è‚·‚é

extern	int			SetRestoreShredPoint(				void (* ShredPoint )( void ) ) ;								// SetRestoreGraphCallback ‚Ì‹Œ–¼
extern	int			SetRestoreGraphCallback(			void (* Callback )( void ) ) ;									// ƒOƒ‰ƒtƒBƒbƒNƒnƒ“ƒhƒ‹•œŒ³ŠÖ”‚ğ“o˜^‚·‚é
extern	int			RunRestoreShred(					void ) ;														// ƒOƒ‰ƒtƒBƒbƒN•œŒ³ŠÖ”‚ğÀs‚·‚é
extern	int			SetGraphicsDeviceRestoreCallbackFunction( void (* Callback )( void *Data ), void *CallbackData ) ;	// ƒOƒ‰ƒtƒBƒbƒNƒXƒfƒoƒCƒX‚ªƒƒXƒg‚©‚ç•œ‹A‚µ‚½Û‚ÉŒÄ‚Î‚ê‚éƒR[ƒ‹ƒoƒbƒNŠÖ”‚ğİ’è‚·‚é
extern	int			SetGraphicsDeviceLostCallbackFunction(    void (* Callback )( void *Data ), void *CallbackData ) ;	// ƒOƒ‰ƒtƒBƒbƒNƒXƒfƒoƒCƒX‚ªƒƒXƒg‚©‚ç•œ‹A‚·‚é‘O‚ÉŒÄ‚Î‚ê‚éƒR[ƒ‹ƒoƒbƒNŠÖ”‚ğİ’è‚·‚é

extern	int			SetTransformTo2D(					const MATRIX   *Matrix ) ;										// ‚Q‚c•`‰æ‚Ég—p‚³‚ê‚é•ÏŠ·s—ñ‚ğİ’è‚·‚é
extern	int			SetTransformTo2DD(					const MATRIX_D *Matrix ) ;										// ‚Q‚c•`‰æ‚Ég—p‚³‚ê‚é•ÏŠ·s—ñ‚ğİ’è‚·‚é
extern	int			ResetTransformTo2D(					void ) ;														// ‚Q‚c•`‰æ—p‚Ég—p‚·‚é•ÏŠ·s—ñ‚Ìİ’è‚ğ‰Šúó‘Ô‚É–ß‚·
extern	int			SetTransformToWorld(				const MATRIX   *Matrix ) ;										// ƒ[ƒJƒ‹À•W‚©‚çƒ[ƒ‹ƒhÀ•W‚É•ÏŠ·‚·‚é‚½‚ß‚Ìs—ñ‚ğİ’è‚·‚é
extern	int			SetTransformToWorldD(				const MATRIX_D *Matrix ) ;										// ƒ[ƒJƒ‹À•W‚©‚çƒ[ƒ‹ƒhÀ•W‚É•ÏŠ·‚·‚é‚½‚ß‚Ìs—ñ‚ğİ’è‚·‚é
extern	int			GetTransformToWorldMatrix(			      MATRIX   *MatBuf ) ;										// ƒ[ƒJƒ‹À•W‚©‚çƒ[ƒ‹ƒhÀ•W‚É•ÏŠ·‚·‚é‚½‚ß‚Ìs—ñ‚ğæ“¾‚·‚é
extern	int			GetTransformToWorldMatrixD(			      MATRIX_D *MatBuf ) ;										// ƒ[ƒJƒ‹À•W‚©‚çƒ[ƒ‹ƒhÀ•W‚É•ÏŠ·‚·‚é‚½‚ß‚Ìs—ñ‚ğæ“¾‚·‚é
extern	int			SetTransformToView(					const MATRIX   *Matrix ) ;										// ƒ[ƒ‹ƒhÀ•W‚©‚çƒrƒ…[À•W‚É•ÏŠ·‚·‚é‚½‚ß‚Ìs—ñ‚ğİ’è‚·‚é
extern	int			SetTransformToViewD(				const MATRIX_D *Matrix ) ;										// ƒ[ƒ‹ƒhÀ•W‚©‚çƒrƒ…[À•W‚É•ÏŠ·‚·‚é‚½‚ß‚Ìs—ñ‚ğİ’è‚·‚é
extern	int			GetTransformToViewMatrix(			      MATRIX   *MatBuf ) ;										// ƒ[ƒ‹ƒhÀ•W‚©‚çƒrƒ…[À•W‚É•ÏŠ·‚·‚é‚½‚ß‚Ìs—ñ‚ğæ“¾‚·‚é
extern	int			GetTransformToViewMatrixD(			      MATRIX_D *MatBuf ) ;										// ƒ[ƒ‹ƒhÀ•W‚©‚çƒrƒ…[À•W‚É•ÏŠ·‚·‚é‚½‚ß‚Ìs—ñ‚ğæ“¾‚·‚é
extern	int			SetTransformToProjection(			const MATRIX   *Matrix ) ;										// ƒrƒ…[À•W‚©‚çƒvƒƒWƒFƒNƒVƒ‡ƒ“À•W‚É•ÏŠ·‚·‚é‚½‚ß‚Ìs—ñ‚ğİ’è‚·‚é
extern	int			SetTransformToProjectionD(			const MATRIX_D *Matrix ) ;										// ƒrƒ…[À•W‚©‚çƒvƒƒWƒFƒNƒVƒ‡ƒ“À•W‚É•ÏŠ·‚·‚é‚½‚ß‚Ìs—ñ‚ğİ’è‚·‚é
extern	int			GetTransformToProjectionMatrix(		      MATRIX   *MatBuf ) ;										// ƒrƒ…[À•W‚©‚çƒvƒƒWƒFƒNƒVƒ‡ƒ“À•W‚É•ÏŠ·‚·‚é‚½‚ß‚Ìs—ñ‚ğæ“¾‚·‚é
extern	int			GetTransformToProjectionMatrixD(	      MATRIX_D *MatBuf ) ;										// ƒrƒ…[À•W‚©‚çƒvƒƒWƒFƒNƒVƒ‡ƒ“À•W‚É•ÏŠ·‚·‚é‚½‚ß‚Ìs—ñ‚ğæ“¾‚·‚é
extern	int			SetTransformToViewport(				const MATRIX   *Matrix ) ;										// ƒrƒ…[ƒ|[ƒgs—ñ‚ğİ’è‚·‚é
extern	int			SetTransformToViewportD(			const MATRIX_D *Matrix ) ;										// ƒrƒ…[ƒ|[ƒgs—ñ‚ğİ’è‚·‚é
extern	int			GetTransformToViewportMatrix(	    MATRIX   *MatBuf ) ;											// ƒrƒ…[ƒ|[ƒgs—ñ‚ğæ“¾‚·‚é
extern	int			GetTransformToViewportMatrixD(	    MATRIX_D *MatBuf ) ;											// ƒrƒ…[ƒ|[ƒgs—ñ‚ğæ“¾‚·‚é
extern	int			GetTransformToAPIViewportMatrix(    MATRIX   *MatBuf ) ;											// Direct3D‚Å©“®“K—p‚³‚ê‚éƒrƒ…[ƒ|[ƒgs—ñ‚ğæ“¾‚·‚é
extern	int			GetTransformToAPIViewportMatrixD(   MATRIX_D *MatBuf ) ;											// Direct3D‚Å©“®“K—p‚³‚ê‚éƒrƒ…[ƒ|[ƒgs—ñ‚ğæ“¾‚·‚é
extern	int			SetDefTransformMatrix(				void ) ;														// ƒfƒtƒHƒ‹ƒg‚Ì•ÏŠ·s—ñ‚ğİ’è‚·‚é
extern	int			GetTransformPosition(				VECTOR   *LocalPos, float  *x, float  *y ) ;					// ƒ[ƒJƒ‹À•W‚©‚çƒXƒNƒŠ[ƒ“À•W‚ğæ“¾‚·‚é
extern	int			GetTransformPositionD(				VECTOR_D *LocalPos, double *x, double *y ) ;					// ƒ[ƒJƒ‹À•W‚©‚çƒXƒNƒŠ[ƒ“À•W‚ğæ“¾‚·‚é
extern	float		GetBillboardPixelSize(				VECTOR   WorldPos, float  WorldSize ) ;							// ƒ[ƒ‹ƒh‹óŠÔã‚Ìƒrƒ‹ƒ{[ƒh‚ÌƒTƒCƒY‚©‚çƒXƒNƒŠ[ƒ“‚É“Š‰e‚µ‚½ê‡‚ÌƒsƒNƒZƒ‹’PˆÊ‚ÌƒTƒCƒY‚ğæ“¾‚·‚é
extern	double		GetBillboardPixelSizeD(				VECTOR_D WorldPos, double WorldSize ) ;							// ƒ[ƒ‹ƒh‹óŠÔã‚Ìƒrƒ‹ƒ{[ƒh‚ÌƒTƒCƒY‚©‚çƒXƒNƒŠ[ƒ“‚É“Š‰e‚µ‚½ê‡‚ÌƒsƒNƒZƒ‹’PˆÊ‚ÌƒTƒCƒY‚ğæ“¾‚·‚é
extern	VECTOR		ConvWorldPosToViewPos(				VECTOR   WorldPos ) ;											// ƒ[ƒ‹ƒhÀ•W‚ğƒrƒ…[À•W‚É•ÏŠ·‚·‚é
extern	VECTOR_D	ConvWorldPosToViewPosD(				VECTOR_D WorldPos ) ;											// ƒ[ƒ‹ƒhÀ•W‚ğƒrƒ…[À•W‚É•ÏŠ·‚·‚é
extern	VECTOR		ConvWorldPosToScreenPos(			VECTOR   WorldPos ) ;											// ƒ[ƒ‹ƒhÀ•W‚ğƒXƒNƒŠ[ƒ“À•W‚É•ÏŠ·‚·‚é
extern	VECTOR_D	ConvWorldPosToScreenPosD(			VECTOR_D WorldPos ) ;											// ƒ[ƒ‹ƒhÀ•W‚ğƒXƒNƒŠ[ƒ“À•W‚É•ÏŠ·‚·‚é
extern	FLOAT4		ConvWorldPosToScreenPosPlusW(		VECTOR   WorldPos ) ;											// ƒ[ƒ‹ƒhÀ•W‚ğƒXƒNƒŠ[ƒ“À•W‚É•ÏŠ·‚·‚éAÅŒã‚Ì‚w‚x‚yÀ•W‚ğ‚v‚ÅŠ„‚é‘O‚Ì’l‚ğ“¾‚é
extern	DOUBLE4		ConvWorldPosToScreenPosPlusWD(		VECTOR_D WorldPos ) ;											// ƒ[ƒ‹ƒhÀ•W‚ğƒXƒNƒŠ[ƒ“À•W‚É•ÏŠ·‚·‚éAÅŒã‚Ì‚w‚x‚yÀ•W‚ğ‚v‚ÅŠ„‚é‘O‚Ì’l‚ğ“¾‚é
extern	VECTOR		ConvScreenPosToWorldPos(			VECTOR   ScreenPos ) ;											// ƒXƒNƒŠ[ƒ“À•W‚ğƒ[ƒ‹ƒhÀ•W‚É•ÏŠ·‚·‚é
extern	VECTOR_D	ConvScreenPosToWorldPosD(			VECTOR_D ScreenPos ) ;											// ƒXƒNƒŠ[ƒ“À•W‚ğƒ[ƒ‹ƒhÀ•W‚É•ÏŠ·‚·‚é
extern	VECTOR		ConvScreenPosToWorldPos_ZLinear(	VECTOR   ScreenPos ) ;											// ƒXƒNƒŠ[ƒ“À•W‚ğƒ[ƒ‹ƒhÀ•W‚É•ÏŠ·‚·‚é( ZÀ•W‚ªüŒ` )
extern	VECTOR_D	ConvScreenPosToWorldPos_ZLinearD(	VECTOR_D ScreenPos ) ;											// ƒXƒNƒŠ[ƒ“À•W‚ğƒ[ƒ‹ƒhÀ•W‚É•ÏŠ·‚·‚é( ZÀ•W‚ªüŒ` )

extern	int			SetUseCullingFlag(					int Flag ) ;													// SetUseBackCulling ‚Ì‹Œ–¼Ì
extern	int			SetUseBackCulling(					int Flag /* DX_CULLING_LEFT “™ */ ) ;							// ƒ|ƒŠƒSƒ“ƒJƒŠƒ“ƒOƒ‚[ƒh‚ğİ’è‚·‚é
extern	int			GetUseBackCulling(					void ) ;														// ƒ|ƒŠƒSƒ“ƒJƒŠƒ“ƒOƒ‚[ƒh‚ğæ“¾‚·‚é

extern	int			SetTextureAddressMode(				int Mode /* DX_TEXADDRESS_WRAP “™ */ , int Stage = -1 ) ;		// ƒeƒNƒXƒ`ƒƒƒAƒhƒŒƒXƒ‚[ƒh‚ğİ’è‚·‚é
extern	int			SetTextureAddressModeUV(			int ModeU, int ModeV, int Stage = -1 ) ;						// ƒeƒNƒXƒ`ƒƒƒAƒhƒŒƒXƒ‚[ƒh‚ğİ’è‚·‚é( U ‚Æ V ‚ğ•ÊX‚Éİ’è‚·‚é )
extern	int			SetTextureAddressTransform(			float TransU, float TransV, float ScaleU, float ScaleV, float RotCenterU, float RotCenterV, float Rotate ) ;	// ƒeƒNƒXƒ`ƒƒÀ•W•ÏŠ·ƒpƒ‰ƒ[ƒ^‚ğİ’è‚·‚é
extern	int			SetTextureAddressTransformMatrix(	MATRIX Matrix ) ;												// ƒeƒNƒXƒ`ƒƒÀ•W•ÏŠ·s—ñ‚ğİ’è‚·‚é
extern	int			ResetTextureAddressTransform(		void ) ;														// ƒeƒNƒXƒ`ƒƒÀ•W•ÏŠ·İ’è‚ğƒŠƒZƒbƒg‚·‚é

extern	int			SetFogEnable(						int Flag ) ;													// ƒtƒHƒO‚ğ—LŒø‚É‚·‚é‚©‚Ç‚¤‚©‚ğİ’è‚·‚é( TRUE:—LŒø  FALSE:–³Œø )
extern	int			GetFogEnable(						void ) ;														// ƒtƒHƒO‚ª—LŒø‚©‚Ç‚¤‚©‚ğæ“¾‚·‚é( TRUE:—LŒø  FALSE:–³Œø )
extern	int			SetFogMode(							int Mode /* DX_FOGMODE_NONE “™ */ ) ;							// ƒtƒHƒOƒ‚[ƒh‚ğİ’è‚·‚é
extern	int			GetFogMode(							void ) ;														// ƒtƒHƒOƒ‚[ƒh‚ğæ“¾‚·‚é
extern	int			SetFogColor(						int  r, int  g, int  b ) ;										// ƒtƒHƒOƒJƒ‰[‚ğİ’è‚·‚é
extern	int			GetFogColor(						int *r, int *g, int *b ) ;										// ƒtƒHƒOƒJƒ‰[‚ğæ“¾‚·‚é
extern	int			SetFogStartEnd(						float  start, float  end ) ;									// ƒtƒHƒO‚ªn‚Ü‚é‹——£‚ÆI—¹‚·‚é‹——£‚ğİ’è‚·‚é( 0.0f ` 1.0f )
extern	int			GetFogStartEnd(						float *start, float *end ) ;									// ƒtƒHƒO‚ªn‚Ü‚é‹——£‚ÆI—¹‚·‚é‹——£‚ğæ“¾‚·‚é( 0.0f ` 1.0f )
extern	int			SetFogDensity(						float density ) ;												// ƒtƒHƒO‚Ì–§“x‚ğİ’è‚·‚é( 0.0f ` 1.0f )
extern	float		GetFogDensity(						void ) ;														// ƒtƒHƒO‚Ì–§“x‚ğæ“¾‚·‚é( 0.0f ` 1.0f )


// ‰æ–ÊŠÖŒWŠÖ”
extern	unsigned int	GetPixel(									int x, int y ) ;																// w’èÀ•W‚ÌF‚ğæ“¾‚·‚é
extern	COLOR_F			GetPixelF(									int x, int y ) ;																// w’èÀ•W‚ÌF‚ğæ“¾‚·‚é( floatŒ^ )
extern	int				SetBackgroundColor(							int Red,  int  Green, int  Blue ) ;												// ƒƒCƒ“ƒEƒCƒ“ƒhƒE‚Ì”wŒiF‚ğİ’è‚·‚é( Red,Green,Blue:‚»‚ê‚¼‚ê ‚O`‚Q‚T‚T )
extern	int				GetBackgroundColor(							int *Red, int *Green, int *Blue ) ;												// ƒƒCƒ“ƒEƒCƒ“ƒhƒE‚Ì”wŒiF‚ğæ“¾‚·‚é( Red,Green,Blue:‚»‚ê‚¼‚ê ‚O`‚Q‚T‚T )
extern	int				GetDrawScreenGraph(							                             int x1, int y1, int x2, int y2,                       int GrHandle, int UseClientFlag = TRUE ) ;	// •`‰ææ‚Ì‰æ–Ê‚©‚çw’è—Ìˆæ‚Ì‰æ‘œî•ñ‚ğƒOƒ‰ƒtƒBƒbƒNƒnƒ“ƒhƒ‹‚É“]‘—‚·‚é
extern	int				BltDrawValidGraph(							int TargetDrawValidGrHandle, int x1, int y1, int x2, int y2, int DestX, int DestY, int DestGrHandle ) ;							// SetDrawScreen ‚Å•`‰æ‘ÎÛ‚É‚Å‚«‚éƒOƒ‰ƒtƒBƒbƒNƒnƒ“ƒhƒ‹‚©‚çw’è—Ìˆæ‚Ì‰æ‘œî•ñ‚ğ•Ê‚ÌƒOƒ‰ƒtƒBƒbƒNƒnƒ“ƒhƒ‹‚É“]‘—‚·‚é
extern	int				ScreenFlip(									void ) ;																		// — ‰æ–Ê‚Æ•\‰æ–Ê‚Ì“à—e‚ğŒğŠ·‚·‚é
extern 	int				ScreenCopy(									void ) ;																		// — ‰æ–Ê‚Ì“à—e‚ğ•\‰æ–Ê‚É“]‘—‚·‚é
extern	int				WaitVSync(									int SyncNum ) ;																	// ‚’¼“¯ŠúM†‚ğ‘Ò‚Â
extern	int				ClearDrawScreen(					        const RECT *ClearRect = NULL ) ;												// ‰æ–Ê‚ğƒNƒŠƒA‚·‚é
extern	int				ClearDrawScreenZBuffer(						const RECT *ClearRect = NULL ) ;												// ‰æ–Ê‚Ì‚yƒoƒbƒtƒ@‚ğƒNƒŠƒA‚·‚é
extern	int				ClsDrawScreen(								void ) ;																		// ClearDrawScreen‚Ì‹Œ–¼Ì
extern	int				SetDrawScreen(								int DrawScreen ) ;																// •`‰ææ‰æ–Ê‚ğİ’è‚·‚é( MakeScreen ‚Åì¬‚µ‚½ƒOƒ‰ƒtƒBƒbƒNƒnƒ“ƒhƒ‹‚à“n‚·‚±‚Æ‚ª‚Å‚«‚Ü‚· )
extern	int				GetDrawScreen(								void ) ;																		// •`‰ææ‰æ–Ê‚ğæ“¾‚·‚é
extern	int				GetActiveGraph(								void ) ;																		// GetDrawScreen ‚Ì‹Œ–¼Ì
extern	int				SetUseSetDrawScreenSettingReset(			int UseFlag ) ;																	// SetDrawScreen ‚ğÀs‚µ‚½Û‚ÉƒJƒƒ‰‚â•`‰æ”ÍˆÍ‚Ìİ’è‚ğƒŠƒZƒbƒg‚·‚é‚©‚ğİ’è‚·‚é( UseFlag  TRUE:ƒŠƒZƒbƒg‚·‚é( ƒfƒtƒHƒ‹ƒg )  FALSE:ƒŠƒZƒbƒg‚µ‚È‚¢ )
extern	int				GetUseSetDrawScreenSettingReset(			void ) ;																		// SetDrawScreen ‚ğÀs‚µ‚½Û‚ÉƒJƒƒ‰‚â•`‰æ”ÍˆÍ‚Ìİ’è‚ğƒŠƒZƒbƒg‚·‚é‚©‚ğæ“¾‚·‚é
extern	int				SetDrawZBuffer(								int DrawScreen ) ;																// •`‰ææ‚yƒoƒbƒtƒ@‚ÌƒZƒbƒg( DrawScreen •t‘®‚Ì‚yƒoƒbƒtƒ@‚ğ•`‰ææ‚yƒoƒbƒtƒ@‚É‚·‚éADrawScreen ‚ğ -1 ‚É‚·‚é‚ÆƒfƒtƒHƒ‹ƒg‚Ì•`‰ææ‚yƒoƒbƒtƒ@‚É–ß‚é )
extern	int				SetGraphMode(								int ScreenSizeX, int ScreenSizeY, int ColorBitDepth, int RefreshRate = 60 ) ;	// ‰æ–Êƒ‚[ƒh‚ğİ’è‚·‚é
extern	int				SetFullScreenResolutionMode(				int ResolutionMode /* DX_FSRESOLUTIONMODE_NATIVE “™ */ ) ;						// ƒtƒ‹ƒXƒNƒŠ[ƒ“‰ğ‘œ“xƒ‚[ƒh‚ğİ’è‚·‚é
extern	int				GetFullScreenResolutionMode(				int *ResolutionMode, int *UseResolutionMode ) ;									// ƒtƒ‹ƒXƒNƒŠ[ƒ“‰ğ‘œ“xƒ‚[ƒh‚ğæ“¾‚·‚é( UseResolutionMode ‚ÍÀÛ‚Ég—p‚³‚ê‚Ä‚¢‚é‰ğ‘œ“xƒ‚[ƒh( —á‚¦‚Î DX_FSRESOLUTIONMODE_NATIVE ‚ğw’è‚µ‚Ä‚¢‚Ä‚àƒ‚ƒjƒ^‚ªw’è‚Ì‰ğ‘œ“x‚É‘Î‰‚µ‚Ä‚¢‚È‚¢ê‡‚Í UseResolutionMode ‚ª DX_FSRESOLUTIONMODE_DESKTOP ‚â DX_FSRESOLUTIONMODE_MAXIMUM ‚É‚È‚è‚Ü‚· ) )
extern	int				SetFullScreenScalingMode(					int ScalingMode /* DX_FSSCALINGMODE_NEAREST “™ */ , int FitScaling = FALSE ) ;	// ƒtƒ‹ƒXƒNƒŠ[ƒ“ƒ‚[ƒh‚Ì‰æ–ÊŠg‘åƒ‚[ƒh‚ğİ’è‚·‚é
extern	int				SetEmulation320x240(						int Flag ) ;																	// ‚U‚S‚O‚˜‚S‚W‚O‚Ì‰æ–Ê‚Å‚R‚Q‚O‚˜‚Q‚S‚O‚Ì‰æ–Ê‰ğ‘œ“x‚É‚·‚é‚©‚Ç‚¤‚©‚ğİ’è‚·‚éA‚U‚S‚O‚˜‚S‚W‚OˆÈŠO‚Ì‰ğ‘œ“x‚Å‚Í–³Œø( TRUE:—LŒø  FALSE:–³Œø )
extern	int				SetZBufferSize(								int ZBufferSizeX, int ZBufferSizeY ) ;											// ‰æ–Ê—p‚Ì‚yƒoƒbƒtƒ@‚ÌƒTƒCƒY‚ğİ’è‚·‚é
extern	int				SetZBufferBitDepth(							int BitDepth ) ;																// ‰æ–Ê—p‚Ì‚yƒoƒbƒtƒ@‚Ìƒrƒbƒg[“x‚ğİ’è‚·‚é( 16 or 24 or 32 )
extern	int				SetWaitVSyncFlag(							int Flag ) ;																	// ScreenFlip Às‚É‚u‚r‚x‚m‚b‘Ò‚¿‚ğ‚·‚é‚©‚Ç‚¤‚©‚ğİ’è‚·‚é
extern	int				GetWaitVSyncFlag(							void ) ;																		// ScreenFlip Às‚É‚u‚r‚x‚m‚b‘Ò‚¿‚ğ‚·‚é‚©‚Ç‚¤‚©‚ğæ“¾‚·‚é
extern	int				SetFullSceneAntiAliasingMode(				int Samples, int Quality ) ;													// ‰æ–Ê‚Ìƒtƒ‹ƒXƒNƒŠ[ƒ“ƒAƒ“ƒ`ƒGƒCƒŠƒAƒXƒ‚[ƒh‚Ìİ’è‚ğs‚¤( DxLib_Init ‚Ì‘O‚Å‚Ì‚İg—p‰Â”\ )
extern	int				SetGraphDisplayArea(						int x1, int y1, int x2, int y2 ) ;												// ScreenFlip ‚É•\‰æ–Ê‘S‘Ì‚É“]‘—‚·‚é— ‰æ–Ê‚Ì—Ìˆæ‚ğİ’è‚·‚é( DxLib_Init ‚Ì‘O‚Å‚Ì‚İg—p‰Â”\ )
extern	int				SetChangeScreenModeGraphicsSystemResetFlag(	int Flag ) ;																	// ‰æ–Êƒ‚[ƒh•ÏX( ‚ÆƒEƒCƒ“ƒhƒEƒ‚[ƒh•ÏX )‚ÉƒOƒ‰ƒtƒBƒbƒNƒXƒVƒXƒeƒ€‚Ìİ’è‚âƒOƒ‰ƒtƒBƒbƒNƒnƒ“ƒhƒ‹‚ğƒŠƒZƒbƒg‚·‚é‚©‚Ç‚¤‚©‚ğİ’è‚·‚é( TRUE:ƒŠƒZƒbƒg‚·‚é( ƒfƒtƒHƒ‹ƒg )  FALSE:ƒŠƒZƒbƒg‚µ‚È‚¢ )
extern	int				GetScreenState(								int *SizeX, int *SizeY, int *ColorBitDepth ) ;									// Œ»İ‚Ì‰æ–Ê‚Ì‰ğ‘œ“x‚ÆƒJƒ‰[ƒrƒbƒg”‚ğ“¾‚é 
extern	int				GetDrawScreenSize(							int *XBuf, int *YBuf ) ;														// •`‰ææ‚ÌƒTƒCƒY‚ğæ“¾‚·‚é
extern	int				GetScreenBitDepth(							void ) ;																		// ‰æ–Ê‚ÌƒJƒ‰[ƒrƒbƒg”‚ğæ“¾‚·‚é
extern	int				GetColorBitDepth(							void ) ;																		// GetScreenBitDepth ‚Ì‹Œ–¼Ì
extern	int				GetChangeDisplayFlag(						void ) ;																		// ‰æ–Êƒ‚[ƒh‚ª•ÏX‚³‚ê‚Ä‚¢‚é‚©‚Ç‚¤‚©‚ğæ“¾‚·‚é
extern	int				GetVideoMemorySize(							int *AllSize, int *FreeSize ) ;													// ( Œ»İ³í‚É“®ì‚µ‚Ü‚¹‚ñ )ƒrƒfƒIƒƒ‚ƒŠ‚Ì—e—Ê‚ğ“¾‚é
extern	int				GetRefreshRate(								void ) ;																		// Œ»İ‚Ì‰æ–Ê‚ÌƒŠƒtƒŒƒbƒVƒ…ƒŒ[ƒg‚ğæ“¾‚·‚é
extern	int				GetDisplayNum(								void ) ;																		// ƒfƒBƒXƒvƒŒƒC‚Ì”‚ğæ“¾
extern	int				GetDisplayModeNum(							int DisplayIndex = 0 ) ;														// •ÏX‰Â”\‚ÈƒfƒBƒXƒvƒŒƒCƒ‚[ƒh‚Ì”‚ğæ“¾‚·‚é
extern	DISPLAYMODEDATA	GetDisplayMode(								int ModeIndex, int DisplayIndex = 0 ) ;											// •ÏX‰Â”\‚ÈƒfƒBƒXƒvƒŒƒCƒ‚[ƒh‚Ìî•ñ‚ğæ“¾‚·‚é( ModeIndex ‚Í 0 ` GetDisplayModeNum ‚Ì–ß‚è’l-1 )
extern	int				GetDisplayMaxResolution(					int *SizeX, int *SizeY, int DisplayIndex = 0 ) ;								// ƒfƒBƒXƒvƒŒƒC‚ÌÅ‘å‰ğ‘œ“x‚ğæ“¾‚·‚é
extern	const COLORDATA* GetDispColorData(							void ) ;																		// ƒfƒBƒXƒvƒŒƒC‚ÌƒJƒ‰[ƒf[ƒ^ƒAƒhƒŒƒX‚ğæ“¾‚·‚é
extern	int				GetMultiDrawScreenNum(						void ) ;																		// “¯‚É•`‰æ‚ğs‚¤‚±‚Æ‚ª‚Å‚«‚é‰æ–Ê‚Ì”‚ğæ“¾‚·‚é
extern	int				GetDrawFloatCoordType(						void ) ;																		// DrawGraphF “™‚Ì•‚“®¬”“_’l‚ÅÀ•W‚ğw’è‚·‚éŠÖ”‚É‚¨‚¯‚éÀ•Wƒ^ƒCƒv‚ğæ“¾‚·‚é( –ß‚è’l : DX_DRAWFLOATCOORDTYPE_DIRECT3D9 ‚È‚Ç )

// ‚»‚Ì‘¼İ’èŠÖŒWŠÖ”
extern	int			SetUseNormalDrawShader(						int Flag ) ;									// ’Êí•`‰æ‚ÉƒvƒƒOƒ‰ƒ}ƒuƒ‹ƒVƒF[ƒ_[‚ğg—p‚·‚é‚©‚Ç‚¤‚©‚ğİ’è‚·‚é( TRUE:g—p‚·‚é( ƒfƒtƒHƒ‹ƒg )  FALSE:g—p‚µ‚È‚¢ )
extern	int			SetUseSoftwareRenderModeFlag(				int Flag ) ;									// ƒ\ƒtƒgƒEƒGƒAƒŒƒ“ƒ_ƒŠƒ“ƒOƒ‚[ƒh‚ğg—p‚·‚é‚©‚Ç‚¤‚©‚ğİ’è‚·‚é( TRUE:g—p‚·‚é  FALSE:g—p‚µ‚È‚¢( ƒfƒtƒHƒ‹ƒg ) )( DxLib_Init ‚Ì‘O‚ÉŒÄ‚Ô•K—v‚ª‚ ‚è‚Ü‚· )
extern	int			SetNotUse3DFlag(							int Flag ) ;									// ( “¯Œø‰Ê‚ÌSetUseSoftwareRenderModeFlag ‚ğg—p‚µ‚Ä‰º‚³‚¢ )‚R‚c‹@”\‚ğg‚í‚È‚¢‚©‚Ç‚¤‚©‚ğİ’è‚·‚é
extern	int			SetUse3DFlag(								int Flag ) ;									// ( “¯Œø‰Ê‚ÌSetUseSoftwareRenderModeFlag ‚ğg—p‚µ‚Ä‰º‚³‚¢ )‚R‚c‹@”\‚ğg‚¤‚©‚Ç‚¤‚©‚ğİ’è‚·‚é
extern	int			GetUse3DFlag(								void ) ;										// •`‰æ‚É‚R‚c‹@”\‚ğg‚¤‚©‚Ç‚¤‚©‚ğæ“¾‚·‚é
extern	int			SetScreenMemToVramFlag(						int Flag ) ;									// ( “¯Œø‰Ê‚ÌSetUseSoftwareRenderModeFlag ‚ğg—p‚µ‚Ä‰º‚³‚¢ )‰æ–Ê‚ÌƒsƒNƒZƒ‹ƒf[ƒ^‚ğ‚u‚q‚`‚l‚É’u‚­‚©‚Ç‚¤‚©‚ğİ’è‚·‚é
extern	int			GetScreenMemToSystemMemFlag(				void ) ;										// ‰æ–Ê‚ÌƒsƒNƒZƒ‹ƒf[ƒ^‚ªƒVƒXƒeƒ€ƒƒ‚ƒŠã‚É‘¶İ‚·‚é‚©‚ğæ“¾‚·‚é

extern	int			SetWindowDrawRect(							const RECT *DrawRect ) ;						// ’Êíg—p‚µ‚È‚¢
extern	int			RestoreGraphSystem(							void ) ;										// ‚c‚wƒ‰ƒCƒuƒ‰ƒŠ‚ÌƒOƒ‰ƒtƒBƒbƒNƒXˆ—ŠÖ˜A‚Ì•œ‹Aˆ—‚ğs‚¤
extern	int			SetUseHardwareVertexProcessing(				int Flag ) ;									// ƒn[ƒhƒEƒGƒA‚Ì’¸“_‰‰Zˆ—‹@”\‚ğg—p‚·‚é‚©‚Ç‚¤‚©‚ğİ’è‚·‚é( TRUE:g—p‚·‚é( ƒfƒtƒHƒ‹ƒg )  FALSE:g—p‚µ‚È‚¢ )( DxLib_Init ‚Ì‘O‚ÉŒÄ‚Ô•K—v‚ª‚ ‚è‚Ü‚· )
extern	int			SetUsePixelLighting(						int Flag ) ;									// ƒsƒNƒZƒ‹’PˆÊ‚Åƒ‰ƒCƒeƒBƒ“ƒO‚ğs‚¤‚©‚Ç‚¤‚©‚ğİ’è‚·‚éA—v ShaderModel 3.0( TRUE:ƒsƒNƒZƒ‹’PˆÊ‚Ìƒ‰ƒCƒeƒBƒ“ƒO‚ğs‚¤  FALSE:’¸“_’PˆÊ‚Ìƒ‰ƒCƒeƒBƒ“ƒO‚ğs‚¤( ƒfƒtƒHƒ‹ƒg ) )
extern	int			SetUseOldDrawModiGraphCodeFlag(				int Flag ) ;									// ŒÃ‚¢ƒo[ƒWƒ‡ƒ“‚Ì DrawModiGraph ŠÖ”‚ÌƒR[ƒh‚ğg—p‚·‚é‚©‚Ç‚¤‚©‚ğİ’è‚·‚é
extern	int			SetUseVramFlag(								int Flag ) ;									// ( Œ»İŒø‰Ê‚È‚µ )‚u‚q‚`‚l‚ğg—p‚·‚é‚©‚Ìƒtƒ‰ƒO‚ğƒZƒbƒg‚·‚é
extern	int			GetUseVramFlag(								void ) ;										// ( Œ»İŒø‰Ê‚È‚µ )‚Q‚cƒOƒ‰ƒtƒBƒbƒNƒT[ƒtƒFƒXì¬‚ÉƒVƒXƒeƒ€ƒƒ‚ƒŠ[‚ğg—p‚·‚é‚©‚Ìƒtƒ‰ƒOæ“¾
extern	int			SetBasicBlendFlag(							int Flag ) ;									// ( Œ»İŒø‰Ê‚È‚µ )ŠÈ—ª‰»ƒuƒŒƒ“ƒhˆ—‚ğs‚¤‚©”Û‚©‚Ìƒtƒ‰ƒO‚ğƒZƒbƒg‚·‚é
extern	int			SetUseBasicGraphDraw3DDeviceMethodFlag(		int Flag ) ;									// ( Œ»İŒø‰Ê‚È‚µ )’Pƒ}Œ`‚Ì•`‰æ‚É‚R‚cƒfƒoƒCƒX‚Ì‹@”\‚ğg—p‚·‚é‚©‚Ç‚¤‚©‚ğİ’è‚·‚é
extern	int			SetUseDisplayIndex(							int Index ) ;									// ‚c‚wƒ‰ƒCƒuƒ‰ƒŠ‚ÌƒEƒCƒ“ƒhƒE‚ğ•\¦‚·‚éƒfƒBƒXƒvƒŒƒCƒfƒoƒCƒX‚ğİ’è‚·‚é
extern	int			RenderVertex(								void ) ;										// ’¸“_ƒoƒbƒtƒ@‚É—­‚Ü‚Á‚½’¸“_ƒf[ƒ^‚ğ•`‰æ‚·‚é( “Áê—p“r )

#ifndef DX_NON_SAVEFUNCTION

// •`‰ææ‰æ–Ê•Û‘¶ŠÖ”
// Jpeg_Quality         = 0:’á‰æ¿`100:‚‰æ¿
// Png_CompressionLevel = 0:–³ˆ³k`  9:Å‚ˆ³k
extern	int			SaveDrawScreen(       int x1, int y1, int x2, int y2, const TCHAR *FileName, int SaveType = DX_IMAGESAVETYPE_BMP , int Jpeg_Quality = 80 , int Jpeg_Sample2x1 = TRUE , int Png_CompressionLevel = -1 ) ;		// Œ»İ•`‰æ‘ÎÛ‚É‚È‚Á‚Ä‚¢‚é‰æ–Ê‚ğƒtƒ@ƒCƒ‹‚Å•Û‘¶‚·‚é
extern	int			SaveDrawScreenToBMP(  int x1, int y1, int x2, int y2, const TCHAR *FileName ) ;																																	// Œ»İ•`‰æ‘ÎÛ‚É‚È‚Á‚Ä‚¢‚é‰æ–Ê‚ğ‚a‚l‚oŒ`®‚Å•Û‘¶‚·‚é
extern	int			SaveDrawScreenToDDS(  int x1, int y1, int x2, int y2, const TCHAR *FileName ) ;																																	// Œ»İ•`‰æ‘ÎÛ‚É‚È‚Á‚Ä‚¢‚é‰æ–Ê‚ğ‚c‚c‚rŒ`®‚Å•Û‘¶‚·‚é
extern	int			SaveDrawScreenToJPEG( int x1, int y1, int x2, int y2, const TCHAR *FileName, int Quality = 80 , int Sample2x1 = TRUE ) ;																						// Œ»İ•`‰æ‘ÎÛ‚É‚È‚Á‚Ä‚¢‚é‰æ–Ê‚ğ‚i‚o‚d‚fŒ`®‚Å•Û‘¶‚·‚é Quality = ‰æ¿A’l‚ª‘å‚«‚¢‚Ù‚Ç’áˆ³k‚‰æ¿,0`100 
extern	int			SaveDrawScreenToPNG(  int x1, int y1, int x2, int y2, const TCHAR *FileName, int CompressionLevel = -1 ) ;																										// Œ»İ•`‰æ‘ÎÛ‚É‚È‚Á‚Ä‚¢‚é‰æ–Ê‚ğ‚o‚m‚fŒ`®‚Å•Û‘¶‚·‚é CompressionLevel = ˆ³k—¦A’l‚ª‘å‚«‚¢‚Ù‚Ç‚ˆ³k—¦‚•‰‰×A‚O‚Í–³ˆ³k,0`9

// •`‰æ‘ÎÛ‚É‚Å‚«‚éƒOƒ‰ƒtƒBƒbƒNƒnƒ“ƒhƒ‹•Û‘¶ŠÖ”
// Jpeg_Quality         = 0:’á‰æ¿`100:‚‰æ¿
// Png_CompressionLevel = 0:–³ˆ³k`  9:Å‚ˆ³k
extern	int			SaveDrawValidGraph(       int GrHandle, int x1, int y1, int x2, int y2, const TCHAR *FileName, int SaveType = DX_IMAGESAVETYPE_BMP , int Jpeg_Quality = 80 , int Jpeg_Sample2x1 = TRUE , int Png_CompressionLevel = -1 ) ;		// •`‰æ‘ÎÛ‚É‚Å‚«‚éƒOƒ‰ƒtƒBƒbƒNƒnƒ“ƒhƒ‹‚ğƒtƒ@ƒCƒ‹‚Å•Û‘¶‚·‚é
extern	int			SaveDrawValidGraphToBMP(  int GrHandle, int x1, int y1, int x2, int y2, const TCHAR *FileName ) ;																																// •`‰æ‘ÎÛ‚É‚Å‚«‚éƒOƒ‰ƒtƒBƒbƒNƒnƒ“ƒhƒ‹‚ğ‚a‚l‚oŒ`®‚Å•Û‘¶‚·‚é
extern	int			SaveDrawValidGraphToDDS(  int GrHandle, int x1, int y1, int x2, int y2, const TCHAR *FileName ) ;																																// •`‰æ‘ÎÛ‚É‚Å‚«‚éƒOƒ‰ƒtƒBƒbƒNƒnƒ“ƒhƒ‹‚ğ‚c‚c‚rŒ`®‚Å•Û‘¶‚·‚é
extern	int			SaveDrawValidGraphToJPEG( int GrHandle, int x1, int y1, int x2, int y2, const TCHAR *FileName, int Quality = 80 , int Sample2x1 = TRUE ) ;																						// •`‰æ‘ÎÛ‚É‚Å‚«‚éƒOƒ‰ƒtƒBƒbƒNƒnƒ“ƒhƒ‹‚ğ‚i‚o‚d‚fŒ`®‚Å•Û‘¶‚·‚é Quality = ‰æ¿A’l‚ª‘å‚«‚¢‚Ù‚Ç’áˆ³k‚‰æ¿,0`100 
extern	int			SaveDrawValidGraphToPNG(  int GrHandle, int x1, int y1, int x2, int y2, const TCHAR *FileName, int CompressionLevel = -1 ) ;																									// •`‰æ‘ÎÛ‚É‚Å‚«‚éƒOƒ‰ƒtƒBƒbƒNƒnƒ“ƒhƒ‹‚ğ‚o‚m‚fŒ`®‚Å•Û‘¶‚·‚é CompressionLevel = ˆ³k—¦A’l‚ª‘å‚«‚¢‚Ù‚Ç‚ˆ³k—¦‚•‰‰×A‚O‚Í–³ˆ³k,0`9

#endif // DX_NON_SAVEFUNCTION

// ’¸“_ƒoƒbƒtƒ@ŠÖŒWŠÖ”
extern	int			CreateVertexBuffer(		int VertexNum, int VertexType /* DX_VERTEX_TYPE_NORMAL_3D “™ */ ) ;						// ’¸“_ƒoƒbƒtƒ@‚ğì¬‚·‚é( -1:ƒGƒ‰[  0ˆÈã:’¸“_ƒoƒbƒtƒ@ƒnƒ“ƒhƒ‹ )
extern	int			DeleteVertexBuffer(		int VertexBufHandle ) ;																	// ’¸“_ƒoƒbƒtƒ@‚ğíœ‚·‚é
extern	int			InitVertexBuffer(		void ) ;																				// ‚·‚×‚Ä‚Ì’¸“_ƒoƒbƒtƒ@‚ğíœ‚·‚é
extern	int			SetVertexBufferData(	int SetIndex, const void *VertexArray, int VertexNum, int VertexBufHandle ) ;			// ’¸“_ƒoƒbƒtƒ@‚É’¸“_ƒf[ƒ^‚ğ“]‘—‚·‚é
extern	int			CreateIndexBuffer(		int IndexNum, int IndexType /* DX_INDEX_TYPE_16BIT “™ */  ) ;							// ƒCƒ“ƒfƒbƒNƒXƒoƒbƒtƒ@‚ğì¬‚·‚é( -1:ƒGƒ‰[@0ˆÈãFƒCƒ“ƒfƒbƒNƒXƒoƒbƒtƒ@ƒnƒ“ƒhƒ‹ )
extern	int			DeleteIndexBuffer(		int IndexBufHandle ) ;																	// ƒCƒ“ƒfƒbƒNƒXƒoƒbƒtƒ@‚ğíœ‚·‚é
extern	int			InitIndexBuffer(		void ) ;																				// ‚·‚×‚Ä‚ÌƒCƒ“ƒfƒbƒNƒXƒoƒbƒtƒ@‚ğíœ‚·‚é
extern	int			SetIndexBufferData(		int SetIndex, const void *IndexArray, int IndexNum, int IndexBufHandle ) ;				// ƒCƒ“ƒfƒbƒNƒXƒoƒbƒtƒ@‚ÉƒCƒ“ƒfƒbƒNƒXƒf[ƒ^‚ğ“]‘—‚·‚é
extern	int			GetMaxPrimitiveCount(	void ) ;																				// ƒOƒ‰ƒtƒBƒbƒNƒXƒfƒoƒCƒX‚ª‘Î‰‚µ‚Ä‚¢‚éˆê“x‚É•`‰æ‚Å‚«‚éƒvƒŠƒ~ƒeƒBƒu‚ÌÅ‘å”‚ğæ“¾‚·‚é
extern	int			GetMaxVertexIndex(		void ) ;																				// ƒOƒ‰ƒtƒBƒbƒNƒXƒfƒoƒCƒX‚ª‘Î‰‚µ‚Ä‚¢‚éˆê“x‚Ég—p‚·‚é‚±‚Æ‚Ì‚Å‚«‚éÅ‘å’¸“_”‚ğæ“¾‚·‚é

// ƒVƒF[ƒ_[ŠÖŒWŠÖ”
extern	int			GetValidShaderVersion(		void ) ;												// g—p‚Å‚«‚éƒVƒF[ƒ_[‚Ìƒo[ƒWƒ‡ƒ“‚ğæ“¾‚·‚é( 0=g‚¦‚È‚¢  200=ƒVƒF[ƒ_[ƒ‚ƒfƒ‹‚QD‚O‚ªg—p‰Â”\  300=ƒVƒF[ƒ_[ƒ‚ƒfƒ‹‚RD‚O‚ªg—p‰Â”\ )

extern	int			LoadVertexShader(			const TCHAR *FileName ) ;								// ’¸“_ƒVƒF[ƒ_[ƒoƒCƒiƒŠ‚ğƒtƒ@ƒCƒ‹‚©‚ç“Ç‚İ‚İ’¸“_ƒVƒF[ƒ_[ƒnƒ“ƒhƒ‹‚ğì¬‚·‚é( –ß‚è’l -1:ƒGƒ‰[  -1ˆÈŠO:ƒVƒF[ƒ_[ƒnƒ“ƒhƒ‹ )
extern	int			LoadPixelShader(			const TCHAR *FileName ) ;								// ƒsƒNƒZƒ‹ƒVƒF[ƒ_[ƒoƒCƒiƒŠ‚ğƒtƒ@ƒCƒ‹‚©‚ç“Ç‚İ‚İƒsƒNƒZƒ‹ƒVƒF[ƒ_[ƒnƒ“ƒhƒ‹‚ğì¬‚·‚é( –ß‚è’l -1:ƒGƒ‰[  -1ˆÈŠO:ƒVƒF[ƒ_[ƒnƒ“ƒhƒ‹ )
extern	int			LoadVertexShaderFromMem(	const void *ImageAddress, int ImageSize ) ;				// ƒƒ‚ƒŠ‚É“Ç‚İ‚Ü‚ê‚½’¸“_ƒVƒF[ƒ_[ƒoƒCƒiƒŠ‚©‚ç’¸“_ƒVƒF[ƒ_[ƒnƒ“ƒhƒ‹‚ğì¬‚·‚é( –ß‚è’l -1:ƒGƒ‰[  -1ˆÈŠO:ƒVƒF[ƒ_[ƒnƒ“ƒhƒ‹ )
extern	int			LoadPixelShaderFromMem(		const void *ImageAddress, int ImageSize ) ;				// ƒƒ‚ƒŠ‚É“Ç‚İ‚Ü‚ê‚½ƒsƒNƒZƒ‹ƒVƒF[ƒ_[ƒoƒCƒiƒŠ‚©‚çƒsƒNƒZƒ‹ƒVƒF[ƒ_[ƒnƒ“ƒhƒ‹‚ğì¬‚·‚é( –ß‚è’l -1:ƒGƒ‰[  -1ˆÈŠO:ƒVƒF[ƒ_[ƒnƒ“ƒhƒ‹ )
extern	int			DeleteShader(				int ShaderHandle ) ;									// ƒVƒF[ƒ_[ƒnƒ“ƒhƒ‹‚Ìíœ( ’¸“_ƒVƒF[ƒ_[EƒsƒNƒZƒ‹ƒVƒF[ƒ_[‹¤’Ê )
extern	int			InitShader(					void ) ;												// ƒVƒF[ƒ_[ƒnƒ“ƒhƒ‹‚ğ‘S‚Äíœ‚·‚é( ’¸“_ƒVƒF[ƒ_[ƒnƒ“ƒhƒ‹EƒsƒNƒZƒ‹ƒVƒF[ƒ_[ƒnƒ“ƒhƒ‹‚Ç‚¿‚ç‚à‚·‚×‚Äíœ )

extern	int			GetConstIndexToShader(           const TCHAR *ConstantName, int ShaderHandle ) ;	// w’è‚Ì–¼‘O‚ğ‚Â’è”‚ªg—p‚·‚éƒVƒF[ƒ_[’è”‚Ì”Ô†‚ğæ“¾‚·‚é
extern	int			GetConstCountToShader(           const TCHAR *ConstantName, int ShaderHandle ) ;	// w’è‚Ì–¼‘O‚ğ‚Â’è”‚ªg—p‚·‚éƒVƒF[ƒ_[’è”‚Ì”‚ğæ“¾‚·‚é
extern	const FLOAT4 *GetConstDefaultParamFToShader( const TCHAR *ConstantName, int ShaderHandle ) ;	// w’è‚Ì–¼‘O‚ğ‚Â•‚“®¬”“_”’è”‚ÌƒfƒtƒHƒ‹ƒgƒpƒ‰ƒ[ƒ^‚ªŠi”[‚³‚ê‚Ä‚¢‚éƒƒ‚ƒŠƒAƒhƒŒƒX‚ğæ“¾‚·‚é
extern	int			SetVSConstSF(         int ConstantIndex,       float  Param ) ;						// ’¸“_ƒVƒF[ƒ_[‚Ì float Œ^’è”‚ğİ’è‚·‚é
extern	int			SetVSConstF(          int ConstantIndex,       FLOAT4 Param ) ;						// ’¸“_ƒVƒF[ƒ_[‚Ì float Œ^’è”‚ğİ’è‚·‚é
extern	int			SetVSConstFMtx(       int ConstantIndex,       MATRIX Param ) ;						// ’¸“_ƒVƒF[ƒ_[‚Ì float Œ^’è”‚És—ñ‚ğİ’è‚·‚é
extern	int			SetVSConstFMtxT(      int ConstantIndex,       MATRIX Param ) ;						// ’¸“_ƒVƒF[ƒ_[‚Ì float Œ^’è”‚É“]’u‚µ‚½s—ñ‚ğİ’è‚·‚é
extern	int			SetVSConstSI(         int ConstantIndex,       int    Param ) ;						// ’¸“_ƒVƒF[ƒ_[‚Ì int   Œ^’è”‚ğİ’è‚·‚é
extern	int			SetVSConstI(          int ConstantIndex,       INT4   Param ) ;						// ’¸“_ƒVƒF[ƒ_[‚Ì int   Œ^’è”‚ğİ’è‚·‚é
extern	int			SetVSConstB(          int ConstantIndex,       BOOL   Param ) ;						// ’¸“_ƒVƒF[ƒ_[‚Ì BOOL  Œ^’è”‚ğİ’è‚·‚é
extern	int			SetVSConstSFArray(    int ConstantIndex, const float  *ParamArray, int ParamNum ) ;	// ’¸“_ƒVƒF[ƒ_[‚Ì float Œ^’è”‚ğİ’è‚·‚é( ”z—ñ‚ğg‚Á‚Ä˜A”ÔƒCƒ“ƒfƒbƒNƒX‚Éˆê“x‚Éİ’è )
extern	int			SetVSConstFArray(     int ConstantIndex, const FLOAT4 *ParamArray, int ParamNum ) ;	// ’¸“_ƒVƒF[ƒ_[‚Ì float Œ^’è”‚ğİ’è‚·‚é( ”z—ñ‚ğg‚Á‚Ä˜A”ÔƒCƒ“ƒfƒbƒNƒX‚Éˆê“x‚Éİ’è )
extern	int			SetVSConstFMtxArray(  int ConstantIndex, const MATRIX *ParamArray, int ParamNum ) ;	// ’¸“_ƒVƒF[ƒ_[‚Ì float Œ^’è”‚És—ñ‚ğİ’è‚·‚é( ”z—ñ‚ğg‚Á‚Ä˜A”ÔƒCƒ“ƒfƒbƒNƒX‚Éˆê“x‚Éİ’è )
extern	int			SetVSConstFMtxTArray( int ConstantIndex, const MATRIX *ParamArray, int ParamNum ) ;	// ’¸“_ƒVƒF[ƒ_[‚Ì float Œ^’è”‚É“]’u‚µ‚½s—ñ‚ğİ’è‚·‚é( ”z—ñ‚ğg‚Á‚Ä˜A”ÔƒCƒ“ƒfƒbƒNƒX‚Éˆê“x‚Éİ’è )
extern	int			SetVSConstSIArray(    int ConstantIndex, const int    *ParamArray, int ParamNum ) ;	// ’¸“_ƒVƒF[ƒ_[‚Ì int   Œ^’è”‚ğİ’è‚·‚é( ”z—ñ‚ğg‚Á‚Ä˜A”ÔƒCƒ“ƒfƒbƒNƒX‚Éˆê“x‚Éİ’è )
extern	int			SetVSConstIArray(     int ConstantIndex, const INT4   *ParamArray, int ParamNum ) ;	// ’¸“_ƒVƒF[ƒ_[‚Ì int   Œ^’è”‚ğİ’è‚·‚é( ”z—ñ‚ğg‚Á‚Ä˜A”ÔƒCƒ“ƒfƒbƒNƒX‚Éˆê“x‚Éİ’è )
extern	int			SetVSConstBArray(     int ConstantIndex, const BOOL   *ParamArray, int ParamNum ) ;	// ’¸“_ƒVƒF[ƒ_[‚Ì BOOL  Œ^’è”‚ğİ’è‚·‚é( ”z—ñ‚ğg‚Á‚Ä˜A”ÔƒCƒ“ƒfƒbƒNƒX‚Éˆê“x‚Éİ’è )
extern	int			ResetVSConstF(        int ConstantIndex, int ParamNum ) ;							// ’¸“_ƒVƒF[ƒ_[‚Ì float Œ^’è”‚Ìİ’è‚ğƒŠƒZƒbƒg‚·‚é
extern	int			ResetVSConstI(        int ConstantIndex, int ParamNum ) ;							// ’¸“_ƒVƒF[ƒ_[‚Ì int   Œ^’è”‚Ìİ’è‚ğƒŠƒZƒbƒg‚·‚é
extern	int			ResetVSConstB(        int ConstantIndex, int ParamNum ) ;							// ’¸“_ƒVƒF[ƒ_[‚Ì BOOL  Œ^’è”‚Ìİ’è‚ğƒŠƒZƒbƒg‚·‚é

extern	int			SetPSConstSF(         int ConstantIndex,       float  Param ) ;						// ƒsƒNƒZƒ‹ƒVƒF[ƒ_[‚Ì float Œ^’è”‚ğİ’è‚·‚é
extern	int			SetPSConstF(          int ConstantIndex,       FLOAT4 Param ) ;						// ƒsƒNƒZƒ‹ƒVƒF[ƒ_[‚Ì float Œ^’è”‚ğİ’è‚·‚é
extern	int			SetPSConstFMtx(       int ConstantIndex,       MATRIX Param ) ;						// ƒsƒNƒZƒ‹ƒVƒF[ƒ_[‚Ì float Œ^’è”‚És—ñ‚ğİ’è‚·‚é
extern	int			SetPSConstFMtxT(      int ConstantIndex,       MATRIX Param ) ;						// ƒsƒNƒZƒ‹ƒVƒF[ƒ_[‚Ì float Œ^’è”‚É“]’u‚µ‚½s—ñ‚ğİ’è‚·‚é
extern	int			SetPSConstSI(         int ConstantIndex,       int    Param ) ;						// ƒsƒNƒZƒ‹ƒVƒF[ƒ_[‚Ì int   Œ^’è”‚ğİ’è‚·‚é
extern	int			SetPSConstI(          int ConstantIndex,       INT4   Param ) ;						// ƒsƒNƒZƒ‹ƒVƒF[ƒ_[‚Ì int   Œ^’è”‚ğİ’è‚·‚é
extern	int			SetPSConstB(          int ConstantIndex,       BOOL   Param ) ;						// ƒsƒNƒZƒ‹ƒVƒF[ƒ_[‚Ì BOOL  Œ^’è”‚ğİ’è‚·‚é
extern	int			SetPSConstSFArray(    int ConstantIndex, const float  *ParamArray, int ParamNum ) ;	// ƒsƒNƒZƒ‹ƒVƒF[ƒ_[‚Ì float Œ^’è”‚ğİ’è‚·‚é( ”z—ñ‚ğg‚Á‚Ä˜A”ÔƒCƒ“ƒfƒbƒNƒX‚Éˆê“x‚Éİ’è )
extern	int			SetPSConstFArray(     int ConstantIndex, const FLOAT4 *ParamArray, int ParamNum ) ;	// ƒsƒNƒZƒ‹ƒVƒF[ƒ_[‚Ì float Œ^’è”‚ğİ’è‚·‚é( ”z—ñ‚ğg‚Á‚Ä˜A”ÔƒCƒ“ƒfƒbƒNƒX‚Éˆê“x‚Éİ’è )
extern	int			SetPSConstFMtxArray(  int ConstantIndex, const MATRIX *ParamArray, int ParamNum ) ;	// ƒsƒNƒZƒ‹ƒVƒF[ƒ_[‚Ì float Œ^’è”‚És—ñ‚ğİ’è‚·‚é( ”z—ñ‚ğg‚Á‚Ä˜A”ÔƒCƒ“ƒfƒbƒNƒX‚Éˆê“x‚Éİ’è )
extern	int			SetPSConstFMtxTArray( int ConstantIndex, const MATRIX *ParamArray, int ParamNum ) ;	// ƒsƒNƒZƒ‹ƒVƒF[ƒ_[‚Ì float Œ^’è”‚É“]’u‚µ‚½s—ñ‚ğİ’è‚·‚é( ”z—ñ‚ğg‚Á‚Ä˜A”ÔƒCƒ“ƒfƒbƒNƒX‚Éˆê“x‚Éİ’è )
extern	int			SetPSConstSIArray(    int ConstantIndex, const int    *ParamArray, int ParamNum ) ;	// ƒsƒNƒZƒ‹ƒVƒF[ƒ_[‚Ì int   Œ^’è”‚ğİ’è‚·‚é( ”z—ñ‚ğg‚Á‚Ä˜A”ÔƒCƒ“ƒfƒbƒNƒX‚Éˆê“x‚Éİ’è )
extern	int			SetPSConstIArray(     int ConstantIndex, const INT4   *ParamArray, int ParamNum ) ;	// ƒsƒNƒZƒ‹ƒVƒF[ƒ_[‚Ì int   Œ^’è”‚ğİ’è‚·‚é( ”z—ñ‚ğg‚Á‚Ä˜A”ÔƒCƒ“ƒfƒbƒNƒX‚Éˆê“x‚Éİ’è )
extern	int			SetPSConstBArray(     int ConstantIndex, const BOOL   *ParamArray, int ParamNum ) ;	// ƒsƒNƒZƒ‹ƒVƒF[ƒ_[‚Ì BOOL  Œ^’è”‚ğİ’è‚·‚é( ”z—ñ‚ğg‚Á‚Ä˜A”ÔƒCƒ“ƒfƒbƒNƒX‚Éˆê“x‚Éİ’è )
extern	int			ResetPSConstF(        int ConstantIndex, int ParamNum ) ;							// ƒsƒNƒZƒ‹ƒVƒF[ƒ_[‚Ì float Œ^’è”‚Ìİ’è‚ğƒŠƒZƒbƒg‚·‚é
extern	int			ResetPSConstI(        int ConstantIndex, int ParamNum ) ;							// ƒsƒNƒZƒ‹ƒVƒF[ƒ_[‚Ì int   Œ^’è”‚Ìİ’è‚ğƒŠƒZƒbƒg‚·‚é
extern	int			ResetPSConstB(        int ConstantIndex, int ParamNum ) ;							// ƒsƒNƒZƒ‹ƒVƒF[ƒ_[‚Ì BOOL  Œ^’è”‚Ìİ’è‚ğƒŠƒZƒbƒg‚·‚é

extern	int			SetRenderTargetToShader( int TargetIndex, int DrawScreen, int SurfaceIndex = 0 , int MipLevel = 0 ) ;	// ƒVƒF[ƒ_[‚ğg—p‚µ‚½•`‰æ‚Å‚Ì•`‰ææ‚ğİ’è‚·‚é( DrawScreen ‚É -1 ‚ğ“n‚·‚Æ–³Œø‰» )
extern	int			SetUseTextureToShader(   int StageIndex, int GraphHandle ) ;						// ƒVƒF[ƒ_[‚ğg—p‚µ‚½•`‰æ‚Åg—p‚·‚éƒOƒ‰ƒtƒBƒbƒNƒnƒ“ƒhƒ‹‚ğİ’è‚·‚é
extern	int			SetUseVertexShader(      int ShaderHandle ) ;										// ƒVƒF[ƒ_[‚ğg—p‚µ‚½•`‰æ‚Ég—p‚·‚é’¸“_ƒVƒF[ƒ_[‚ğİ’è‚·‚é( -1‚ğ“n‚·‚Æ‰ğœ )
extern	int			SetUsePixelShader(       int ShaderHandle ) ;										// ƒVƒF[ƒ_[‚ğg—p‚µ‚½•`‰æ‚Ég—p‚·‚éƒsƒNƒZƒ‹ƒVƒF[ƒ_[‚ğİ’è‚·‚é( -1‚ğ“n‚·‚Æ‰ğœ )

extern	int			CalcPolygonBinormalAndTangentsToShader(        VERTEX3DSHADER *VertexArray, int PolygonNum ) ;														// ƒ|ƒŠƒSƒ“‚Ì’¸“_‚ÌÚü‚Æ]–@ü‚ğ‚t‚uÀ•W‚©‚çŒvZ‚µ‚ÄƒZƒbƒg‚·‚é
extern	int			CalcPolygonIndexedBinormalAndTangentsToShader( VERTEX3DSHADER *VertexArray, int VertexNum, const unsigned short *IndexArray, int PolygonNum ) ;		// ƒ|ƒŠƒSƒ“‚Ì’¸“_‚ÌÚü‚Æ]–@ü‚ğ‚t‚uÀ•W‚©‚çŒvZ‚µ‚ÄƒZƒbƒg‚·‚é( ’¸“_ƒCƒ“ƒfƒbƒNƒX‚ğg—p‚·‚é )

extern	int			DrawBillboard3DToShader( VECTOR Pos, float cx, float cy, float Size, float Angle, int GrHandle, int TransFlag, int TurnFlag = FALSE ) ;															// ƒVƒF[ƒ_[‚ğg‚Á‚Äƒrƒ‹ƒ{[ƒh‚ğ•`‰æ‚·‚é
extern	int			DrawPolygon2DToShader(          const VERTEX2DSHADER *VertexArray, int PolygonNum ) ;																											// ƒVƒF[ƒ_[‚ğg‚Á‚Ä‚Q‚cƒ|ƒŠƒSƒ“‚ğ•`‰æ‚·‚é
extern	int			DrawPolygon3DToShader(          const VERTEX3DSHADER *VertexArray, int PolygonNum ) ;																											// ƒVƒF[ƒ_[‚ğg‚Á‚Ä‚R‚cƒ|ƒŠƒSƒ“‚ğ•`‰æ‚·‚é
extern	int			DrawPolygonIndexed2DToShader(   const VERTEX2DSHADER *VertexArray, int VertexNum, const unsigned short *IndexArray, int PolygonNum ) ;															// ƒVƒF[ƒ_[‚ğg‚Á‚Ä‚Q‚cƒ|ƒŠƒSƒ“‚ğ•`‰æ‚·‚é( ’¸“_ƒCƒ“ƒfƒbƒNƒX‚ğg—p‚·‚é )
extern	int			DrawPolygonIndexed3DToShader(   const VERTEX3DSHADER *VertexArray, int VertexNum, const unsigned short *IndexArray, int PolygonNum ) ;															// ƒVƒF[ƒ_[‚ğg‚Á‚Ä‚R‚cƒ|ƒŠƒSƒ“‚ğ•`‰æ‚·‚é( ’¸“_ƒCƒ“ƒfƒbƒNƒX‚ğg—p‚·‚é )
extern	int			DrawPrimitive2DToShader(        const VERTEX2DSHADER *VertexArray, int VertexNum,                                                 int PrimitiveType /* DX_PRIMTYPE_TRIANGLELIST “™ */ ) ;		// ƒVƒF[ƒ_[‚ğg‚Á‚Ä‚Q‚cƒvƒŠƒ~ƒeƒBƒu‚ğ•`‰æ‚·‚é
extern	int			DrawPrimitive3DToShader(        const VERTEX3DSHADER *VertexArray, int VertexNum,                                                 int PrimitiveType /* DX_PRIMTYPE_TRIANGLELIST “™ */ ) ;		// ƒVƒF[ƒ_[‚ğg‚Á‚Ä‚R‚cƒvƒŠƒ~ƒeƒBƒu‚ğ•`‰æ‚·‚é
extern	int			DrawPrimitiveIndexed2DToShader( const VERTEX2DSHADER *VertexArray, int VertexNum, const unsigned short *IndexArray, int IndexNum, int PrimitiveType /* DX_PRIMTYPE_TRIANGLELIST “™ */ ) ;		// ƒVƒF[ƒ_[‚ğg‚Á‚Ä‚Q‚cƒvƒŠƒ~ƒeƒBƒu‚ğ•`‰æ‚·‚é( ’¸“_ƒCƒ“ƒfƒbƒNƒX‚ğg—p‚·‚é )
extern	int			DrawPrimitiveIndexed3DToShader( const VERTEX3DSHADER *VertexArray, int VertexNum, const unsigned short *IndexArray, int IndexNum, int PrimitiveType /* DX_PRIMTYPE_TRIANGLELIST “™ */ ) ;		// ƒVƒF[ƒ_[‚ğg‚Á‚Ä‚R‚cƒvƒŠƒ~ƒeƒBƒu‚ğ•`‰æ‚·‚é( ’¸“_ƒCƒ“ƒfƒbƒNƒX‚ğg—p‚·‚é )
extern	int			DrawPolygon3DToShader_UseVertexBuffer(           int VertexBufHandle ) ;																														// ƒVƒF[ƒ_[‚ğg‚Á‚Ä‚R‚cƒ|ƒŠƒSƒ“‚ğ•`‰æ‚·‚é( ’¸“_ƒoƒbƒtƒ@g—p”Å )
extern	int			DrawPolygonIndexed3DToShader_UseVertexBuffer(    int VertexBufHandle, int IndexBufHandle ) ;																									// ƒVƒF[ƒ_[‚ğg‚Á‚Ä‚R‚cƒ|ƒŠƒSƒ“‚ğ•`‰æ‚·‚é( ’¸“_ƒoƒbƒtƒ@‚ÆƒCƒ“ƒfƒbƒNƒXƒoƒbƒtƒ@g—p”Å )
extern	int			DrawPrimitive3DToShader_UseVertexBuffer(         int VertexBufHandle,                     int PrimitiveType /* DX_PRIMTYPE_TRIANGLELIST “™ */ ) ;												// ƒVƒF[ƒ_[‚ğg‚Á‚Ä‚R‚cƒvƒŠƒ~ƒeƒBƒu‚ğ•`‰æ‚·‚é( ’¸“_ƒoƒbƒtƒ@g—p”Å )
extern	int			DrawPrimitive3DToShader_UseVertexBuffer2(        int VertexBufHandle,                     int PrimitiveType /* DX_PRIMTYPE_TRIANGLELIST “™ */, int StartVertex, int UseVertexNum ) ;			// ƒVƒF[ƒ_[‚ğg‚Á‚Ä‚R‚cƒvƒŠƒ~ƒeƒBƒu‚ğ•`‰æ‚·‚é( ’¸“_ƒoƒbƒtƒ@g—p”Å )
extern	int			DrawPrimitiveIndexed3DToShader_UseVertexBuffer(  int VertexBufHandle, int IndexBufHandle, int PrimitiveType /* DX_PRIMTYPE_TRIANGLELIST “™ */ ) ;												// ƒVƒF[ƒ_[‚ğg‚Á‚Ä‚R‚cƒvƒŠƒ~ƒeƒBƒu‚ğ•`‰æ‚·‚é( ’¸“_ƒoƒbƒtƒ@‚ÆƒCƒ“ƒfƒbƒNƒXƒoƒbƒtƒ@g—p”Å )
extern	int			DrawPrimitiveIndexed3DToShader_UseVertexBuffer2( int VertexBufHandle, int IndexBufHandle, int PrimitiveType /* DX_PRIMTYPE_TRIANGLELIST “™ */, int BaseVertex, int StartVertex, int UseVertexNum, int StartIndex, int UseIndexNum ) ;	// ƒVƒF[ƒ_[‚ğg‚Á‚Ä‚R‚cƒvƒŠƒ~ƒeƒBƒu‚ğ•`‰æ‚·‚é( ’¸“_ƒoƒbƒtƒ@‚ÆƒCƒ“ƒfƒbƒNƒXƒoƒbƒtƒ@g—p”Å )

// ƒVƒF[ƒ_[—p’è”ƒoƒbƒtƒ@ŠÖŒWŠÖ”
extern	int			InitShaderConstantBuffer(		void ) ;																					// ‘S‚Ä‚ÌƒVƒF[ƒ_[—p’è”ƒoƒbƒtƒ@ƒnƒ“ƒhƒ‹‚ğíœ‚·‚é
extern	int			CreateShaderConstantBuffer(		int BufferSize ) ;																			// ƒVƒF[ƒ_[—p’è”ƒoƒbƒtƒ@ƒnƒ“ƒhƒ‹‚ğ‰Šú‰»‚·‚é
extern	int			DeleteShaderConstantBuffer(		int SConstBufHandle ) ;																		// ƒVƒF[ƒ_[—p’è”ƒoƒbƒtƒ@ƒnƒ“ƒhƒ‹‚ğíœ‚·‚é
extern	void *		GetBufferShaderConstantBuffer(	int SConstBufHandle ) ;																		// ƒVƒF[ƒ_[—p’è”ƒoƒbƒtƒ@ƒnƒ“ƒhƒ‹‚Ì’è”ƒoƒbƒtƒ@‚ÌƒAƒhƒŒƒX‚ğæ“¾‚·‚é
extern	int			UpdateShaderConstantBuffer(		int SConstBufHandle ) ;																		// ƒVƒF[ƒ_[—p’è”ƒoƒbƒtƒ@ƒnƒ“ƒhƒ‹‚Ì’è”ƒoƒbƒtƒ@‚Ö‚Ì•ÏX‚ğ“K—p‚·‚é
extern	int			SetShaderConstantBuffer(		int SConstBufHandle, int TargetShader /* DX_SHADERTYPE_VERTEX ‚È‚Ç */ , int Slot ) ;		// ƒVƒF[ƒ_[—p’è”ƒoƒbƒtƒ@ƒnƒ“ƒhƒ‹‚Ì’è”ƒoƒbƒtƒ@‚ğw’è‚ÌƒVƒF[ƒ_[‚Ìw’è‚ÌƒXƒƒbƒg‚ÉƒZƒbƒg‚·‚é

// ƒtƒBƒ‹ƒ^[ŠÖŒWŠÖ”
#ifndef DX_NON_FILTER
extern	int			GraphFilter(         int    GrHandle,                                                                                                               int FilterType /* DX_GRAPH_FILTER_GAUSS “™ */ , ... ) ;		// ‰æ‘œ‚ÉƒtƒBƒ‹ƒ^[ˆ—‚ğs‚¤
extern	int			GraphFilterBlt(      int SrcGrHandle, int DestGrHandle,                                                                                             int FilterType /* DX_GRAPH_FILTER_GAUSS “™ */ , ... ) ;		// ‰æ‘œ‚ÌƒtƒBƒ‹ƒ^[•t‚«“]‘—‚ğs‚¤
extern	int			GraphFilterRectBlt(  int SrcGrHandle, int DestGrHandle, int SrcX1, int SrcY1, int SrcX2, int SrcY2, int DestX,  int DestY,                          int FilterType /* DX_GRAPH_FILTER_GAUSS “™ */ , ... ) ;		// ‰æ‘œ‚ÌƒtƒBƒ‹ƒ^[•t‚«“]‘—‚ğs‚¤( ‹éŒ`w’è )
//		int			GraphFilter( int GrHandle, int FilterType = DX_GRAPH_FILTER_MONO, int Cb = ÂF·( -255 ` 255 ), int Cr = ÔF·( -255 ` 255 ) ) ;
//		int			GraphFilter( int GrHandle, int FilterType = DX_GRAPH_FILTER_GAUSS, int PixelWidth = g—pƒsƒNƒZƒ‹•( 8 , 16 , 32 ‚Ì‰½‚ê‚© ), int Param = ‚Ú‚©‚µƒpƒ‰ƒ[ƒ^( 100 ‚Å–ñ1ƒsƒNƒZƒ‹•ª‚Ì• ) ) ;
//		int			GraphFilter( int GrHandle, int FilterType = DX_GRAPH_FILTER_DOWN_SCALE, int DivNum = Œ³‚ÌƒTƒCƒY‚Ì‰½•ª‚Ì‚P‚©A‚Æ‚¢‚¤’l( 2 , 4 , 8 ‚Ì‰½‚ê‚© ) ) ;
//		int			GraphFilter( int GrHandle, int FilterType = DX_GRAPH_FILTER_BRIGHT_CLIP, int CmpType = ƒNƒŠƒbƒvƒ^ƒCƒv( DX_CMP_LESS:CmpParamˆÈ‰º‚ğƒNƒŠƒbƒv  –”‚Í  DX_CMP_GREATER:CmpParamˆÈã‚ğƒNƒŠƒbƒv ), int CmpParam = ƒNƒŠƒbƒvƒpƒ‰ƒ[ƒ^( 0 ` 255 ), int ClipFillFlag = ƒNƒŠƒbƒv‚µ‚½ƒsƒNƒZƒ‹‚ğ“h‚è‚Â‚Ô‚·‚©‚Ç‚¤‚©( TRUE:“h‚è‚Â‚Ô‚·  FALSE:“h‚è‚Â‚Ô‚³‚È‚¢ ), unsigned int ClipFillColor = ƒNƒŠƒbƒv‚µ‚½ƒsƒNƒZƒ‹‚É“h‚éF’l( GetColor ‚Åæ“¾‚·‚é )( ClipFillFlag ‚ª FALSE ‚Ìê‡‚Íg—p‚µ‚È‚¢ ), int ClipFillAlpha = ƒNƒŠƒbƒv‚µ‚½ƒsƒNƒZƒ‹‚É“h‚éƒ¿’l( 0 ` 255 )( ClipFillFlag ‚ª FALSE ‚Ìê‡‚Íg—p‚µ‚È‚¢ ) ) ;
//		int			GraphFilter( int GrHandle, int FilterType = DX_GRAPH_FILTER_BRIGHT_SCALE, int MinBright = •ÏŠ·Œã‚É^‚ÁˆÃ‚É‚È‚é–¾‚é‚³( 0 ` 255 ), int MaxBright = •ÏŠ·Œã‚É^‚Á”’‚É‚È‚é–¾‚é‚³( 0 ` 255 ) ) ;
//		int			GraphFilter( int GrHandle, int FilterType = DX_GRAPH_FILTER_HSB, int HueType = Hue ‚ÌˆÓ–¡( 0:‘Š‘Î’l  1:â‘Î’l ), int Hue = F‘Šƒpƒ‰ƒ[ƒ^( HueType ‚ª 0 ‚Ìê‡ = ƒsƒNƒZƒ‹‚ÌF‘Š‚É‘Î‚·‚é‘Š‘Î’l( -180 ` 180 )   HueType ‚ª 1 ‚Ìê‡ = F‘Š‚Ìâ‘Î’l( 0 ` 360 ) ), int Saturation = Ê“x( -255 ` ), int Bright = ‹P“x( -255 ` 255 ) ) ;
//		int			GraphFilter( int GrHandle, int FilterType = DX_GRAPH_FILTER_INVERT ) ;
//		int			GraphFilter( int GrHandle, int FilterType = DX_GRAPH_FILTER_LEVEL, int Min = •ÏŠ·Œ³‚Ì‰ºŒÀ’l( 0 ` 255 ), int Max = •ÏŠ·Œ³‚ÌãŒÀ’l( 0 ` 255 ), int Gamma = ƒKƒ“ƒ}’l( 100 ‚ÅƒKƒ“ƒ}•â³–³‚µA0 ‚Æ‚»‚êˆÈ‰º‚Ì’l‚Í•s‰Â ), int AfterMin = •ÏŠ·Œã‚ÌÅ’á’l( 0 ` 255 ), int AfterMax = •ÏŠ·Œã‚ÌÅ‘å’l( 0 ` 255 ) ) ;
//		int			GraphFilter( int GrHandle, int FilterType = DX_GRAPH_FILTER_TWO_COLOR, int Threshold = è‡’l( 0 ` 255 ), unsigned int LowColor = è‡’l‚æ‚è’l‚ª’á‚©‚Á‚½ƒsƒNƒZƒ‹‚Ì•ÏŠ·Œã‚ÌF’l( GetColor ‚Åæ“¾‚·‚é ), int LowAlpha = è‡’l‚æ‚è’l‚ª’á‚©‚Á‚½ƒsƒNƒZƒ‹‚Ì•ÏŠ·Œã‚Ìƒ¿’l( 0 ` 255 ), unsigned int HighColor = è‡’l‚æ‚è’l‚ª‚‚©‚Á‚½ƒsƒNƒZƒ‹‚Ì•ÏŠ·Œã‚ÌF’l( GetColor ‚Åæ“¾‚·‚é ), int HighAlpha = è‡’l‚æ‚è’l‚ª‚‚©‚Á‚½ƒsƒNƒZƒ‹‚Ì•ÏŠ·Œã‚Ìƒ¿’l( 0 ` 255 ) ) ;
//		int			GraphFilter( int GrHandle, int FilterType = DX_GRAPH_FILTER_GRADIENT_MAP, int MapGrHandle = ƒOƒ‰ƒf[ƒVƒ‡ƒ“ƒ}ƒbƒv‚ÌƒOƒ‰ƒtƒBƒbƒNƒnƒ“ƒhƒ‹( Œ³‰æ‘œ‚Ì‹P“x‚©‚çƒOƒ‰ƒf[ƒVƒ‡ƒ“ƒ}ƒbƒv‰æ‘œ‚Ì x À•W‚ğZo‚µ‚Ü‚·‚Ì‚Åc•‚Í1dot‚Å‚à‚n‚j ), int Reverse = ƒOƒ‰ƒf[ƒVƒ‡ƒ“ƒ}ƒbƒv¶‰E”½“]ƒtƒ‰ƒO( TRUE : ƒOƒ‰ƒf[ƒVƒ‡ƒ“ƒ}ƒbƒv‚ğ¶‰E”½“]‚µ‚Äg‚¤  FALSE : ¶‰E”½“]‚µ‚È‚¢ ) ) ;
//		int			GraphFilter( int GrHandle, int FilterType = DX_GRAPH_FILTER_PREMUL_ALPHA ) ;			// ’Êí‚ÌƒAƒ‹ƒtƒ@ƒ`ƒƒƒ“ƒlƒ‹•t‚«‰æ‘œ‚ğæZÏ‚İƒAƒ‹ƒtƒ@‰æ‘œ‚É•ÏŠ·‚·‚éƒtƒBƒ‹ƒ^
//		int			GraphFilter( int GrHandle, int FilterType = DX_GRAPH_FILTER_INTERP_ALPHA ) ;			// æZÏ‚İƒ¿‰æ‘œ‚ğ’Êí‚ÌƒAƒ‹ƒtƒ@ƒ`ƒƒƒ“ƒlƒ‹•t‚«‰æ‘œ‚É•ÏŠ·‚·‚éƒtƒBƒ‹ƒ^
//		int			GraphFilter( int GrHandle, int FilterType = DX_GRAPH_FILTER_YUV_TO_RGB ) ;				// YUVƒJƒ‰[‚ğRGBƒJƒ‰[‚É•ÏŠ·‚·‚éƒtƒBƒ‹ƒ^
//		int			GraphFilter( int GrHandle, int FilterType = DX_GRAPH_FILTER_Y2UV1_TO_RGB, int UVGrHandle = YUVƒJƒ‰[‚ÌUV¬•ª‚Ì‚İ‚ÅAŠ‚ÂY‚É‘Î‚µ‚Ä‰ğ‘œ“x‚ª”¼•ª( á‚µ‚­‚Í 4 •ª‚Ì 1 )‚ÌƒOƒ‰ƒtƒBƒbƒNƒnƒ“ƒhƒ‹( U=R, V=G ) ) ;		// YUVƒJƒ‰[‚ğRGBƒJƒ‰[‚É•ÏŠ·‚·‚éƒtƒBƒ‹ƒ^( UV¬•ª‚ª Y¬•ª‚Ì”¼•ªE–”‚Í‚S•ª‚Ì‚P( ‰¡Ec•Ğ•ûá‚µ‚­‚Í—¼•û )‚Ì‰ğ‘œ“x‚µ‚©‚È‚¢ê‡—p )
//		int			GraphFilter( int GrHandle, int FilterType = DX_GRAPH_FILTER_YUV_TO_RGB_RRA ) ;				// YUVƒJƒ‰[‚ğRGBƒJƒ‰[‚É•ÏŠ·‚·‚éƒtƒBƒ‹ƒ^( Š‚Â‰E‘¤”¼•ª‚ÌR‚Ì’l‚ğƒAƒ‹ƒtƒ@’l‚Æ‚µ‚Äˆµ‚¤ )
//		int			GraphFilter( int GrHandle, int FilterType = DX_GRAPH_FILTER_Y2UV1_TO_RGB_RRA, int UVGrHandle = YUVƒJƒ‰[‚ÌUV¬•ª‚Ì‚İ‚ÅAŠ‚ÂY‚É‘Î‚µ‚Ä‰ğ‘œ“x‚ª”¼•ª( á‚µ‚­‚Í 4 •ª‚Ì 1 )‚ÌƒOƒ‰ƒtƒBƒbƒNƒnƒ“ƒhƒ‹( U=R, V=G ) ) ;		// YUVƒJƒ‰[‚ğRGBƒJƒ‰[‚É•ÏŠ·‚·‚éƒtƒBƒ‹ƒ^( UV¬•ª‚ª Y¬•ª‚Ì”¼•ªE–”‚Í‚S•ª‚Ì‚P( ‰¡Ec•Ğ•ûá‚µ‚­‚Í—¼•û )‚Ì‰ğ‘œ“x‚µ‚©‚È‚¢ê‡—p )( Š‚Â‰E‘¤”¼•ª‚ÌR‚Ì’l‚ğƒAƒ‹ƒtƒ@’l‚Æ‚µ‚Äˆµ‚¤ )
//		int			GraphFilter( int GrHandle, int FilterType = DX_GRAPH_FILTER_BICUBIC_SCALE, int DestSizeX = ƒXƒP[ƒŠƒ“ƒOŒã‚Ì‰¡ƒsƒNƒZƒ‹”, int DestSizeY = ƒXƒP[ƒŠƒ“ƒOŒã‚ÌcƒsƒNƒZƒ‹” ) ;
//		int			GraphFilter( int GrHandle, int FilterType = DX_GRAPH_FILTER_LANCZOS3_SCALE, int DestSizeX = ƒXƒP[ƒŠƒ“ƒOŒã‚Ì‰¡ƒsƒNƒZƒ‹”, int DestSizeY = ƒXƒP[ƒŠƒ“ƒOŒã‚ÌcƒsƒNƒZƒ‹” ) ;

extern	int			GraphBlend(         int    GrHandle, int BlendGrHandle,                                                                                                                                         int BlendRatio /* ƒuƒŒƒ“ƒhŒø‰Ê‚Ì‰e‹¿“x( 0:‚O“  255:‚P‚O‚O“ ) */ , int BlendType /* DX_GRAPH_BLEND_ADD “™ */ , ... ) ;	// “ñ‚Â‚Ì‰æ‘œ‚ğƒuƒŒƒ“ƒh‚·‚é
extern	int			GraphBlendBlt(      int SrcGrHandle, int BlendGrHandle, int DestGrHandle,                                                                                                                       int BlendRatio /* ƒuƒŒƒ“ƒhŒø‰Ê‚Ì‰e‹¿“x( 0:‚O“  255:‚P‚O‚O“ ) */ , int BlendType /* DX_GRAPH_BLEND_ADD “™ */ , ... ) ;	// “ñ‚Â‚Ì‰æ‘œ‚ğƒuƒŒƒ“ƒh‚µ‚ÄŒ‹‰Ê‚ğw’è‚Ì‰æ‘œ‚Éo—Í‚·‚é
extern	int			GraphBlendRectBlt(  int SrcGrHandle, int BlendGrHandle, int DestGrHandle, int SrcX1, int SrcY1, int SrcX2, int SrcY2, int BlendX,  int BlendY,                            int DestX, int DestY, int BlendRatio /* ƒuƒŒƒ“ƒhŒø‰Ê‚Ì‰e‹¿“x( 0:‚O“  255:‚P‚O‚O“ ) */ , int BlendType /* DX_GRAPH_BLEND_ADD “™ */ , ... ) ;	// “ñ‚Â‚Ì‰æ‘œ‚ğƒuƒŒƒ“ƒh‚µ‚ÄŒ‹‰Ê‚ğw’è‚Ì‰æ‘œ‚Éo—Í‚·‚é( ‹éŒ`w’è )
//		int			GraphBlend( int GrHandle, int BlendGrHandle, int BlendRatio, int BlendType = DX_GRAPH_BLEND_NORMAL ) ;
//		int			GraphBlend( int GrHandle, int BlendGrHandle, int BlendRatio, int BlendType = DX_GRAPH_BLEND_RGBA_SELECT_MIX, int SelectR = ( o—Í‚ÌÔ•ª‚Æ‚È‚é¬•ª DX_RGBA_SELECT_SRC_R “™ ), int SelectG = ( o—Í‚Ì—Î¬•ª‚Æ‚È‚é¬•ª DX_RGBA_SELECT_SRC_R “™ ), int SelectB = ( o—Í‚ÌÂ¬•ª‚Æ‚È‚é¬•ª DX_RGBA_SELECT_SRC_R “™ ), int SelectA = ( o—Í‚Ìƒ¿¬•ª‚Æ‚È‚é¬•ª DX_RGBA_SELECT_SRC_R “™ ) ) ;
//		int			GraphBlend( int GrHandle, int BlendGrHandle, int BlendRatio, int BlendType = DX_GRAPH_BLEND_MULTIPLE ) ;
//		int			GraphBlend( int GrHandle, int BlendGrHandle, int BlendRatio, int BlendType = DX_GRAPH_BLEND_DIFFERENCE ) ;
//		int			GraphBlend( int GrHandle, int BlendGrHandle, int BlendRatio, int BlendType = DX_GRAPH_BLEND_ADD ) ;
//		int			GraphBlend( int GrHandle, int BlendGrHandle, int BlendRatio, int BlendType = DX_GRAPH_BLEND_SCREEN ) ;
//		int			GraphBlend( int GrHandle, int BlendGrHandle, int BlendRatio, int BlendType = DX_GRAPH_BLEND_OVERLAY ) ;
//		int			GraphBlend( int GrHandle, int BlendGrHandle, int BlendRatio, int BlendType = DX_GRAPH_BLEND_DODGE ) ;
//		int			GraphBlend( int GrHandle, int BlendGrHandle, int BlendRatio, int BlendType = DX_GRAPH_BLEND_BURN ) ;
//		int			GraphBlend( int GrHandle, int BlendGrHandle, int BlendRatio, int BlendType = DX_GRAPH_BLEND_DARKEN ) ;
//		int			GraphBlend( int GrHandle, int BlendGrHandle, int BlendRatio, int BlendType = DX_GRAPH_BLEND_LIGHTEN ) ;
//		int			GraphBlend( int GrHandle, int BlendGrHandle, int BlendRatio, int BlendType = DX_GRAPH_BLEND_SOFTLIGHT ) ;
//		int			GraphBlend( int GrHandle, int BlendGrHandle, int BlendRatio, int BlendType = DX_GRAPH_BLEND_HARDLIGHT ) ;
//		int			GraphBlend( int GrHandle, int BlendGrHandle, int BlendRatio, int BlendType = DX_GRAPH_BLEND_EXCLUSION ) ;
//		int			GraphBlend( int GrHandle, int BlendGrHandle, int BlendRatio, int BlendType = DX_GRAPH_BLEND_NORMAL_ALPHACH ) ;
//		int			GraphBlend( int GrHandle, int BlendGrHandle, int BlendRatio, int BlendType = DX_GRAPH_BLEND_ADD_ALPHACH ) ;
//		int			GraphBlend( int GrHandle, int BlendGrHandle, int BlendRatio, int BlendType = DX_GRAPH_BLEND_MULTIPLE_A_ONLY ) ;
//		int			GraphBlend( int GrHandle, int BlendGrHandle, int BlendRatio, int BlendType = DX_GRAPH_BLEND_PMA_MULTIPLE_A_ONLY ) ;
#endif // DX_NON_FILTER

#ifndef DX_NON_MOVIE
// ƒ€[ƒr[ƒOƒ‰ƒtƒBƒbƒNŠÖŒWŠÖ”
extern	int			PlayMovie(							const TCHAR *FileName, int ExRate, int PlayType ) ;						// “®‰æƒtƒ@ƒCƒ‹‚ÌÄ¶
extern	int			OpenMovieToGraph(					const TCHAR *FileName, int FullColor = TRUE ) ;							// “®‰æƒtƒ@ƒCƒ‹‚ğŠJ‚­
extern 	int			PlayMovieToGraph(					int GraphHandle, int PlayType = DX_PLAYTYPE_BACK , int SysPlay = 0 ) ;	// “®‰æƒtƒ@ƒCƒ‹‚ğg—p‚·‚éƒOƒ‰ƒtƒBƒbƒNƒnƒ“ƒhƒ‹‚Ì“®‰æƒtƒ@ƒCƒ‹‚ÌÄ¶‚ğŠJn‚·‚é
extern 	int			PauseMovieToGraph(					int GraphHandle, int SysPause = 0 ) ;									// “®‰æƒtƒ@ƒCƒ‹‚ğg—p‚·‚éƒOƒ‰ƒtƒBƒbƒNƒnƒ“ƒhƒ‹‚Ì“®‰æƒtƒ@ƒCƒ‹‚ÌÄ¶‚ğ’â~‚·‚é
extern	int			AddMovieFrameToGraph(				int GraphHandle, unsigned int FrameNum ) ;								// “®‰æƒtƒ@ƒCƒ‹‚ÌÄ¶ƒtƒŒ[ƒ€‚ği‚ß‚éA–ß‚·‚±‚Æ‚Ío—ˆ‚È‚¢( “®‰æƒtƒ@ƒCƒ‹‚ª’â~ó‘Ô‚ÅAŠ‚Â Ogg Theora ‚Ì‚İ—LŒø )
extern	int			SeekMovieToGraph(					int GraphHandle, int Time ) ;											// “®‰æƒtƒ@ƒCƒ‹‚ÌÄ¶ˆÊ’u‚ğİ’è‚·‚é(ƒ~ƒŠ•b’PˆÊ)
extern	int			SetPlaySpeedRateMovieToGraph(		int GraphHandle, double SpeedRate ) ;									// “®‰æƒtƒ@ƒCƒ‹‚ÌÄ¶‘¬“x‚ğİ’è‚·‚é( 1.0 = “™”{‘¬  2.0 = ‚Q”{‘¬ )Aˆê•”‚Ìƒtƒ@ƒCƒ‹ƒtƒH[ƒ}ƒbƒg‚Ì‚İ‚Å—LŒø‚È‹@”\‚Å‚·
extern 	int			GetMovieStateToGraph(				int GraphHandle ) ;														// “®‰æƒtƒ@ƒCƒ‹‚ÌÄ¶ó‘Ô‚ğ“¾‚é
extern	int			SetMovieVolumeToGraph(				int Volume, int GraphHandle ) ;											// “®‰æƒtƒ@ƒCƒ‹‚Ì‰¹—Ê‚ğİ’è‚·‚é(0`10000)
extern	int			ChangeMovieVolumeToGraph(			int Volume, int GraphHandle ) ;											// “®‰æƒtƒ@ƒCƒ‹‚Ì‰¹—Ê‚ğİ’è‚·‚é(0`255)
extern	const BASEIMAGE* GetMovieBaseImageToGraph(		int GraphHandle, int *ImageUpdateFlag = NULL , int ImageUpdateFlagSetOnly = FALSE ) ;	// “®‰æƒtƒ@ƒCƒ‹‚ÌŠî–{ƒCƒ[ƒWƒf[ƒ^‚ğæ“¾‚·‚é( ImageUpdateFlag ‚É int Œ^•Ï”‚ÌƒAƒhƒŒƒX‚ğ“n‚·‚ÆAƒCƒ[ƒW‚ªXV‚³‚ê‚½ê‡‚Í 1 ‚ªAXV‚³‚ê‚Ä‚¢‚È‚¢ê‡‚Í 0 ‚ªŠi”[‚³‚ê‚Ü‚·A ImageUpdateFlagSetOnly ‚ğ TRUE ‚É‚·‚é‚Æ–ß‚è’l‚Ì BASEIMAGE ‚Í—LŒø‚È‰æ‘œƒf[ƒ^‚Å‚Í‚È‚­‚È‚è‚Ü‚·‚ªABASEIMAGE ‚ÌXVˆ—‚ªs‚í‚ê‚Ü‚¹‚ñ‚Ì‚ÅAImageUpdateFlag ‚ğ—˜—p‚µ‚Ä‰æ‘œ‚ªXV‚³‚ê‚½‚©‚Ç‚¤‚©‚¾‚¯‚ğƒ`ƒFƒbƒN‚µ‚½‚¢ê‡‚Í TRUE ‚É‚µ‚Ä‚­‚¾‚³‚¢ )
extern	int			GetMovieTotalFrameToGraph(			int GraphHandle ) ;														// “®‰æƒtƒ@ƒCƒ‹‚Ì‘ƒtƒŒ[ƒ€”‚ğ“¾‚é( Ogg Theora ‚Å‚Ì‚İ—LŒø )
extern	int			TellMovieToGraph(					int GraphHandle ) ;														// “®‰æƒtƒ@ƒCƒ‹‚ÌÄ¶ˆÊ’u‚ğæ“¾‚·‚é(ƒ~ƒŠ•b’PˆÊ)
extern	int			TellMovieToGraphToFrame(			int GraphHandle ) ;														// “®‰æƒtƒ@ƒCƒ‹‚ÌÄ¶ˆÊ’u‚ğæ“¾‚·‚é(ƒtƒŒ[ƒ€’PˆÊ)
extern	int			SeekMovieToGraphToFrame(			int GraphHandle, int Frame ) ;											// “®‰æƒtƒ@ƒCƒ‹‚ÌÄ¶ˆÊ’u‚ğİ’è‚·‚é(ƒtƒŒ[ƒ€’PˆÊ)
extern	LONGLONG	GetOneFrameTimeMovieToGraph(		int GraphHandle ) ;														// “®‰æƒtƒ@ƒCƒ‹‚Ì‚PƒtƒŒ[ƒ€‚ ‚½‚è‚ÌŠÔ‚ğæ“¾‚·‚é
extern	int			GetLastUpdateTimeMovieToGraph(		int GraphHandle ) ;														// “®‰æƒtƒ@ƒCƒ‹‚ÌƒCƒ[ƒW‚ğÅŒã‚ÉXV‚µ‚½ŠÔ‚ğ“¾‚é(ƒ~ƒŠ•b’PˆÊ)
extern	int			SetMovieRightImageAlphaFlag(		int Flag ) ;															// “Ç‚İ‚Ş“®‰æƒtƒ@ƒCƒ‹‰f‘œ‚Ì‰E”¼•ª‚ÌÔ¬•ª‚ğƒ¿î•ñ‚Æ‚µ‚Äˆµ‚¤‚©‚Ç‚¤‚©‚ğƒZƒbƒg‚·‚é( TRUE:ƒ¿î•ñ‚Æ‚µ‚Äˆµ‚¤  FALSE:ƒ¿î•ñ‚Æ‚µ‚Äˆµ‚í‚È‚¢( ƒfƒtƒHƒ‹ƒg ) )
extern	int			SetMovieColorA8R8G8B8Flag(			int Flag ) ;															// “Ç‚İ‚Ş“®‰æƒtƒ@ƒCƒ‹‚ª32bitƒJƒ‰[‚¾‚Á‚½ê‡AA8R8G8B8 Œ`®‚Æ‚µ‚Äˆµ‚¤‚©‚Ç‚¤‚©‚ğƒZƒbƒg‚·‚éA32bitƒJƒ‰[‚Å‚Í‚È‚¢“®‰æƒtƒ@ƒCƒ‹‚É‘Î‚µ‚Ä‚Í–³Œø( Flag  TRUE:A8R8G8B8‚Æ‚µ‚Äˆµ‚¤  FALSE:X8R8G8B8‚Æ‚µ‚Äˆµ‚¤( ƒfƒtƒHƒ‹ƒg ) )
extern	int			SetMovieUseYUVFormatSurfaceFlag(	int Flag ) ;															// ‚x‚t‚uƒtƒH[ƒ}ƒbƒg‚ÌƒT[ƒtƒFƒX‚ªg—p‚Å‚«‚éê‡‚Í‚x‚t‚uƒtƒH[ƒ}ƒbƒg‚ÌƒT[ƒtƒFƒX‚ğg—p‚·‚é‚©‚Ç‚¤‚©‚ğİ’è‚·‚é( TRUE:g—p‚·‚é( ƒfƒtƒHƒ‹ƒg ) FALSE:‚q‚f‚aƒtƒH[ƒ}ƒbƒg‚ÌƒT[ƒtƒFƒX‚ğg—p‚·‚é )
#endif // DX_NON_MOVIE

// ƒJƒƒ‰ŠÖŒWŠÖ”
extern	int			SetCameraNearFar(					float  Near, float  Far ) ;											// ƒJƒƒ‰‚Ì NearƒNƒŠƒbƒv–Ê‚Æ FarƒNƒŠƒbƒv–Ê‚Ì‹——£‚ğİ’è‚·‚é
extern	int			SetCameraNearFarD(					double Near, double Far ) ;											// ƒJƒƒ‰‚Ì NearƒNƒŠƒbƒv–Ê‚Æ FarƒNƒŠƒbƒv–Ê‚Ì‹——£‚ğİ’è‚·‚é
extern	int			SetCameraPositionAndTarget_UpVecY(  VECTOR    Position, VECTOR   Target ) ;								// ƒJƒƒ‰‚Ì‹“_A’‹“_AƒAƒbƒvƒxƒNƒgƒ‹‚ğİ’è‚·‚é( ƒAƒbƒvƒxƒNƒgƒ‹‚Í‚x²•ûŒü‚©‚ç“±‚«o‚· )
extern	int			SetCameraPositionAndTarget_UpVecYD( VECTOR_D  Position, VECTOR_D Target ) ;								// ƒJƒƒ‰‚Ì‹“_A’‹“_AƒAƒbƒvƒxƒNƒgƒ‹‚ğİ’è‚·‚é( ƒAƒbƒvƒxƒNƒgƒ‹‚Í‚x²•ûŒü‚©‚ç“±‚«o‚· )
extern	int			SetCameraPositionAndTargetAndUpVec( VECTOR    Position, VECTOR   TargetPosition, VECTOR   UpVector ) ;	// ƒJƒƒ‰‚Ì‹“_A’‹“_AƒAƒbƒvƒxƒNƒgƒ‹‚ğİ’è‚·‚é
extern	int			SetCameraPositionAndTargetAndUpVecD( VECTOR_D Position, VECTOR_D TargetPosition, VECTOR_D UpVector ) ;	// ƒJƒƒ‰‚Ì‹“_A’‹“_AƒAƒbƒvƒxƒNƒgƒ‹‚ğİ’è‚·‚é
extern	int			SetCameraPositionAndAngle(			VECTOR   Position, float  VRotate, float  HRotate, float  TRotate ) ;	// ƒJƒƒ‰‚Ì‹“_A’‹“_AƒAƒbƒvƒxƒNƒgƒ‹‚ğİ’è‚·‚é( ’‹“_‚ÆƒAƒbƒvƒxƒNƒgƒ‹‚Í‚’¼‰ñ“]Šp“xA…•½‰ñ“]Šp“xA”P‚è‰ñ“]Šp“x‚©‚ç“±‚«o‚· )
extern	int			SetCameraPositionAndAngleD(			VECTOR_D Position, double VRotate, double HRotate, double TRotate ) ;	// ƒJƒƒ‰‚Ì‹“_A’‹“_AƒAƒbƒvƒxƒNƒgƒ‹‚ğİ’è‚·‚é( ’‹“_‚ÆƒAƒbƒvƒxƒNƒgƒ‹‚Í‚’¼‰ñ“]Šp“xA…•½‰ñ“]Šp“xA”P‚è‰ñ“]Šp“x‚©‚ç“±‚«o‚· )
extern	int			SetCameraViewMatrix(				MATRIX   ViewMatrix ) ;												// ƒrƒ…[s—ñ‚ğ’¼Úİ’è‚·‚é
extern	int			SetCameraViewMatrixD(				MATRIX_D ViewMatrix ) ;												// ƒrƒ…[s—ñ‚ğ’¼Úİ’è‚·‚é
extern	int			SetCameraScreenCenter(				float x, float y ) ;												// ‰æ–Êã‚É‚¨‚¯‚éƒJƒƒ‰‚ªŒ©‚Ä‚¢‚é‰f‘œ‚Ì’†S‚ÌÀ•W‚ğİ’è‚·‚é
extern	int			SetCameraScreenCenterD(				double x, double y ) ;												// ‰æ–Êã‚É‚¨‚¯‚éƒJƒƒ‰‚ªŒ©‚Ä‚¢‚é‰f‘œ‚Ì’†S‚ÌÀ•W‚ğİ’è‚·‚é

extern	int			SetupCamera_Perspective(			float  Fov ) ;														// ‰“‹ß–@ƒJƒƒ‰‚ğƒZƒbƒgƒAƒbƒv‚·‚é
extern	int			SetupCamera_PerspectiveD(			double Fov ) ;														// ‰“‹ß–@ƒJƒƒ‰‚ğƒZƒbƒgƒAƒbƒv‚·‚é
extern	int			SetupCamera_Ortho(					float  Size ) ;														// ³Ë‰eƒJƒƒ‰‚ğƒZƒbƒgƒAƒbƒv‚·‚é
extern	int			SetupCamera_OrthoD(					double Size ) ;														// ³Ë‰eƒJƒƒ‰‚ğƒZƒbƒgƒAƒbƒv‚·‚é
extern	int			SetupCamera_ProjectionMatrix(		MATRIX   ProjectionMatrix ) ;										// Ë‰es—ñ‚ğ’¼Úİ’è‚·‚é
extern	int			SetupCamera_ProjectionMatrixD(		MATRIX_D ProjectionMatrix ) ;										// Ë‰es—ñ‚ğ’¼Úİ’è‚·‚é
extern	int			SetCameraDotAspect(					float  DotAspect ) ;												// ƒJƒƒ‰‚ÌƒhƒbƒgƒAƒXƒyƒNƒg”ä‚ğİ’è‚·‚é
extern	int			SetCameraDotAspectD(				double DotAspect ) ;												// ƒJƒƒ‰‚ÌƒhƒbƒgƒAƒXƒyƒNƒg”ä‚ğİ’è‚·‚é

extern	int			CheckCameraViewClip(				VECTOR   CheckPos ) ;													// w’è‚ÌÀ•W‚ªƒJƒƒ‰‚Ì‹ŠE‚É“ü‚Á‚Ä‚¢‚é‚©‚Ç‚¤‚©‚ğ”»’è‚·‚é( –ß‚è’l TRUE:‹ŠE‚É“ü‚Á‚Ä‚¢‚È‚¢  FALSE:‹ŠE‚É“ü‚Á‚Ä‚¢‚é )
extern	int			CheckCameraViewClipD(				VECTOR_D CheckPos ) ;													// w’è‚ÌÀ•W‚ªƒJƒƒ‰‚Ì‹ŠE‚É“ü‚Á‚Ä‚¢‚é‚©‚Ç‚¤‚©‚ğ”»’è‚·‚é( –ß‚è’l TRUE:‹ŠE‚É“ü‚Á‚Ä‚¢‚È‚¢  FALSE:‹ŠE‚É“ü‚Á‚Ä‚¢‚é )
extern	int			CheckCameraViewClip_Dir(			VECTOR   CheckPos ) ;													// w’è‚ÌÀ•W‚ªƒJƒƒ‰‚Ì‹ŠE‚É“ü‚Á‚Ä‚¢‚é‚©‚Ç‚¤‚©‚ğ”»’è‚·‚éA–ß‚è’l‚ÅŠO‚ê‚Ä‚¢‚é•ûŒü‚à’m‚é‚±‚Æ‚ª‚Å‚«‚é( –ß‚è’l 0:‹ŠE‚É“ü‚Á‚Ä‚¢‚é  0ˆÈŠO:‹ŠE‚É“ü‚Á‚Ä‚¢‚È‚¢( DX_CAMERACLIP_LEFT ‚â DX_CAMERACLIP_RIGHT ‚ª or ‰‰Z‚Å¬‡‚³‚ê‚½‚à‚ÌAand ‰‰Z‚Å•ûŒü‚ğŠm”F‚Å‚«‚é ) )
extern	int			CheckCameraViewClip_DirD(			VECTOR_D CheckPos ) ;													// w’è‚ÌÀ•W‚ªƒJƒƒ‰‚Ì‹ŠE‚É“ü‚Á‚Ä‚¢‚é‚©‚Ç‚¤‚©‚ğ”»’è‚·‚éA–ß‚è’l‚ÅŠO‚ê‚Ä‚¢‚é•ûŒü‚à’m‚é‚±‚Æ‚ª‚Å‚«‚é( –ß‚è’l 0:‹ŠE‚É“ü‚Á‚Ä‚¢‚é  0ˆÈŠO:‹ŠE‚É“ü‚Á‚Ä‚¢‚È‚¢( DX_CAMERACLIP_LEFT ‚â DX_CAMERACLIP_RIGHT ‚ª or ‰‰Z‚Å¬‡‚³‚ê‚½‚à‚ÌAand ‰‰Z‚Å•ûŒü‚ğŠm”F‚Å‚«‚é ) )
extern	int			CheckCameraViewClip_Box(			VECTOR   BoxPos1, VECTOR   BoxPos2 ) ;									// “ñ‚Â‚ÌÀ•W‚Å•\‚³‚ê‚éƒ{ƒbƒNƒX‚ªƒJƒƒ‰‚Ì‹ŠE‚É“ü‚Á‚Ä‚¢‚é‚©‚Ç‚¤‚©‚ğ”»’è‚·‚é( –ß‚è’l TRUE:‹ŠE‚É“ü‚Á‚Ä‚¢‚È‚¢  FALSE:‹ŠE‚É“ü‚Á‚Ä‚¢‚é )
extern	int			CheckCameraViewClip_BoxD(			VECTOR_D BoxPos1, VECTOR_D BoxPos2 ) ;									// “ñ‚Â‚ÌÀ•W‚Å•\‚³‚ê‚éƒ{ƒbƒNƒX‚ªƒJƒƒ‰‚Ì‹ŠE‚É“ü‚Á‚Ä‚¢‚é‚©‚Ç‚¤‚©‚ğ”»’è‚·‚é( –ß‚è’l TRUE:‹ŠE‚É“ü‚Á‚Ä‚¢‚È‚¢  FALSE:‹ŠE‚É“ü‚Á‚Ä‚¢‚é )

extern	float		GetCameraNear(						void ) ;															// ƒJƒƒ‰‚Ì Near ƒNƒŠƒbƒv–Ê‚Ì‹——£‚ğæ“¾‚·‚é
extern	double		GetCameraNearD(						void ) ;															// ƒJƒƒ‰‚Ì Near ƒNƒŠƒbƒv–Ê‚Ì‹——£‚ğæ“¾‚·‚é
extern	float		GetCameraFar(						void ) ;															// ƒJƒƒ‰‚Ì Far ƒNƒŠƒbƒv–Ê‚Ì‹——£‚ğæ“¾‚·‚é
extern	double		GetCameraFarD(						void ) ;															// ƒJƒƒ‰‚Ì Far ƒNƒŠƒbƒv–Ê‚Ì‹——£‚ğæ“¾‚·‚é

extern	VECTOR		GetCameraPosition(					void ) ;															// ƒJƒƒ‰‚ÌˆÊ’u‚ğæ“¾‚·‚é
extern	VECTOR_D	GetCameraPositionD(					void ) ;															// ƒJƒƒ‰‚ÌˆÊ’u‚ğæ“¾‚·‚é
extern	VECTOR		GetCameraTarget(					void ) ;															// ƒJƒƒ‰‚Ì’‹“_‚ğæ“¾‚·‚é
extern	VECTOR_D	GetCameraTargetD(					void ) ;															// ƒJƒƒ‰‚Ì’‹“_‚ğæ“¾‚·‚é
extern	VECTOR		GetCameraUpVector(					void ) ;															// ƒJƒƒ‰‚Ì³–Ê•ûŒü‚É‚’¼‚Èã•ûŒü‚ÌƒxƒNƒgƒ‹‚ğæ“¾‚·‚é
extern	VECTOR_D	GetCameraUpVectorD(					void ) ;															// ƒJƒƒ‰‚Ì³–Ê•ûŒü‚É‚’¼‚Èã•ûŒü‚ÌƒxƒNƒgƒ‹‚ğæ“¾‚·‚é
extern	VECTOR		GetCameraDownVector(				void ) ;															// ƒJƒƒ‰‚Ì³–Ê•ûŒü‚É‚’¼‚È‰º•ûŒü‚ÌƒxƒNƒgƒ‹‚ğæ“¾‚·‚é
extern	VECTOR_D	GetCameraDownVectorD(				void ) ;															// ƒJƒƒ‰‚Ì³–Ê•ûŒü‚É‚’¼‚È‰º•ûŒü‚ÌƒxƒNƒgƒ‹‚ğæ“¾‚·‚é
extern	VECTOR		GetCameraRightVector(				void ) ;															// ƒJƒƒ‰‚Ì³–Ê•ûŒü‚É‚’¼‚È‰E•ûŒü‚ÌƒxƒNƒgƒ‹‚ğæ“¾‚·‚é
extern	VECTOR_D	GetCameraRightVectorD(				void ) ;															// ƒJƒƒ‰‚Ì³–Ê•ûŒü‚É‚’¼‚È‰E•ûŒü‚ÌƒxƒNƒgƒ‹‚ğæ“¾‚·‚é
extern	VECTOR		GetCameraLeftVector(				void ) ;															// ƒJƒƒ‰‚Ì³–Ê•ûŒü‚É‚’¼‚È¶•ûŒü‚ÌƒxƒNƒgƒ‹‚ğæ“¾‚·‚é
extern	VECTOR_D	GetCameraLeftVectorD(				void ) ;															// ƒJƒƒ‰‚Ì³–Ê•ûŒü‚É‚’¼‚È¶•ûŒü‚ÌƒxƒNƒgƒ‹‚ğæ“¾‚·‚é
extern	VECTOR		GetCameraFrontVector(				void ) ;															// ƒJƒƒ‰‚Ì³–Ê•ûŒü‚ÌƒxƒNƒgƒ‹‚ğæ“¾‚·‚é
extern	VECTOR_D	GetCameraFrontVectorD(				void ) ;															// ƒJƒƒ‰‚Ì³–Ê•ûŒü‚ÌƒxƒNƒgƒ‹‚ğæ“¾‚·‚é
extern	VECTOR		GetCameraBackVector(				void ) ;															// ƒJƒƒ‰‚ÌŒã‚ë•ûŒü‚ÌƒxƒNƒgƒ‹‚ğæ“¾‚·‚é
extern	VECTOR_D	GetCameraBackVectorD(				void ) ;															// ƒJƒƒ‰‚ÌŒã‚ë•ûŒü‚ÌƒxƒNƒgƒ‹‚ğæ“¾‚·‚é
extern	float		GetCameraAngleHRotate(				void ) ;															// ƒJƒƒ‰‚Ì…•½•ûŒü‚ÌŒü‚«‚ğæ“¾‚·‚é
extern	double		GetCameraAngleHRotateD(				void ) ;															// ƒJƒƒ‰‚Ì…•½•ûŒü‚ÌŒü‚«‚ğæ“¾‚·‚é
extern	float		GetCameraAngleVRotate(				void ) ;															// ƒJƒƒ‰‚Ì‚’¼•ûŒü‚ÌŒü‚«‚ğæ“¾‚·‚é
extern	double		GetCameraAngleVRotateD(				void ) ;															// ƒJƒƒ‰‚Ì‚’¼•ûŒü‚ÌŒü‚«‚ğæ“¾‚·‚é
extern	float		GetCameraAngleTRotate(				void ) ;															// ƒJƒƒ‰‚ÌŒü‚«‚Ì”P‚èŠp“x‚ğæ“¾‚·‚é
extern	double		GetCameraAngleTRotateD(				void ) ;															// ƒJƒƒ‰‚ÌŒü‚«‚Ì”P‚èŠp“x‚ğæ“¾‚·‚é

extern	MATRIX		GetCameraViewMatrix(				void ) ;															// ƒrƒ…[s—ñ‚ğæ“¾‚·‚é
extern	MATRIX_D	GetCameraViewMatrixD(				void ) ;															// ƒrƒ…[s—ñ‚ğæ“¾‚·‚é
extern	MATRIX		GetCameraBillboardMatrix(			void ) ;															// ƒrƒ‹ƒ{[ƒhs—ñ‚ğæ“¾‚·‚é
extern	MATRIX_D	GetCameraBillboardMatrixD(			void ) ;															// ƒrƒ‹ƒ{[ƒhs—ñ‚ğæ“¾‚·‚é
extern	int			GetCameraScreenCenter(				float  *x, float  *y ) ;											// ‰æ–Êã‚É‚¨‚¯‚éƒJƒƒ‰‚ªŒ©‚Ä‚¢‚é‰f‘œ‚Ì’†S‚ÌÀ•W‚ğæ“¾‚·‚é
extern	int			GetCameraScreenCenterD(				double *x, double *y ) ;											// ‰æ–Êã‚É‚¨‚¯‚éƒJƒƒ‰‚ªŒ©‚Ä‚¢‚é‰f‘œ‚Ì’†S‚ÌÀ•W‚ğæ“¾‚·‚é
extern	float		GetCameraFov(						void ) ;															// ƒJƒƒ‰‚Ì‹–ìŠp‚ğæ“¾‚·‚é
extern	double		GetCameraFovD(						void ) ;															// ƒJƒƒ‰‚Ì‹–ìŠp‚ğæ“¾‚·‚é
extern	float		GetCameraSize(						void ) ;															// ƒJƒƒ‰‚Ì‹–ìƒTƒCƒY‚ğæ“¾‚·‚é
extern	double		GetCameraSizeD(						void ) ;															// ƒJƒƒ‰‚Ì‹–ìƒTƒCƒY‚ğæ“¾‚·‚é
extern	MATRIX		GetCameraProjectionMatrix(			void ) ;															// Ë‰es—ñ‚ğæ“¾‚·‚é
extern	MATRIX_D	GetCameraProjectionMatrixD(			void ) ;															// Ë‰es—ñ‚ğæ“¾‚·‚é
extern	float		GetCameraDotAspect(					void ) ;															// ƒJƒƒ‰‚ÌƒhƒbƒgƒAƒXƒyƒNƒg”ä‚ğ“¾‚é
extern	double		GetCameraDotAspectD(				void ) ;															// ƒJƒƒ‰‚ÌƒhƒbƒgƒAƒXƒyƒNƒg”ä‚ğ“¾‚é
extern	MATRIX		GetCameraViewportMatrix(			void ) ;															// ƒrƒ…[ƒ|[ƒgs—ñ‚ğæ“¾‚·‚é
extern	MATRIX_D	GetCameraViewportMatrixD(			void ) ;															// ƒrƒ…[ƒ|[ƒgs—ñ‚ğæ“¾‚·‚é
extern	MATRIX		GetCameraAPIViewportMatrix(			void ) ;															// Direct3D‚Å©“®“K—p‚³‚ê‚éƒrƒ…[ƒ|[ƒgs—ñ‚ğæ“¾‚·‚é
extern	MATRIX_D	GetCameraAPIViewportMatrixD(		void ) ;															// Direct3D‚Å©“®“K—p‚³‚ê‚éƒrƒ…[ƒ|[ƒgs—ñ‚ğæ“¾‚·‚é

// ƒ‰ƒCƒgŠÖŒWŠÖ”
extern	int			SetUseLighting(				int Flag ) ;																// ƒ‰ƒCƒeƒBƒ“ƒO‚ğg—p‚·‚é‚©‚Ç‚¤‚©‚ğİ’è‚·‚é
extern	int			SetMaterialUseVertDifColor( int UseFlag ) ;																// ‚R‚c•`‰æ‚Ìƒ‰ƒCƒeƒBƒ“ƒOŒvZ‚Å’¸“_ƒJƒ‰[‚ÌƒfƒBƒtƒ…[ƒYƒJƒ‰[‚ğg—p‚·‚é‚©‚Ç‚¤‚©‚ğİ’è‚·‚é
extern	int			SetMaterialUseVertSpcColor( int UseFlag ) ;																// ‚R‚c•`‰æ‚Ìƒ‰ƒCƒeƒBƒ“ƒOŒvZ‚Å’¸“_ƒJƒ‰[‚ÌƒXƒyƒLƒ…ƒ‰ƒJƒ‰[‚ğg—p‚·‚é‚©‚Ç‚¤‚©‚ğİ’è‚·‚é
extern	int			SetMaterialParam(			MATERIALPARAM Material ) ;													// ‚R‚c•`‰æ‚Ìƒ‰ƒCƒeƒBƒ“ƒOŒvZ‚Åg—p‚·‚éƒ}ƒeƒŠƒAƒ‹ƒpƒ‰ƒ[ƒ^‚ğİ’è‚·‚é
extern	int			SetUseSpecular(				int UseFlag ) ;																// ‚R‚c•`‰æ‚ÉƒXƒyƒLƒ…ƒ‰‚ğg—p‚·‚é‚©‚Ç‚¤‚©‚ğİ’è‚·‚é
extern	int			SetGlobalAmbientLight(		COLOR_F Color ) ;															// ƒOƒ[ƒoƒ‹ƒAƒ“ƒrƒGƒ“ƒgƒ‰ƒCƒgƒJƒ‰[‚ğİ’è‚·‚é

extern	int			ChangeLightTypeDir(			VECTOR Direction ) ;														// ƒfƒtƒHƒ‹ƒgƒ‰ƒCƒg‚Ìƒ^ƒCƒv‚ğƒfƒBƒŒƒNƒVƒ‡ƒiƒ‹ƒ‰ƒCƒg‚É‚·‚é
extern	int			ChangeLightTypeSpot(		VECTOR Position, VECTOR Direction, float OutAngle, float InAngle, float Range, float Atten0, float Atten1, float Atten2 ) ;	// ƒfƒtƒHƒ‹ƒgƒ‰ƒCƒg‚Ìƒ^ƒCƒv‚ğƒXƒ|ƒbƒgƒ‰ƒCƒg‚É‚·‚é
extern	int			ChangeLightTypePoint(		VECTOR Position, float Range, float Atten0, float Atten1, float Atten2 ) ;	// ƒfƒtƒHƒ‹ƒgƒ‰ƒCƒg‚Ìƒ^ƒCƒv‚ğƒ|ƒCƒ“ƒgƒ‰ƒCƒg‚É‚·‚é
extern	int			GetLightType(				void ) ;																	// ƒfƒtƒHƒ‹ƒgƒ‰ƒCƒg‚Ìƒ^ƒCƒv‚ğæ“¾‚·‚é( –ß‚è’l‚Í DX_LIGHTTYPE_DIRECTIONAL “™ )
extern	int			SetLightEnable(				int EnableFlag ) ;															// ƒfƒtƒHƒ‹ƒgƒ‰ƒCƒg‚ğg—p‚·‚é‚©‚Ç‚¤‚©‚ğİ’è‚·‚é
extern	int			GetLightEnable(				void ) ;																	// ƒfƒtƒHƒ‹ƒgƒ‰ƒCƒg‚ğg—p‚·‚é‚©‚Ç‚¤‚©‚ğæ“¾‚·‚é( –ß‚è’l@TRUE:—LŒø  FALSE:–³Œø )
extern	int			SetLightDifColor(			COLOR_F Color ) ;															// ƒfƒtƒHƒ‹ƒgƒ‰ƒCƒg‚ÌƒfƒBƒtƒ…[ƒYƒJƒ‰[‚ğİ’è‚·‚é
extern	COLOR_F		GetLightDifColor(			void ) ;																	// ƒfƒtƒHƒ‹ƒgƒ‰ƒCƒg‚ÌƒfƒBƒtƒ…[ƒYƒJƒ‰[‚ğæ“¾‚·‚é
extern	int			SetLightSpcColor(			COLOR_F Color ) ;															// ƒfƒtƒHƒ‹ƒgƒ‰ƒCƒg‚ÌƒXƒyƒLƒ…ƒ‰ƒJƒ‰[‚ğİ’è‚·‚é
extern	COLOR_F		GetLightSpcColor(			void ) ;																	// ƒfƒtƒHƒ‹ƒgƒ‰ƒCƒg‚ÌƒXƒyƒLƒ…ƒ‰ƒJƒ‰[‚ğæ“¾‚·‚é
extern	int			SetLightAmbColor(			COLOR_F Color ) ;															// ƒfƒtƒHƒ‹ƒgƒ‰ƒCƒg‚ÌƒAƒ“ƒrƒGƒ“ƒgƒJƒ‰[‚ğİ’è‚·‚é
extern	COLOR_F		GetLightAmbColor(			void ) ;																	// ƒfƒtƒHƒ‹ƒgƒ‰ƒCƒg‚ÌƒAƒ“ƒrƒGƒ“ƒgƒJƒ‰[‚ğæ“¾‚·‚é
extern	int			SetLightDirection(			VECTOR Direction ) ;														// ƒfƒtƒHƒ‹ƒgƒ‰ƒCƒg‚Ì•ûŒü‚ğİ’è‚·‚é
extern	VECTOR		GetLightDirection(			void ) ;																	// ƒfƒtƒHƒ‹ƒgƒ‰ƒCƒg‚Ì•ûŒü‚ğæ“¾‚·‚é
extern	int			SetLightPosition(			VECTOR Position ) ;															// ƒfƒtƒHƒ‹ƒgƒ‰ƒCƒg‚ÌˆÊ’u‚ğİ’è‚·‚é
extern	VECTOR		GetLightPosition(			void ) ;																	// ƒfƒtƒHƒ‹ƒgƒ‰ƒCƒg‚ÌˆÊ’u‚ğæ“¾‚·‚é
extern	int			SetLightRangeAtten(			float Range, float Atten0, float Atten1, float Atten2 ) ;					// ƒfƒtƒHƒ‹ƒgƒ‰ƒCƒg‚Ì‹——£Œ¸Šƒpƒ‰ƒ[ƒ^‚ğİ’è‚·‚é( —LŒø‹——£A‹——£Œ¸ŠŒW”‚OA‚PA‚Q )
extern	int			GetLightRangeAtten(			float *Range, float *Atten0, float *Atten1, float *Atten2 )	;				// ƒfƒtƒHƒ‹ƒgƒ‰ƒCƒg‚Ì‹——£Œ¸Šƒpƒ‰ƒ[ƒ^‚ğæ“¾‚·‚é( —LŒø‹——£A‹——£Œ¸ŠŒW”‚OA‚PA‚Q )
extern	int			SetLightAngle(				float OutAngle, float InAngle ) ;											// ƒfƒtƒHƒ‹ƒgƒ‰ƒCƒg‚ÌƒXƒ|ƒbƒgƒ‰ƒCƒg‚Ìƒpƒ‰ƒ[ƒ^‚ğİ’è‚·‚é( ŠO•”ƒR[ƒ“Šp“xA“à•”ƒR[ƒ“Šp“x )
extern	int			GetLightAngle(				float *OutAngle, float *InAngle ) ;											// ƒfƒtƒHƒ‹ƒgƒ‰ƒCƒg‚ÌƒXƒ|ƒbƒgƒ‰ƒCƒg‚Ìƒpƒ‰ƒ[ƒ^‚ğæ“¾‚·‚é( ŠO•”ƒR[ƒ“Šp“xA“à•”ƒR[ƒ“Šp“x )
extern	int			SetLightUseShadowMap(		int SmSlotIndex, int UseFlag ) ;											// ƒfƒtƒHƒ‹ƒgƒ‰ƒCƒg‚É SetUseShadowMap ‚Åw’è‚µ‚½ƒVƒƒƒhƒEƒ}ƒbƒv‚ğ“K—p‚·‚é‚©‚Ç‚¤‚©‚ğİ’è‚·‚é( SmSlotIndex:ƒVƒƒƒhƒEƒ}ƒbƒvƒXƒƒbƒg( SetUseShadowMap ‚Ì‘æˆêˆø”‚Éİ’è‚·‚é’l ) UseFlag:“K—p‚É‚·‚é‚©‚Ç‚¤‚©‚Ìƒtƒ‰ƒO( TRUE:“K—p‚·‚é( ƒfƒtƒHƒ‹ƒg )  FALSE:“K—p‚µ‚È‚¢ ) )

extern	int			CreateDirLightHandle(       VECTOR Direction ) ;														// ƒfƒBƒŒƒNƒVƒ‡ƒiƒ‹ƒ‰ƒCƒgƒnƒ“ƒhƒ‹‚ğì¬‚·‚é
extern	int			CreateSpotLightHandle(      VECTOR Position, VECTOR Direction, float OutAngle, float InAngle, float Range, float Atten0, float Atten1, float Atten2 ) ;	// ƒXƒ|ƒbƒgƒ‰ƒCƒgƒnƒ“ƒhƒ‹‚ğì¬‚·‚é
extern	int			CreatePointLightHandle(     VECTOR Position, float Range, float Atten0, float Atten1, float Atten2 ) ;	// ƒ|ƒCƒ“ƒgƒ‰ƒCƒgƒnƒ“ƒhƒ‹‚ğì¬‚·‚é
extern	int			DeleteLightHandle(          int LHandle ) ;																// ƒ‰ƒCƒgƒnƒ“ƒhƒ‹‚ğíœ‚·‚é
extern	int			DeleteLightHandleAll(       void ) ;																	// ƒ‰ƒCƒgƒnƒ“ƒhƒ‹‚ğ‘S‚Äíœ‚·‚é
extern	int			SetLightTypeHandle(         int LHandle, int LightType ) ;												// ƒ‰ƒCƒgƒnƒ“ƒhƒ‹‚Ìƒ‰ƒCƒg‚Ìƒ^ƒCƒv‚ğ•ÏX‚·‚é( DX_LIGHTTYPE_DIRECTIONAL “™ )
extern	int			SetLightEnableHandle(       int LHandle, int EnableFlag ) ;												// ƒ‰ƒCƒgƒnƒ“ƒhƒ‹‚Ìƒ‰ƒCƒgŒø‰Ê‚Ì—LŒøA–³Œø‚ğİ’è‚·‚é( TRUE:—LŒø  FALSE:–³Œø )
extern	int			SetLightDifColorHandle(     int LHandle, COLOR_F Color ) ;												// ƒ‰ƒCƒgƒnƒ“ƒhƒ‹‚Ìƒ‰ƒCƒg‚ÌƒfƒBƒtƒ…[ƒYƒJƒ‰[‚ğİ’è‚·‚é
extern	int			SetLightSpcColorHandle(     int LHandle, COLOR_F Color ) ;												// ƒ‰ƒCƒgƒnƒ“ƒhƒ‹‚Ìƒ‰ƒCƒg‚ÌƒXƒyƒLƒ…ƒ‰ƒJƒ‰[‚ğİ’è‚·‚é
extern	int			SetLightAmbColorHandle(     int LHandle, COLOR_F Color ) ;												// ƒ‰ƒCƒgƒnƒ“ƒhƒ‹‚Ìƒ‰ƒCƒg‚ÌƒAƒ“ƒrƒGƒ“ƒgƒJƒ‰[‚ğİ’è‚·‚é
extern	int			SetLightDirectionHandle(    int LHandle, VECTOR Direction ) ;											// ƒ‰ƒCƒgƒnƒ“ƒhƒ‹‚Ìƒ‰ƒCƒg‚Ì•ûŒü‚ğİ’è‚·‚é
extern	int			SetLightPositionHandle(     int LHandle, VECTOR Position ) ;											// ƒ‰ƒCƒgƒnƒ“ƒhƒ‹‚Ìƒ‰ƒCƒg‚ÌˆÊ’u‚ğİ’è‚·‚é
extern	int			SetLightRangeAttenHandle(   int LHandle, float Range, float Atten0, float Atten1, float Atten2 ) ;		// ƒ‰ƒCƒgƒnƒ“ƒhƒ‹‚Ìƒ‰ƒCƒg‚Ì‹——£Œ¸Šƒpƒ‰ƒ[ƒ^‚ğİ’è‚·‚é( —LŒø‹——£A‹——£Œ¸ŠŒW”‚OA‚PA‚Q )
extern	int			SetLightAngleHandle(        int LHandle, float OutAngle, float InAngle ) ;								// ƒ‰ƒCƒgƒnƒ“ƒhƒ‹‚Ìƒ‰ƒCƒg‚ÌƒXƒ|ƒbƒgƒ‰ƒCƒg‚Ìƒpƒ‰ƒ[ƒ^‚ğİ’è‚·‚é( ŠO•”ƒR[ƒ“Šp“xA“à•”ƒR[ƒ“Šp“x )
extern	int			SetLightUseShadowMapHandle(	int LHandle, int SmSlotIndex, int UseFlag ) ;								// ƒ‰ƒCƒgƒnƒ“ƒhƒ‹‚Ìƒ‰ƒCƒg‚É SetUseShadowMap ‚Åw’è‚µ‚½ƒVƒƒƒhƒEƒ}ƒbƒv‚ğ“K—p‚·‚é‚©‚Ç‚¤‚©‚ğİ’è‚·‚é( SmSlotIndex:ƒVƒƒƒhƒEƒ}ƒbƒvƒXƒƒbƒg( SetUseShadowMap ‚Ì‘æˆêˆø”‚Éİ’è‚·‚é’l ) UseFlag:“K—p‚É‚·‚é‚©‚Ç‚¤‚©‚Ìƒtƒ‰ƒO( TRUE:“K—p‚·‚é( ƒfƒtƒHƒ‹ƒg )  FALSE:“K—p‚µ‚È‚¢ ) )
extern	int			GetLightTypeHandle(         int LHandle ) ;																// ƒ‰ƒCƒgƒnƒ“ƒhƒ‹‚Ìƒ‰ƒCƒg‚Ìƒ^ƒCƒv‚ğæ“¾‚·‚é( –ß‚è’l‚Í DX_LIGHTTYPE_DIRECTIONAL “™ )
extern	int			GetLightEnableHandle(       int LHandle ) ;																// ƒ‰ƒCƒgƒnƒ“ƒhƒ‹‚Ìƒ‰ƒCƒgŒø‰Ê‚Ì—LŒøA–³Œø‚ğæ“¾‚·‚é( TRUE:—LŒø  FALSE:–³Œø )
extern	COLOR_F		GetLightDifColorHandle(     int LHandle ) ;																// ƒ‰ƒCƒgƒnƒ“ƒhƒ‹‚Ìƒ‰ƒCƒg‚ÌƒfƒBƒtƒ…[ƒYƒJƒ‰[‚ğæ“¾‚·‚é
extern	COLOR_F		GetLightSpcColorHandle(     int LHandle ) ;																// ƒ‰ƒCƒgƒnƒ“ƒhƒ‹‚Ìƒ‰ƒCƒg‚ÌƒXƒyƒLƒ…ƒ‰ƒJƒ‰[‚ğæ“¾‚·‚é
extern	COLOR_F		GetLightAmbColorHandle(     int LHandle ) ;																// ƒ‰ƒCƒgƒnƒ“ƒhƒ‹‚Ìƒ‰ƒCƒg‚ÌƒAƒ“ƒrƒGƒ“ƒgƒJƒ‰[‚ğæ“¾‚·‚é
extern	VECTOR		GetLightDirectionHandle(    int LHandle ) ;																// ƒ‰ƒCƒgƒnƒ“ƒhƒ‹‚Ìƒ‰ƒCƒg‚Ì•ûŒü‚ğæ“¾‚·‚é
extern	VECTOR		GetLightPositionHandle(     int LHandle ) ;																// ƒ‰ƒCƒgƒnƒ“ƒhƒ‹‚Ìƒ‰ƒCƒg‚ÌˆÊ’u‚ğæ“¾‚·‚é
extern	int			GetLightRangeAttenHandle(   int LHandle, float *Range, float *Atten0, float *Atten1, float *Atten2 ) ;	// ƒ‰ƒCƒgƒnƒ“ƒhƒ‹‚Ìƒ‰ƒCƒg‚Ì‹——£Œ¸Šƒpƒ‰ƒ[ƒ^‚ğæ“¾‚·‚é( —LŒø‹——£A‹——£Œ¸ŠŒW”‚OA‚PA‚Q )
extern	int			GetLightAngleHandle(        int LHandle, float *OutAngle, float *InAngle ) ;							// ƒ‰ƒCƒgƒnƒ“ƒhƒ‹‚Ìƒ‰ƒCƒg‚ÌƒXƒ|ƒbƒgƒ‰ƒCƒg‚Ìƒpƒ‰ƒ[ƒ^‚ğæ“¾‚·‚é( ŠO•”ƒR[ƒ“Šp“xA“à•”ƒR[ƒ“Šp“x )

extern	int			GetEnableLightHandleNum(	void ) ;																	// —LŒø‚É‚È‚Á‚Ä‚¢‚éƒ‰ƒCƒgƒnƒ“ƒhƒ‹‚Ì”‚ğæ“¾‚·‚é
extern	int			GetEnableLightHandle(		int Index ) ;																// —LŒø‚É‚È‚Á‚Ä‚¢‚éƒ‰ƒCƒgƒnƒ“ƒhƒ‹‚ğæ“¾‚·‚é

// Fî•ñæ“¾—pŠÖ”
extern	int			GetTexFormatIndex(			const IMAGEFORMATDESC *Format ) ;																									// ƒeƒNƒXƒ`ƒƒƒtƒH[ƒ}ƒbƒg‚ÌƒCƒ“ƒfƒbƒNƒX‚ğ“¾‚é








// DxMask.cpp ŠÖ”ƒvƒƒgƒ^ƒCƒvéŒ¾

#ifndef DX_NON_MASK

// ƒ}ƒXƒNŠÖŒW 
extern	int			CreateMaskScreen(				void ) ;																						// ƒ}ƒXƒNƒXƒNƒŠ[ƒ“‚ğì¬‚·‚é
extern	int			DeleteMaskScreen(				void ) ;																						// ƒ}ƒXƒNƒXƒNƒŠ[ƒ“‚ğíœ‚·‚é
extern	int			DrawMaskToDirectData(			int x, int y, int Width, int Height, const void *MaskData , int TransMode ) ;					// ƒ}ƒXƒNƒXƒNƒŠ[ƒ“‚Éƒƒ‚ƒŠã‚Ìƒrƒbƒgƒ}ƒbƒvƒf[ƒ^‚ğ“]‘—‚·‚é( MaskData ‚Í 1byte ‚Å 1dot •\‚·‚Pƒ‰ƒCƒ“‚ ‚½‚è Width byte ‚Ìƒf[ƒ^”z—ñ‚Ìæ“ªƒAƒhƒŒƒX )
extern	int			DrawFillMaskToDirectData(		int x1, int y1, int x2, int y2,  int Width, int Height, const void *MaskData ) ;				// ƒ}ƒXƒNƒXƒNƒŠ[ƒ“‚Éƒƒ‚ƒŠã‚Ìƒrƒbƒgƒ}ƒbƒvƒf[ƒ^‚Åw’è‹éŒ`“à‚ğ“h‚è‚Â‚Ô‚·‚æ‚¤‚É“]‘—‚·‚é

extern	int			SetUseMaskScreenFlag(			int ValidFlag ) ;																				// ƒ}ƒXƒNƒXƒNƒŠ[ƒ“‚ğg—p‚·‚é‚©‚Ç‚¤‚©‚ğİ’è‚·‚é( ValidFlag:g—p‚·‚é‚©‚Ç‚¤‚©( TRUE:g—p‚·‚é  FALSE:g—p‚µ‚È‚¢( ƒfƒtƒHƒ‹ƒg ) )
extern	int			GetUseMaskScreenFlag(			void ) ;																						// ƒ}ƒXƒNƒXƒNƒŠ[ƒ“‚ğg—p‚·‚é‚©‚Ç‚¤‚©‚ğæ“¾‚·‚é
extern	int			FillMaskScreen(					int Flag ) ;																					// ƒ}ƒXƒNƒXƒNƒŠ[ƒ“‚ğw’è‚ÌF‚Å“h‚è‚Â‚Ô‚·
extern	int			SetMaskScreenGraph(				int GraphHandle ) ;																				// ƒ}ƒXƒNƒXƒNƒŠ[ƒ“‚Æ‚µ‚Äg—p‚·‚éƒOƒ‰ƒtƒBƒbƒN‚Ìƒnƒ“ƒhƒ‹‚ğİ’è‚·‚éA-1‚ğ“n‚·‚Æ‰ğœ( ˆø”‚Å“n‚·ƒOƒ‰ƒtƒBƒbƒNƒnƒ“ƒhƒ‹‚Í MakeScreen ‚Åì¬‚µ‚½uƒAƒ‹ƒtƒ@ƒ`ƒƒƒ“ƒlƒ‹•t‚«‚Ì•`‰æ‘ÎÛ‚É‚Å‚«‚éƒOƒ‰ƒtƒBƒbƒNƒnƒ“ƒhƒ‹v‚Å‚ ‚é•K—v‚ª‚ ‚è‚Ü‚·( ƒAƒ‹ƒtƒ@ƒ`ƒƒƒ“ƒlƒ‹‚ªƒ}ƒXƒN‚Ég—p‚³‚ê‚Ü‚· ) )
extern	int			SetMaskScreenGraphUseChannel(	int UseChannel /* DX_MASKGRAPH_CH_A “™ */ ) ;													// ƒ}ƒXƒNƒXƒNƒŠ[ƒ“‚Æ‚µ‚Äg—p‚·‚éƒOƒ‰ƒtƒBƒbƒN‚ÌA‚Ç‚Ìƒ`ƒƒƒ“ƒlƒ‹‚ğƒ}ƒXƒN‚Æ‚µ‚Äg—p‚·‚é‚©‚ğİ’è‚·‚é( ƒfƒtƒHƒ‹ƒg‚Í DX_MASKGRAPH_CH_AA ®ADX_MASKGRAPH_CH_AˆÈŠO‚ğg—p‚·‚éê‡‚ÍƒOƒ‰ƒtƒBƒbƒNƒXƒfƒoƒCƒX‚ªƒVƒF[ƒ_[ƒ‚ƒfƒ‹2.0ˆÈ~‚É‘Î‰‚µ‚Ä‚¢‚é•K—v‚ª‚ ‚è‚Ü‚· )

extern	int			InitMask(						void ) ;																						// ƒ}ƒXƒNƒnƒ“ƒhƒ‹‚ğ‚·‚×‚Äíœ‚·‚é
extern	int			MakeMask(						int Width, int Height ) ;																		// ƒ}ƒXƒNƒnƒ“ƒhƒ‹‚ğì¬‚·‚é
extern	int			GetMaskSize(					int *WidthBuf, int *HeightBuf, int MaskHandle ) ;												// ƒ}ƒXƒNƒnƒ“ƒhƒ‹‚ª‚Âƒ}ƒXƒNƒCƒ[ƒW‚ÌƒTƒCƒY‚ğæ“¾‚·‚é
extern	int			SetDataToMask(					int Width, int Height, const void *MaskData, int MaskHandle ) ;									// ƒ}ƒXƒNƒnƒ“ƒhƒ‹‚Éƒrƒbƒgƒ}ƒbƒvƒCƒ[ƒW‚ğ“]‘—‚·‚é
extern	int			DeleteMask(						int MaskHandle ) ;																				// ƒ}ƒXƒNƒnƒ“ƒhƒ‹‚ğíœ‚·‚é
extern	int			GraphImageBltToMask(			const BASEIMAGE *BaseImage, int ImageX, int ImageY, int MaskHandle ) ;							// ƒ}ƒXƒNƒnƒ“ƒhƒ‹‚ÉBASEIMAGEƒf[ƒ^‚ğ“]‘—‚·‚é
extern	int			LoadMask(						const TCHAR *FileName ) ;																		// ‰æ‘œƒtƒ@ƒCƒ‹‚ğ“Ç‚İ‚İƒ}ƒXƒNƒnƒ“ƒhƒ‹‚ğì¬‚·‚é
extern	int			LoadDivMask(					const TCHAR *FileName, int AllNum, int XNum, int YNum, int XSize, int YSize, int *HandleArray ) ;	// ‰æ‘œƒtƒ@ƒCƒ‹‚ğ•ªŠ„“Ç‚İ‚İ‚µ‚Äƒ}ƒXƒNƒnƒ“ƒhƒ‹‚ğì¬‚·‚é
extern	int			CreateMaskFromMem(				const void *FileImage, int FileImageSize ) ;																		// ƒƒ‚ƒŠã‚É‚ ‚é‰æ‘œƒtƒ@ƒCƒ‹ƒCƒ[ƒW‚ğ“Ç‚İ‚İƒ}ƒXƒNƒnƒ“ƒhƒ‹‚ğì¬‚·‚é
extern	int			CreateDivMaskFromMem(			const void *FileImage, int FileImageSize, int AllNum, int XNum, int YNum, int XSize, int YSize, int *HandleArray ) ;	// ƒƒ‚ƒŠã‚É‚ ‚é‰æ‘œƒtƒ@ƒCƒ‹ƒCƒ[ƒW‚ğ•ªŠ„“Ç‚İ‚İ‚µ‚Äƒ}ƒXƒNƒnƒ“ƒhƒ‹‚ğì¬‚·‚é
extern	int			DrawMask(						int x, int y, int MaskHandle, int TransMode ) ;													// ƒ}ƒXƒNƒXƒNƒŠ[ƒ“‚Éƒ}ƒXƒNƒnƒ“ƒhƒ‹‚Ì‚Âƒ}ƒXƒNƒCƒ[ƒW‚ğ‘‚«‚Ş
#ifndef DX_NON_FONT
extern	int			DrawFormatStringMask(			int x, int y, int Flag,                 const TCHAR *FormatString, ... ) ;						// ‘®w’è‚ ‚è‚Ì•¶š—ñ‚ğƒ}ƒXƒNƒXƒNƒŠ[ƒ“‚É•`‰æ‚·‚é
extern	int			DrawFormatStringMaskToHandle(	int x, int y, int Flag, int FontHandle, const TCHAR *FormatString, ... ) ;						// ‘®w’è‚ ‚è‚Ì•¶š—ñ‚ğƒ}ƒXƒNƒXƒNƒŠ[ƒ“‚É•`‰æ‚·‚é( ƒtƒHƒ“ƒgƒnƒ“ƒhƒ‹w’è”Å )( SetFontCacheToTextureFlag( FALSE ) ; ‚É‚µ‚Äì¬‚µ‚½ƒtƒHƒ“ƒgƒnƒ“ƒhƒ‹‚Ì‚İg—p‰Â”\ )
extern	int			DrawStringMask(					int x, int y, int Flag,                 const TCHAR *String ) ;									// •¶š—ñ‚ğƒ}ƒXƒNƒXƒNƒŠ[ƒ“‚É•`‰æ‚·‚é
extern	int			DrawStringMaskToHandle(			int x, int y, int Flag, int FontHandle, const TCHAR *String ) ;									// •¶š—ñ‚ğƒ}ƒXƒNƒXƒNƒŠ[ƒ“‚É•`‰æ‚·‚é( ƒtƒHƒ“ƒgƒnƒ“ƒhƒ‹w’è”Å )( SetFontCacheToTextureFlag( FALSE ) ; ‚É‚µ‚Äì¬‚µ‚½ƒtƒHƒ“ƒgƒnƒ“ƒhƒ‹‚Ì‚İg—p‰Â”\ )
#endif // DX_NON_FONT
extern	int			DrawFillMask(					int x1, int y1, int x2, int y2, int MaskHandle ) ;												// ƒ}ƒXƒNƒnƒ“ƒhƒ‹‚ª‚Âƒ}ƒXƒNƒCƒ[ƒW‚ğƒ}ƒXƒNƒXƒNƒŠ[ƒ“‚¢‚Á‚Ï‚¢‚É•`‰æ‚·‚é( ƒ^ƒCƒ‹ó‚É•À‚×‚é )
extern	int			SetMaskReverseEffectFlag(		int ReverseFlag ) ;																				// ƒ}ƒXƒNƒCƒ[ƒW“à‚Ì”’l‚É‘Î‚·‚éŒø‰Ê‚ğ‹t“]‚³‚¹‚é( ‹Œƒo[ƒWƒ‡ƒ“‚Æ‚ÌŒİŠ·«‚Ìˆ×‚Ì‹@”\ )

extern 	int			GetMaskScreenData(				int x1, int y1, int x2, int y2, int MaskHandle ) ;												// ƒ}ƒXƒNƒXƒNƒŠ[ƒ“‚Ìw’è‹éŒ`•”•ª‚ğƒ}ƒXƒNƒnƒ“ƒhƒ‹‚É“]‘—‚·‚é
extern	int			GetMaskUseFlag(					void ) ;																						// ƒ}ƒXƒNƒXƒNƒŠ[ƒ“‚ğg—p‚·‚éİ’è‚É‚È‚Á‚Ä‚¢‚é‚©‚Ç‚¤‚©‚ğæ“¾‚·‚é

#endif // DX_NON_MASK

#endif // DX_NOTUSE_DRAWFUNCTION















// DxFont.cpp ŠÖ”ƒvƒƒgƒ^ƒCƒvéŒ¾

#ifndef DX_NON_FONT

// ƒtƒHƒ“ƒgA•¶š—ñ•`‰æŠÖŒWŠÖ”
extern	int			EnumFontName(                           TCHAR   *NameBuffer, int NameBufferNum, int JapanOnlyFlag = TRUE ) ;													// g—p‰Â”\‚ÈƒtƒHƒ“ƒg‚Ì–¼‘O‚ğ—ñ‹“‚·‚é( NameBuffer ‚É 64ƒoƒCƒg‹æØ‚è‚Å–¼‘O‚ªŠi”[‚³‚ê‚Ü‚· )
extern	int			EnumFontNameEx(                         TCHAR   *NameBuffer, int NameBufferNum,                              int CharSet = -1 /* DX_CHARSET_DEFAULT “™ */ ) ;	// g—p‰Â”\‚ÈƒtƒHƒ“ƒg‚Ì–¼‘O‚ğ—ñ‹“‚·‚é( NameBuffer ‚É 64ƒoƒCƒg‹æØ‚è‚Å–¼‘O‚ªŠi”[‚³‚ê‚Ü‚· )( •¶šƒZƒbƒgw’è”Å )
extern	int			EnumFontNameEx2(						TCHAR   *NameBuffer, int NameBufferNum, const TCHAR   *EnumFontName, int CharSet = -1 /* DX_CHARSET_DEFAULT “™ */ ) ;	// w’è‚ÌƒtƒHƒ“ƒg–¼‚ÌƒtƒHƒ“ƒg‚ğ—ñ‹“‚·‚é
extern	int			CheckFontName(							const TCHAR *FontName, int CharSet = -1 /* DX_CHARSET_DEFAULT “™ */ ) ;												// w’è‚ÌƒtƒHƒ“ƒg–¼‚ÌƒtƒHƒ“ƒg‚ª‘¶İ‚·‚é‚©‚Ç‚¤‚©‚ğƒ`ƒFƒbƒN‚·‚é( –ß‚è’l  TRUE:‘¶İ‚·‚é  FALSE:‘¶İ‚µ‚È‚¢ )

extern	int			InitFontToHandle(                       void ) ;																						// ‘S‚Ä‚ÌƒtƒHƒ“ƒgƒnƒ“ƒhƒ‹‚ğíœ‚·‚é

extern	int			CreateFontToHandle(                     const TCHAR *FontName, int Size, int Thick, int FontType = -1 , int CharSet = -1 , int EdgeSize = -1 , int Italic = FALSE , int Handle = -1 ) ;		// ƒtƒHƒ“ƒgƒnƒ“ƒhƒ‹‚ğì¬‚·‚é
extern	int			LoadFontDataToHandle(					const TCHAR *FileName,                            int EdgeSize = 0 ) ;							// ƒtƒHƒ“ƒgƒf[ƒ^ƒtƒ@ƒCƒ‹‚©‚çƒtƒHƒ“ƒgƒnƒ“ƒhƒ‹‚ğì¬‚·‚é
extern	int			LoadFontDataFromMemToHandle(			const void *FontDataImage, int FontDataImageSize, int EdgeSize = 0 ) ;							// ƒƒ‚ƒŠã‚ÌƒtƒHƒ“ƒgƒf[ƒ^ƒtƒ@ƒCƒ‹ƒCƒ[ƒW‚©‚çƒtƒHƒ“ƒgƒnƒ“ƒhƒ‹‚ğì¬‚·‚é
extern	int			SetFontSpaceToHandle(                   int Pixel, int FontHandle ) ;																	// ƒtƒHƒ“ƒgƒnƒ“ƒhƒ‹‚ÌšŠÔ‚ğ•ÏX‚·‚é
extern	int			SetFontLineSpaceToHandle(               int Pixel, int FontHandle ) ;																	// ƒtƒHƒ“ƒgƒnƒ“ƒhƒ‹‚ÌsŠÔ‚ğ•ÏX‚·‚é
extern	int			SetFontCharCodeFormatToHandle(			int CharCodeFormat /* DX_CHARCODEFORMAT_SHIFTJIS “™ */ , int FontHandle ) ;						// w’è‚ÌƒtƒHƒ“ƒgƒnƒ“ƒhƒ‹‚ğg—p‚·‚éŠÖ”‚Ìˆø”‚É“n‚·•¶š—ñ‚Ì•¶šƒR[ƒhŒ`®‚ğİ’è‚·‚é( UNICODE”Å‚Å‚Í–³Œø )
extern	int			DeleteFontToHandle(                     int FontHandle ) ;																				// ƒtƒHƒ“ƒgƒnƒ“ƒhƒ‹‚ğíœ‚·‚é
extern	int			SetFontLostFlag(                        int FontHandle, int *LostFlag ) ;																// ƒtƒHƒ“ƒgƒnƒ“ƒhƒ‹‚ğíœ‚µ‚½Û‚É TRUE ‚ğ‘ã“ü‚·‚é•Ï”‚ÌƒAƒhƒŒƒX‚ğİ’è‚·‚é
extern	int			AddFontImageToHandle(					int FontHandle, const TCHAR *Char, int GrHandle, int DrawX, int DrawY, int AddX ) ;				// w’è‚Ì•¶š‚Ì‘ã‚í‚è‚É•`‰æ‚·‚éƒOƒ‰ƒtƒBƒbƒNƒnƒ“ƒhƒ‹‚ğ“o˜^‚·‚é
extern	int			SubFontImageToHandle(					int FontHandle, const TCHAR *Char ) ;															// w’è‚Ì•¶š‚Ì‘ã‚í‚è‚É•`‰æ‚·‚éƒOƒ‰ƒtƒBƒbƒNƒnƒ“ƒhƒ‹‚Ì“o˜^‚ğ‰ğœ‚·‚é
extern	int			AddSubstitutionFontToHandle(			int FontHandle, int SubstitutionFontHandle, int DrawX, int DrawY ) ;							// ‘ã‘ÖƒtƒHƒ“ƒgƒnƒ“ƒhƒ‹( FontHandle ‚É–³‚¢•¶š‚ğ•`‰æ‚µ‚æ‚¤‚Æ‚µ‚½‚Æ‚«‚É‘ã‚í‚è‚Ég—p‚³‚ê‚éƒtƒHƒ“ƒgƒnƒ“ƒhƒ‹ )‚ğ“o˜^‚·‚é
extern	int			SubSubstitutionFontToHandle(			int FontHandle, int SubstitutionFontHandle ) ;													// ‘ã‘ÖƒtƒHƒ“ƒgƒnƒ“ƒhƒ‹‚Ì“o˜^‚ğ‰ğœ‚·‚é

extern	int			ChangeFont(                             const TCHAR *FontName, int CharSet = -1 /* DX_CHARSET_SHFTJIS “™ */ ) ;							// ƒfƒtƒHƒ‹ƒgƒtƒHƒ“ƒgƒnƒ“ƒhƒ‹‚Åg—p‚·‚éƒtƒHƒ“ƒg‚ğ•ÏX
extern	int			ChangeFontType(                         int FontType ) ;																				// ƒfƒtƒHƒ‹ƒgƒtƒHƒ“ƒgƒnƒ“ƒhƒ‹‚ÌƒtƒHƒ“ƒgƒ^ƒCƒv‚Ì•ÏX
extern	const TCHAR *GetFontName(							void ) ;																						// ƒfƒtƒHƒ‹ƒgƒtƒHƒ“ƒgƒnƒ“ƒhƒ‹‚ÌƒtƒHƒ“ƒg–¼‚ğæ“¾‚·‚é
extern	int			SetFontSize(                            int FontSize ) ;																				// ƒfƒtƒHƒ‹ƒgƒtƒHƒ“ƒgƒnƒ“ƒhƒ‹‚ÌƒTƒCƒY‚ğİ’è‚·‚é
extern	int			GetFontSize(                            void ) ;																						// ƒfƒtƒHƒ‹ƒgƒtƒHƒ“ƒgƒnƒ“ƒhƒ‹‚ÌƒTƒCƒY‚ğæ“¾‚·‚é
extern	int			GetFontEdgeSize(                        void ) ;																						// ƒfƒtƒHƒ‹ƒgƒtƒHƒ“ƒgƒnƒ“ƒhƒ‹‚Ì‰ƒTƒCƒY‚ğæ“¾‚·‚é
extern	int			SetFontThickness(                       int ThickPal ) ;																				// ƒfƒtƒHƒ‹ƒgƒtƒHƒ“ƒgƒnƒ“ƒhƒ‹‚Ì‘¾‚³‚ğİ’è‚·‚é
extern	int			SetFontSpace(                           int Pixel ) ;																					// ƒfƒtƒHƒ‹ƒgƒtƒHƒ“ƒgƒnƒ“ƒhƒ‹‚ÌšŠÔ‚ğ•ÏX‚·‚é
extern	int			GetFontSpace(                           void ) ;																						// ƒfƒtƒHƒ‹ƒgƒtƒHƒ“ƒgƒnƒ“ƒhƒ‹‚ÌšŠÔ‚ğæ“¾‚·‚é
extern	int			SetFontLineSpace(                       int Pixel ) ;																					// ƒfƒtƒHƒ‹ƒgƒtƒHƒ“ƒgƒnƒ“ƒhƒ‹‚ÌsŠÔ‚ğ•ÏX‚·‚é
extern	int			GetFontLineSpace(                       void ) ;																						// ƒfƒtƒHƒ‹ƒgƒtƒHƒ“ƒgƒnƒ“ƒhƒ‹‚ÌsŠÔ‚ğæ“¾‚·‚é
extern	int			SetFontCharCodeFormat(					int CharCodeFormat /* DX_CHARCODEFORMAT_SHIFTJIS “™ */ ) ;										// ƒfƒtƒHƒ‹ƒgƒtƒHƒ“ƒgƒnƒ“ƒhƒ‹‚ğg—p‚·‚éŠÖ”‚Ìˆø”‚É“n‚·•¶š—ñ‚Ì•¶šƒR[ƒhŒ`®‚ğİ’è‚·‚é( UNICODE”Å‚Å‚Í–³Œø )
extern	int			SetDefaultFontState(                    const TCHAR *FontName, int Size, int Thick, int FontType = -1 , int CharSet = -1 , int EdgeSize = -1 , int Italic = FALSE ) ;	// ƒfƒtƒHƒ‹ƒgƒtƒHƒ“ƒgƒnƒ“ƒhƒ‹‚Ìİ’è‚ğ•ÏX‚·‚é
extern	int			GetDefaultFontHandle(                   void ) ;																						// ƒfƒtƒHƒ‹ƒgƒtƒHƒ“ƒgƒnƒ“ƒhƒ‹‚ğæ“¾‚·‚é
extern	int			GetFontMaxWidth(                        void ) ;																						// ƒfƒtƒHƒ‹ƒgƒtƒHƒ“ƒgƒnƒ“ƒhƒ‹‚Ì•¶š‚ÌÅ‘å•‚ğæ“¾‚·‚é
extern	int			GetFontAscent(                          void ) ;																						// ƒfƒtƒHƒ‹ƒgƒtƒHƒ“ƒgƒnƒ“ƒhƒ‹‚Ì•`‰æˆÊ’u‚©‚çƒx[ƒXƒ‰ƒCƒ“‚Ü‚Å‚Ì‚‚³‚ğæ“¾‚·‚é
extern	int			GetDrawStringWidth(                     const TCHAR *String, int StrLen, int VerticalFlag = FALSE ) ;									// ƒfƒtƒHƒ‹ƒgƒtƒHƒ“ƒgƒnƒ“ƒhƒ‹‚ğg—p‚µ‚½•¶š—ñ‚Ì•`‰æ•‚ğæ“¾‚·‚é
extern	int			GetDrawFormatStringWidth(               const TCHAR *FormatString, ... ) ;																// ƒfƒtƒHƒ‹ƒgƒtƒHƒ“ƒgƒnƒ“ƒhƒ‹‚ğg—p‚µ‚½‘®•t‚«•¶š—ñ‚Ì•`‰æ•‚ğæ“¾‚·‚é
extern	int			GetDrawExtendStringWidth(               double ExRateX, const TCHAR *String, int StrLen, int VerticalFlag = FALSE ) ;					// ƒfƒtƒHƒ‹ƒgƒtƒHƒ“ƒgƒnƒ“ƒhƒ‹‚ğg—p‚µ‚½•¶š—ñ‚Ì•`‰æ•‚ğæ“¾‚·‚é( Šg‘å—¦•t‚« )
extern	int			GetDrawExtendFormatStringWidth(         double ExRateX, const TCHAR *FormatString, ... ) ;												// ƒfƒtƒHƒ‹ƒgƒtƒHƒ“ƒgƒnƒ“ƒhƒ‹‚ğg—p‚µ‚½‘®•t‚«•¶š—ñ‚Ì•`‰æ•‚ğæ“¾‚·‚é( Šg‘å—¦•t‚« )
extern	int			GetDrawStringSize(                      int *SizeX, int *SizeY, int *LineCount, const TCHAR *String, int StrLen, int VerticalFlag = FALSE ) ;									// ƒfƒtƒHƒ‹ƒgƒtƒHƒ“ƒgƒnƒ“ƒhƒ‹‚ğg—p‚µ‚½•¶š—ñ‚Ì•`‰æ•E‚‚³Es”‚ğæ“¾‚·‚é
extern	int			GetDrawFormatStringSize(                int *SizeX, int *SizeY, int *LineCount, const TCHAR *FormatString, ... ) ;																// ƒfƒtƒHƒ‹ƒgƒtƒHƒ“ƒgƒnƒ“ƒhƒ‹‚ğg—p‚µ‚½‘®•t‚«•¶š—ñ‚Ì•`‰æ•E‚‚³Es”‚ğæ“¾‚·‚é
extern	int			GetDrawExtendStringSize(                int *SizeX, int *SizeY, int *LineCount, double ExRateX, double ExRateY, const TCHAR *String, int StrLen, int VerticalFlag = FALSE ) ;	// ƒfƒtƒHƒ‹ƒgƒtƒHƒ“ƒgƒnƒ“ƒhƒ‹‚ğg—p‚µ‚½•¶š—ñ‚Ì•`‰æ•E‚‚³Es”‚ğæ“¾‚·‚é( Šg‘å—¦•t‚« )
extern	int			GetDrawExtendFormatStringSize(          int *SizeX, int *SizeY, int *LineCount, double ExRateX, double ExRateY, const TCHAR *FormatString, ... ) ;								// ƒfƒtƒHƒ‹ƒgƒtƒHƒ“ƒgƒnƒ“ƒhƒ‹‚ğg—p‚µ‚½‘®•t‚«•¶š—ñ‚Ì•`‰æ•E‚‚³Es”‚ğæ“¾‚·‚é( Šg‘å—¦•t‚« )
extern	int			GetDrawStringCharInfo(                  DRAWCHARINFO *InfoBuffer, size_t InfoBufferSize, const TCHAR *String, int StrLen, int VerticalFlag = FALSE ) ;									// ƒfƒtƒHƒ‹ƒgƒtƒHƒ“ƒgƒnƒ“ƒhƒ‹‚ğg—p‚µ‚½•¶š—ñ‚Ì‚P•¶š–ˆ‚Ìî•ñ‚ğæ“¾‚·‚é
extern	int			GetDrawFormatStringCharInfo(            DRAWCHARINFO *InfoBuffer, size_t InfoBufferSize, const TCHAR *FormatString, ... ) ;																// ƒfƒtƒHƒ‹ƒgƒtƒHƒ“ƒgƒnƒ“ƒhƒ‹‚ğg—p‚µ‚½‘®•t‚«•¶š—ñ‚Ì‚P•¶š–ˆ‚Ìî•ñ‚ğæ“¾‚·‚é
extern	int			GetDrawExtendStringCharInfo(            DRAWCHARINFO *InfoBuffer, size_t InfoBufferSize, double ExRateX, double ExRateY, const TCHAR *String, int StrLen, int VerticalFlag = FALSE ) ;	// ƒfƒtƒHƒ‹ƒgƒtƒHƒ“ƒgƒnƒ“ƒhƒ‹‚ğg—p‚µ‚½•¶š—ñ‚Ì‚P•¶š–ˆ‚Ìî•ñ‚ğæ“¾‚·‚é
extern	int			GetDrawExtendFormatStringCharInfo(      DRAWCHARINFO *InfoBuffer, size_t InfoBufferSize, double ExRateX, double ExRateY, const TCHAR *FormatString, ... ) ;								// ƒfƒtƒHƒ‹ƒgƒtƒHƒ“ƒgƒnƒ“ƒhƒ‹‚ğg—p‚µ‚½‘®•t‚«•¶š—ñ‚Ì‚P•¶š–ˆ‚Ìî•ñ‚ğæ“¾‚·‚é

extern	const TCHAR *GetFontNameToHandle(					int FontHandle ) ;																				// ƒtƒHƒ“ƒgƒnƒ“ƒhƒ‹‚ÌƒtƒHƒ“ƒg–¼‚ğæ“¾‚·‚é
extern	int			GetFontMaxWidthToHandle(                int FontHandle ) ;																				// ƒtƒHƒ“ƒgƒnƒ“ƒhƒ‹‚Ì•¶š‚ÌÅ‘å•‚ğæ“¾‚·‚é
extern	int			GetFontAscentToHandle(                  int FontHandle ) ;																				// ƒtƒHƒ“ƒgƒnƒ“ƒhƒ‹‚Ì•`‰æˆÊ’u‚©‚çƒx[ƒXƒ‰ƒCƒ“‚Ü‚Å‚Ì‚‚³‚ğæ“¾‚·‚é
extern	int			GetFontSizeToHandle(                    int FontHandle ) ;																				// ƒtƒHƒ“ƒgƒnƒ“ƒhƒ‹‚ÌƒTƒCƒY‚ğæ“¾‚·‚é
extern	int			GetFontEdgeSizeToHandle(                int FontHandle ) ;																				// ƒtƒHƒ“ƒgƒnƒ“ƒhƒ‹‚Ì‰ƒTƒCƒY‚ğæ“¾‚·‚é
extern	int			GetFontSpaceToHandle(                   int FontHandle ) ;																				// ƒtƒHƒ“ƒgƒnƒ“ƒhƒ‹‚ÌšŠÔ‚ğæ“¾‚·‚é
extern	int			GetFontLineSpaceToHandle(               int FontHandle ) ;																				// ƒtƒHƒ“ƒgƒnƒ“ƒhƒ‹‚ÌsŠÔ‚ğæ“¾‚·‚é
extern	int			GetFontCharInfo(                        int FontHandle, const TCHAR *Char, int *DrawX, int *DrawY, int *NextCharX, int *SizeX, int *SizeY ) ;	// ƒtƒHƒ“ƒgƒnƒ“ƒhƒ‹‚Ìw’è‚Ì•¶š‚Ì•`‰æî•ñ‚ğæ“¾‚·‚é
extern	int			GetDrawStringWidthToHandle(             const TCHAR   *String, int StrLen, int FontHandle, int VerticalFlag = FALSE ) ;					// ƒtƒHƒ“ƒgƒnƒ“ƒhƒ‹‚ğg—p‚µ‚½•¶š—ñ‚Ì•`‰æ•‚ğæ“¾‚·‚é
extern	int			GetDrawFormatStringWidthToHandle(       int FontHandle, const TCHAR *FormatString, ... ) ;												// ƒtƒHƒ“ƒgƒnƒ“ƒhƒ‹‚ğg—p‚µ‚½‘®•t‚«•¶š—ñ‚Ì•`‰æ•‚ğæ“¾‚·‚é
extern	int			GetDrawExtendStringWidthToHandle(       double ExRateX, const TCHAR *String, int StrLen, int FontHandle, int VerticalFlag = FALSE ) ;	// ƒtƒHƒ“ƒgƒnƒ“ƒhƒ‹‚ğg—p‚µ‚½•¶š—ñ‚Ì•`‰æ•‚ğæ“¾‚·‚é
extern	int			GetDrawExtendFormatStringWidthToHandle( double ExRateX, int FontHandle, const TCHAR *FormatString, ... ) ;								// ƒtƒHƒ“ƒgƒnƒ“ƒhƒ‹‚ğg—p‚µ‚½‘®•t‚«•¶š—ñ‚Ì•`‰æ•‚ğæ“¾‚·‚é
extern	int			GetDrawStringSizeToHandle(              int *SizeX, int *SizeY, int *LineCount, const TCHAR   *String, int StrLen, int FontHandle, int VerticalFlag = FALSE ) ;									// ƒtƒHƒ“ƒgƒnƒ“ƒhƒ‹‚ğg—p‚µ‚½•¶š—ñ‚Ì•`‰æ•E‚‚³Es”‚ğæ“¾‚·‚é
extern	int			GetDrawFormatStringSizeToHandle(        int *SizeX, int *SizeY, int *LineCount, int FontHandle, const TCHAR *FormatString, ... ) ;																// ƒtƒHƒ“ƒgƒnƒ“ƒhƒ‹‚ğg—p‚µ‚½‘®•t‚«•¶š—ñ‚Ì•`‰æ•E‚‚³Es”‚ğæ“¾‚·‚é
extern	int			GetDrawExtendStringSizeToHandle(        int *SizeX, int *SizeY, int *LineCount, double ExRateX, double ExRateY, const TCHAR *String, int StrLen, int FontHandle, int VerticalFlag = FALSE ) ;	// ƒtƒHƒ“ƒgƒnƒ“ƒhƒ‹‚ğg—p‚µ‚½•¶š—ñ‚Ì•`‰æ•E‚‚³Es”‚ğæ“¾‚·‚é
extern	int			GetDrawExtendFormatStringSizeToHandle(  int *SizeX, int *SizeY, int *LineCount, double ExRateX, double ExRateY, int FontHandle, const TCHAR *FormatString, ... ) ;								// ƒtƒHƒ“ƒgƒnƒ“ƒhƒ‹‚ğg—p‚µ‚½‘®•t‚«•¶š—ñ‚Ì•`‰æ•E‚‚³Es”‚ğæ“¾‚·‚é
extern	int			GetDrawStringCharInfoToHandle(              DRAWCHARINFO *InfoBuffer, size_t InfoBufferSize, const TCHAR *String, int StrLen, int FontHandle, int VerticalFlag = FALSE ) ;									// ƒtƒHƒ“ƒgƒnƒ“ƒhƒ‹‚ğg—p‚µ‚½•¶š—ñ‚Ì‚P•¶š–ˆ‚Ìî•ñ‚ğæ“¾‚·‚é
extern	int			GetDrawFormatStringCharInfoToHandle(        DRAWCHARINFO *InfoBuffer, size_t InfoBufferSize, int FontHandle, const TCHAR *FormatString, ... ) ;																// ƒtƒHƒ“ƒgƒnƒ“ƒhƒ‹‚ğg—p‚µ‚½‘®•t‚«•¶š—ñ‚Ì‚P•¶š–ˆ‚Ìî•ñ‚ğæ“¾‚·‚é
extern	int			GetDrawExtendStringCharInfoToHandle(        DRAWCHARINFO *InfoBuffer, size_t InfoBufferSize, double ExRateX, double ExRateY, const TCHAR *String, int StrLen, int FontHandle, int VerticalFlag = FALSE ) ;	// ƒtƒHƒ“ƒgƒnƒ“ƒhƒ‹‚ğg—p‚µ‚½•¶š—ñ‚Ì‚P•¶š–ˆ‚Ìî•ñ‚ğæ“¾‚·‚é
extern	int			GetDrawExtendFormatStringCharInfoToHandle(  DRAWCHARINFO *InfoBuffer, size_t InfoBufferSize, double ExRateX, double ExRateY, int FontHandle, const TCHAR *FormatString, ... ) ;								// ƒtƒHƒ“ƒgƒnƒ“ƒhƒ‹‚ğg—p‚µ‚½‘®•t‚«•¶š—ñ‚Ì‚P•¶š–ˆ‚Ìî•ñ‚ğæ“¾‚·‚é
extern	int			GetFontStateToHandle(                   TCHAR   *FontName, int *Size, int *Thick, int FontHandle, int *FontType = NULL , int *CharSet = NULL , int *EdgeSize = NULL , int *Italic = NULL ) ;	// ƒtƒHƒ“ƒgƒnƒ“ƒhƒ‹‚Ìî•ñ‚ğæ“¾‚·‚é
extern	int			CheckFontCacheToTextureFlag(            int FontHandle ) ;																				// ƒtƒHƒ“ƒgƒnƒ“ƒhƒ‹‚ªƒeƒNƒXƒ`ƒƒƒLƒƒƒbƒVƒ…‚ğg—p‚µ‚Ä‚¢‚é‚©‚Ç‚¤‚©‚ğæ“¾‚·‚é
extern	int			CheckFontChacheToTextureFlag(           int FontHandle ) ;																				// CheckFontCacheToTextureFlag ‚ÌŒëš”Å
extern	int			CheckFontHandleValid(                   int FontHandle ) ;																				// ƒtƒHƒ“ƒgƒnƒ“ƒhƒ‹‚ª—LŒø‚©‚Ç‚¤‚©‚ğæ“¾‚·‚é
extern	int			ClearFontCacheToHandle(					int FontHandle ) ;																				// ƒtƒHƒ“ƒgƒnƒ“ƒhƒ‹‚ÌƒLƒƒƒbƒVƒ…î•ñ‚ğ‰Šú‰»‚·‚é

extern	int			SetFontCacheToTextureFlag(              int Flag ) ;																					// ƒtƒHƒ“ƒg‚ÌƒLƒƒƒbƒVƒ…‚ÉƒeƒNƒXƒ`ƒƒ‚ğg—p‚·‚é‚©‚Ç‚¤‚©‚ğİ’è‚·‚é( TRUE:ƒeƒNƒXƒ`ƒƒ‚ğg—p‚·‚é( ƒfƒtƒHƒ‹ƒg )  FALSE:ƒeƒNƒXƒ`ƒƒ‚Íg—p‚µ‚È‚¢ )
extern	int			GetFontCacheToTextureFlag(              void ) ;																						// ƒtƒHƒ“ƒg‚ÌƒLƒƒƒbƒVƒ…‚ÉƒeƒNƒXƒ`ƒƒ‚ğg—p‚·‚é‚©‚Ç‚¤‚©‚ğİ’è‚·‚é
extern	int			SetFontChacheToTextureFlag(             int Flag ) ;																					// SetFontCacheToTextureFlag ‚ÌŒëš”Å
extern	int			GetFontChacheToTextureFlag(             void ) ;																						// GetFontCacheToTextureFlag ‚ÌŒëš”Å
extern	int			SetFontCacheTextureColorBitDepth(		int ColorBitDepth ) ;																			// ƒtƒHƒ“ƒg‚ÌƒLƒƒƒbƒVƒ…‚Æ‚µ‚Äg—p‚·‚éƒeƒNƒXƒ`ƒƒ‚ÌƒJƒ‰[ƒrƒbƒg[“x‚ğİ’è‚·‚é( 16 –”‚Í 32 ‚Ì‚İw’è‰Â”\  ƒfƒtƒHƒ‹ƒg‚Í 32 )
extern	int			GetFontCacheTextureColorBitDepth(		void ) ;																						// ƒtƒHƒ“ƒg‚ÌƒLƒƒƒbƒVƒ…‚Æ‚µ‚Äg—p‚·‚éƒeƒNƒXƒ`ƒƒ‚ÌƒJƒ‰[ƒrƒbƒg[“x‚ğæ“¾‚·‚é
extern	int			SetFontCacheCharNum(                    int CharNum ) ;																					// ƒtƒHƒ“ƒgƒLƒƒƒbƒVƒ…‚ÅƒLƒƒƒbƒVƒ…‚Å‚«‚é•¶š”‚ğİ’è‚·‚é
extern	int			GetFontCacheCharNum(                    void ) ;																						// ƒtƒHƒ“ƒgƒLƒƒƒbƒVƒ…‚ÅƒLƒƒƒbƒVƒ…‚Å‚«‚é•¶š”‚ğæ“¾‚·‚é( –ß‚è’l  0:ƒfƒtƒHƒ‹ƒg  1ˆÈã:w’è•¶š” )
extern	int			SetFontCacheUsePremulAlphaFlag(         int Flag ) ;																					// ƒtƒHƒ“ƒgƒLƒƒƒbƒVƒ…‚Æ‚µ‚Ä•Û‘¶‚·‚é‰æ‘œ‚ÌŒ`®‚ğæZÏ‚İƒ¿ƒ`ƒƒƒ“ƒlƒ‹•t‚«‰æ‘œ‚É‚·‚é‚©‚Ç‚¤‚©‚ğİ’è‚·‚é( TRUE:æZÏ‚İƒ¿‚ğg—p‚·‚é  FLASE:æZÏ‚İƒ¿‚ğg—p‚µ‚È‚¢( ƒfƒtƒHƒ‹ƒg ) )
extern	int			GetFontCacheUsePremulAlphaFlag(         void ) ;																						// ƒtƒHƒ“ƒgƒLƒƒƒbƒVƒ…‚Æ‚µ‚Ä•Û‘¶‚·‚é‰æ‘œ‚ÌŒ`®‚ğæZÏ‚İƒ¿ƒ`ƒƒƒ“ƒlƒ‹•t‚«‰æ‘œ‚É‚·‚é‚©‚Ç‚¤‚©‚ğæ“¾‚·‚é
extern	int			SetFontUseAdjustSizeFlag(               int Flag ) ;																					// ƒtƒHƒ“ƒg‚ÌƒTƒCƒY‚ğ•â³‚·‚éˆ—‚ğs‚¤‚©‚Ç‚¤‚©‚ğİ’è‚·‚é( Flag  TRUE:s‚¤( ƒfƒtƒHƒ‹ƒg )  FALSE:s‚í‚È‚¢ )
extern	int			GetFontUseAdjustSizeFlag(               void ) ;																						// ƒtƒHƒ“ƒg‚ÌƒTƒCƒY‚ğ•â³‚·‚éˆ—‚ğs‚¤‚©‚Ç‚¤‚©‚ğæ“¾‚·‚é


// FontCacheStringDraw ‚Ì‘ã‚í‚è‚É DrawString ‚ğg‚Á‚Ä‚­‚¾‚³‚¢
extern	int			FontCacheStringDrawToHandle(            int x, int y, const TCHAR   *StrData, unsigned int Color, unsigned int EdgeColor, BASEIMAGE *DestImage, const RECT *ClipRect /* NULL ‰Â */ , int FontHandle, int VerticalFlag = FALSE , SIZE *DrawSizeP = NULL ) ;
extern	int			FontBaseImageBlt(                       int x, int y, const TCHAR   *StrData, BASEIMAGE *DestImage, BASEIMAGE *DestEdgeImage,                 int VerticalFlag = FALSE ) ;	// Šî–{ƒCƒ[ƒW‚É•¶š—ñ‚ğ•`‰æ‚·‚é( ƒfƒtƒHƒ‹ƒgƒtƒHƒ“ƒgƒnƒ“ƒhƒ‹‚ğg—p‚·‚é )
extern	int			FontBaseImageBltToHandle(               int x, int y, const TCHAR   *StrData, BASEIMAGE *DestImage, BASEIMAGE *DestEdgeImage, int FontHandle, int VerticalFlag = FALSE ) ;	// Šî–{ƒCƒ[ƒW‚É•¶š—ñ‚ğ•`‰æ‚·‚é

extern	int			MultiByteCharCheck(                     const char *Buf, int CharSet /* DX_CHARSET_SHFTJIS */ ) ;										// ‚QƒoƒCƒg•¶š‚©’²‚×‚é( TRUE:‚QƒoƒCƒg•¶š  FALSE:‚PƒoƒCƒg•¶š )

// •¶š—ñ•`‰æŠÖ”
extern	int			DrawString(                             int x, int y,                                              const TCHAR *String, unsigned int Color, unsigned int EdgeColor = 0 ) ;							// ƒfƒtƒHƒ‹ƒgƒtƒHƒ“ƒgƒnƒ“ƒhƒ‹‚ğg—p‚µ‚Ä•¶š—ñ‚ğ•`‰æ‚·‚é
extern	int			DrawVString(                            int x, int y,                                              const TCHAR *String, unsigned int Color, unsigned int EdgeColor = 0 ) ;							// ƒfƒtƒHƒ‹ƒgƒtƒHƒ“ƒgƒnƒ“ƒhƒ‹‚ğg—p‚µ‚Ä•¶š—ñ‚ğ•`‰æ‚·‚é( c‘‚« )
extern	int			DrawFormatString(                       int x, int y,                                 unsigned int Color, const TCHAR *FormatString, ... ) ;														// ƒfƒtƒHƒ‹ƒgƒtƒHƒ“ƒgƒnƒ“ƒhƒ‹‚ğg—p‚µ‚Ä‘®w’è•¶š—ñ‚ğ•`‰æ‚·‚é
extern	int			DrawFormatVString(                      int x, int y,                                 unsigned int Color, const TCHAR *FormatString, ... ) ;														// ƒfƒtƒHƒ‹ƒgƒtƒHƒ“ƒgƒnƒ“ƒhƒ‹‚ğg—p‚µ‚Ä‘®w’è•¶š—ñ‚ğ•`‰æ‚·‚é( c‘‚« )
extern	int			DrawExtendString(                       int x, int y, double ExRateX, double ExRateY,              const TCHAR *String, unsigned int Color, unsigned int EdgeColor = 0 ) ;							// ƒfƒtƒHƒ‹ƒgƒtƒHƒ“ƒgƒnƒ“ƒhƒ‹‚ğg—p‚µ‚Ä•¶š—ñ‚ÌŠg‘å•`‰æ
extern	int			DrawExtendVString(                      int x, int y, double ExRateX, double ExRateY,              const TCHAR *String, unsigned int Color, unsigned int EdgeColor = 0 ) ;							// ƒfƒtƒHƒ‹ƒgƒtƒHƒ“ƒgƒnƒ“ƒhƒ‹‚ğg—p‚µ‚Ä•¶š—ñ‚ÌŠg‘å•`‰æ( c‘‚« )
extern	int			DrawExtendFormatString(                 int x, int y, double ExRateX, double ExRateY, unsigned int Color, const TCHAR *FormatString, ... ) ;														// ƒfƒtƒHƒ‹ƒgƒtƒHƒ“ƒgƒnƒ“ƒhƒ‹‚ğg—p‚µ‚Ä‘®w’è•¶š—ñ‚ğŠg‘å•`‰æ‚·‚é
extern	int			DrawExtendFormatVString(                int x, int y, double ExRateX, double ExRateY, unsigned int Color, const TCHAR *FormatString, ... ) ;														// ƒfƒtƒHƒ‹ƒgƒtƒHƒ“ƒgƒnƒ“ƒhƒ‹‚ğg—p‚µ‚Ä‘®w’è•¶š—ñ‚ğŠg‘å•`‰æ‚·‚é( c‘‚« )
extern	int			DrawRotaString(							int x, int y, double ExRateX, double ExRateY, double RotCenterX, double RotCenterY, double RotAngle, unsigned int Color, unsigned int EdgeColor = 0 , int VerticalFlag = FALSE , const TCHAR *String       = NULL       ) ;		// ƒfƒtƒHƒ‹ƒgƒtƒHƒ“ƒgƒnƒ“ƒhƒ‹‚ğg—p‚µ‚Ä•¶š—ñ‚ğ‰ñ“]•`‰æ‚·‚é
extern	int			DrawRotaFormatString(					int x, int y, double ExRateX, double ExRateY, double RotCenterX, double RotCenterY, double RotAngle, unsigned int Color, unsigned int EdgeColor = 0 , int VerticalFlag = FALSE , const TCHAR *FormatString = NULL , ... ) ;		// ƒfƒtƒHƒ‹ƒgƒtƒHƒ“ƒgƒnƒ“ƒhƒ‹‚ğg—p‚µ‚Ä‘®w’è•¶š—ñ‚ğ‰ñ“]•`‰æ‚·‚é
extern	int			DrawModiString(							int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4, unsigned int Color, unsigned int EdgeColor = 0 , int VerticalFlag = FALSE , const TCHAR *String       = NULL       ) ;		// ƒfƒtƒHƒ‹ƒgƒtƒHƒ“ƒgƒnƒ“ƒhƒ‹‚ğg—p‚µ‚Ä•¶š—ñ‚ğ•ÏŒ`•`‰æ‚·‚é
extern	int			DrawModiFormatString(					int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4, unsigned int Color, unsigned int EdgeColor = 0 , int VerticalFlag = FALSE , const TCHAR *FormatString = NULL , ... ) ;		// ƒfƒtƒHƒ‹ƒgƒtƒHƒ“ƒgƒnƒ“ƒhƒ‹‚ğg—p‚µ‚Ä‘®w’è•¶š—ñ‚ğ•ÏŒ`•`‰æ‚·‚é

extern	int			DrawStringF(                            float x, float y,                                              const TCHAR *String, unsigned int Color, unsigned int EdgeColor = 0 ) ;						// ƒfƒtƒHƒ‹ƒgƒtƒHƒ“ƒgƒnƒ“ƒhƒ‹‚ğg—p‚µ‚Ä•¶š—ñ‚ğ•`‰æ‚·‚é( À•Ww’è‚ª float ”Å )
extern	int			DrawVStringF(                           float x, float y,                                              const TCHAR *String, unsigned int Color, unsigned int EdgeColor = 0 ) ;						// ƒfƒtƒHƒ‹ƒgƒtƒHƒ“ƒgƒnƒ“ƒhƒ‹‚ğg—p‚µ‚Ä•¶š—ñ‚ğ•`‰æ‚·‚é( c‘‚« )( À•Ww’è‚ª float ”Å )
extern	int			DrawFormatStringF(                      float x, float y,                                 unsigned int Color, const TCHAR *FormatString, ... ) ;													// ƒfƒtƒHƒ‹ƒgƒtƒHƒ“ƒgƒnƒ“ƒhƒ‹‚ğg—p‚µ‚Ä‘®w’è•¶š—ñ‚ğ•`‰æ‚·‚é( À•Ww’è‚ª float ”Å )
extern	int			DrawFormatVStringF(                     float x, float y,                                 unsigned int Color, const TCHAR *FormatString, ... ) ;													// ƒfƒtƒHƒ‹ƒgƒtƒHƒ“ƒgƒnƒ“ƒhƒ‹‚ğg—p‚µ‚Ä‘®w’è•¶š—ñ‚ğ•`‰æ‚·‚é( c‘‚« )( À•Ww’è‚ª float ”Å )
extern	int			DrawExtendStringF(                      float x, float y, double ExRateX, double ExRateY,              const TCHAR *String, unsigned int Color, unsigned int EdgeColor = 0 ) ;						// ƒfƒtƒHƒ‹ƒgƒtƒHƒ“ƒgƒnƒ“ƒhƒ‹‚ğg—p‚µ‚Ä•¶š—ñ‚ÌŠg‘å•`‰æ( À•Ww’è‚ª float ”Å )
extern	int			DrawExtendVStringF(                     float x, float y, double ExRateX, double ExRateY,              const TCHAR *String, unsigned int Color, unsigned int EdgeColor = 0 ) ;						// ƒfƒtƒHƒ‹ƒgƒtƒHƒ“ƒgƒnƒ“ƒhƒ‹‚ğg—p‚µ‚Ä•¶š—ñ‚ÌŠg‘å•`‰æ( c‘‚« )( À•Ww’è‚ª float ”Å )
extern	int			DrawExtendFormatStringF(                float x, float y, double ExRateX, double ExRateY, unsigned int Color, const TCHAR *FormatString, ... ) ;													// ƒfƒtƒHƒ‹ƒgƒtƒHƒ“ƒgƒnƒ“ƒhƒ‹‚ğg—p‚µ‚Ä‘®w’è•¶š—ñ‚ğŠg‘å•`‰æ‚·‚é( À•Ww’è‚ª float ”Å )
extern	int			DrawExtendFormatVStringF(               float x, float y, double ExRateX, double ExRateY, unsigned int Color, const TCHAR *FormatString, ... ) ;													// ƒfƒtƒHƒ‹ƒgƒtƒHƒ“ƒgƒnƒ“ƒhƒ‹‚ğg—p‚µ‚Ä‘®w’è•¶š—ñ‚ğŠg‘å•`‰æ‚·‚é( c‘‚« )( À•Ww’è‚ª float ”Å )
extern	int			DrawRotaStringF(						float x, float y, double ExRateX, double ExRateY, double RotCenterX, double RotCenterY, double RotAngle, unsigned int Color, unsigned int EdgeColor = 0 , int VerticalFlag = FALSE , const TCHAR *String       = NULL       ) ;		// ƒfƒtƒHƒ‹ƒgƒtƒHƒ“ƒgƒnƒ“ƒhƒ‹‚ğg—p‚µ‚Ä•¶š—ñ‚ğ‰ñ“]•`‰æ‚·‚é( À•Ww’è‚ª float ”Å )
extern	int			DrawRotaFormatStringF(					float x, float y, double ExRateX, double ExRateY, double RotCenterX, double RotCenterY, double RotAngle, unsigned int Color, unsigned int EdgeColor = 0 , int VerticalFlag = FALSE , const TCHAR *FormatString = NULL , ... ) ;		// ƒfƒtƒHƒ‹ƒgƒtƒHƒ“ƒgƒnƒ“ƒhƒ‹‚ğg—p‚µ‚Ä‘®w’è•¶š—ñ‚ğ‰ñ“]•`‰æ‚·‚é( À•Ww’è‚ª float ”Å )
extern	int			DrawModiStringF(						float x1, float y1, float x2, float y2, float x3, float y3, float x4, float y4, unsigned int Color, unsigned int EdgeColor = 0 , int VerticalFlag = FALSE , const TCHAR *String       = NULL       ) ;		// ƒfƒtƒHƒ‹ƒgƒtƒHƒ“ƒgƒnƒ“ƒhƒ‹‚ğg—p‚µ‚Ä•¶š—ñ‚ğ•ÏŒ`•`‰æ‚·‚é( À•Ww’è‚ª float ”Å )
extern	int			DrawModiFormatStringF(					float x1, float y1, float x2, float y2, float x3, float y3, float x4, float y4, unsigned int Color, unsigned int EdgeColor = 0 , int VerticalFlag = FALSE , const TCHAR *FormatString = NULL , ... ) ;		// ƒfƒtƒHƒ‹ƒgƒtƒHƒ“ƒgƒnƒ“ƒhƒ‹‚ğg—p‚µ‚Ä‘®w’è•¶š—ñ‚ğ•ÏŒ`•`‰æ‚·‚é( À•Ww’è‚ª float ”Å )

extern	int			DrawNumberToI(                          int x, int y,                          int    Num, int RisesNum, unsigned int Color, unsigned int EdgeColor = 0 ) ;											// ƒfƒtƒHƒ‹ƒgƒtƒHƒ“ƒgƒnƒ“ƒhƒ‹‚ğg—p‚µ‚Ä®”Œ^‚Ì”’l‚ğ•`‰æ‚·‚é
extern	int			DrawNumberToF(                          int x, int y,                          double Num, int Length,   unsigned int Color, unsigned int EdgeColor = 0 ) ;											// ƒfƒtƒHƒ‹ƒgƒtƒHƒ“ƒgƒnƒ“ƒhƒ‹‚ğg—p‚µ‚Ä•‚“®¬”“_Œ^‚Ì”’l‚ğ•`‰æ‚·‚é
extern	int			DrawNumberPlusToI(                      int x, int y, const TCHAR *NoteString, int    Num, int RisesNum, unsigned int Color, unsigned int EdgeColor = 0 ) ;											// ƒfƒtƒHƒ‹ƒgƒtƒHƒ“ƒgƒnƒ“ƒhƒ‹‚ğg—p‚µ‚Ä®”Œ^‚Ì”’l‚Æ‚»‚Ìà–¾‚Ì•¶š—ñ‚ğˆê“x‚É•`‰æ‚·‚é
extern 	int			DrawNumberPlusToF(                      int x, int y, const TCHAR *NoteString, double Num, int Length,   unsigned int Color, unsigned int EdgeColor = 0 ) ;											// ƒfƒtƒHƒ‹ƒgƒtƒHƒ“ƒgƒnƒ“ƒhƒ‹‚ğg—p‚µ‚Ä•‚“®¬”“_Œ^‚Ì”’l‚Æ‚»‚Ìà–¾‚Ì•¶š—ñ‚ğˆê“x‚É•`‰æ‚·‚é

extern	int			DrawStringToZBuffer(                    int x, int y, const TCHAR *String,                                                                   int WriteZMode /* DX_ZWRITE_MASK “™ */ ) ;										// ƒfƒtƒHƒ‹ƒgƒtƒHƒ“ƒgƒnƒ“ƒhƒ‹‚ğg—p‚µ‚Ä‚yƒoƒbƒtƒ@‚É‘Î‚µ‚Ä•¶š—ñ‚ğ•`‰æ‚·‚é
extern	int			DrawVStringToZBuffer(                   int x, int y, const TCHAR *String,                                                                   int WriteZMode /* DX_ZWRITE_MASK “™ */ ) ;										// ƒfƒtƒHƒ‹ƒgƒtƒHƒ“ƒgƒnƒ“ƒhƒ‹‚ğg—p‚µ‚Ä‚yƒoƒbƒtƒ@‚É‘Î‚µ‚Ä•¶š—ñ‚ğ•`‰æ‚·‚é( c‘‚« )
extern	int			DrawFormatStringToZBuffer(              int x, int y,                                                                                        int WriteZMode /* DX_ZWRITE_MASK “™ */ , const TCHAR *FormatString, ... ) ;	// ƒfƒtƒHƒ‹ƒgƒtƒHƒ“ƒgƒnƒ“ƒhƒ‹‚ğg—p‚µ‚Ä‚yƒoƒbƒtƒ@‚É‘Î‚µ‚Ä‘®w’è•¶š—ñ‚ğ•`‰æ‚·‚é
extern	int			DrawFormatVStringToZBuffer(             int x, int y,                                                                                        int WriteZMode /* DX_ZWRITE_MASK “™ */ , const TCHAR *FormatString, ... ) ;	// ƒfƒtƒHƒ‹ƒgƒtƒHƒ“ƒgƒnƒ“ƒhƒ‹‚ğg—p‚µ‚Ä‚yƒoƒbƒtƒ@‚É‘Î‚µ‚Ä‘®w’è•¶š—ñ‚ğ•`‰æ‚·‚é( c‘‚« )
extern	int			DrawExtendStringToZBuffer(              int x, int y, double ExRateX, double ExRateY, const TCHAR *String,                                   int WriteZMode /* DX_ZWRITE_MASK “™ */ ) ;										// ƒfƒtƒHƒ‹ƒgƒtƒHƒ“ƒgƒnƒ“ƒhƒ‹‚ğg—p‚µ‚Ä‚yƒoƒbƒtƒ@‚É‘Î‚µ‚Ä•¶š—ñ‚ğŠg‘å•`‰æ‚·‚é
extern	int			DrawExtendVStringToZBuffer(             int x, int y, double ExRateX, double ExRateY, const TCHAR *String,                                   int WriteZMode /* DX_ZWRITE_MASK “™ */ ) ;										// ƒfƒtƒHƒ‹ƒgƒtƒHƒ“ƒgƒnƒ“ƒhƒ‹‚ğg—p‚µ‚Ä‚yƒoƒbƒtƒ@‚É‘Î‚µ‚Ä•¶š—ñ‚ğŠg‘å•`‰æ‚·‚é( c‘‚« )
extern	int			DrawExtendFormatStringToZBuffer(        int x, int y, double ExRateX, double ExRateY,                                                        int WriteZMode /* DX_ZWRITE_MASK “™ */ , const TCHAR *FormatString, ... ) ;	// ƒfƒtƒHƒ‹ƒgƒtƒHƒ“ƒgƒnƒ“ƒhƒ‹‚ğg—p‚µ‚Ä‚yƒoƒbƒtƒ@‚É‘Î‚µ‚Ä‘®w’è•¶š—ñ‚ğŠg‘å•`‰æ‚·‚é
extern	int			DrawExtendFormatVStringToZBuffer(       int x, int y, double ExRateX, double ExRateY,                                                        int WriteZMode /* DX_ZWRITE_MASK “™ */ , const TCHAR *FormatString, ... ) ;	// ƒfƒtƒHƒ‹ƒgƒtƒHƒ“ƒgƒnƒ“ƒhƒ‹‚ğg—p‚µ‚Ä‚yƒoƒbƒtƒ@‚É‘Î‚µ‚Ä‘®w’è•¶š—ñ‚ğŠg‘å•`‰æ‚·‚é( c‘‚« )
extern	int			DrawRotaStringToZBuffer(				int x, int y, double ExRateX, double ExRateY, double RotCenterX, double RotCenterY, double RotAngle, int WriteZMode /* DX_ZWRITE_MASK “™ */ , int VerticalFlag , const TCHAR *String             ) ;		// ƒfƒtƒHƒ‹ƒgƒtƒHƒ“ƒgƒnƒ“ƒhƒ‹‚ğg—p‚µ‚Ä‚yƒoƒbƒtƒ@‚É‘Î‚µ‚Ä•¶š—ñ‚ğ‰ñ“]•`‰æ‚·‚é
extern	int			DrawRotaFormatStringToZBuffer(			int x, int y, double ExRateX, double ExRateY, double RotCenterX, double RotCenterY, double RotAngle, int WriteZMode /* DX_ZWRITE_MASK “™ */ , int VerticalFlag , const TCHAR *FormatString , ... ) ;		// ƒfƒtƒHƒ‹ƒgƒtƒHƒ“ƒgƒnƒ“ƒhƒ‹‚ğg—p‚µ‚Ä‚yƒoƒbƒtƒ@‚É‘Î‚µ‚Ä‘®w’è•¶š—ñ‚ğ‰ñ“]•`‰æ‚·‚é
extern	int			DrawModiStringToZBuffer(				int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4,                                      int WriteZMode /* DX_ZWRITE_MASK “™ */ , int VerticalFlag , const TCHAR *String             ) ;		// ƒfƒtƒHƒ‹ƒgƒtƒHƒ“ƒgƒnƒ“ƒhƒ‹‚ğg—p‚µ‚Ä‚yƒoƒbƒtƒ@‚É‘Î‚µ‚Ä•¶š—ñ‚ğ•ÏŒ`•`‰æ‚·‚é
extern	int			DrawModiFormatStringToZBuffer(			int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4,                                      int WriteZMode /* DX_ZWRITE_MASK “™ */ , int VerticalFlag , const TCHAR *FormatString , ... ) ;		// ƒfƒtƒHƒ‹ƒgƒtƒHƒ“ƒgƒnƒ“ƒhƒ‹‚ğg—p‚µ‚Ä‚yƒoƒbƒtƒ@‚É‘Î‚µ‚Ä‘®w’è•¶š—ñ‚ğ•ÏŒ`•`‰æ‚·‚é


extern	int			DrawStringToHandle(                     int x, int y, const TCHAR *String, unsigned int Color, int FontHandle, unsigned int EdgeColor = 0 , int VerticalFlag = FALSE ) ;											// ƒtƒHƒ“ƒgƒnƒ“ƒhƒ‹‚ğg—p‚µ‚Ä•¶š—ñ‚ğ•`‰æ‚·‚é
extern	int			DrawVStringToHandle(                    int x, int y, const TCHAR *String, unsigned int Color, int FontHandle, unsigned int EdgeColor = 0 ) ;																		// ƒtƒHƒ“ƒgƒnƒ“ƒhƒ‹‚ğg—p‚µ‚Ä•¶š—ñ‚ğ•`‰æ‚·‚é( c‘‚« )
extern	int			DrawFormatStringToHandle(               int x, int y, unsigned int Color, int FontHandle, const TCHAR *FormatString, ... ) ;																						// ƒtƒHƒ“ƒgƒnƒ“ƒhƒ‹‚ğg—p‚µ‚Ä‘®w’è•¶š—ñ‚ğ•`‰æ‚·‚é
extern	int			DrawFormatVStringToHandle(              int x, int y, unsigned int Color, int FontHandle, const TCHAR *FormatString, ... ) ;																						// ƒtƒHƒ“ƒgƒnƒ“ƒhƒ‹‚ğg—p‚µ‚Ä‘®w’è•¶š—ñ‚ğ•`‰æ‚·‚é( c‘‚« )
extern	int			DrawExtendStringToHandle(               int x, int y, double ExRateX, double ExRateY, const TCHAR *String, unsigned int Color, int FontHandle, unsigned int EdgeColor = 0 , int VerticalFlag = FALSE ) ;			// ƒtƒHƒ“ƒgƒnƒ“ƒhƒ‹‚ğg—p‚µ‚Ä•¶š—ñ‚ğŠg‘å•`‰æ‚·‚é
extern	int			DrawExtendVStringToHandle(              int x, int y, double ExRateX, double ExRateY, const TCHAR *String, unsigned int Color, int FontHandle, unsigned int EdgeColor = 0 ) ;										// ƒtƒHƒ“ƒgƒnƒ“ƒhƒ‹‚ğg—p‚µ‚Ä•¶š—ñ‚ğŠg‘å•`‰æ‚·‚é( c‘‚« )
extern	int			DrawExtendFormatStringToHandle(         int x, int y, double ExRateX, double ExRateY, unsigned int Color, int FontHandle, const TCHAR *FormatString, ... ) ;														// ƒtƒHƒ“ƒgƒnƒ“ƒhƒ‹‚ğg—p‚µ‚Ä‘®w’è•¶š—ñ‚ğŠg‘å•`‰æ‚·‚é
extern	int			DrawExtendFormatVStringToHandle(        int x, int y, double ExRateX, double ExRateY, unsigned int Color, int FontHandle, const TCHAR *FormatString, ... ) ;														// ƒtƒHƒ“ƒgƒnƒ“ƒhƒ‹‚ğg—p‚µ‚Ä‘®w’è•¶š—ñ‚ğŠg‘å•`‰æ‚·‚é( c‘‚« )
extern	int			DrawRotaStringToHandle(					int x, int y, double ExRateX, double ExRateY, double RotCenterX, double RotCenterY, double RotAngle, unsigned int Color, int FontHandle, unsigned int EdgeColor, int VerticalFlag, const TCHAR *String            ) ;		// ƒtƒHƒ“ƒgƒnƒ“ƒhƒ‹‚ğg—p‚µ‚Ä•¶š—ñ‚ğ‰ñ“]•`‰æ‚·‚é
extern	int			DrawRotaFormatStringToHandle(			int x, int y, double ExRateX, double ExRateY, double RotCenterX, double RotCenterY, double RotAngle, unsigned int Color, int FontHandle, unsigned int EdgeColor, int VerticalFlag, const TCHAR *FormatString, ... ) ;		// ƒtƒHƒ“ƒgƒnƒ“ƒhƒ‹‚ğg—p‚µ‚Ä‘®w’è•¶š—ñ‚ğ‰ñ“]•`‰æ‚·‚é
extern	int			DrawModiStringToHandle(					int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4, unsigned int Color, int FontHandle, unsigned int EdgeColor, int VerticalFlag, const TCHAR *String            ) ;		// ƒtƒHƒ“ƒgƒnƒ“ƒhƒ‹‚ğg—p‚µ‚Ä•¶š—ñ‚ğ•ÏŒ`•`‰æ‚·‚é
extern	int			DrawModiFormatStringToHandle(			int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4, unsigned int Color, int FontHandle, unsigned int EdgeColor, int VerticalFlag, const TCHAR *FormatString, ... ) ;		// ƒtƒHƒ“ƒgƒnƒ“ƒhƒ‹‚ğg—p‚µ‚Ä‘®w’è•¶š—ñ‚ğ•ÏŒ`•`‰æ‚·‚é

extern	int			DrawStringFToHandle(                    float x, float y, const TCHAR *String, unsigned int Color, int FontHandle, unsigned int EdgeColor = 0 , int VerticalFlag = FALSE ) ;										// ƒtƒHƒ“ƒgƒnƒ“ƒhƒ‹‚ğg—p‚µ‚Ä•¶š—ñ‚ğ•`‰æ‚·‚é( À•Ww’è‚ª float ”Å )
extern	int			DrawVStringFToHandle(                   float x, float y, const TCHAR *String, unsigned int Color, int FontHandle, unsigned int EdgeColor = 0 ) ;																	// ƒtƒHƒ“ƒgƒnƒ“ƒhƒ‹‚ğg—p‚µ‚Ä•¶š—ñ‚ğ•`‰æ‚·‚é( c‘‚« )( À•Ww’è‚ª float ”Å )
extern	int			DrawFormatStringFToHandle(              float x, float y, unsigned int Color, int FontHandle, const TCHAR *FormatString, ... ) ;																					// ƒtƒHƒ“ƒgƒnƒ“ƒhƒ‹‚ğg—p‚µ‚Ä‘®w’è•¶š—ñ‚ğ•`‰æ‚·‚é( À•Ww’è‚ª float ”Å )
extern	int			DrawFormatVStringFToHandle(             float x, float y, unsigned int Color, int FontHandle, const TCHAR *FormatString, ... ) ;																					// ƒtƒHƒ“ƒgƒnƒ“ƒhƒ‹‚ğg—p‚µ‚Ä‘®w’è•¶š—ñ‚ğ•`‰æ‚·‚é( c‘‚« )( À•Ww’è‚ª float ”Å )
extern	int			DrawExtendStringFToHandle(              float x, float y, double ExRateX, double ExRateY, const TCHAR *String, unsigned int Color, int FontHandle, unsigned int EdgeColor = 0 , int VerticalFlag = FALSE ) ;		// ƒtƒHƒ“ƒgƒnƒ“ƒhƒ‹‚ğg—p‚µ‚Ä•¶š—ñ‚ğŠg‘å•`‰æ‚·‚é( À•Ww’è‚ª float ”Å )
extern	int			DrawExtendVStringFToHandle(             float x, float y, double ExRateX, double ExRateY, const TCHAR *String, unsigned int Color, int FontHandle, unsigned int EdgeColor = 0 ) ;									// ƒtƒHƒ“ƒgƒnƒ“ƒhƒ‹‚ğg—p‚µ‚Ä•¶š—ñ‚ğŠg‘å•`‰æ‚·‚é( c‘‚« )( À•Ww’è‚ª float ”Å )
extern	int			DrawExtendFormatStringFToHandle(        float x, float y, double ExRateX, double ExRateY, unsigned int Color, int FontHandle, const TCHAR *FormatString, ... ) ;													// ƒtƒHƒ“ƒgƒnƒ“ƒhƒ‹‚ğg—p‚µ‚Ä‘®w’è•¶š—ñ‚ğŠg‘å•`‰æ‚·‚é( À•Ww’è‚ª float ”Å )
extern	int			DrawExtendFormatVStringFToHandle(       float x, float y, double ExRateX, double ExRateY, unsigned int Color, int FontHandle, const TCHAR *FormatString, ... ) ;													// ƒtƒHƒ“ƒgƒnƒ“ƒhƒ‹‚ğg—p‚µ‚Ä‘®w’è•¶š—ñ‚ğŠg‘å•`‰æ‚·‚é( c‘‚« )( À•Ww’è‚ª float ”Å )
extern	int			DrawRotaStringFToHandle(				float x, float y, double ExRateX, double ExRateY, double RotCenterX, double RotCenterY, double RotAngle, unsigned int Color, int FontHandle, unsigned int EdgeColor = 0 , int VerticalFlag = FALSE , const TCHAR *String       = NULL       ) ;		// ƒtƒHƒ“ƒgƒnƒ“ƒhƒ‹‚ğg—p‚µ‚Ä•¶š—ñ‚ğ‰ñ“]•`‰æ‚·‚é( À•Ww’è‚ª float ”Å )
extern	int			DrawRotaFormatStringFToHandle(			float x, float y, double ExRateX, double ExRateY, double RotCenterX, double RotCenterY, double RotAngle, unsigned int Color, int FontHandle, unsigned int EdgeColor = 0 , int VerticalFlag = FALSE , const TCHAR *FormatString = NULL , ... ) ;		// ƒtƒHƒ“ƒgƒnƒ“ƒhƒ‹‚ğg—p‚µ‚Ä‘®w’è•¶š—ñ‚ğ‰ñ“]•`‰æ‚·‚é( À•Ww’è‚ª float ”Å )
extern	int			DrawModiStringFToHandle(				float x1, float y1, float x2, float y2, float x3, float y3, float x4, float y4, unsigned int Color, int FontHandle, unsigned int EdgeColor, int VerticalFlag, const TCHAR *String            ) ;		// ƒtƒHƒ“ƒgƒnƒ“ƒhƒ‹‚ğg—p‚µ‚Ä•¶š—ñ‚ğ•ÏŒ`•`‰æ‚·‚é( À•Ww’è‚ª float ”Å )
extern	int			DrawModiFormatStringFToHandle(			float x1, float y1, float x2, float y2, float x3, float y3, float x4, float y4, unsigned int Color, int FontHandle, unsigned int EdgeColor, int VerticalFlag, const TCHAR *FormatString, ... ) ;		// ƒtƒHƒ“ƒgƒnƒ“ƒhƒ‹‚ğg—p‚µ‚Ä‘®w’è•¶š—ñ‚ğ•ÏŒ`•`‰æ‚·‚é( À•Ww’è‚ª float ”Å )

extern	int			DrawNumberToIToHandle(                  int x, int y,                          int    Num, int RisesNum, unsigned int Color, int FontHandle, unsigned int EdgeColor = 0 ) ;											// ƒtƒHƒ“ƒgƒnƒ“ƒhƒ‹‚ğg—p‚µ‚Ä®”Œ^‚Ì”’l‚ğ•`‰æ‚·‚é
extern	int			DrawNumberToFToHandle(                  int x, int y,                          double Num, int Length,   unsigned int Color, int FontHandle, unsigned int EdgeColor = 0 ) ;											// ƒtƒHƒ“ƒgƒnƒ“ƒhƒ‹‚ğg—p‚µ‚Ä•‚“®¬”“_Œ^‚Ì”’l‚ğ•`‰æ‚·‚é
extern	int			DrawNumberPlusToIToHandle(              int x, int y, const TCHAR *NoteString, int    Num, int RisesNum, unsigned int Color, int FontHandle, unsigned int EdgeColor = 0 ) ;											// ƒtƒHƒ“ƒgƒnƒ“ƒhƒ‹‚ğg—p‚µ‚Ä®”Œ^‚Ì”’l‚Æ‚»‚Ìà–¾‚Ì•¶š—ñ‚ğˆê“x‚É•`‰æ‚·‚é
extern	int			DrawNumberPlusToFToHandle(              int x, int y, const TCHAR *NoteString, double Num, int Length,   unsigned int Color, int FontHandle, unsigned int EdgeColor = 0 ) ;											// ƒtƒHƒ“ƒgƒnƒ“ƒhƒ‹‚ğg—p‚µ‚Ä•‚“®¬”“_Œ^‚Ì”’l‚Æ‚»‚Ìà–¾‚Ì•¶š—ñ‚ğˆê“x‚É•`‰æ‚·‚é

extern	int			DrawStringToHandleToZBuffer(            int x, int y, const TCHAR *String, int FontHandle,                                                                   int WriteZMode /* DX_ZWRITE_MASK “™ */ , int VerticalFlag = FALSE ) ;		// ƒtƒHƒ“ƒgƒnƒ“ƒhƒ‹‚ğg—p‚µ‚Ä‚yƒoƒbƒtƒ@‚É‘Î‚µ‚Ä•¶š—ñ‚ğ•`‰æ‚·‚é
extern	int			DrawVStringToHandleToZBuffer(           int x, int y, const TCHAR *String, int FontHandle,                                                                   int WriteZMode /* DX_ZWRITE_MASK “™ */ ) ;									// ƒtƒHƒ“ƒgƒnƒ“ƒhƒ‹‚ğg—p‚µ‚Ä‚yƒoƒbƒtƒ@‚É‘Î‚µ‚Ä•¶š—ñ‚ğ•`‰æ‚·‚é( c‘‚« )
extern	int			DrawFormatStringToHandleToZBuffer(      int x, int y, int FontHandle,                                                                                        int WriteZMode /* DX_ZWRITE_MASK “™ */ , const TCHAR *FormatString, ... ) ;	// ƒtƒHƒ“ƒgƒnƒ“ƒhƒ‹‚ğg—p‚µ‚Ä‚yƒoƒbƒtƒ@‚É‘Î‚µ‚Ä‘®w’è•¶š—ñ‚ğ•`‰æ‚·‚é
extern	int			DrawFormatVStringToHandleToZBuffer(     int x, int y, int FontHandle,                                                                                        int WriteZMode /* DX_ZWRITE_MASK “™ */ , const TCHAR *FormatString, ... ) ;	// ƒtƒHƒ“ƒgƒnƒ“ƒhƒ‹‚ğg—p‚µ‚Ä‚yƒoƒbƒtƒ@‚É‘Î‚µ‚Ä‘®w’è•¶š—ñ‚ğ•`‰æ‚·‚é( c‘‚« )
extern	int			DrawExtendStringToHandleToZBuffer(      int x, int y, double ExRateX, double ExRateY, const TCHAR *String, int FontHandle,                                   int WriteZMode /* DX_ZWRITE_MASK “™ */ , int VerticalFlag = FALSE ) ;		// ƒtƒHƒ“ƒgƒnƒ“ƒhƒ‹‚ğg—p‚µ‚Ä‚yƒoƒbƒtƒ@‚É‘Î‚µ‚Ä•¶š—ñ‚ğŠg‘å•`‰æ‚·‚é
extern	int			DrawExtendVStringToHandleToZBuffer(     int x, int y, double ExRateX, double ExRateY, const TCHAR *String, int FontHandle,                                   int WriteZMode /* DX_ZWRITE_MASK “™ */ ) ;									// ƒtƒHƒ“ƒgƒnƒ“ƒhƒ‹‚ğg—p‚µ‚Ä‚yƒoƒbƒtƒ@‚É‘Î‚µ‚Ä•¶š—ñ‚ğŠg‘å•`‰æ‚·‚é( c‘‚« )
extern	int			DrawExtendFormatStringToHandleToZBuffer(  int x, int y, double ExRateX, double ExRateY, int FontHandle,                                                      int WriteZMode /* DX_ZWRITE_MASK “™ */ , const TCHAR *FormatString, ... ) ;	// ƒtƒHƒ“ƒgƒnƒ“ƒhƒ‹‚ğg—p‚µ‚Ä‚yƒoƒbƒtƒ@‚É‘Î‚µ‚Ä‘®w’è•¶š—ñ‚ğŠg‘å•`‰æ‚·‚é
extern	int			DrawExtendFormatVStringToHandleToZBuffer( int x, int y, double ExRateX, double ExRateY, int FontHandle,                                                      int WriteZMode /* DX_ZWRITE_MASK “™ */ , const TCHAR *FormatString, ... ) ;	// ƒtƒHƒ“ƒgƒnƒ“ƒhƒ‹‚ğg—p‚µ‚Ä‚yƒoƒbƒtƒ@‚É‘Î‚µ‚Ä‘®w’è•¶š—ñ‚ğŠg‘å•`‰æ‚·‚é( c‘‚« )
extern	int			DrawRotaStringToHandleToZBuffer(		int x, int y, double ExRateX, double ExRateY, double RotCenterX, double RotCenterY, double RotAngle, int FontHandle, int WriteZMode /* DX_ZWRITE_MASK “™ */ , int VerticalFlag, const TCHAR *String            ) ;		// ƒtƒHƒ“ƒgƒnƒ“ƒhƒ‹‚ğg—p‚µ‚Ä‚yƒoƒbƒtƒ@‚É‘Î‚µ‚Ä•¶š—ñ‚ğ‰ñ“]•`‰æ‚·‚é
extern	int			DrawRotaFormatStringToHandleToZBuffer(	int x, int y, double ExRateX, double ExRateY, double RotCenterX, double RotCenterY, double RotAngle, int FontHandle, int WriteZMode /* DX_ZWRITE_MASK “™ */ , int VerticalFlag, const TCHAR *FormatString, ... ) ;		// ƒtƒHƒ“ƒgƒnƒ“ƒhƒ‹‚ğg—p‚µ‚Ä‚yƒoƒbƒtƒ@‚É‘Î‚µ‚Ä‘®w’è•¶š—ñ‚ğ‰ñ“]•`‰æ‚·‚é
extern	int			DrawModiStringToHandleToZBuffer(		int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4, int FontHandle, int WriteZMode /* DX_ZWRITE_MASK “™ */ , int VerticalFlag, const TCHAR *String            ) ;		// ƒtƒHƒ“ƒgƒnƒ“ƒhƒ‹‚ğg—p‚µ‚Ä‚yƒoƒbƒtƒ@‚É‘Î‚µ‚Ä•¶š—ñ‚ğ•ÏŒ`•`‰æ‚·‚é
extern	int			DrawModiFormatStringToHandleToZBuffer(	int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4, int FontHandle, int WriteZMode /* DX_ZWRITE_MASK “™ */ , int VerticalFlag, const TCHAR *FormatString, ... ) ;		// ƒtƒHƒ“ƒgƒnƒ“ƒhƒ‹‚ğg—p‚µ‚Ä‚yƒoƒbƒtƒ@‚É‘Î‚µ‚Ä‘®w’è•¶š—ñ‚ğ•ÏŒ`•`‰æ‚·‚é

#endif // DX_NON_FONT








// DxMath.cpp ŠÖ”ƒvƒƒgƒ^ƒCƒvéŒ¾

// ‰‰Zƒ‰ƒCƒuƒ‰ƒŠ
extern	int			ConvertMatrixFtoD(             MATRIX_D *Out, const MATRIX   *In ) ;															// floatŒ^—v‘f‚Ìs—ñ‚ğdoubleŒ^—v‘f‚Ìs—ñ‚É•ÏŠ·‚·‚é
extern	int			ConvertMatrixDtoF(             MATRIX   *Out, const MATRIX_D *In ) ;															// doubleŒ^—v‘f‚Ìs—ñ‚ğfloatŒ^—v‘f‚Ìs—ñ‚É•ÏŠ·‚·‚é
extern	int			CreateIdentityMatrix(          MATRIX   *Out ) ;																				// ’PˆÊs—ñ‚ğì¬‚·‚é
extern	int			CreateIdentityMatrixD(         MATRIX_D *Out ) ;																				// ’PˆÊs—ñ‚ğì¬‚·‚é
extern	int			CreateLookAtMatrix(            MATRIX   *Out, const VECTOR   *Eye, const VECTOR   *At, const VECTOR   *Up ) ;					// ƒrƒ…[s—ñ‚ğì¬‚·‚é
extern	int			CreateLookAtMatrixD(           MATRIX_D *Out, const VECTOR_D *Eye, const VECTOR_D *At, const VECTOR_D *Up ) ;					// ƒrƒ…[s—ñ‚ğì¬‚·‚é
extern	int			CreateLookAtMatrix2(           MATRIX   *Out, const VECTOR   *Eye, double XZAngle, double Oira ) ;								// ƒrƒ…[s—ñ‚ğì¬‚·‚é(•ûŒü‚ğ‰ñ“]’l‚Åw’è)
extern	int			CreateLookAtMatrix2D(          MATRIX_D *Out, const VECTOR_D *Eye, double XZAngle, double Oira ) ;								// ƒrƒ…[s—ñ‚ğì¬‚·‚é(•ûŒü‚ğ‰ñ“]’l‚Åw’è)
extern	int			CreateLookAtMatrixRH(          MATRIX   *Out, const VECTOR   *Eye, const VECTOR   *At, const VECTOR   *Up ) ;					// ƒrƒ…[s—ñ‚ğì¬‚·‚é(‰EèÀ•WŒn—p)
extern	int			CreateLookAtMatrixRHD(         MATRIX_D *Out, const VECTOR_D *Eye, const VECTOR_D *At, const VECTOR_D *Up ) ;					// ƒrƒ…[s—ñ‚ğì¬‚·‚é(‰EèÀ•WŒn—p)
extern	int			CreateMultiplyMatrix(          MATRIX   *Out, const MATRIX   *In1, const MATRIX   *In2 ) ;										// s—ñ‚ÌÏ‚ğ‹‚ß‚é
extern	int			CreateMultiplyMatrixD(         MATRIX_D *Out, const MATRIX_D *In1, const MATRIX_D *In2 ) ;										// s—ñ‚ÌÏ‚ğ‹‚ß‚é
extern	int			CreatePerspectiveFovMatrix(    MATRIX   *Out, float  fov,  float  zn, float  zf, float  aspect = -1.0f ) ;						// Ë‰es—ñ‚ğì¬‚·‚é
extern	int			CreatePerspectiveFovMatrixD(   MATRIX_D *Out, double fov,  double zn, double zf, double aspect = -1.0f ) ;						// Ë‰es—ñ‚ğì¬‚·‚é
extern	int			CreatePerspectiveFovMatrixRH(  MATRIX   *Out, float  fov,  float  zn, float  zf, float  aspect = -1.0f ) ;						// Ë‰es—ñ‚ğì¬‚·‚é(‰EèÀ•WŒn—p)
extern	int			CreatePerspectiveFovMatrixRHD( MATRIX_D *Out, double fov,  double zn, double zf, double aspect = -1.0f ) ;						// Ë‰es—ñ‚ğì¬‚·‚é(‰EèÀ•WŒn—p)
extern	int			CreateOrthoMatrix(             MATRIX   *Out, float  size, float  zn, float  zf, float  aspect = -1.0f ) ;						// ³Ë‰es—ñ‚ğì¬‚·‚é
extern	int			CreateOrthoMatrixD(            MATRIX_D *Out, double size, double zn, double zf, double aspect = -1.0f ) ;						// ³Ë‰es—ñ‚ğì¬‚·‚é
extern	int			CreateOrthoMatrixRH(           MATRIX   *Out, float  size, float  zn, float  zf, float  aspect = -1.0f ) ;						// ³Ë‰es—ñ‚ğì¬‚·‚é(‰EèÀ•WŒn—p)
extern	int			CreateOrthoMatrixRHD(          MATRIX_D *Out, double size, double zn, double zf, double aspect = -1.0f ) ;						// ³Ë‰es—ñ‚ğì¬‚·‚é(‰EèÀ•WŒn—p)
extern	int			CreateScalingMatrix(           MATRIX   *Out, float  sx, float  sy, float  sz ) ;												// ƒXƒP[ƒŠƒ“ƒOs—ñ‚ğì¬‚·‚é
extern	int			CreateScalingMatrixD(          MATRIX_D *Out, double sx, double sy, double sz ) ;												// ƒXƒP[ƒŠƒ“ƒOs—ñ‚ğì¬‚·‚é
extern	int			CreateRotationXMatrix(         MATRIX   *Out, float  Angle ) ;																	// ‚w²‚ğ’†S‚Æ‚µ‚½‰ñ“]s—ñ‚ğì¬‚·‚é
extern	int			CreateRotationXMatrixD(        MATRIX_D *Out, double Angle ) ;																	// ‚w²‚ğ’†S‚Æ‚µ‚½‰ñ“]s—ñ‚ğì¬‚·‚é
extern	int			CreateRotationYMatrix(         MATRIX   *Out, float  Angle ) ;																	// ‚x²‚ğ’†S‚Æ‚µ‚½‰ñ“]s—ñ‚ğì¬‚·‚é
extern	int			CreateRotationYMatrixD(        MATRIX_D *Out, double Angle ) ;																	// ‚x²‚ğ’†S‚Æ‚µ‚½‰ñ“]s—ñ‚ğì¬‚·‚é
extern	int			CreateRotationZMatrix(         MATRIX   *Out, float  Angle ) ;																	// ‚y²‚ğ’†S‚Æ‚µ‚½‰ñ“]s—ñ‚ğì¬‚·‚é
extern	int			CreateRotationZMatrixD(        MATRIX_D *Out, double Angle ) ;																	// ‚y²‚ğ’†S‚Æ‚µ‚½‰ñ“]s—ñ‚ğì¬‚·‚é
extern	int			CreateTranslationMatrix(       MATRIX   *Out, float  x, float  y, float  z ) ;													// •½sˆÚ“®s—ñ‚ğì¬‚·‚é
extern	int			CreateTranslationMatrixD(      MATRIX_D *Out, double x, double y, double z ) ;													// •½sˆÚ“®s—ñ‚ğì¬‚·‚é
extern	int			CreateTransposeMatrix(         MATRIX   *Out, const MATRIX   *In ) ;															// “]’us—ñ‚ğì¬‚·‚é
extern	int			CreateTransposeMatrixD(        MATRIX_D *Out, const MATRIX_D *In ) ;															// “]’us—ñ‚ğì¬‚·‚é
extern	int			CreateInverseMatrix(           MATRIX   *Out, const MATRIX   *In ) ;															// ‹ts—ñ‚ğì¬‚·‚é
extern	int			CreateInverseMatrixD(          MATRIX_D *Out, const MATRIX_D *In ) ;															// ‹ts—ñ‚ğì¬‚·‚é
extern	int			CreateViewportMatrix(          MATRIX   *Out, float  CenterX, float  CenterY, float  Width, float  Height ) ;					// ƒrƒ…[ƒ|[ƒgs—ñ‚ğì¬‚·‚é
extern	int			CreateViewportMatrixD(         MATRIX_D *Out, double CenterX, double CenterY, double Width, double Height ) ;					// ƒrƒ…[ƒ|[ƒgs—ñ‚ğì¬‚·‚é
extern	int			CreateRotationXYZMatrix(       MATRIX   *Out, float  XRot, float  YRot, float  ZRot ) ;											// ‚w²‰ñ“]¨‚x²‰ñ“]¨‚y²‰ñ“]‚ğ‡¬‚µ‚½s—ñ‚ğì¬‚·‚é
extern	int			CreateRotationXYZMatrixD(      MATRIX_D *Out, double XRot, double YRot, double ZRot ) ;											// ‚w²‰ñ“]¨‚x²‰ñ“]¨‚y²‰ñ“]‚ğ‡¬‚µ‚½s—ñ‚ğì¬‚·‚é
extern	int			CreateRotationXZYMatrix(       MATRIX   *Out, float  XRot, float  YRot, float  ZRot ) ;											// ‚w²‰ñ“]¨‚y²‰ñ“]¨‚x²‰ñ“]‚ğ‡¬‚µ‚½s—ñ‚ğì¬‚·‚é
extern	int			CreateRotationXZYMatrixD(      MATRIX_D *Out, double XRot, double YRot, double ZRot ) ;											// ‚w²‰ñ“]¨‚y²‰ñ“]¨‚x²‰ñ“]‚ğ‡¬‚µ‚½s—ñ‚ğì¬‚·‚é
extern	int			CreateRotationYXZMatrix(       MATRIX   *Out, float  XRot, float  YRot, float  ZRot ) ;											// ‚x²‰ñ“]¨‚w²‰ñ“]¨‚y²‰ñ“]‚ğ‡¬‚µ‚½s—ñ‚ğì¬‚·‚é
extern	int			CreateRotationYXZMatrixD(      MATRIX_D *Out, double XRot, double YRot, double ZRot ) ;											// ‚x²‰ñ“]¨‚w²‰ñ“]¨‚y²‰ñ“]‚ğ‡¬‚µ‚½s—ñ‚ğì¬‚·‚é
extern	int			CreateRotationYZXMatrix(       MATRIX   *Out, float  XRot, float  YRot, float  ZRot ) ;											// ‚x²‰ñ“]¨‚y²‰ñ“]¨‚w²‰ñ“]‚ğ‡¬‚µ‚½s—ñ‚ğì¬‚·‚é
extern	int			CreateRotationYZXMatrixD(      MATRIX_D *Out, double XRot, double YRot, double ZRot ) ;											// ‚x²‰ñ“]¨‚y²‰ñ“]¨‚w²‰ñ“]‚ğ‡¬‚µ‚½s—ñ‚ğì¬‚·‚é
extern	int			CreateRotationZXYMatrix(       MATRIX   *Out, float  XRot, float  YRot, float  ZRot ) ;											// ‚y²‰ñ“]¨‚w²‰ñ“]¨‚x²‰ñ“]‚ğ‡¬‚µ‚½s—ñ‚ğì¬‚·‚é
extern	int			CreateRotationZXYMatrixD(      MATRIX_D *Out, double XRot, double YRot, double ZRot ) ;											// ‚y²‰ñ“]¨‚w²‰ñ“]¨‚x²‰ñ“]‚ğ‡¬‚µ‚½s—ñ‚ğì¬‚·‚é
extern	int			CreateRotationZYXMatrix(       MATRIX   *Out, float  XRot, float  YRot, float  ZRot ) ;											// ‚y²‰ñ“]¨‚x²‰ñ“]¨‚w²‰ñ“]‚ğ‡¬‚µ‚½s—ñ‚ğì¬‚·‚é
extern	int			CreateRotationZYXMatrixD(      MATRIX_D *Out, double XRot, double YRot, double ZRot ) ;											// ‚y²‰ñ“]¨‚x²‰ñ“]¨‚w²‰ñ“]‚ğ‡¬‚µ‚½s—ñ‚ğì¬‚·‚é
extern	int			GetMatrixXYZRotation(          const MATRIX   *In, float  *OutXRot, float  *OutYRot, float  *OutZRot ) ;						// s—ñ‚©‚ç‚w‚x‚y²‰ñ“]‚Ì’l‚ğæ“¾‚·‚é( –ß‚è’l@-1:ƒWƒ“ƒoƒ‹ƒƒbƒN”­¶  0:¬Œ÷ )
extern	int			GetMatrixXYZRotationD(         const MATRIX_D *In, double *OutXRot, double *OutYRot, double *OutZRot ) ;						// s—ñ‚©‚ç‚w‚x‚y²‰ñ“]‚Ì’l‚ğæ“¾‚·‚é( –ß‚è’l@-1:ƒWƒ“ƒoƒ‹ƒƒbƒN”­¶  0:¬Œ÷ )
extern	int			GetMatrixXZYRotation(          const MATRIX   *In, float  *OutXRot, float  *OutYRot, float  *OutZRot ) ;						// s—ñ‚©‚ç‚w‚y‚x²‰ñ“]‚Ì’l‚ğæ“¾‚·‚é( –ß‚è’l@-1:ƒWƒ“ƒoƒ‹ƒƒbƒN”­¶  0:¬Œ÷ )
extern	int			GetMatrixXZYRotationD(         const MATRIX_D *In, double *OutXRot, double *OutYRot, double *OutZRot ) ;						// s—ñ‚©‚ç‚w‚y‚x²‰ñ“]‚Ì’l‚ğæ“¾‚·‚é( –ß‚è’l@-1:ƒWƒ“ƒoƒ‹ƒƒbƒN”­¶  0:¬Œ÷ )
extern	int			GetMatrixYXZRotation(          const MATRIX   *In, float  *OutXRot, float  *OutYRot, float  *OutZRot ) ;						// s—ñ‚©‚ç‚x‚w‚y²‰ñ“]‚Ì’l‚ğæ“¾‚·‚é( –ß‚è’l@-1:ƒWƒ“ƒoƒ‹ƒƒbƒN”­¶  0:¬Œ÷ )
extern	int			GetMatrixYXZRotationD(         const MATRIX_D *In, double *OutXRot, double *OutYRot, double *OutZRot ) ;						// s—ñ‚©‚ç‚x‚w‚y²‰ñ“]‚Ì’l‚ğæ“¾‚·‚é( –ß‚è’l@-1:ƒWƒ“ƒoƒ‹ƒƒbƒN”­¶  0:¬Œ÷ )
extern	int			GetMatrixYZXRotation(          const MATRIX   *In, float  *OutXRot, float  *OutYRot, float  *OutZRot ) ;						// s—ñ‚©‚ç‚x‚y‚w²‰ñ“]‚Ì’l‚ğæ“¾‚·‚é( –ß‚è’l@-1:ƒWƒ“ƒoƒ‹ƒƒbƒN”­¶  0:¬Œ÷ )
extern	int			GetMatrixYZXRotationD(         const MATRIX_D *In, double *OutXRot, double *OutYRot, double *OutZRot ) ;						// s—ñ‚©‚ç‚x‚y‚w²‰ñ“]‚Ì’l‚ğæ“¾‚·‚é( –ß‚è’l@-1:ƒWƒ“ƒoƒ‹ƒƒbƒN”­¶  0:¬Œ÷ )
extern	int			GetMatrixZXYRotation(          const MATRIX   *In, float  *OutXRot, float  *OutYRot, float  *OutZRot ) ;						// s—ñ‚©‚ç‚y‚w‚x²‰ñ“]‚Ì’l‚ğæ“¾‚·‚é( –ß‚è’l@-1:ƒWƒ“ƒoƒ‹ƒƒbƒN”­¶  0:¬Œ÷ )
extern	int			GetMatrixZXYRotationD(         const MATRIX_D *In, double *OutXRot, double *OutYRot, double *OutZRot ) ;						// s—ñ‚©‚ç‚y‚w‚x²‰ñ“]‚Ì’l‚ğæ“¾‚·‚é( –ß‚è’l@-1:ƒWƒ“ƒoƒ‹ƒƒbƒN”­¶  0:¬Œ÷ )
extern	int			GetMatrixZYXRotation(          const MATRIX   *In, float  *OutXRot, float  *OutYRot, float  *OutZRot ) ;						// s—ñ‚©‚ç‚y‚x‚w²‰ñ“]‚Ì’l‚ğæ“¾‚·‚é( –ß‚è’l@-1:ƒWƒ“ƒoƒ‹ƒƒbƒN”­¶  0:¬Œ÷ )
extern	int			GetMatrixZYXRotationD(         const MATRIX_D *In, double *OutXRot, double *OutYRot, double *OutZRot ) ;						// s—ñ‚©‚ç‚y‚x‚w²‰ñ“]‚Ì’l‚ğæ“¾‚·‚é( –ß‚è’l@-1:ƒWƒ“ƒoƒ‹ƒƒbƒN”­¶  0:¬Œ÷ )
extern	int			VectorConvertFtoD(             VECTOR_D *Out, const VECTOR   *In ) ;															// floatŒ^‚ÌƒxƒNƒgƒ‹‚ğdoubleŒ^‚ÌƒxƒNƒgƒ‹‚É•ÏŠ·‚·‚é
extern	int			VectorConvertDtoF(             VECTOR   *Out, const VECTOR_D *In ) ;															// doubleŒ^‚ÌƒxƒNƒgƒ‹‚ğfloatŒ^‚ÌƒxƒNƒgƒ‹‚É•ÏŠ·‚·‚é
extern	int			VectorNormalize(               VECTOR   *Out, const VECTOR   *In ) ;															// ƒxƒNƒgƒ‹‚ğ³‹K‰»‚·‚é
extern	int			VectorNormalizeD(              VECTOR_D *Out, const VECTOR_D *In ) ;															// ƒxƒNƒgƒ‹‚ğ³‹K‰»‚·‚é
extern	int			VectorScale(                   VECTOR   *Out, const VECTOR   *In, float  Scale ) ;												// ƒxƒNƒgƒ‹‚ğƒXƒJƒ‰[”{‚·‚é
extern	int			VectorScaleD(                  VECTOR_D *Out, const VECTOR_D *In, double Scale ) ;												// ƒxƒNƒgƒ‹‚ğƒXƒJƒ‰[”{‚·‚é
extern	int			VectorMultiply(                VECTOR   *Out, const VECTOR   *In1, const VECTOR   *In2 ) ;										// ƒxƒNƒgƒ‹‚ÌŠ|‚¯Z‚ğ‚·‚é
extern	int			VectorMultiplyD(               VECTOR_D *Out, const VECTOR_D *In1, const VECTOR_D *In2 ) ;										// ƒxƒNƒgƒ‹‚ÌŠ|‚¯Z‚ğ‚·‚é
extern	int			VectorSub(                     VECTOR   *Out, const VECTOR   *In1, const VECTOR   *In2 ) ;										// Out = In1 - In2 ‚ÌƒxƒNƒgƒ‹ŒvZ‚ğ‚·‚é 
extern	int			VectorSubD(                    VECTOR_D *Out, const VECTOR_D *In1, const VECTOR_D *In2 ) ;										// Out = In1 - In2 ‚ÌƒxƒNƒgƒ‹ŒvZ‚ğ‚·‚é 
extern	int			VectorAdd(                     VECTOR   *Out, const VECTOR   *In1, const VECTOR   *In2 ) ;										// Out = In1 + In2 ‚ÌƒxƒNƒgƒ‹ŒvZ‚ğ‚·‚é 
extern	int			VectorAddD(                    VECTOR_D *Out, const VECTOR_D *In1, const VECTOR_D *In2 ) ;										// Out = In1 + In2 ‚ÌƒxƒNƒgƒ‹ŒvZ‚ğ‚·‚é 
extern	int			VectorOuterProduct(            VECTOR   *Out, const VECTOR   *In1, const VECTOR   *In2 ) ;										// In1‚ÆIn2‚ÌŠOÏ‚ğŒvZ‚·‚é
extern	int			VectorOuterProductD(           VECTOR_D *Out, const VECTOR_D *In1, const VECTOR_D *In2 ) ;										// In1‚ÆIn2‚ÌŠOÏ‚ğŒvZ‚·‚é
extern	float 		VectorInnerProduct(            const VECTOR   *In1, const VECTOR   *In2 ) ;														// In1‚ÆIn2‚Ì“àÏ‚ğŒvZ‚·‚é
extern	double		VectorInnerProductD(           const VECTOR_D *In1, const VECTOR_D *In2 ) ;														// In1‚ÆIn2‚Ì“àÏ‚ğŒvZ‚·‚é
extern	int			VectorRotationX(               VECTOR   *Out, const VECTOR   *In, double Angle ) ;												// ƒxƒNƒgƒ‹‚Ì‚w²‚ğ²‚É‚µ‚½‰ñ“]‚ğs‚¤
extern	int			VectorRotationXD(              VECTOR_D *Out, const VECTOR_D *In, double Angle ) ;												// ƒxƒNƒgƒ‹‚Ì‚w²‚ğ²‚É‚µ‚½‰ñ“]‚ğs‚¤
extern	int			VectorRotationY(               VECTOR   *Out, const VECTOR   *In, double Angle ) ;												// ƒxƒNƒgƒ‹‚Ì‚x²‚ğ²‚É‚µ‚½‰ñ“]‚ğs‚¤
extern	int			VectorRotationYD(              VECTOR_D *Out, const VECTOR_D *In, double Angle ) ;												// ƒxƒNƒgƒ‹‚Ì‚x²‚ğ²‚É‚µ‚½‰ñ“]‚ğs‚¤
extern	int			VectorRotationZ(               VECTOR   *Out, const VECTOR   *In, double Angle ) ;												// ƒxƒNƒgƒ‹‚Ì‚y²‚ğ²‚É‚µ‚½‰ñ“]‚ğs‚¤
extern	int			VectorRotationZD(              VECTOR_D *Out, const VECTOR_D *In, double Angle ) ;												// ƒxƒNƒgƒ‹‚Ì‚y²‚ğ²‚É‚µ‚½‰ñ“]‚ğs‚¤
extern	int			VectorTransform(               VECTOR   *Out, const VECTOR   *InVec, const MATRIX   *InMatrix ) ;								// ƒxƒNƒgƒ‹s—ñ‚Æ4x4³•ûs—ñ‚ğæZ‚·‚é( w ‚Í 1 ‚Æ‰¼’è )
extern	int			VectorTransformD(              VECTOR_D *Out, const VECTOR_D *InVec, const MATRIX_D *InMatrix ) ;								// ƒxƒNƒgƒ‹s—ñ‚Æ4x4³•ûs—ñ‚ğæZ‚·‚é( w ‚Í 1 ‚Æ‰¼’è )
extern	int			VectorTransformSR(             VECTOR   *Out, const VECTOR   *InVec, const MATRIX   *InMatrix ) ;								// ƒxƒNƒgƒ‹s—ñ‚Æ4x4³•ûs—ñ‚Ì‰ñ“]•”•ª‚Ì‚İ‚ğæZ‚·‚é
extern	int			VectorTransformSRD(            VECTOR_D *Out, const VECTOR_D *InVec, const MATRIX_D *InMatrix ) ;								// ƒxƒNƒgƒ‹s—ñ‚Æ4x4³•ûs—ñ‚Ì‰ñ“]•”•ª‚Ì‚İ‚ğæZ‚·‚é
extern	int			VectorTransform4(              VECTOR   *Out, float  *V4Out, const VECTOR   *InVec, const float  *V4In, const MATRIX   *InMatrix ) ; // ƒxƒNƒgƒ‹s—ñ‚Æ4x4³•ûs—ñ‚ğæZ‚·‚é( w ‚Ì—v‘f‚ğ“n‚· )
extern	int			VectorTransform4D(             VECTOR_D *Out, double *V4Out, const VECTOR_D *InVec, const double *V4In, const MATRIX_D *InMatrix ) ; // ƒxƒNƒgƒ‹s—ñ‚Æ4x4³•ûs—ñ‚ğæZ‚·‚é( w ‚Ì—v‘f‚ğ“n‚· )

extern	int			Segment_Segment_Analyse(      const VECTOR   *SegmentAPos1, const VECTOR   *SegmentAPos2, const VECTOR   *SegmentBPos1, const VECTOR   *SegmentBPos2, SEGMENT_SEGMENT_RESULT   *Result ) ;								// “ñ‚Â‚Ìü•ª‚ÌÅÚ‹ß“_î•ñ‚ğ‰ğÍ‚·‚é
extern	int			Segment_Segment_AnalyseD(     const VECTOR_D *SegmentAPos1, const VECTOR_D *SegmentAPos2, const VECTOR_D *SegmentBPos1, const VECTOR_D *SegmentBPos2, SEGMENT_SEGMENT_RESULT_D *Result ) ;								// “ñ‚Â‚Ìü•ª‚ÌÅÚ‹ß“_î•ñ‚ğ‰ğÍ‚·‚é
extern	int			Segment_Point_Analyse(        const VECTOR   *SegmentPos1, const VECTOR   *SegmentPos2, const VECTOR   *PointPos, SEGMENT_POINT_RESULT   *Result ) ;																	// ü•ª‚Æ“_‚ÌÅÚ‹ß“_î•ñ‚ğ‰ğÍ‚·‚é
extern	int			Segment_Point_AnalyseD(       const VECTOR_D *SegmentPos1, const VECTOR_D *SegmentPos2, const VECTOR_D *PointPos, SEGMENT_POINT_RESULT_D *Result ) ;																	// ü•ª‚Æ“_‚ÌÅÚ‹ß“_î•ñ‚ğ‰ğÍ‚·‚é
extern	int			Segment_Triangle_Analyse(     const VECTOR   *SegmentPos1, const VECTOR   *SegmentPos2, const VECTOR   *TrianglePos1, const VECTOR   *TrianglePos2, const VECTOR   *TrianglePos3, SEGMENT_TRIANGLE_RESULT   *Result ) ;	// ü•ª‚ÆOŠpŒ`‚ÌÅÚ‹ß“_î•ñ‚ğ‰ğÍ‚·‚é
extern	int			Segment_Triangle_AnalyseD(    const VECTOR_D *SegmentPos1, const VECTOR_D *SegmentPos2, const VECTOR_D *TrianglePos1, const VECTOR_D *TrianglePos2, const VECTOR_D *TrianglePos3, SEGMENT_TRIANGLE_RESULT_D *Result ) ;	// ü•ª‚ÆOŠpŒ`‚ÌÅÚ‹ß“_î•ñ‚ğ‰ğÍ‚·‚é
extern	int			Triangle_Point_Analyse(       const VECTOR   *TrianglePos1, const VECTOR   *TrianglePos2, const VECTOR   *TrianglePos3, const VECTOR   *PointPos, TRIANGLE_POINT_RESULT   *Result ) ;									// OŠpŒ`‚Æ“_‚ÌÅÚ‹ß“_î•ñ‚ğ‰ğÍ‚·‚é
extern	int			Triangle_Point_AnalyseD(      const VECTOR_D *TrianglePos1, const VECTOR_D *TrianglePos2, const VECTOR_D *TrianglePos3, const VECTOR_D *PointPos, TRIANGLE_POINT_RESULT_D *Result ) ;									// OŠpŒ`‚Æ“_‚ÌÅÚ‹ß“_î•ñ‚ğ‰ğÍ‚·‚é
extern	int			Plane_Point_Analyse(          const VECTOR   *PlanePos, const VECTOR   *PlaneNormal, const VECTOR   *PointPos, PLANE_POINT_RESULT   *Result ) ;																			// •½–Ê‚Æ“_‚ÌÅ‹ß“_î•ñ‚ğ‰ğÍ‚·‚é
extern	int			Plane_Point_AnalyseD(         const VECTOR_D *PlanePos, const VECTOR_D *PlaneNormal, const VECTOR_D *PointPos, PLANE_POINT_RESULT_D *Result ) ;																			// •½–Ê‚Æ“_‚ÌÅ‹ß“_î•ñ‚ğ‰ğÍ‚·‚é

extern	void		TriangleBarycenter(           VECTOR   TrianglePos1, VECTOR   TrianglePos2, VECTOR   TrianglePos3, VECTOR   Position, float  *TrianglePos1Weight, float  *TrianglePos2Weight, float  *TrianglePos3Weight ) ;	// w’è‚ÌÀ•W‚©‚çOŠpŒ`‚ÌdS‚ğ‹‚ß‚é
extern	void		TriangleBarycenterD(          VECTOR_D TrianglePos1, VECTOR_D TrianglePos2, VECTOR_D TrianglePos3, VECTOR_D Position, double *TrianglePos1Weight, double *TrianglePos2Weight, double *TrianglePos3Weight ) ;	// w’è‚ÌÀ•W‚©‚çOŠpŒ`‚ÌdS‚ğ‹‚ß‚é

extern	float 		Segment_Segment_MinLength(           VECTOR   SegmentAPos1, VECTOR   SegmentAPos2, VECTOR   SegmentBPos1, VECTOR   SegmentBPos2 ) ;														// “ñ‚Â‚Ìü•ª‚ÌÅ‹ß“_ŠÔ‚Ì‹——£‚ğ“¾‚é
extern	double		Segment_Segment_MinLengthD(          VECTOR_D SegmentAPos1, VECTOR_D SegmentAPos2, VECTOR_D SegmentBPos1, VECTOR_D SegmentBPos2 ) ;														// “ñ‚Â‚Ìü•ª‚ÌÅ‹ß“_ŠÔ‚Ì‹——£‚ğ“¾‚é
extern	float 		Segment_Segment_MinLength_Square(    VECTOR   SegmentAPos1, VECTOR   SegmentAPos2, VECTOR   SegmentBPos1, VECTOR   SegmentBPos2 ) ;														// “ñ‚Â‚Ìü•ª‚ÌÅ‹ß“_ŠÔ‚Ì‹——£‚Ì“ñæ‚ğ“¾‚é
extern	double		Segment_Segment_MinLength_SquareD(   VECTOR_D SegmentAPos1, VECTOR_D SegmentAPos2, VECTOR_D SegmentBPos1, VECTOR_D SegmentBPos2 ) ;														// “ñ‚Â‚Ìü•ª‚ÌÅ‹ß“_ŠÔ‚Ì‹——£‚Ì“ñæ‚ğ“¾‚é
extern	float 		Segment_Triangle_MinLength(          VECTOR   SegmentPos1, VECTOR   SegmentPos2, VECTOR   TrianglePos1, VECTOR   TrianglePos2, VECTOR   TrianglePos3 ) ;								// ü•ª‚ÆOŠpŒ`‚ÌÅ‹ß“_ŠÔ‚Ì‹——£‚ğ“¾‚é 
extern	double		Segment_Triangle_MinLengthD(         VECTOR_D SegmentPos1, VECTOR_D SegmentPos2, VECTOR_D TrianglePos1, VECTOR_D TrianglePos2, VECTOR_D TrianglePos3 ) ;								// ü•ª‚ÆOŠpŒ`‚ÌÅ‹ß“_ŠÔ‚Ì‹——£‚ğ“¾‚é 
extern	float 		Segment_Triangle_MinLength_Square(   VECTOR   SegmentPos1, VECTOR   SegmentPos2, VECTOR   TrianglePos1, VECTOR   TrianglePos2, VECTOR   TrianglePos3 ) ;								// ü•ª‚ÆOŠpŒ`‚ÌÅ‹ß“_ŠÔ‚Ì‹——£‚Ì“ñæ‚ğ“¾‚é 
extern	double		Segment_Triangle_MinLength_SquareD(  VECTOR_D SegmentPos1, VECTOR_D SegmentPos2, VECTOR_D TrianglePos1, VECTOR_D TrianglePos2, VECTOR_D TrianglePos3 ) ;								// ü•ª‚ÆOŠpŒ`‚ÌÅ‹ß“_ŠÔ‚Ì‹——£‚Ì“ñæ‚ğ“¾‚é 
extern	float 		Segment_Point_MinLength(             VECTOR   SegmentPos1, VECTOR   SegmentPos2, VECTOR   PointPos ) ;																					// ü•ª‚Æ“_‚Ìˆê”Ô‹ß‚¢‹——£‚ğ“¾‚é
extern	double		Segment_Point_MinLengthD(            VECTOR_D SegmentPos1, VECTOR_D SegmentPos2, VECTOR_D PointPos ) ;																					// ü•ª‚Æ“_‚Ìˆê”Ô‹ß‚¢‹——£‚ğ“¾‚é
extern	float 		Segment_Point_MinLength_Square(      VECTOR   SegmentPos1, VECTOR   SegmentPos2, VECTOR   PointPos ) ;																					// ü•ª‚Æ“_‚Ìˆê”Ô‹ß‚¢‹——£‚Ì“ñæ‚ğ“¾‚é
extern	double		Segment_Point_MinLength_SquareD(     VECTOR_D SegmentPos1, VECTOR_D SegmentPos2, VECTOR_D PointPos ) ;																					// ü•ª‚Æ“_‚Ìˆê”Ô‹ß‚¢‹——£‚Ì“ñæ‚ğ“¾‚é
extern	float 		Triangle_Point_MinLength(            VECTOR   TrianglePos1, VECTOR   TrianglePos2, VECTOR   TrianglePos3, VECTOR   PointPos ) ;															// OŠpŒ`‚Æ“_‚Ìˆê”Ô‹ß‚¢‹——£‚ğ“¾‚é
extern	double		Triangle_Point_MinLengthD(           VECTOR_D TrianglePos1, VECTOR_D TrianglePos2, VECTOR_D TrianglePos3, VECTOR_D PointPos ) ;															// OŠpŒ`‚Æ“_‚Ìˆê”Ô‹ß‚¢‹——£‚ğ“¾‚é
extern	float 		Triangle_Point_MinLength_Square(     VECTOR   TrianglePos1, VECTOR   TrianglePos2, VECTOR   TrianglePos3, VECTOR   PointPos ) ;															// OŠpŒ`‚Æ“_‚Ìˆê”Ô‹ß‚¢‹——£‚Ì“ñæ‚ğ“¾‚é
extern	double		Triangle_Point_MinLength_SquareD(    VECTOR_D TrianglePos1, VECTOR_D TrianglePos2, VECTOR_D TrianglePos3, VECTOR_D PointPos ) ;															// OŠpŒ`‚Æ“_‚Ìˆê”Ô‹ß‚¢‹——£‚Ì“ñæ‚ğ“¾‚é
extern	float 		Triangle_Triangle_MinLength(         VECTOR   Triangle1Pos1, VECTOR   Triangle1Pos2, VECTOR   Triangle1Pos3, VECTOR   Triangle2Pos1, VECTOR   Triangle2Pos2, VECTOR   Triangle2Pos3 ) ;	// “ñ‚Â‚ÌOŠpŒ`‚ÌÅ‹ß“_ŠÔ‚Ì‹——£‚ğ“¾‚é
extern	double		Triangle_Triangle_MinLengthD(        VECTOR_D Triangle1Pos1, VECTOR_D Triangle1Pos2, VECTOR_D Triangle1Pos3, VECTOR_D Triangle2Pos1, VECTOR_D Triangle2Pos2, VECTOR_D Triangle2Pos3 ) ;	// “ñ‚Â‚ÌOŠpŒ`‚ÌÅ‹ß“_ŠÔ‚Ì‹——£‚ğ“¾‚é
extern	float 		Triangle_Triangle_MinLength_Square(  VECTOR   Triangle1Pos1, VECTOR   Triangle1Pos2, VECTOR   Triangle1Pos3, VECTOR   Triangle2Pos1, VECTOR   Triangle2Pos2, VECTOR   Triangle2Pos3 ) ;	// “ñ‚Â‚ÌOŠpŒ`‚ÌÅ‹ß“_ŠÔ‚Ì‹——£‚Ì“ñæ‚ğ“¾‚é
extern	double		Triangle_Triangle_MinLength_SquareD( VECTOR_D Triangle1Pos1, VECTOR_D Triangle1Pos2, VECTOR_D Triangle1Pos3, VECTOR_D Triangle2Pos1, VECTOR_D Triangle2Pos2, VECTOR_D Triangle2Pos3 ) ;	// “ñ‚Â‚ÌOŠpŒ`‚ÌÅ‹ß“_ŠÔ‚Ì‹——£‚Ì“ñæ‚ğ“¾‚é
extern	VECTOR  	Plane_Point_MinLength_Position(      VECTOR   PlanePos, VECTOR   PlaneNormal, VECTOR   PointPos ) ;																						// “_‚Éˆê”Ô‹ß‚¢•½–Êã‚ÌÀ•W‚ğ“¾‚é
extern	VECTOR_D	Plane_Point_MinLength_PositionD(     VECTOR_D PlanePos, VECTOR_D PlaneNormal, VECTOR_D PointPos ) ;																						// “_‚Éˆê”Ô‹ß‚¢•½–Êã‚ÌÀ•W‚ğ“¾‚é
extern	float 		Plane_Point_MinLength(               VECTOR   PlanePos, VECTOR   PlaneNormal, VECTOR   PointPos ) ;																						// •½–Ê‚Æ“_‚Ìˆê”Ô‹ß‚¢‹——£‚ğ“¾‚é
extern	double		Plane_Point_MinLengthD(              VECTOR_D PlanePos, VECTOR_D PlaneNormal, VECTOR_D PointPos ) ;																						// •½–Ê‚Æ“_‚Ìˆê”Ô‹ß‚¢‹——£‚ğ“¾‚é

extern	HITRESULT_LINE   HitCheck_Line_Triangle(         VECTOR   LinePos1, VECTOR   LinePos2, VECTOR   TrianglePos1, VECTOR   TrianglePos2, VECTOR   TrianglePos3 ) ;										// OŠpŒ`‚Æü‚Ì“–‚½‚è”»’è
extern	HITRESULT_LINE_D HitCheck_Line_TriangleD(        VECTOR_D LinePos1, VECTOR_D LinePos2, VECTOR_D TrianglePos1, VECTOR_D TrianglePos2, VECTOR_D TrianglePos3 ) ;										// OŠpŒ`‚Æü‚Ì“–‚½‚è”»’è
extern	int			HitCheck_Triangle_Triangle(          VECTOR   Triangle1Pos1, VECTOR   Triangle1Pos2, VECTOR   Triangle1Pos3, VECTOR   Triangle2Pos1, VECTOR   Triangle2Pos2, VECTOR   Triangle2Pos3 ) ;	// OŠpŒ`‚ÆOŠpŒ`‚Ì“–‚½‚è”»’è( TRUE:“–‚½‚Á‚Ä‚¢‚é  FALSE:“–‚½‚Á‚Ä‚¢‚È‚¢ )
extern	int			HitCheck_Triangle_TriangleD(         VECTOR_D Triangle1Pos1, VECTOR_D Triangle1Pos2, VECTOR_D Triangle1Pos3, VECTOR_D Triangle2Pos1, VECTOR_D Triangle2Pos2, VECTOR_D Triangle2Pos3 ) ;	// OŠpŒ`‚ÆOŠpŒ`‚Ì“–‚½‚è”»’è( TRUE:“–‚½‚Á‚Ä‚¢‚é  FALSE:“–‚½‚Á‚Ä‚¢‚È‚¢ )
extern	int			HitCheck_Triangle_Triangle_2D(       VECTOR   Triangle1Pos1, VECTOR   Triangle1Pos2, VECTOR   Triangle1Pos3, VECTOR   Triangle2Pos1, VECTOR   Triangle2Pos2, VECTOR   Triangle2Pos3 ) ;	// OŠpŒ`‚ÆOŠpŒ`‚Ì“–‚½‚è”»’è( ‚Q‚c”Å )( TRUE:“–‚½‚Á‚Ä‚¢‚é  FALSE:“–‚½‚Á‚Ä‚¢‚È‚¢ )
extern	int			HitCheck_Triangle_TriangleD_2D(      VECTOR_D Triangle1Pos1, VECTOR_D Triangle1Pos2, VECTOR_D Triangle1Pos3, VECTOR_D Triangle2Pos1, VECTOR_D Triangle2Pos2, VECTOR_D Triangle2Pos3 ) ;	// OŠpŒ`‚ÆOŠpŒ`‚Ì“–‚½‚è”»’è( ‚Q‚c”Å )( TRUE:“–‚½‚Á‚Ä‚¢‚é  FALSE:“–‚½‚Á‚Ä‚¢‚È‚¢ )
extern	HITRESULT_LINE   HitCheck_Line_Cube(             VECTOR   LinePos1, VECTOR   LinePos2, VECTOR   CubePos1, VECTOR   CubePos2 );																		// ü‚Æ” ‚Ì“–‚½‚è”»’è
extern	HITRESULT_LINE_D HitCheck_Line_CubeD(            VECTOR_D LinePos1, VECTOR_D LinePos2, VECTOR_D CubePos1, VECTOR_D CubePos2 );																		// ü‚Æ” ‚Ì“–‚½‚è”»’è
extern	int			HitCheck_Line_Sphere(                VECTOR   LinePos1, VECTOR   LinePos2, VECTOR   SphereCenterPos, float  SphereR ) ;																	// ü‚Æ‹…‚Ì“–‚½‚è”»’è( TRUE:“–‚½‚Á‚Ä‚¢‚é  FALSE:“–‚½‚Á‚Ä‚¢‚È‚¢ )
extern	int			HitCheck_Line_SphereD(               VECTOR_D LinePos1, VECTOR_D LinePos2, VECTOR_D SphereCenterPos, double SphereR ) ;																	// ü‚Æ‹…‚Ì“–‚½‚è”»’è( TRUE:“–‚½‚Á‚Ä‚¢‚é  FALSE:“–‚½‚Á‚Ä‚¢‚È‚¢ )
extern	int			HitCheck_Sphere_Sphere(              VECTOR   Sphere1CenterPos, float  Sphere1R, VECTOR   Sphere2CenterPos, float  Sphere2R ) ;															// ‹…‚Æ‹…‚Ì“–‚½‚è”»’è( TRUE:“–‚½‚Á‚Ä‚¢‚é  FALSE:“–‚½‚Á‚Ä‚¢‚È‚¢ )
extern	int			HitCheck_Sphere_SphereD(             VECTOR_D Sphere1CenterPos, double Sphere1R, VECTOR_D Sphere2CenterPos, double Sphere2R ) ;															// ‹…‚Æ‹…‚Ì“–‚½‚è”»’è( TRUE:“–‚½‚Á‚Ä‚¢‚é  FALSE:“–‚½‚Á‚Ä‚¢‚È‚¢ )
extern	int			HitCheck_Sphere_Capsule(             VECTOR   SphereCenterPos, float  SphereR, VECTOR   CapPos1, VECTOR   CapPos2, float  CapR ) ;														// ‹…‚ÆƒJƒvƒZƒ‹‚Ì“–‚½‚è”»’è( TRUE:“–‚½‚Á‚Ä‚¢‚é  FALSE:“–‚½‚Á‚Ä‚¢‚È‚¢ )
extern	int			HitCheck_Sphere_CapsuleD(            VECTOR_D SphereCenterPos, double SphereR, VECTOR_D CapPos1, VECTOR_D CapPos2, double CapR ) ;														// ‹…‚ÆƒJƒvƒZƒ‹‚Ì“–‚½‚è”»’è( TRUE:“–‚½‚Á‚Ä‚¢‚é  FALSE:“–‚½‚Á‚Ä‚¢‚È‚¢ )
extern	int			HitCheck_Sphere_Triangle(            VECTOR   SphereCenterPos, float  SphereR, VECTOR   TrianglePos1, VECTOR   TrianglePos2, VECTOR   TrianglePos3 ) ;									// ‹…‚ÆOŠpŒ`‚Ì“–‚½‚è”»’è( TRUE:“–‚½‚Á‚Ä‚¢‚é  FALSE:“–‚½‚Á‚Ä‚¢‚È‚¢ )
extern	int			HitCheck_Sphere_TriangleD(           VECTOR_D SphereCenterPos, double SphereR, VECTOR_D TrianglePos1, VECTOR_D TrianglePos2, VECTOR_D TrianglePos3 ) ;									// ‹…‚ÆOŠpŒ`‚Ì“–‚½‚è”»’è( TRUE:“–‚½‚Á‚Ä‚¢‚é  FALSE:“–‚½‚Á‚Ä‚¢‚È‚¢ )
extern	int			HitCheck_Capsule_Capsule(            VECTOR   Cap1Pos1, VECTOR   Cap1Pos2, float  Cap1R, VECTOR   Cap2Pos1, VECTOR   Cap2Pos2, float  Cap2R ) ;											// ƒJƒvƒZƒ‹“¯m‚Ì“–‚½‚è”»’è( TRUE:“–‚½‚Á‚Ä‚¢‚é  FALSE:“–‚½‚Á‚Ä‚¢‚È‚¢ )
extern	int			HitCheck_Capsule_CapsuleD(           VECTOR_D Cap1Pos1, VECTOR_D Cap1Pos2, double Cap1R, VECTOR_D Cap2Pos1, VECTOR_D Cap2Pos2, double Cap2R ) ;											// ƒJƒvƒZƒ‹“¯m‚Ì“–‚½‚è”»’è( TRUE:“–‚½‚Á‚Ä‚¢‚é  FALSE:“–‚½‚Á‚Ä‚¢‚È‚¢ )
extern	int			HitCheck_Capsule_Triangle(           VECTOR   CapPos1, VECTOR   CapPos2, float  CapR, VECTOR   TrianglePos1, VECTOR   TrianglePos2, VECTOR   TrianglePos3 ) ;							// ƒJƒvƒZƒ‹‚ÆOŠpŒ`‚Ì“–‚½‚è”»’è( TRUE:“–‚½‚Á‚Ä‚¢‚é  FALSE:“–‚½‚Á‚Ä‚¢‚È‚¢ )
extern	int			HitCheck_Capsule_TriangleD(          VECTOR_D CapPos1, VECTOR_D CapPos2, double CapR, VECTOR_D TrianglePos1, VECTOR_D TrianglePos2, VECTOR_D TrianglePos3 ) ;							// ƒJƒvƒZƒ‹‚ÆOŠpŒ`‚Ì“–‚½‚è”»’è( TRUE:“–‚½‚Á‚Ä‚¢‚é  FALSE:“–‚½‚Á‚Ä‚¢‚È‚¢ )

// ‚»‚Ì‘¼
extern	int			RectClipping( RECT *Rect, const RECT *ClippuRect ) ;						// ‹éŒ`‚ÌƒNƒŠƒbƒsƒ“ƒO
extern	int			RectAdjust(   RECT *Rect ) ;												// ‹éŒ`‚Ì left ‚ª right ‚æ‚è’l‚ª‘å‚«‚¢ê‡‚È‚Ç‚ÌŒë‚è‚ğ•â³‚·‚é
extern	int			GetRectSize(  const RECT *Rect, int *Width, int *Height ) ;					// ‹éŒ`‚Ì•‚Æ‚‚³‚ğ‹‚ß‚é

// •\‹LŠÈ—ª”Å
extern	MATRIX		MGetIdent(          void ) ;															// ’PˆÊs—ñ‚ğæ“¾‚·‚é
extern	MATRIX_D	MGetIdentD(         void ) ;															// ’PˆÊs—ñ‚ğæ“¾‚·‚é
extern	MATRIX		MMult(              MATRIX   In1, MATRIX   In2 ) ;										// s—ñ‚ÌæZ‚ğs‚¤
extern	MATRIX_D	MMultD(             MATRIX_D In1, MATRIX_D In2 ) ;										// s—ñ‚ÌæZ‚ğs‚¤
extern	MATRIX		MScale(             MATRIX   InM, float  Scale ) ;										// s—ñ‚ÌƒXƒP[ƒŠƒ“ƒO‚ğs‚¤
extern	MATRIX_D	MScaleD(            MATRIX_D InM, double Scale ) ;										// s—ñ‚ÌƒXƒP[ƒŠƒ“ƒO‚ğs‚¤
extern	MATRIX		MAdd(               MATRIX   In1, MATRIX   In2 ) ;										// s—ñ‚Ì‘«‚µZ‚ğs‚¤
extern	MATRIX_D	MAddD(              MATRIX_D In1, MATRIX_D In2 ) ;										// s—ñ‚Ì‘«‚µZ‚ğs‚¤
extern	MATRIX		MGetScale(          VECTOR   Scale ) ;													// Šg‘ås—ñ‚ğæ“¾‚·‚é
extern	MATRIX_D	MGetScaleD(         VECTOR_D Scale ) ;													// Šg‘ås—ñ‚ğæ“¾‚·‚é
extern	MATRIX		MGetRotX(           float  XAxisRotate ) ;												// ‚w²‰ñ“]s—ñ‚ğæ“¾‚·‚é
extern	MATRIX_D	MGetRotXD(          double XAxisRotate ) ;												// ‚w²‰ñ“]s—ñ‚ğæ“¾‚·‚é
extern	MATRIX		MGetRotY(           float  YAxisRotate ) ;												// ‚x²‰ñ“]s—ñ‚ğæ“¾‚·‚é
extern	MATRIX_D	MGetRotYD(          double YAxisRotate ) ;												// ‚x²‰ñ“]s—ñ‚ğæ“¾‚·‚é
extern	MATRIX		MGetRotZ(           float  ZAxisRotate ) ;												// ‚y²‰ñ“]s—ñ‚ğæ“¾‚·‚é
extern	MATRIX_D	MGetRotZD(          double ZAxisRotate ) ;												// ‚y²‰ñ“]s—ñ‚ğæ“¾‚·‚é
extern	MATRIX		MGetRotAxis(        VECTOR   RotateAxis, float  Rotate ) ;								// w’è²‚Åw’èŠp“x‰ñ“]‚·‚és—ñ‚ğæ“¾‚·‚é
extern	MATRIX_D	MGetRotAxisD(       VECTOR_D RotateAxis, double Rotate ) ;								// w’è²‚Åw’èŠp“x‰ñ“]‚·‚és—ñ‚ğæ“¾‚·‚é
extern	MATRIX		MGetRotVec2(        VECTOR   In1, VECTOR   In2 ) ;										// In1 ‚ÌŒü‚«‚©‚ç In2 ‚ÌŒü‚«‚Ö•ÏŠ·‚·‚é‰ñ“]s—ñ‚ğæ“¾‚·‚é( In2 ‚Æ In1 ‚ª^‹t‚ÌƒxƒNƒgƒ‹‚Ìê‡‚Í‰ñ“]²‚Í•s’è )
extern	MATRIX_D	MGetRotVec2D(       VECTOR_D In1, VECTOR_D In2 ) ;										// In1 ‚ÌŒü‚«‚©‚ç In2 ‚ÌŒü‚«‚Ö•ÏŠ·‚·‚é‰ñ“]s—ñ‚ğæ“¾‚·‚é( In2 ‚Æ In1 ‚ª^‹t‚ÌƒxƒNƒgƒ‹‚Ìê‡‚Í‰ñ“]²‚Í•s’è )
extern	MATRIX		MGetTranslate(      VECTOR   Trans ) ;													// •½sˆÚ“®s—ñ‚ğæ“¾‚·‚é
extern	MATRIX_D	MGetTranslateD(     VECTOR_D Trans ) ;													// •½sˆÚ“®s—ñ‚ğæ“¾‚·‚é
extern	MATRIX		MGetAxis1(          VECTOR   XAxis, VECTOR   YAxis, VECTOR   ZAxis, VECTOR   Pos ) ;	// w’è‚Ì‚R²ƒ[ƒJƒ‹‚ÌƒxƒNƒgƒ‹‚ğŠî–{²ã‚ÌƒxƒNƒgƒ‹‚É•ÏŠ·‚·‚és—ñ‚ğæ“¾‚·‚é( x' = XAxis.x * x + YAixs.x * y + ZAxis.z * z + Pos.x   y' = XAxis.y * x + YAixs.y * y + ZAxis.y * z + Pos.y      z' = XAxis.z * x + YAixs.z * y + ZAxis.z * z + Pos.z )
extern	MATRIX_D	MGetAxis1D(         VECTOR_D XAxis, VECTOR_D YAxis, VECTOR_D ZAxis, VECTOR_D Pos ) ;	// w’è‚Ì‚R²ƒ[ƒJƒ‹‚ÌƒxƒNƒgƒ‹‚ğŠî–{²ã‚ÌƒxƒNƒgƒ‹‚É•ÏŠ·‚·‚és—ñ‚ğæ“¾‚·‚é( x' = XAxis.x * x + YAixs.x * y + ZAxis.z * z + Pos.x   y' = XAxis.y * x + YAixs.y * y + ZAxis.y * z + Pos.y      z' = XAxis.z * x + YAixs.z * y + ZAxis.z * z + Pos.z )
extern	MATRIX		MGetAxis2(          VECTOR   XAxis, VECTOR   YAxis, VECTOR   ZAxis, VECTOR   Pos ) ;	// Šî–{²ã‚ÌƒxƒNƒgƒ‹‚ğw’è‚Ì‚R²ã‚É“Š‰e‚µ‚½ƒxƒNƒgƒ‹‚É•ÏŠ·‚·‚és—ñ‚ğæ“¾‚·‚é( x' = XAxis.x * ( x - Pos.x ) + XAxis.y * ( x - Pos.x ) + XAxis.z * ( x - Pos.x )    y' = YAxis.x * ( x - Pos.x ) + YAxis.y * ( x - Pos.x ) + YAxis.z * ( x - Pos.x )    z' = ZAxis.x * ( x - Pos.x ) + ZAxis.y * ( x - Pos.x ) + ZAxis.z * ( x - Pos.x ) )
extern	MATRIX_D	MGetAxis2D(         VECTOR_D XAxis, VECTOR_D YAxis, VECTOR_D ZAxis, VECTOR_D Pos ) ;	// Šî–{²ã‚ÌƒxƒNƒgƒ‹‚ğw’è‚Ì‚R²ã‚É“Š‰e‚µ‚½ƒxƒNƒgƒ‹‚É•ÏŠ·‚·‚és—ñ‚ğæ“¾‚·‚é( x' = XAxis.x * ( x - Pos.x ) + XAxis.y * ( x - Pos.x ) + XAxis.z * ( x - Pos.x )    y' = YAxis.x * ( x - Pos.x ) + YAxis.y * ( x - Pos.x ) + YAxis.z * ( x - Pos.x )    z' = ZAxis.x * ( x - Pos.x ) + ZAxis.y * ( x - Pos.x ) + ZAxis.z * ( x - Pos.x ) )
extern	MATRIX		MTranspose(         MATRIX   InM ) ;													// “]’us—ñ‚ğæ“¾‚·‚é
extern	MATRIX_D	MTransposeD(        MATRIX_D InM ) ;													// “]’us—ñ‚ğæ“¾‚·‚é
extern	MATRIX		MInverse(           MATRIX   InM ) ;													// ‹ts—ñ‚ğæ“¾‚·‚é
extern	MATRIX_D	MInverseD(          MATRIX_D InM ) ;													// ‹ts—ñ‚ğæ“¾‚·‚é
extern  VECTOR		MGetSize(           MATRIX   InM ) ;													// Šg‘ås—ñ‚Ì‚w²A‚x²A‚y²‚ÌŠg‘å—¦‚ğæ“¾‚·‚é
extern  VECTOR_D	MGetSizeD(          MATRIX_D InM ) ;													// Šg‘ås—ñ‚Ì‚w²A‚x²A‚y²‚ÌŠg‘å—¦‚ğæ“¾‚·‚é
extern	MATRIX		MGetRotElem(        MATRIX   InM ) ;													// s—ñ‚Ì‰ñ“]¬•ª‚ğæ“¾‚·‚é
extern	MATRIX_D	MGetRotElemD(       MATRIX_D InM ) ;													// s—ñ‚Ì‰ñ“]¬•ª‚ğæ“¾‚·‚é


// s—ñ‚Ì•½sˆÚ“®¬•ª‚ğæ“¾‚·‚é
__inline VECTOR MGetTranslateElem( MATRIX &InM )
{
	VECTOR Result ;

	Result.x = InM.m[ 3 ][ 0 ] ;
	Result.y = InM.m[ 3 ][ 1 ] ;
	Result.z = InM.m[ 3 ][ 2 ] ;

	return Result ;
}

// s—ñ‚Ì•½sˆÚ“®¬•ª‚ğæ“¾‚·‚é
__inline VECTOR_D MGetTranslateElemD( MATRIX_D &InM )
{
	VECTOR_D Result ;

	Result.x = InM.m[ 3 ][ 0 ] ;
	Result.y = InM.m[ 3 ][ 1 ] ;
	Result.z = InM.m[ 3 ][ 2 ] ;

	return Result ;
}

// ƒxƒNƒgƒ‹’l‚Ì•ÏŠ·
__inline VECTOR_D VConvFtoD( const VECTOR &In )
{
	VECTOR_D Result ;

	Result.x = In.x ;
	Result.y = In.y ;
	Result.z = In.z ;

	return Result ;
}

__inline VECTOR VConvDtoF( const VECTOR_D &In )
{
	VECTOR Result ;

	Result.x = ( float )In.x ;
	Result.y = ( float )In.y ;
	Result.z = ( float )In.z ;

	return Result ;
}

// ƒxƒNƒgƒ‹’l‚Ì¶¬
__inline VECTOR VGet( float x, float y, float z )
{
	VECTOR Result;
	Result.x = x ;
	Result.y = y ;
	Result.z = z ;
	return Result ;
}

__inline VECTOR_D VGetD( double x, double y, double z )
{
	VECTOR_D Result;
	Result.x = x ;
	Result.y = y ;
	Result.z = z ;
	return Result ;
}

__inline FLOAT2 F2Get( float u, float v )
{
	FLOAT2 Result;
	Result.u = u ;
	Result.v = v ;
	return Result ;
}

// ‚S—v‘fƒxƒNƒgƒ‹’l‚Ì¶¬
__inline FLOAT4 F4Get( float x, float y, float z, float w )
{
	FLOAT4 Result;
	Result.x = x ;
	Result.y = y ;
	Result.z = z ;
	Result.w = w ;
	return Result ;
}

__inline DOUBLE4 D4Get( double x, double y, double z, double w )
{
	DOUBLE4 Result;
	Result.x = x ;
	Result.y = y ;
	Result.z = z ;
	Result.w = w ;
	return Result ;
}

// ƒxƒNƒgƒ‹‚Ì‰ÁZ
__inline VECTOR		VAdd( const VECTOR &In1, const VECTOR &In2 )
{
	VECTOR Result ;
	Result.x = In1.x + In2.x ;
	Result.y = In1.y + In2.y ;
	Result.z = In1.z + In2.z ;
	return Result ;
}

__inline VECTOR_D	VAddD( const VECTOR_D &In1, const VECTOR_D &In2 )
{
	VECTOR_D Result ;
	Result.x = In1.x + In2.x ;
	Result.y = In1.y + In2.y ;
	Result.z = In1.z + In2.z ;
	return Result ;
}

// ƒxƒNƒgƒ‹‚ÌŒ¸Z
__inline VECTOR		VSub( const VECTOR &In1, const VECTOR &In2 )
{
	VECTOR Result ;
	Result.x = In1.x - In2.x ;
	Result.y = In1.y - In2.y ;
	Result.z = In1.z - In2.z ;
	return Result ;
}

__inline VECTOR_D	VSubD( const VECTOR_D &In1, const VECTOR_D &In2 )
{
	VECTOR_D Result ;
	Result.x = In1.x - In2.x ;
	Result.y = In1.y - In2.y ;
	Result.z = In1.z - In2.z ;
	return Result ;
}

__inline FLOAT2		F2Add( const FLOAT2 &In1, const FLOAT2 &In2 )
{
	FLOAT2 Result ;
	Result.u = In1.u + In2.u ;
	Result.v = In1.v + In2.v ;
	return Result ;
}

// ‚S—v‘fƒxƒNƒgƒ‹‚Ì‰ÁZ
__inline FLOAT4		F4Add( const FLOAT4 &In1, const FLOAT4 &In2 )
{
	FLOAT4 Result ;
	Result.x = In1.x + In2.x ;
	Result.y = In1.y + In2.y ;
	Result.z = In1.z + In2.z ;
	Result.w = In1.w + In2.w ;
	return Result ;
}

__inline DOUBLE4	D4Add( const DOUBLE4 &In1, const DOUBLE4 &In2 )
{
	DOUBLE4 Result ;
	Result.x = In1.x + In2.x ;
	Result.y = In1.y + In2.y ;
	Result.z = In1.z + In2.z ;
	Result.w = In1.w + In2.w ;
	return Result ;
}

__inline FLOAT2		F2Sub( const FLOAT2 &In1, const FLOAT2 &In2 )
{
	FLOAT2 Result ;
	Result.u = In1.u - In2.u ;
	Result.v = In1.v - In2.v ;
	return Result ;
}

// ‚S—v‘fƒxƒNƒgƒ‹‚ÌŒ¸Z
__inline FLOAT4		F4Sub( const FLOAT4 &In1, const FLOAT4 &In2 )
{
	FLOAT4 Result ;
	Result.x = In1.x - In2.x ;
	Result.y = In1.y - In2.y ;
	Result.z = In1.z - In2.z ;
	Result.w = In1.w - In2.w ;
	return Result ;
}

__inline DOUBLE4	D4Sub( const DOUBLE4 &In1, const DOUBLE4 &In2 )
{
	DOUBLE4 Result ;
	Result.x = In1.x - In2.x ;
	Result.y = In1.y - In2.y ;
	Result.z = In1.z - In2.z ;
	Result.w = In1.w - In2.w ;
	return Result ;
}

// ƒxƒNƒgƒ‹‚Ì“àÏ
__inline float		VDot( const VECTOR &In1, const VECTOR &In2 )
{
	return In1.x * In2.x + In1.y * In2.y + In1.z * In2.z ;
}

__inline double		VDotD( const VECTOR_D &In1, const VECTOR_D &In2 )
{
	return In1.x * In2.x + In1.y * In2.y + In1.z * In2.z ;
}

// ƒxƒNƒgƒ‹‚ÌŠOÏ
__inline VECTOR		VCross( const VECTOR &In1, const VECTOR &In2 )
{
	VECTOR Result ;
	Result.x = In1.y * In2.z - In1.z * In2.y ;
	Result.y = In1.z * In2.x - In1.x * In2.z ;
	Result.z = In1.x * In2.y - In1.y * In2.x ;
	return Result ;
}

__inline VECTOR_D	VCrossD( const VECTOR_D &In1, const VECTOR_D &In2 )
{
	VECTOR_D Result ;
	Result.x = In1.y * In2.z - In1.z * In2.y ;
	Result.y = In1.z * In2.x - In1.x * In2.z ;
	Result.z = In1.x * In2.y - In1.y * In2.x ;
	return Result ;
}

// ƒxƒNƒgƒ‹‚ÌƒXƒP[ƒŠƒ“ƒO
__inline VECTOR		VScale( const VECTOR &In, float Scale )
{
	VECTOR Result ;
	Result.x = In.x * Scale ;
	Result.y = In.y * Scale ;
	Result.z = In.z * Scale ;
	return Result ;
}

__inline VECTOR_D	VScaleD( const VECTOR_D &In, double Scale )
{
	VECTOR_D Result ;
	Result.x = In.x * Scale ;
	Result.y = In.y * Scale ;
	Result.z = In.z * Scale ;
	return Result ;
}

__inline FLOAT2		F2Scale( const FLOAT2 &In, float Scale )
{
	FLOAT2 Result ;
	Result.u = In.u * Scale ;
	Result.v = In.v * Scale ;
	return Result ;
}

// ‚S—v‘fƒxƒNƒgƒ‹‚ÌƒXƒP[ƒŠƒ“ƒO
__inline FLOAT4		F4Scale( const FLOAT4 &In, float Scale )
{
	FLOAT4 Result ;
	Result.x = In.x * Scale ;
	Result.y = In.y * Scale ;
	Result.z = In.z * Scale ;
	Result.w = In.w * Scale ;
	return Result ;
}

__inline DOUBLE4	D4Scale( const DOUBLE4 &In, double Scale )
{
	DOUBLE4 Result ;
	Result.x = In.x * Scale ;
	Result.y = In.y * Scale ;
	Result.z = In.z * Scale ;
	Result.w = In.w * Scale ;
	return Result ;
}

// ƒxƒNƒgƒ‹‚Ì³‹K‰»
extern VECTOR		VNorm(  VECTOR   In ) ;
extern VECTOR_D		VNormD( VECTOR_D In ) ;

// ƒxƒNƒgƒ‹‚ÌƒTƒCƒY
extern float		VSize(  VECTOR   In ) ;
extern double		VSizeD( VECTOR_D In ) ;

// ƒxƒNƒgƒ‹‚ÌƒTƒCƒY‚Ì‚Qæ
__inline float		VSquareSize(  const VECTOR   &In )
{
	return In.x * In.x + In.y * In.y + In.z * In.z ;
}

__inline double		VSquareSizeD( const VECTOR_D &In )
{
	return In.x * In.x + In.y * In.y + In.z * In.z ;
}

// s—ñ‚ğg‚Á‚½À•W•ÏŠ·
__inline VECTOR		VTransform( const VECTOR &InV, const MATRIX &InM )
{
	VECTOR Result ;
	Result.x = InV.x * InM.m[0][0] + InV.y * InM.m[1][0] + InV.z * InM.m[2][0] + InM.m[3][0] ;
	Result.y = InV.x * InM.m[0][1] + InV.y * InM.m[1][1] + InV.z * InM.m[2][1] + InM.m[3][1] ;
	Result.z = InV.x * InM.m[0][2] + InV.y * InM.m[1][2] + InV.z * InM.m[2][2] + InM.m[3][2] ;
	return Result ;
}

__inline VECTOR_D	VTransformD( const VECTOR_D &InV, const MATRIX_D &InM )
{
	VECTOR_D Result ;
	Result.x = InV.x * InM.m[0][0] + InV.y * InM.m[1][0] + InV.z * InM.m[2][0] + InM.m[3][0] ;
	Result.y = InV.x * InM.m[0][1] + InV.y * InM.m[1][1] + InV.z * InM.m[2][1] + InM.m[3][1] ;
	Result.z = InV.x * InM.m[0][2] + InV.y * InM.m[1][2] + InV.z * InM.m[2][2] + InM.m[3][2] ;
	return Result ;
}

// s—ñ‚ğg‚Á‚½À•W•ÏŠ·( ƒXƒP[ƒŠƒ“ƒO{‰ñ“]¬•ª‚Ì‚İ )
__inline VECTOR		VTransformSR( const VECTOR &InV, const MATRIX &InM )
{
	VECTOR Result ;
	Result.x = InV.x * InM.m[0][0] + InV.y * InM.m[1][0] + InV.z * InM.m[2][0] ;
	Result.y = InV.x * InM.m[0][1] + InV.y * InM.m[1][1] + InV.z * InM.m[2][1] ;
	Result.z = InV.x * InM.m[0][2] + InV.y * InM.m[1][2] + InV.z * InM.m[2][2] ;
	return Result ;
}

__inline VECTOR_D	VTransformSRD( const VECTOR_D &InV, const MATRIX_D &InM )
{
	VECTOR_D Result ;
	Result.x = InV.x * InM.m[0][0] + InV.y * InM.m[1][0] + InV.z * InM.m[2][0] ;
	Result.y = InV.x * InM.m[0][1] + InV.y * InM.m[1][1] + InV.z * InM.m[2][1] ;
	Result.z = InV.x * InM.m[0][2] + InV.y * InM.m[1][2] + InV.z * InM.m[2][2] ;
	return Result ;
}

// “ñ‚Â‚ÌƒxƒNƒgƒ‹‚ª¬‚·Šp‚ÌƒRƒTƒCƒ“’l‚ğ“¾‚é
extern	float		VCos(  VECTOR   In1, VECTOR   In2 ) ;
extern	double		VCosD( VECTOR_D In1, VECTOR_D In2 ) ;

// “ñ‚Â‚ÌƒxƒNƒgƒ‹‚ª¬‚·Šp‚ÌŠp“x‚ğ“¾‚é( ’PˆÊFƒ‰ƒWƒAƒ“ )
extern	float		VRad(  VECTOR   In1, VECTOR   In2 ) ;
extern	double		VRadD( VECTOR_D In1, VECTOR_D In2 ) ;



// 2‚Â‚ÌƒNƒH[ƒ^ƒjƒIƒ“‚ÌæZ‚ÌŒ‹‰Ê‚ğ•Ô‚·
__inline FLOAT4 QTCross( const FLOAT4 &A, const FLOAT4 &B )
{
    FLOAT4 Result ;
    Result.w = A.w * B.w - ( A.x * B.x + A.y * B.y + A.z * B.z ) ;
	Result.x = B.x * A.w + A.x * B.w + ( A.y * B.z - A.z * B.y ) ;
	Result.y = B.y * A.w + A.y * B.w + ( A.z * B.x - A.x * B.z ) ;
	Result.z = B.z * A.w + A.z * B.w + ( A.x * B.y - A.y * B.x ) ;
    return Result ;
}
__inline DOUBLE4 QTCrossD( const DOUBLE4 &A, const DOUBLE4 &B )
{
    DOUBLE4 Result ;
    Result.w = A.w * B.w - ( A.x * B.x + A.y * B.y + A.z * B.z ) ;
	Result.x = B.x * A.w + A.x * B.w + ( A.y * B.z - A.z * B.y ) ;
	Result.y = B.y * A.w + A.y * B.w + ( A.z * B.x - A.x * B.z ) ;
	Result.z = B.z * A.w + A.z * B.w + ( A.x * B.y - A.y * B.x ) ;
    return Result ;
}

// ‹¤–ğƒNƒH[ƒ^ƒjƒIƒ“‚ğ•Ô‚·
__inline FLOAT4 QTConj( const FLOAT4 &A )
{
	FLOAT4 Result ;
	Result.w =  A.w ;
	Result.x = -A.x ;
	Result.y = -A.y ;
	Result.z = -A.z ;
	return Result ;
}
__inline DOUBLE4 QTConjD( const DOUBLE4 &A )
{
	DOUBLE4 Result ;
	Result.w =  A.w ;
	Result.x = -A.x ;
	Result.y = -A.y ;
	Result.z = -A.z ;
	return Result ;
}

// ‰ñ“]‚ğ•\‚·ƒNƒH[ƒ^ƒjƒIƒ“‚ğ•Ô‚·
extern FLOAT4  QTRot(  VECTOR   Axis, float  Angle ) ;
extern DOUBLE4 QTRotD( VECTOR_D Axis, double Angle ) ;

// 3ŸŒ³‹óŠÔã‚Ì“_‚ğ”CˆÓ‚Ì²‚Ìü‚è‚É”CˆÓ‚ÌŠp“x‚¾‚¯‰ñ“]‚³‚¹‚éŠÖ”
extern VECTOR   VRotQ(  VECTOR   P, VECTOR   Axis, float  Angle ) ;
extern VECTOR_D VRotQD( VECTOR_D P, VECTOR_D Axis, double Angle ) ;










// DxBaseImage.cpp ŠÖ”ƒvƒƒgƒ^ƒCƒvéŒ¾

// Šî–{ƒCƒ[ƒWƒf[ƒ^‚Ìƒ[ƒh{‚c‚h‚aŠÖŒW
extern	int			CreateGraphImageOrDIBGraph(    const TCHAR *FileName, const void *DataImage, int DataImageSize, int DataImageType /* LOADIMAGE_TYPE_FILE “™ */ , int BmpFlag, int ReverseFlag, BASEIMAGE *BaseImage, BITMAPINFO **BmpInfo, void **GraphData ) ;				// ‰æ‘œƒtƒ@ƒCƒ‹á‚µ‚­‚Íƒƒ‚ƒŠã‚É“WŠJ‚³‚ê‚½‰æ‘œƒtƒ@ƒCƒ‹ƒCƒ[ƒW‚ğ“Ç‚İ‚İAŠî–{ƒCƒ[ƒWƒf[ƒ^á‚µ‚­‚Í‚a‚l‚oƒf[ƒ^‚ğ\’z‚·‚é
extern	int			CreateGraphImageType2(         STREAMDATA *Src, BASEIMAGE *Dest ) ;																																															// ‰æ‘œƒf[ƒ^‚©‚ç\’z‚µ‚½ƒXƒgƒŠ[ƒ€“Ç‚İ‚İ—pƒf[ƒ^‚ğg—p‚µ‚ÄŠî–{ƒCƒ[ƒWƒf[ƒ^‚ğ\’z‚·‚é
extern	int			CreateBmpInfo(                 BITMAPINFO *BmpInfo, int Width, int Height, int Pitch, const void *SrcGrData, void **DestGrData ) ;																															// 24bitƒJƒ‰[Œ`®‚Ìƒrƒbƒgƒ}ƒbƒvƒf[ƒ^‚©‚ç‚a‚l‚oƒf[ƒ^‚ğ\’z‚·‚é
extern	int			GetImageSize_File(             const TCHAR *FileName, int *SizeX, int *SizeY ) ;																																											// ‰æ‘œƒtƒ@ƒCƒ‹‚Ì‰¡ƒsƒNƒZƒ‹”‚ÆcƒsƒNƒZƒ‹”‚ğæ“¾‚·‚é
extern	int			GetImageSize_Mem(              const void *FileImage, int FileImageSize, int *SizeX, int *SizeY ) ;																																							// ƒƒ‚ƒŠã‚É“WŠJ‚³‚ê‚½‰æ‘œƒtƒ@ƒCƒ‹‚Ì‰¡ƒsƒNƒZƒ‹”‚ÆcƒsƒNƒZƒ‹”‚ğæ“¾‚·‚é
extern	unsigned int GetGraphImageFullColorCode(    const BASEIMAGE *GraphImage, int x, int y ) ;																																												// Šî–{ƒCƒ[ƒWƒf[ƒ^‚Ìw’èÀ•W‚Ìƒtƒ‹ƒJƒ‰[ƒR[ƒh‚ğæ“¾‚·‚é
extern	int			CreateGraphImage_plus_Alpha(   const TCHAR *FileName, const void *RgbBaseImage, int RgbImageSize, int RgbImageType, const void *AlphaImage, int AlphaImageSize, int AlphaImageType, BASEIMAGE *RgbGraphImage, BASEIMAGE *AlphaGraphImage, int ReverseFlag ) ;	// ‰æ‘œƒtƒ@ƒCƒ‹á‚µ‚­‚Íƒƒ‚ƒŠã‚É“WŠJ‚³‚ê‚½‰æ‘œƒtƒ@ƒCƒ‹ƒCƒ[ƒW‚ğ“Ç‚İ‚İAŠî–{ƒCƒ[ƒWƒf[ƒ^‚ğ\’z‚·‚é
extern	int			ReverseGraphImage(             BASEIMAGE *GraphImage ) ;																																																	// Šî–{ƒCƒ[ƒWƒf[ƒ^‚ğ¶‰E”½“]‚·‚é

//extern int		AddUserGraphLoadFunction( int ( *UserLoadFunc )( FILE *fp, BITMAPINFO **BmpInfo, void **GraphData ) ) ;																					// ƒ†[ƒU[’è‹`‚Ì‰æ‘œƒf[ƒ^“Ç‚İ‚İŠÖ”‚ğ“o˜^‚·‚é
//extern int		AddUserGraphLoadFunction2( int ( *UserLoadFunc )( void *Image, int ImageSize, int ImageType, BITMAPINFO **BmpInfo, void **GraphData ) ) ;												// ƒ†[ƒU[’è‹`‚Ì‰æ‘œƒf[ƒ^“Ç‚İ‚İŠÖ”‚ğ“o˜^‚·‚é
//extern int		AddUserGraphLoadFunction3( int ( *UserLoadFunc )( void *DataImage, int DataImageSize, int DataImageType, int BmpFlag, BASEIMAGE *BaseImage, BITMAPINFO **BmpInfo, void **GraphData ) ) ;	// ƒ†[ƒU[’è‹`‚Ì‰æ‘œƒf[ƒ^“Ç‚İ‚İŠÖ”Ver3‚ğ“o˜^‚·‚é
extern	int			AddUserGraphLoadFunction4( int (* UserLoadFunc )( STREAMDATA *Src, BASEIMAGE *BaseImage ) ) ; 																								// ƒ†[ƒU[’è‹`‚Ì‰æ‘œƒf[ƒ^“Ç‚İ‚İŠÖ”Ver4‚ğ“o˜^‚·‚é
//extern int		SubUserGraphLoadFunction( int ( *UserLoadFunc )( FILE *fp, BITMAPINFO **BmpInfo, void **GraphData ) ) ;																					// ƒ†[ƒU[’è‹`‚Ì‰æ‘œƒf[ƒ^“Ç‚İ‚İŠÖ”‚ğ“o˜^‚©‚ç–•Á‚·‚é
//extern int		SubUserGraphLoadFunction2( int ( *UserLoadFunc )( void *Image, int ImageSize, int ImageType, BITMAPINFO **BmpInfo, void **GraphData ) ) ;												// ƒ†[ƒU[’è‹`‚Ì‰æ‘œƒf[ƒ^“Ç‚İ‚İŠÖ”‚ğ“o˜^‚©‚ç–•Á‚·‚é
//extern int		SubUserGraphLoadFunction3( int ( *UserLoadFunc )( void *DataImage, int DataImageSize, int DataImageType, int BmpFlag, BASEIMAGE *BaseImage, BITMAPINFO **BmpInfo, void **GraphData ) ) ;	// ƒ†[ƒU[’è‹`‚Ì‰æ‘œƒf[ƒ^“Ç‚İ‚İŠÖ”Ver3‚ğ“o˜^‚©‚ç–•Á‚·‚é
extern	int			SubUserGraphLoadFunction4( int (* UserLoadFunc )( STREAMDATA *Src, BASEIMAGE *BaseImage ) ) ; 																								// ƒ†[ƒU[’è‹`‚Ì‰æ‘œƒf[ƒ^“Ç‚İ‚İŠÖ”Ver4‚ğ“o˜^‚©‚ç–•Á‚·‚é

extern	int			SetUseFastLoadFlag(            int Flag ) ;														// ‚‘¬“Ç‚İ‚İƒ‹[ƒ`ƒ“‚ğg—p‚·‚é‚©‚Ç‚¤‚©‚ğİ’è‚·‚é( TRUE:g—p‚·‚é( ƒfƒtƒHƒ‹ƒg )  FALSE:g—p‚µ‚È‚¢ )
extern	int			SetGraphDataShavedMode(        int ShavedMode /* DX_SHAVEDMODE_NONE “™ */ ) ;					// ‰æ‘œŒ¸F‚Ì‰æ‘œ—ò‰»ŠÉ˜aˆ—ƒ‚[ƒh‚ğİ’è‚·‚é( ƒfƒtƒHƒ‹ƒg‚Å‚ÍŠÉ˜aˆ—–³‚µ‚Ì DX_SHAVEDMODE_NONE )
extern	int			GetGraphDataShavedMode(        void ) ;															// ‰æ‘œŒ¸F‚Ì‰æ‘œ—ò‰»ŠÉ˜aˆ—ƒ‚[ƒh‚ğæ“¾‚·‚é
extern	int			SetUsePremulAlphaConvertLoad(  int UseFlag ) ;													// ‰æ‘œƒtƒ@ƒCƒ‹“Ç‚İ‚İ‚ÉæZÏ‚İƒAƒ‹ƒtƒ@‰æ‘œ‚É•ÏŠ·‚·‚é‚©‚Ç‚¤‚©‚ğİ’è‚·‚é( TRUE:•ÏŠ·ˆ—‚ğs‚¤  FALSE:•ÏŠ·ˆ—‚ğs‚í‚È‚¢( ƒfƒtƒHƒ‹ƒg ) )

// Šî–{ƒCƒ[ƒWƒf[ƒ^\‘¢‘ÌŠÖŒW
extern	int			CreateBaseImage(               const TCHAR *FileName, const void *FileImage, int FileImageSize, int DataType /*=LOADIMAGE_TYPE_FILE*/ , BASEIMAGE *BaseImage,  int ReverseFlag ) ;			// ‰æ‘œƒtƒ@ƒCƒ‹á‚µ‚­‚Íƒƒ‚ƒŠã‚É“WŠJ‚³‚ê‚½‰æ‘œƒtƒ@ƒCƒ‹ƒCƒ[ƒW‚©‚çŠî–{ƒCƒ[ƒWƒf[ƒ^‚ğ\’z‚·‚é
extern	int			CreateGraphImage(              const TCHAR *FileName, const void *DataImage, int DataImageSize, int DataImageType,                      BASEIMAGE *GraphImage, int ReverseFlag ) ;			// CreateBaseImage ‚Ì‹Œ–¼Ì
extern	int			CreateBaseImageToFile(         const TCHAR *FileName,                                                                                   BASEIMAGE *BaseImage,  int ReverseFlag = FALSE ) ;	// ‰æ‘œƒtƒ@ƒCƒ‹‚©‚çŠî–{ƒCƒ[ƒWƒf[ƒ^‚ğ\’z‚·‚é
extern	int			CreateBaseImageToMem(                                 const void *FileImage, int FileImageSize,                                         BASEIMAGE *BaseImage,  int ReverseFlag = FALSE ) ;	// ƒƒ‚ƒŠã‚É“WŠJ‚³‚ê‚½‰æ‘œƒtƒ@ƒCƒ‹ƒCƒ[ƒW‚©‚çŠî–{ƒCƒ[ƒWƒf[ƒ^‚ğ\’z‚·‚é
extern	int			CreateARGBF32ColorBaseImage(   int SizeX, int SizeY,                             BASEIMAGE *BaseImage ) ;																					// ‚`‚q‚f‚aŠeƒ`ƒƒƒ“ƒlƒ‹ 32bit •‚“®¬”“_Œ^ ƒJƒ‰[‚ÌŠî–{ƒCƒ[ƒWƒf[ƒ^‚ğì¬‚·‚é
extern	int			CreateARGBF16ColorBaseImage(   int SizeX, int SizeY,                             BASEIMAGE *BaseImage ) ;																					// ‚`‚q‚f‚aŠeƒ`ƒƒƒ“ƒlƒ‹ 16bit •‚“®¬”“_Œ^ ƒJƒ‰[‚ÌŠî–{ƒCƒ[ƒWƒf[ƒ^‚ğì¬‚·‚é
extern	int			CreateARGB8ColorBaseImage(     int SizeX, int SizeY,                             BASEIMAGE *BaseImage ) ;																					// ‚`‚q‚f‚a‚WƒJƒ‰[‚ÌŠî–{ƒCƒ[ƒWƒf[ƒ^‚ğì¬‚·‚é
extern	int			CreateXRGB8ColorBaseImage(     int SizeX, int SizeY,                             BASEIMAGE *BaseImage ) ;																					// ‚w‚q‚f‚a‚WƒJƒ‰[‚ÌŠî–{ƒCƒ[ƒWƒf[ƒ^‚ğì¬‚·‚é
extern	int			CreateRGB8ColorBaseImage(      int SizeX, int SizeY,                             BASEIMAGE *BaseImage ) ;																					// ‚q‚f‚a‚WƒJƒ‰[‚ÌŠî–{ƒCƒ[ƒWƒf[ƒ^‚ğì¬‚·‚é
extern	int			CreateARGB4ColorBaseImage(     int SizeX, int SizeY,                             BASEIMAGE *BaseImage ) ;																					// ‚`‚q‚f‚a‚SƒJƒ‰[‚ÌŠî–{ƒCƒ[ƒWƒf[ƒ^‚ğì¬‚·‚é
extern	int			CreateA1R5G5B5ColorBaseImage(  int SizeX, int SizeY,                             BASEIMAGE *BaseImage ) ;																					// ‚`‚P‚q‚T‚f‚T‚a‚TƒJƒ‰[‚ÌŠî–{ƒCƒ[ƒWƒf[ƒ^‚ğì¬‚·‚é
extern	int			CreateX1R5G5B5ColorBaseImage(  int SizeX, int SizeY,                             BASEIMAGE *BaseImage ) ;																					// ‚w‚P‚q‚T‚f‚T‚a‚TƒJƒ‰[‚ÌŠî–{ƒCƒ[ƒWƒf[ƒ^‚ğì¬‚·‚é
extern	int			CreateR5G5B5A1ColorBaseImage(  int SizeX, int SizeY,                             BASEIMAGE *BaseImage ) ;																					// ‚q‚T‚f‚T‚a‚T‚`‚PƒJƒ‰[‚ÌŠî–{ƒCƒ[ƒWƒf[ƒ^‚ğì¬‚·‚é
extern	int			CreateR5G6B5ColorBaseImage(    int SizeX, int SizeY,                             BASEIMAGE *BaseImage ) ;																					// ‚q‚T‚f‚U‚a‚TƒJƒ‰[‚ÌŠî–{ƒCƒ[ƒWƒf[ƒ^‚ğì¬‚·‚é
extern	int			CreatePAL8ColorBaseImage(      int SizeX, int SizeY,                             BASEIMAGE *BaseImage, int UseAlpha = FALSE ) ;																// ƒpƒŒƒbƒg‚WƒrƒbƒgƒJƒ‰[‚ÌŠî–{ƒCƒ[ƒWƒf[ƒ^‚ğì¬‚·‚é
extern	int			CreateColorDataBaseImage(      int SizeX, int SizeY, const COLORDATA *ColorData, BASEIMAGE *BaseImage ) ;																					// w’è‚ÌƒJƒ‰[ƒtƒH[ƒ}ƒbƒg‚ÌŠî–{ƒCƒ[ƒWƒf[ƒ^‚ğì¬‚·‚é
extern	int			GetBaseImageGraphDataSize(     const BASEIMAGE *BaseImage ) ;																																// Šî–{ƒCƒ[ƒWƒf[ƒ^‚ÌƒCƒ[ƒWƒTƒCƒY‚ğæ“¾‚·‚é( ’PˆÊFbyte )
extern	int			DerivationBaseImage(           const BASEIMAGE *BaseImage, int x1, int y1, int x2, int y2, BASEIMAGE *NewBaseImage ) ;																		// Šî–{ƒCƒ[ƒWƒf[ƒ^‚Ìw’è‚Ì•”•ª‚¾‚¯‚ğg‚¤Šî–{ƒCƒ[ƒWƒf[ƒ^‚Ìî•ñ‚ğì¬‚·‚é( BaseImage ‚É‚ÍƒtƒH[ƒ}ƒbƒg‚ª DX_BASEIMAGE_FORMAT_NORMAL ‚Åƒ~ƒbƒvƒ}ƒbƒv‚ğg—p‚µ‚Ä‚¢‚È‚¢‰æ‘œ‚Ì‚İg—p‰Â”\ )

extern	int			ReleaseBaseImage(              BASEIMAGE *BaseImage ) ;																																		// Šî–{ƒCƒ[ƒWƒf[ƒ^‚ÌŒãn––‚ğs‚¤
extern	int			ReleaseGraphImage(             BASEIMAGE *GraphImage ) ;																																	// ReleaseBaseImage ‚Ì‹Œ–¼Ì

extern	int			ConvertNormalFormatBaseImage(  BASEIMAGE *BaseImage, int ReleaseOrigGraphData = TRUE ) ;																									// DX_BASEIMAGE_FORMAT_NORMAL ˆÈŠO‚ÌŒ`®‚ÌƒCƒ[ƒW‚ğ DX_BASEIMAGE_FORMAT_NORMAL Œ`®‚ÌƒCƒ[ƒW‚É•ÏŠ·‚·‚é
extern	int			ConvertPremulAlphaBaseImage(   BASEIMAGE *BaseImage ) ;																																		// ’Êí‚Ìƒ¿ƒ`ƒƒƒ“ƒlƒ‹•t‚«‰æ‘œ‚ğæZÏ‚İƒ¿ƒ`ƒƒƒ“ƒlƒ‹•t‚«‰æ‘œ‚É•ÏŠ·‚·‚é( ƒsƒNƒZƒ‹ƒtƒH[ƒ}ƒbƒg‚ª ARGB8 ˆÈŠO‚Ìê‡‚Í ARGB8 ‚É•ÏŠ·‚³‚ê‚Ü‚· )
extern	int			ConvertInterpAlphaBaseImage(   BASEIMAGE *BaseImage ) ;																																		// æZÏ‚İƒ¿ƒ`ƒƒƒ“ƒlƒ‹•t‚«‰æ‘œ‚ğ’Êí‚Ìƒ¿ƒ`ƒƒƒ“ƒlƒ‹•t‚«‰æ‘œ‚É•ÏŠ·‚·‚é( ƒsƒNƒZƒ‹ƒtƒH[ƒ}ƒbƒg‚ª ARGB8 ˆÈŠO‚Ìê‡‚Í ARGB8 ‚É•ÏŠ·‚³‚ê‚Ü‚· )

extern	int			GetDrawScreenBaseImage(        int x1, int y1, int x2, int y2, BASEIMAGE *BaseImage ) ;																										// •`‰æ‘ÎÛ‚Ì‰æ–Ê‚©‚çw’è—Ìˆæ‚ğŠî–{ƒCƒ[ƒWƒf[ƒ^‚É“]‘—‚·‚é
extern	int			GetDrawScreenBaseImageDestPos( int x1, int y1, int x2, int y2, BASEIMAGE *BaseImage, int DestX, int DestY ) ;																				// •`‰æ‘ÎÛ‚Ì‰æ–Ê‚©‚çw’è—Ìˆæ‚ğŠî–{ƒCƒ[ƒWƒf[ƒ^‚É“]‘—‚·‚é( “]‘—æÀ•Ww’è”Å )
extern	int			FillBaseImage(                       BASEIMAGE *BaseImage, int r, int g, int b, int a ) ;																											// Šî–{ƒCƒ[ƒWƒf[ƒ^‚ğw’è‚ÌF‚Å“h‚è‚Â‚Ô‚·
extern	int			FillRectBaseImage(                   BASEIMAGE *BaseImage, int x, int y, int w, int h, int r, int g, int b, int a ) ;																				// Šî–{ƒCƒ[ƒWƒf[ƒ^‚Ìw’è‚Ì—Ìˆæ‚ğw’è‚ÌF‚Å“h‚è‚Â‚Ô‚·
extern	int			ClearRectBaseImage(                  BASEIMAGE *BaseImage, int x, int y, int w, int h ) ;																											// Šî–{ƒCƒ[ƒWƒf[ƒ^‚Ìw’è‚Ì—Ìˆæ‚ğ‚OƒNƒŠƒA‚·‚é
extern	int			GetPaletteBaseImage(           const BASEIMAGE *BaseImage, int PaletteNo, int *r, int *g, int *b, int *a ) ;																						// Šî–{ƒCƒ[ƒWƒf[ƒ^‚ÌƒpƒŒƒbƒg‚ğæ“¾‚·‚é
extern	int			SetPaletteBaseImage(                 BASEIMAGE *BaseImage, int PaletteNo, int  r, int  g, int  b, int  a ) ;																						// Šî–{ƒCƒ[ƒWƒf[ƒ^‚ÌƒpƒŒƒbƒg‚ğƒZƒbƒg‚·‚é
extern	int			SetPixelPalCodeBaseImage(            BASEIMAGE *BaseImage, int x, int y, int palNo ) ;																												// Šî–{ƒCƒ[ƒWƒf[ƒ^‚Ìw’è‚ÌÀ•W‚ÌFƒR[ƒh‚ğ•ÏX‚·‚é(ƒpƒŒƒbƒg‰æ‘œ—p)
extern	int			GetPixelPalCodeBaseImage(      const BASEIMAGE *BaseImage, int x, int y ) ;																															// Šî–{ƒCƒ[ƒWƒf[ƒ^‚Ìw’è‚ÌÀ•W‚ÌFƒR[ƒh‚ğæ“¾‚·‚é(ƒpƒŒƒbƒg‰æ‘œ—p)
extern	int			SetPixelBaseImage(                   BASEIMAGE *BaseImage, int x, int y, int    r, int    g, int    b, int    a ) ;																					// Šî–{ƒCƒ[ƒWƒf[ƒ^‚Ìw’è‚ÌÀ•W‚ÌF‚ğ•ÏX‚·‚é(ŠeF—v‘f‚Í‚O`‚Q‚T‚T)
extern	int			SetPixelBaseImageF(                  BASEIMAGE *BaseImage, int x, int y, float  r, float  g, float  b, float  a ) ;																					// Šî–{ƒCƒ[ƒWƒf[ƒ^‚Ìw’è‚ÌÀ•W‚ÌF‚ğ•ÏX‚·‚é(ŠeF—v‘f‚Í•‚“®¬”“_”)
extern	int			GetPixelBaseImage(             const BASEIMAGE *BaseImage, int x, int y, int   *r, int   *g, int   *b, int   *a ) ;																					// Šî–{ƒCƒ[ƒWƒf[ƒ^‚Ìw’è‚ÌÀ•W‚ÌF‚ğæ“¾‚·‚é(ŠeF—v‘f‚Í‚O`‚Q‚T‚T)
extern	int			GetPixelBaseImageF(            const BASEIMAGE *BaseImage, int x, int y, float *r, float *g, float *b, float *a ) ;																					// Šî–{ƒCƒ[ƒWƒf[ƒ^‚Ìw’è‚ÌÀ•W‚ÌF‚ğæ“¾‚·‚é(ŠeF—v‘f‚Í•‚“®¬”“_”)
extern	int			DrawLineBaseImage(                   BASEIMAGE *BaseImage, int x1, int y1, int x2, int y2, int r, int g, int b, int a ) ;																			// Šî–{ƒCƒ[ƒWƒf[ƒ^‚Ìw’è‚ÌÀ•W‚Éü‚ğ•`‰æ‚·‚é(ŠeF—v‘f‚Í‚O`‚Q‚T‚T)
extern	int			DrawCircleBaseImage(                 BASEIMAGE *BaseImage, int x, int y, int radius, int r, int g, int b, int a, int FillFlag = TRUE ) ;															// Šî–{ƒCƒ[ƒWƒf[ƒ^‚Ìw’è‚ÌÀ•W‚É‰~‚ğ•`‰æ‚·‚é(ŠeF—v‘f‚Í‚O`‚Q‚T‚T)
extern	int			BltBaseImage(                        int SrcX, int SrcY, int SrcSizeX, int SrcSizeY, int DestX, int DestY, BASEIMAGE *SrcBaseImage, BASEIMAGE *DestBaseImage ) ;									// Šî–{ƒCƒ[ƒWƒf[ƒ^‚ğ•Ê‚ÌŠî–{ƒCƒ[ƒWƒf[ƒ^‚É“]‘—‚·‚é
extern	int			BltBaseImage(                                                                        int DestX, int DestY, BASEIMAGE *SrcBaseImage, BASEIMAGE *DestBaseImage ) ;									// Šî–{ƒCƒ[ƒWƒf[ƒ^‚ğ•Ê‚ÌŠî–{ƒCƒ[ƒWƒf[ƒ^‚É“]‘—‚·‚é
extern	int			BltBaseImageWithTransColor(          int SrcX, int SrcY, int SrcSizeX, int SrcSizeY, int DestX, int DestY, BASEIMAGE *SrcBaseImage, BASEIMAGE *DestBaseImage, int Tr, int Tg, int Tb, int Ta ) ;	// Šî–{ƒCƒ[ƒWƒf[ƒ^‚ğ•Ê‚ÌŠî–{ƒCƒ[ƒWƒf[ƒ^‚É“§‰ßFˆ—•t‚«‚Å“]‘—‚·‚é
extern	int			BltBaseImageWithAlphaBlend(          int SrcX, int SrcY, int SrcSizeX, int SrcSizeY, int DestX, int DestY, BASEIMAGE *SrcBaseImage, BASEIMAGE *DestBaseImage, int Opacity = 255 ) ;					// Šî–{ƒCƒ[ƒWƒf[ƒ^‚ğ•Ê‚ÌŠî–{ƒCƒ[ƒWƒf[ƒ^‚ÉƒAƒ‹ƒtƒ@’l‚ÌƒuƒŒƒ“ƒh‚ğl—¶‚µ‚½ã‚Å“]‘—‚·‚é( Opacity ‚Í“§–¾“x : 0( Š®‘S“§–¾ ) ` 255( Š®‘S•s“§–¾ ) )( o—Íæ‚ª ARGB8 Œ`®ˆÈŠO‚Ìê‡‚ÍƒGƒ‰[‚É‚È‚è‚Ü‚· )
extern	int			ReverseBaseImageH(                   BASEIMAGE *BaseImage ) ;																																		// Šî–{ƒCƒ[ƒWƒf[ƒ^‚ğ¶‰E”½“]‚·‚é
extern	int			ReverseBaseImageV(                   BASEIMAGE *BaseImage ) ;																																		// Šî–{ƒCƒ[ƒWƒf[ƒ^‚ğã‰º”½“]‚·‚é
extern	int			ReverseBaseImage(                    BASEIMAGE *BaseImage ) ;																																		// Šî–{ƒCƒ[ƒWƒf[ƒ^‚ğã‰º¶‰E”½“]‚·‚é
extern	int			CheckPixelAlphaBaseImage(      const BASEIMAGE *BaseImage ) ;																																		// Šî–{ƒCƒ[ƒWƒf[ƒ^‚ÉŠÜ‚Ü‚ê‚éƒsƒNƒZƒ‹‚ÌƒAƒ‹ƒtƒ@’l‚ğƒ`ƒFƒbƒN‚·‚é( –ß‚è’l   -1:ƒGƒ‰[  0:‰æ‘œ‚ÉƒAƒ‹ƒtƒ@¬•ª‚ª–³‚¢  1:‰æ‘œ‚ÉƒAƒ‹ƒtƒ@¬•ª‚ª‚ ‚èA‚·‚×‚ÄÅ‘å(255)’l  2:‰æ‘œ‚ÉƒAƒ‹ƒtƒ@¬•ª‚ª‚ ‚èA‘¶İ‚·‚éƒAƒ‹ƒtƒ@’l‚ÍÅ¬(0)‚ÆÅ‘å(255)‚à‚µ‚­‚ÍÅ¬(0)‚Ì‚İ@3:‰æ‘œ‚ÉƒAƒ‹ƒtƒ@¬•ª‚ª‚ ‚èAÅ¬‚ÆÅ‘åˆÈŠO‚Ì’†ŠÔ‚Ì’l‚ª‚ ‚é )  
extern	int			GetBaseImageUseMaxPaletteNo(   const BASEIMAGE *BaseImage ) ;																																		// Šî–{ƒCƒ[ƒWƒf[ƒ^‚Åg—p‚³‚ê‚Ä‚¢‚éƒpƒŒƒbƒg”Ô†‚ÌÅ‘å’l‚ğæ“¾‚·‚é( ƒpƒŒƒbƒg‰æ‘œ‚Å‚Í–³‚¢ê‡‚Í -1 ‚ª•Ô‚é )

#ifndef DX_NON_JPEGREAD
extern	int			ReadJpegExif(                  const TCHAR *JpegFilePath, BYTE *ExifBuffer_Array, size_t ExifBufferSize ) ;																		// JPEGƒtƒ@ƒCƒ‹‚Ì Exifî•ñ‚ğæ“¾‚·‚éAExifBuffer ‚ğ NULL ‚É“n‚·‚ÆA–ß‚è’l‚Ìî•ñ‚ÌƒTƒCƒY‚Ì‚İæ“¾‚Å‚«‚Ü‚·( –ß‚è’l  -1:ƒGƒ‰[  -1ˆÈŠOFExifî•ñ‚ÌƒTƒCƒY )
#endif // DX_NON_JPEGREAD

#ifndef DX_NON_SAVEFUNCTION

extern	int			SaveBaseImageToBmp(            const TCHAR *FilePath, const BASEIMAGE *BaseImage ) ;																										// Šî–{ƒCƒ[ƒWƒf[ƒ^‚ğ‚a‚l‚o‰æ‘œ‚Æ‚µ‚Ä•Û‘¶‚·‚é
extern	int			SaveBaseImageToDds(            const TCHAR *FilePath, const BASEIMAGE *BaseImage ) ;																										// Šî–{ƒCƒ[ƒWƒf[ƒ^‚ğ‚c‚c‚r‰æ‘œ‚Æ‚µ‚Ä•Û‘¶‚·‚é
#ifndef DX_NON_PNGREAD
extern	int			SaveBaseImageToPng(            const TCHAR *FilePath,       BASEIMAGE *BaseImage, int CompressionLevel ) ;																					// Šî–{ƒCƒ[ƒWƒf[ƒ^‚ğ‚o‚m‚f‰æ‘œ‚Æ‚µ‚Ä•Û‘¶‚·‚é
#endif // DX_NON_PNGREAD
#ifndef DX_NON_JPEGREAD
extern	int			SaveBaseImageToJpeg(           const TCHAR *FilePath,       BASEIMAGE *BaseImage, int Quality, int Sample2x1 ) ;																			// Šî–{ƒCƒ[ƒWƒf[ƒ^‚ğ‚i‚o‚d‚f‰æ‘œ‚Æ‚µ‚Ä•Û‘¶‚·‚é
#endif // DX_NON_JPEGREAD

#endif // DX_NON_SAVEFUNCTION

// Šî–{ƒCƒ[ƒW•`‰æ
extern	int			DrawBaseImage(					int x, int y, BASEIMAGE *BaseImage ) ;																														// Šî–{ƒCƒ[ƒWƒf[ƒ^‚ğ•`‰æ‚·‚é

// ƒJƒ‰[ƒ}ƒbƒ`ƒ“ƒO‚µ‚È‚ª‚çƒCƒ[ƒWƒf[ƒ^ŠÔ“]‘—‚ğs‚¤ Ver2
extern int			GraphColorMatchBltVer2(       void *DestGraphData, int DestPitch,  const COLORDATA *DestColorData,
											const void *SrcGraphData,  int SrcPitch,   const COLORDATA *SrcColorData,
											const void *AlphaMask,     int AlphaPitch, const COLORDATA *AlphaColorData,
											POINT DestPoint, const RECT *SrcRect, int ReverseFlag,
											int TransColorAlphaTestFlag, unsigned int TransColor,
											int ImageShavedMode, int AlphaOnlyFlag = FALSE ,
											int RedIsAlphaFlag = FALSE , int TransColorNoMoveFlag = FALSE ,
											int Pal8ColorMatch = FALSE ) ;


// Fî•ñæ“¾ŠÖŒW
extern	COLOR_F			GetColorF(               float Red, float Green, float Blue, float Alpha ) ;												// •‚“®¬”“_Œ^‚ÌƒJƒ‰[’l‚ğì¬‚·‚é
extern	COLOR_U8		GetColorU8(              int Red, int Green, int Blue, int Alpha ) ;														// •„†‚È‚µ®”‚Wƒrƒbƒg‚ÌƒJƒ‰[’l‚ğì¬‚·‚é
extern	unsigned int	GetColor(                int Red, int Green, int Blue ) ;																// DrawPixel “™‚Ì•`‰æŠÖ”‚Åg—p‚·‚éƒJƒ‰[’l‚ğæ“¾‚·‚é
extern	int				GetColor2(               unsigned int Color, int *Red, int *Green, int *Blue ) ;											// ƒJƒ‰[’l‚©‚çÔA—ÎAÂ‚Ì’l‚ğæ“¾‚·‚é
extern	unsigned int	GetColor3(               const COLORDATA *ColorData, int Red, int Green, int Blue, int Alpha = 255 ) ;					// w’è‚ÌƒsƒNƒZƒ‹ƒtƒH[ƒ}ƒbƒg‚É‘Î‰‚µ‚½ƒJƒ‰[’l‚ğ“¾‚é
extern	unsigned int	GetColor4(               const COLORDATA *DestColorData, const COLORDATA* SrcColorData, unsigned int SrcColor ) ;		// w’è‚ÌƒJƒ‰[ƒtƒH[ƒ}ƒbƒg‚ÌƒJƒ‰[’l‚ğ•Ê‚ÌƒJƒ‰[ƒtƒH[ƒ}ƒbƒg‚ÌƒJƒ‰[’l‚É•ÏŠ·‚·‚é
extern	int				GetColor5(               const COLORDATA *ColorData, unsigned int Color, int *Red, int *Green, int *Blue, int *Alpha = NULL ) ;	// w’è‚ÌƒJƒ‰[ƒtƒH[ƒ}ƒbƒg‚ÌƒJƒ‰[’l‚ğÔA—ÎAÂAƒAƒ‹ƒtƒ@‚Ì’l‚ğæ“¾‚·‚é
extern	int				CreatePaletteColorData(  COLORDATA *ColorDataBuf ) ;																		// ƒpƒŒƒbƒgƒJƒ‰[‚ÌƒJƒ‰[ƒtƒH[ƒ}ƒbƒg‚ğ\’z‚·‚é
extern	int				CreateARGBF32ColorData(  COLORDATA *ColorDataBuf ) ;																		// ‚`‚q‚f‚aŠeƒ`ƒƒƒ“ƒlƒ‹ 32bit •‚“®¬”“_Œ^ƒJƒ‰[‚ÌƒJƒ‰[ƒtƒH[ƒ}ƒbƒg‚ğ\’z‚·‚é
extern	int				CreateARGBF16ColorData(  COLORDATA *ColorDataBuf ) ;																		// ‚`‚q‚f‚aŠeƒ`ƒƒƒ“ƒlƒ‹ 16bit •‚“®¬”“_Œ^ƒJƒ‰[‚ÌƒJƒ‰[ƒtƒH[ƒ}ƒbƒg‚ğ\’z‚·‚é
extern	int				CreateXRGB8ColorData(    COLORDATA *ColorDataBuf ) ;																		// ‚w‚q‚f‚a‚WƒJƒ‰[‚ÌƒJƒ‰[ƒtƒH[ƒ}ƒbƒg‚ğ\’z‚·‚é
extern	int				CreateARGB8ColorData(    COLORDATA *ColorDataBuf ) ;																		// ‚`‚q‚f‚a‚WƒJƒ‰[‚ÌƒJƒ‰[ƒtƒH[ƒ}ƒbƒg‚ğ\’z‚·‚é
extern	int				CreateARGB4ColorData(    COLORDATA *ColorDataBuf ) ;																		// ‚`‚q‚f‚a‚SƒJƒ‰[‚ÌƒJƒ‰[ƒtƒH[ƒ}ƒbƒg‚ğ\’z‚·‚é
extern	int				CreateA1R5G5B5ColorData( COLORDATA *ColorDataBuf ) ;																		// ‚`‚P‚q‚T‚f‚T‚a‚TƒJƒ‰[‚ÌƒJƒ‰[ƒtƒH[ƒ}ƒbƒg‚ğ\’z‚·‚é
extern	int				CreateX1R5G5B5ColorData( COLORDATA *ColorDataBuf ) ;																		// ‚w‚P‚q‚T‚f‚T‚a‚TƒJƒ‰[‚ÌƒJƒ‰[ƒtƒH[ƒ}ƒbƒg‚ğ\’z‚·‚é
extern	int				CreateR5G5B5A1ColorData( COLORDATA *ColorDataBuf ) ;																		// ‚q‚T‚f‚T‚a‚T‚`‚PƒJƒ‰[‚ÌƒJƒ‰[ƒtƒH[ƒ}ƒbƒg‚ğ\’z‚·‚é
extern	int				CreateR5G6B5ColorData(   COLORDATA *ColorDataBuf ) ;																		// ‚q‚T‚f‚U‚a‚TƒJƒ‰[‚ÌƒJƒ‰[ƒtƒH[ƒ}ƒbƒg‚ğ\’z‚·‚é
extern	int				CreateFullColorData(     COLORDATA *ColorDataBuf ) ;																		// ‚Q‚SƒrƒbƒgƒJƒ‰[‚ÌƒJƒ‰[ƒtƒH[ƒ}ƒbƒg‚ğ\’z‚·‚é
extern	int				CreateGrayColorData(     COLORDATA *ColorDataBuf ) ;																		// ƒOƒŒ[ƒXƒP[ƒ‹‚ÌƒJƒ‰[ƒtƒH[ƒ}ƒbƒg‚ğ\’z‚·‚é
extern	int				CreatePal8ColorData(     COLORDATA *ColorDataBuf, int UseAlpha = FALSE ) ;												// ƒpƒŒƒbƒg‚Q‚T‚UF‚ÌƒJƒ‰[ƒtƒH[ƒ}ƒbƒg‚ğ\’z‚·‚é
extern	int				CreateColorData(         COLORDATA *ColorDataBuf, int ColorBitDepth,
										         DWORD RedMask, DWORD GreenMask, DWORD BlueMask, DWORD AlphaMask,
												 int ChannelNum = 0, int ChannelBitDepth = 0, int FloatTypeFlag = FALSE ) ;						// ƒJƒ‰[ƒtƒH[ƒ}ƒbƒg‚ğì¬‚·‚é
extern	void			SetColorDataNoneMask(    COLORDATA *ColorData ) ;																		// NoneMask ˆÈŠO‚Ì—v‘f‚ğ–„‚ß‚½ COLORDATA \‘¢‘Ì‚Ìî•ñ‚ğŒ³‚É NoneMask ‚ğƒZƒbƒg‚·‚é
extern	int				CmpColorData(            const COLORDATA *ColorData1, const COLORDATA *ColorData2 ) ;									// “ñ‚Â‚ÌƒJƒ‰[ƒtƒH[ƒ}ƒbƒg‚ª“™‚µ‚¢‚©‚Ç‚¤‚©’²‚×‚é( –ß‚è’l@TRUE:“™‚µ‚¢  FALSE:“™‚µ‚­‚È‚¢ )













// DxSoftImage.cppŠÖ”ƒvƒƒgƒ^ƒCƒvéŒ¾
#ifndef DX_NON_SOFTIMAGE
extern	int			InitSoftImage(                   void ) ;																			// ƒ\ƒtƒgƒEƒGƒAƒCƒ[ƒWƒnƒ“ƒhƒ‹‚ğ‘S‚Äíœ‚·‚é
extern	int			LoadSoftImage(                   const TCHAR *FileName ) ;															// ‰æ‘œƒtƒ@ƒCƒ‹‚ğ“Ç‚İ‚İƒ\ƒtƒgƒEƒGƒAƒCƒ[ƒWƒnƒ“ƒhƒ‹‚ğì¬‚·‚é( -1:ƒGƒ‰[  -1ˆÈŠO:ƒCƒ[ƒWƒnƒ“ƒhƒ‹ )
extern	int			LoadSoftImageToMem(              const void *FileImage, int FileImageSize ) ;										// ƒƒ‚ƒŠã‚É“WŠJ‚³‚ê‚½‰æ‘œƒtƒ@ƒCƒ‹ƒCƒ[ƒW‚©‚çƒ\ƒtƒgƒEƒGƒAƒCƒ[ƒWƒnƒ“ƒhƒ‹‚ğì¬‚·‚é( -1:ƒGƒ‰[  -1ˆÈŠO:ƒCƒ[ƒWƒnƒ“ƒhƒ‹ )
extern	int			MakeSoftImage(                   int SizeX, int SizeY ) ;															// ƒ\ƒtƒgƒEƒGƒAƒCƒ[ƒWƒnƒ“ƒhƒ‹‚Ìì¬( -1:ƒGƒ‰[  -1ˆÈŠO:ƒCƒ[ƒWƒnƒ“ƒhƒ‹ )
extern	int			MakeARGBF32ColorSoftImage(       int SizeX, int SizeY ) ;															// ƒ\ƒtƒgƒEƒGƒAƒCƒ[ƒWƒnƒ“ƒhƒ‹‚Ìì¬( RGBA Šeƒ`ƒƒƒ“ƒlƒ‹ 32bit •‚“®¬”“_Œ^ ƒJƒ‰[ )
extern	int			MakeARGBF16ColorSoftImage(       int SizeX, int SizeY ) ;															// ƒ\ƒtƒgƒEƒGƒAƒCƒ[ƒWƒnƒ“ƒhƒ‹‚Ìì¬( RGBA Šeƒ`ƒƒƒ“ƒlƒ‹ 16bit •‚“®¬”“_Œ^ ƒJƒ‰[ )
extern	int			MakeARGB8ColorSoftImage(         int SizeX, int SizeY ) ;															// ƒ\ƒtƒgƒEƒGƒAƒCƒ[ƒWƒnƒ“ƒhƒ‹‚Ìì¬( RGBA8 ƒJƒ‰[ )
extern	int			MakeXRGB8ColorSoftImage(         int SizeX, int SizeY ) ;															// ƒ\ƒtƒgƒEƒGƒAƒCƒ[ƒWƒnƒ“ƒhƒ‹‚Ìì¬( XRGB8 ƒJƒ‰[ )
extern	int			MakeARGB4ColorSoftImage(         int SizeX, int SizeY ) ;															// ƒ\ƒtƒgƒEƒGƒAƒCƒ[ƒWƒnƒ“ƒhƒ‹‚Ìì¬( ARGB4 ƒJƒ‰[ )
extern	int			MakeA1R5G5B5ColorSoftImage(      int SizeX, int SizeY ) ;															// ƒ\ƒtƒgƒEƒGƒAƒCƒ[ƒWƒnƒ“ƒhƒ‹‚Ìì¬( A1R5G5B5 ƒJƒ‰[ )
extern	int			MakeX1R5G5B5ColorSoftImage(      int SizeX, int SizeY ) ;															// ƒ\ƒtƒgƒEƒGƒAƒCƒ[ƒWƒnƒ“ƒhƒ‹‚Ìì¬( X1R5G5B5 ƒJƒ‰[ )
extern	int			MakeR5G5B5A1ColorSoftImage(      int SizeX, int SizeY ) ;															// ƒ\ƒtƒgƒEƒGƒAƒCƒ[ƒWƒnƒ“ƒhƒ‹‚Ìì¬( R5G5B5A1 ƒJƒ‰[ )
extern	int			MakeR5G6B5ColorSoftImage(        int SizeX, int SizeY ) ;															// ƒ\ƒtƒgƒEƒGƒAƒCƒ[ƒWƒnƒ“ƒhƒ‹‚Ìì¬( R5G6B5 ƒJƒ‰[ )
extern	int			MakeRGB8ColorSoftImage(          int SizeX, int SizeY ) ;															// ƒ\ƒtƒgƒEƒGƒAƒCƒ[ƒWƒnƒ“ƒhƒ‹‚Ìì¬( RGB8 ƒJƒ‰[ )
extern	int			MakePAL8ColorSoftImage(          int SizeX, int SizeY, int UseAlpha = FALSE ) ;										// ƒ\ƒtƒgƒEƒGƒAƒCƒ[ƒWƒnƒ“ƒhƒ‹‚Ìì¬( ƒpƒŒƒbƒg‚Q‚T‚UF ƒJƒ‰[ )

extern	int			DeleteSoftImage(                 int SIHandle ) ;																	// ƒ\ƒtƒgƒEƒGƒAƒCƒ[ƒWƒnƒ“ƒhƒ‹‚Ìíœ‚·‚é

extern	int			GetSoftImageSize(                int SIHandle, int *Width, int *Height ) ;											// ƒ\ƒtƒgƒEƒGƒAƒCƒ[ƒWƒnƒ“ƒhƒ‹‚ÌƒTƒCƒY‚ğæ“¾‚·‚é
extern	int			CheckPaletteSoftImage(           int SIHandle ) ;																	// ƒ\ƒtƒgƒEƒGƒAƒCƒ[ƒWƒnƒ“ƒhƒ‹‚ªƒpƒŒƒbƒg‰æ‘œ‚©‚Ç‚¤‚©‚ğæ“¾‚·‚é( TRUE:ƒpƒŒƒbƒg‰æ‘œ  FALSE:ƒpƒŒƒbƒg‰æ‘œ‚¶‚á‚È‚¢ )
extern	int			CheckAlphaSoftImage(             int SIHandle ) ;																	// ƒ\ƒtƒgƒEƒGƒAƒCƒ[ƒWƒnƒ“ƒhƒ‹‚ÌƒtƒH[ƒ}ƒbƒg‚Éƒ¿—v‘f‚ª‚ ‚é‚©‚Ç‚¤‚©‚ğæ“¾‚·‚é( TRUE:‚ ‚é  FALSE:‚È‚¢ )
extern	int			CheckPixelAlphaSoftImage(        int SIHandle ) ;																	// ƒ\ƒtƒgƒEƒGƒAƒCƒ[ƒWƒnƒ“ƒhƒ‹‚ÉŠÜ‚Ü‚ê‚éƒsƒNƒZƒ‹‚Ìƒ¿’l‚ğƒ`ƒFƒbƒN‚·‚é( –ß‚è’l   -1:ƒGƒ‰[  0:‰æ‘œ‚Éƒ¿¬•ª‚ª–³‚¢  1:‰æ‘œ‚Éƒ¿¬•ª‚ª‚ ‚èA‚·‚×‚ÄÅ‘å(255)’l  2:‰æ‘œ‚Éƒ¿¬•ª‚ª‚ ‚èA‘¶İ‚·‚éƒ¿’l‚ÍÅ¬(0)‚ÆÅ‘å(255)‚à‚µ‚­‚ÍÅ¬(0)‚Ì‚İ@3:‰æ‘œ‚Éƒ¿¬•ª‚ª‚ ‚èAÅ¬‚ÆÅ‘åˆÈŠO‚Ì’†ŠÔ‚Ì’l‚ª‚ ‚é )  

extern	int			GetDrawScreenSoftImage(          int x1, int y1, int x2, int y2, int SIHandle ) ;									// •`‰æ‘ÎÛ‚Ì‰æ–Ê‚©‚çw’è—Ìˆæ‚ğƒ\ƒtƒgƒEƒGƒAƒCƒ[ƒWƒnƒ“ƒhƒ‹‚É“]‘—‚·‚é
extern	int			GetDrawScreenSoftImageDestPos(   int x1, int y1, int x2, int y2, int SIHandle, int DestX, int DestY ) ;				// •`‰æ‘ÎÛ‚Ì‰æ–Ê‚©‚çw’è—Ìˆæ‚ğƒ\ƒtƒgƒEƒGƒAƒCƒ[ƒWƒnƒ“ƒhƒ‹‚É“]‘—‚·‚é( “]‘—æÀ•Ww’è”Å )
extern	int			FillSoftImage(                   int SIHandle, int r, int g, int b, int a ) ;										// ƒ\ƒtƒgƒEƒGƒAƒCƒ[ƒWƒnƒ“ƒhƒ‹‚ğw’èF‚Å“h‚è‚Â‚Ô‚·(ŠeF—v‘f‚Í‚O`‚Q‚T‚T)
extern	int			ClearRectSoftImage(              int SIHandle, int x, int y, int w, int h ) ;										// ƒ\ƒtƒgƒEƒGƒAƒCƒ[ƒWƒnƒ“ƒhƒ‹‚Ìw’è‚Ì—Ìˆæ‚ğ‚OƒNƒŠƒA‚·‚é
extern	int			GetPaletteSoftImage(             int SIHandle, int PaletteNo, int *r, int *g, int *b, int *a ) ;					// ƒ\ƒtƒgƒEƒGƒAƒCƒ[ƒWƒnƒ“ƒhƒ‹‚ÌƒpƒŒƒbƒg‚ğæ“¾‚·‚é(ŠeF—v‘f‚Í‚O`‚Q‚T‚T)
extern	int			SetPaletteSoftImage(             int SIHandle, int PaletteNo, int  r, int  g, int  b, int  a ) ;					// ƒ\ƒtƒgƒEƒGƒAƒCƒ[ƒWƒnƒ“ƒhƒ‹‚ÌƒpƒŒƒbƒg‚ğİ’è‚·‚é(ŠeF—v‘f‚Í‚O`‚Q‚T‚T)
extern	int			DrawPixelPalCodeSoftImage(       int SIHandle, int x, int y, int palNo ) ;											// ƒ\ƒtƒgƒEƒGƒAƒCƒ[ƒWƒnƒ“ƒhƒ‹‚Ìw’èÀ•W‚Éƒhƒbƒg‚ğ•`‰æ‚·‚é(ƒpƒŒƒbƒg‰æ‘œ—pA—LŒø’l‚Í‚O`‚Q‚T‚T)
extern	int			GetPixelPalCodeSoftImage(        int SIHandle, int x, int y ) ;														// ƒ\ƒtƒgƒEƒGƒAƒCƒ[ƒWƒnƒ“ƒhƒ‹‚Ìw’èÀ•W‚ÌFƒR[ƒh‚ğæ“¾‚·‚é(ƒpƒŒƒbƒg‰æ‘œ—pA–ß‚è’l‚Í‚O`‚Q‚T‚T)
extern	void		*GetImageAddressSoftImage(       int SIHandle ) ;																	// ƒ\ƒtƒgƒEƒGƒAƒCƒ[ƒWƒnƒ“ƒhƒ‹‚Ì‰æ‘œ‚ªŠi”[‚³‚ê‚Ä‚¢‚éƒƒ‚ƒŠ—Ìˆæ‚Ìæ“ªƒAƒhƒŒƒX‚ğæ“¾‚·‚é
extern	int			GetPitchSoftImage(               int SIHandle ) ;																	// ƒ\ƒtƒgƒEƒGƒAƒCƒ[ƒWƒnƒ“ƒhƒ‹‚Ìƒƒ‚ƒŠ‚ÉŠi”[‚³‚ê‚Ä‚¢‚é‰æ‘œƒf[ƒ^‚Ì1ƒ‰ƒCƒ“•Ó‚è‚ÌƒoƒCƒg”‚ğæ“¾‚·‚é
extern	int			DrawPixelSoftImage(              int SIHandle, int x, int y, int    r, int    g, int    b, int    a ) ;				// ƒ\ƒtƒgƒEƒGƒAƒCƒ[ƒWƒnƒ“ƒhƒ‹‚Ìw’èÀ•W‚Éƒhƒbƒg‚ğ•`‰æ‚·‚é(ŠeF—v‘f‚Í‚O`‚Q‚T‚T)
extern	int			DrawPixelSoftImageF(             int SIHandle, int x, int y, float  r, float  g, float  b, float  a ) ;				// ƒ\ƒtƒgƒEƒGƒAƒCƒ[ƒWƒnƒ“ƒhƒ‹‚Ìw’èÀ•W‚Éƒhƒbƒg‚ğ•`‰æ‚·‚é(ŠeF—v‘f‚Í•‚“®¬”“_”)
extern	void		DrawPixelSoftImage_Unsafe_XRGB8( int SIHandle, int x, int y, int    r, int    g, int    b ) ;						// ƒ\ƒtƒgƒEƒGƒAƒCƒ[ƒWƒnƒ“ƒhƒ‹‚Ìw’èÀ•W‚Éƒhƒbƒg‚ğ•`‰æ‚·‚é(ŠeF—v‘f‚Í‚O`‚Q‚T‚T)AƒGƒ‰[ƒ`ƒFƒbƒN‚ğ‚µ‚È‚¢‘ã‚í‚è‚É‚‘¬‚Å‚·‚ªA”ÍˆÍŠO‚ÌÀ•W‚â ARGB8 ˆÈŠO‚ÌƒtƒH[ƒ}ƒbƒg‚Ìƒ\ƒtƒgƒnƒ“ƒhƒ‹‚ğ“n‚·‚Æ•s³‚Èƒƒ‚ƒŠƒAƒNƒZƒX‚Å‹­§I—¹‚µ‚Ü‚·
extern	void		DrawPixelSoftImage_Unsafe_ARGB8( int SIHandle, int x, int y, int    r, int    g, int    b, int    a ) ;				// ƒ\ƒtƒgƒEƒGƒAƒCƒ[ƒWƒnƒ“ƒhƒ‹‚Ìw’èÀ•W‚Éƒhƒbƒg‚ğ•`‰æ‚·‚é(ŠeF—v‘f‚Í‚O`‚Q‚T‚T)AƒGƒ‰[ƒ`ƒFƒbƒN‚ğ‚µ‚È‚¢‘ã‚í‚è‚É‚‘¬‚Å‚·‚ªA”ÍˆÍŠO‚ÌÀ•W‚â XRGB8 ˆÈŠO‚ÌƒtƒH[ƒ}ƒbƒg‚Ìƒ\ƒtƒgƒnƒ“ƒhƒ‹‚ğ“n‚·‚Æ•s³‚Èƒƒ‚ƒŠƒAƒNƒZƒX‚Å‹­§I—¹‚µ‚Ü‚·
extern	int			GetPixelSoftImage(               int SIHandle, int x, int y, int   *r, int   *g, int   *b, int   *a ) ;				// ƒ\ƒtƒgƒEƒGƒAƒCƒ[ƒWƒnƒ“ƒhƒ‹‚Ìw’èÀ•W‚ÌF‚ğæ“¾‚·‚é(ŠeF—v‘f‚Í‚O`‚Q‚T‚T)
extern	int			GetPixelSoftImageF(              int SIHandle, int x, int y, float *r, float *g, float *b, float *a ) ;				// ƒ\ƒtƒgƒEƒGƒAƒCƒ[ƒWƒnƒ“ƒhƒ‹‚Ìw’èÀ•W‚ÌF‚ğæ“¾‚·‚é(ŠeF—v‘f‚Í•‚“®¬”“_”)
extern	void		GetPixelSoftImage_Unsafe_XRGB8(  int SIHandle, int x, int y, int   *r, int   *g, int   *b ) ;						// ƒ\ƒtƒgƒEƒGƒAƒCƒ[ƒWƒnƒ“ƒhƒ‹‚Ìw’èÀ•W‚ÌF‚ğæ“¾‚·‚é(ŠeF—v‘f‚Í‚O`‚Q‚T‚T)AƒGƒ‰[ƒ`ƒFƒbƒN‚ğ‚µ‚È‚¢‘ã‚í‚è‚É‚‘¬‚Å‚·‚ªA”ÍˆÍŠO‚ÌÀ•W‚â XRGB8 ˆÈŠO‚ÌƒtƒH[ƒ}ƒbƒg‚Ìƒ\ƒtƒgƒnƒ“ƒhƒ‹‚ğ“n‚·‚Æ•s³‚Èƒƒ‚ƒŠƒAƒNƒZƒX‚Å‹­§I—¹‚µ‚Ü‚·
extern	void		GetPixelSoftImage_Unsafe_ARGB8(  int SIHandle, int x, int y, int   *r, int   *g, int   *b, int   *a ) ;				// ƒ\ƒtƒgƒEƒGƒAƒCƒ[ƒWƒnƒ“ƒhƒ‹‚Ìw’èÀ•W‚ÌF‚ğæ“¾‚·‚é(ŠeF—v‘f‚Í‚O`‚Q‚T‚T)AƒGƒ‰[ƒ`ƒFƒbƒN‚ğ‚µ‚È‚¢‘ã‚í‚è‚É‚‘¬‚Å‚·‚ªA”ÍˆÍŠO‚ÌÀ•W‚â ARGB8 ˆÈŠO‚ÌƒtƒH[ƒ}ƒbƒg‚Ìƒ\ƒtƒgƒnƒ“ƒhƒ‹‚ğ“n‚·‚Æ•s³‚Èƒƒ‚ƒŠƒAƒNƒZƒX‚Å‹­§I—¹‚µ‚Ü‚·
extern	int			DrawLineSoftImage(               int SIHandle, int x1, int y1, int x2, int y2, int r, int g, int b, int a ) ;		// ƒ\ƒtƒgƒEƒGƒAƒCƒ[ƒWƒnƒ“ƒhƒ‹‚Ìw’èÀ•W‚Éü‚ğ•`‰æ‚·‚é(ŠeF—v‘f‚Í‚O`‚Q‚T‚T)
extern	int			DrawCircleSoftImage(             int SIHandle, int x, int y, int radius, int r, int g, int b, int a, int FillFlag = TRUE ) ;	// ƒ\ƒtƒgƒEƒGƒAƒCƒ[ƒWƒnƒ“ƒhƒ‹‚Ìw’èÀ•W‚É‰~‚ğ•`‰æ‚·‚é(ŠeF—v‘f‚Í‚O`‚Q‚T‚T)
extern	int			BltSoftImage(                    int SrcX, int SrcY, int SrcSizeX, int SrcSizeY, int SrcSIHandle, int DestX, int DestY, int DestSIHandle ) ;									// ƒ\ƒtƒgƒEƒGƒAƒCƒ[ƒWƒnƒ“ƒhƒ‹‚ğ•Ê‚Ìƒ\ƒtƒgƒEƒGƒAƒCƒ[ƒWƒnƒ“ƒhƒ‹‚É“]‘—‚·‚é
extern	int			BltSoftImageWithTransColor(      int SrcX, int SrcY, int SrcSizeX, int SrcSizeY, int SrcSIHandle, int DestX, int DestY, int DestSIHandle, int Tr, int Tg, int Tb, int Ta ) ;	// ƒ\ƒtƒgƒEƒGƒAƒCƒ[ƒWƒnƒ“ƒhƒ‹‚ğ•Ê‚Ìƒ\ƒtƒgƒEƒGƒAƒCƒ[ƒWƒnƒ“ƒhƒ‹‚É“§‰ßFˆ—•t‚«‚Å“]‘—‚·‚é
extern	int			BltSoftImageWithAlphaBlend(      int SrcX, int SrcY, int SrcSizeX, int SrcSizeY, int SrcSIHandle, int DestX, int DestY, int DestSIHandle, int Opacity = 255 ) ;					// ƒ\ƒtƒgƒEƒGƒAƒCƒ[ƒWƒnƒ“ƒhƒ‹‚ğ•Ê‚Ìƒ\ƒtƒgƒEƒGƒAƒCƒ[ƒWƒnƒ“ƒhƒ‹‚ÉƒAƒ‹ƒtƒ@’l‚ÌƒuƒŒƒ“ƒh‚ğl—¶‚µ‚½ã‚Å“]‘—‚·‚é( Opacity ‚Í“§–¾“x : 0( Š®‘S“§–¾ ) ` 255( Š®‘S•s“§–¾ ) )( o—Íæ‚ª ARGB8 Œ`®ˆÈŠO‚Ìê‡‚ÍƒGƒ‰[‚É‚È‚è‚Ü‚· )
extern	int			ReverseSoftImageH(               int SIHandle ) ;																	// ƒ\ƒtƒgƒEƒGƒAƒCƒ[ƒWƒnƒ“ƒhƒ‹‚ğ¶‰E”½“]‚·‚é
extern	int			ReverseSoftImageV(               int SIHandle ) ;																	// ƒ\ƒtƒgƒEƒGƒAƒCƒ[ƒWƒnƒ“ƒhƒ‹‚ğã‰º”½“]‚·‚é
extern	int			ReverseSoftImage(                int SIHandle ) ;																	// ƒ\ƒtƒgƒEƒGƒAƒCƒ[ƒWƒnƒ“ƒhƒ‹‚ğã‰º¶‰E”½“]‚·‚é

#ifndef DX_NON_FONT
extern	int			BltStringSoftImage(              int x, int y, const TCHAR *StrData, int DestSIHandle, int DestEdgeSIHandle = -1 ,                                        int VerticalFlag = FALSE ) ;		// ƒ\ƒtƒgƒEƒGƒAƒCƒ[ƒWƒnƒ“ƒhƒ‹‚É•¶š—ñ‚ğ•`‰æ‚·‚é( ƒfƒtƒHƒ‹ƒgƒtƒHƒ“ƒgƒnƒ“ƒhƒ‹‚ğg—p‚·‚é )
extern	int			BltStringSoftImageToHandle(      int x, int y, const TCHAR *StrData, int DestSIHandle, int DestEdgeSIHandle /* ‰‚ª•K—v‚È‚¢ê‡‚Í -1 */ , int FontHandle, int VerticalFlag = FALSE ) ;		// ƒ\ƒtƒgƒEƒGƒAƒCƒ[ƒWƒnƒ“ƒhƒ‹‚É•¶š—ñ‚ğ•`‰æ‚·‚é( ƒtƒHƒ“ƒgƒnƒ“ƒhƒ‹g—p”Å )
#endif // DX_NON_FONT

extern	int			DrawSoftImage(                   int x, int y, int SIHandle ) ;														// ƒ\ƒtƒgƒEƒGƒAƒCƒ[ƒWƒnƒ“ƒhƒ‹‚ğ‰æ–Ê‚É•`‰æ‚·‚é

#ifndef DX_NON_SAVEFUNCTION

extern	int			SaveSoftImageToBmp(              const TCHAR *FilePath, int SIHandle ) ;											// ƒ\ƒtƒgƒEƒGƒAƒCƒ[ƒWƒnƒ“ƒhƒ‹‚ğ‚a‚l‚o‰æ‘œƒtƒ@ƒCƒ‹‚Æ‚µ‚Ä•Û‘¶‚·‚é
extern	int			SaveSoftImageToDds(              const TCHAR *FilePath, int SIHandle ) ;											// ƒ\ƒtƒgƒEƒGƒAƒCƒ[ƒWƒnƒ“ƒhƒ‹‚ğ‚c‚c‚r‰æ‘œƒtƒ@ƒCƒ‹‚Æ‚µ‚Ä•Û‘¶‚·‚é
#ifndef DX_NON_PNGREAD
extern	int			SaveSoftImageToPng(              const TCHAR *FilePath, int SIHandle, int CompressionLevel ) ;						// ƒ\ƒtƒgƒEƒGƒAƒCƒ[ƒWƒnƒ“ƒhƒ‹‚ğ‚o‚m‚f‰æ‘œƒtƒ@ƒCƒ‹‚Æ‚µ‚Ä•Û‘¶‚·‚é CompressionLevel = ˆ³k—¦A’l‚ª‘å‚«‚¢‚Ù‚Ç‚ˆ³k—¦‚•‰‰×A‚O‚Í–³ˆ³k,0`9
#endif // DX_NON_PNGREAD
#ifndef DX_NON_JPEGREAD
extern	int			SaveSoftImageToJpeg(             const TCHAR *FilePath, int SIHandle, int Quality, int Sample2x1 ) ;				// ƒ\ƒtƒgƒEƒGƒAƒCƒ[ƒWƒnƒ“ƒhƒ‹‚ğ‚i‚o‚d‚f‰æ‘œƒtƒ@ƒCƒ‹‚Æ‚µ‚Ä•Û‘¶‚·‚é Quality = ‰æ¿A’l‚ª‘å‚«‚¢‚Ù‚Ç’áˆ³k‚‰æ¿,0`100 
#endif // DX_NON_JPEGREAD

#endif // DX_NON_SAVEFUNCTION

#endif // DX_NON_SOFTIMAGE


















#ifndef DX_NON_SOUND

// DxSound.cppŠÖ”ƒvƒƒgƒ^ƒCƒvéŒ¾

// ƒTƒEƒ“ƒhƒf[ƒ^ŠÇ—ŒnŠÖ”
extern	int			InitSoundMem(                        int LogOutFlag = FALSE ) ;																	// ‘S‚Ä‚ÌƒTƒEƒ“ƒhƒnƒ“ƒhƒ‹‚ğíœ‚·‚é

extern	int			AddSoundData(                        int Handle = -1 ) ;																										// ƒTƒEƒ“ƒhƒnƒ“ƒhƒ‹‚ğì¬‚·‚é
extern	int			AddStreamSoundMem(                   STREAMDATA *Stream, int LoopNum,  int SoundHandle, int StreamDataType, int *CanStreamCloseFlag, int UnionHandle = -1 ) ;	// ƒXƒgƒŠ[ƒ€Ä¶ƒ^ƒCƒv‚ÌƒTƒEƒ“ƒhƒnƒ“ƒhƒ‹‚ÉƒXƒgƒŠ[ƒ€ƒf[ƒ^‚ğÄ¶‘ÎÛ‚É’Ç‰Á‚·‚é
extern	int			AddStreamSoundMemToMem(              const void *FileImage, int FileImageSize, int LoopNum,  int SoundHandle, int StreamDataType, int UnionHandle = -1 ) ;		// ƒXƒgƒŠ[ƒ€Ä¶ƒ^ƒCƒv‚ÌƒTƒEƒ“ƒhƒnƒ“ƒhƒ‹‚Éƒƒ‚ƒŠã‚É“WŠJ‚µ‚½ƒTƒEƒ“ƒhƒtƒ@ƒCƒ‹ƒCƒ[ƒW‚ğÄ¶‘ÎÛ‚É’Ç‰Á‚·‚é
extern	int			AddStreamSoundMemToFile(             const TCHAR *WaveFile, int LoopNum,  int SoundHandle, int StreamDataType, int UnionHandle = -1 ) ;							// ƒXƒgƒŠ[ƒ€Ä¶ƒ^ƒCƒv‚ÌƒTƒEƒ“ƒhƒnƒ“ƒhƒ‹‚ÉƒTƒEƒ“ƒhƒtƒ@ƒCƒ‹‚ğÄ¶‘ÎÛ‚É’Ç‰Á‚·‚é
extern	int			SetupStreamSoundMem(                 int SoundHandle ) ;																		// ƒXƒgƒŠ[ƒ€Ä¶ƒ^ƒCƒv‚ÌƒTƒEƒ“ƒhƒnƒ“ƒhƒ‹‚ÌÄ¶€”õ‚ğ‚·‚é
extern	int			PlayStreamSoundMem(                  int SoundHandle, int PlayType = DX_PLAYTYPE_LOOP , int TopPositionFlag = TRUE ) ;			// ƒXƒgƒŠ[ƒ€Ä¶ƒ^ƒCƒv‚ÌƒTƒEƒ“ƒhƒnƒ“ƒhƒ‹‚ÌÄ¶‚ğŠJn‚·‚é
extern	int			CheckStreamSoundMem(                 int SoundHandle ) ;																		// ƒXƒgƒŠ[ƒ€Ä¶ƒ^ƒCƒv‚ÌƒTƒEƒ“ƒhƒnƒ“ƒhƒ‹‚ÌÄ¶ó‘Ô‚ğæ“¾‚·‚é
extern	int			StopStreamSoundMem(                  int SoundHandle ) ;																		// ƒXƒgƒŠ[ƒ€Ä¶ƒ^ƒCƒv‚ÌƒTƒEƒ“ƒhƒnƒ“ƒhƒ‹‚ÌÄ¶‚ğ’â~‚·‚é
extern	int			SetStreamSoundCurrentPosition(       int Byte, int SoundHandle ) ;																// ƒTƒEƒ“ƒhƒnƒ“ƒhƒ‹‚ÌÄ¶ˆÊ’u‚ğƒoƒCƒg’PˆÊ‚Å•ÏX‚·‚é(Ä¶‚ª~‚Ü‚Á‚Ä‚¢‚é‚Ì‚İ—LŒø)
extern	int			GetStreamSoundCurrentPosition(       int SoundHandle ) ;																		// ƒTƒEƒ“ƒhƒnƒ“ƒhƒ‹‚ÌÄ¶ˆÊ’u‚ğƒoƒCƒg’PˆÊ‚Åæ“¾‚·‚é
extern	int			SetStreamSoundCurrentTime(           int Time, int SoundHandle ) ;																// ƒTƒEƒ“ƒhƒnƒ“ƒhƒ‹‚ÌÄ¶ˆÊ’u‚ğƒ~ƒŠ•b’PˆÊ‚Åİ’è‚·‚é(ˆ³kŒ`®‚Ìê‡‚Í³‚µ‚­İ’è‚³‚ê‚È‚¢ê‡‚ª‚ ‚é)
extern	int			GetStreamSoundCurrentTime(           int SoundHandle ) ;																		// ƒTƒEƒ“ƒhƒnƒ“ƒhƒ‹‚ÌÄ¶ˆÊ’u‚ğƒ~ƒŠ•b’PˆÊ‚Åæ“¾‚·‚é(ˆ³kŒ`®‚Ìê‡‚Í³‚µ‚¢’l‚ª•Ô‚Á‚Ä‚±‚È‚¢ê‡‚ª‚ ‚é)
extern	int			ProcessStreamSoundMem(               int SoundHandle ) ;																		// ƒXƒgƒŠ[ƒ€Ä¶ƒ^ƒCƒv‚ÌƒTƒEƒ“ƒhƒnƒ“ƒhƒ‹‚ÌüŠú“I‚Èˆ—‚ğs‚¤ŠÖ”( “à•”‚Å©“®“I‚ÉŒÄ‚Î‚ê‚Ü‚· )
extern	int			ProcessStreamSoundMemAll(            void ) ;																					// —LŒø‚ÈƒXƒgƒŠ[ƒ€Ä¶ƒ^ƒCƒv‚ÌƒTƒEƒ“ƒhƒnƒ“ƒhƒ‹‚É‘Î‚µ‚Ä ProcessStreamSoundMem ‚ğÀs‚·‚é( “à•”‚Å©“®“I‚ÉŒÄ‚Î‚ê‚Ü‚· )


extern	int			LoadSoundMem2(                       const TCHAR *FileName1, const TCHAR *FileName2 ) ;											// ‘O‘t•”‚Æƒ‹[ƒv•”‚É•ª‚©‚ê‚½ƒTƒEƒ“ƒhƒtƒ@ƒCƒ‹‚ğ“Ç‚İ‚İƒTƒEƒ“ƒhƒnƒ“ƒhƒ‹‚ğì¬‚·‚é
extern	int			LoadBGM(                             const TCHAR *FileName ) ;																	// å‚É‚a‚f‚l‚ğ“Ç‚İ‚İƒTƒEƒ“ƒhƒnƒ“ƒhƒ‹‚ğì¬‚·‚é‚Ì‚É“K‚µ‚½ŠÖ”

extern	int			LoadSoundMemBase(                    const TCHAR *FileName, int BufferNum,      int UnionHandle = -1 ) ;						// ƒTƒEƒ“ƒhƒtƒ@ƒCƒ‹‚©‚çƒTƒEƒ“ƒhƒnƒ“ƒhƒ‹‚ğì¬‚·‚é
extern	int			LoadSoundMem(                        const TCHAR *FileName, int BufferNum = 3 , int UnionHandle = -1 ) ;						// LoadSoundMemBase ‚Ì•Ê–¼ŠÖ”
extern	int			LoadSoundMemToBufNumSitei(           const TCHAR *FileName, int BufferNum ) ;													// LoadSoundMem ‚ğg—p‚µ‚Ä‰º‚³‚¢
extern	int			DuplicateSoundMem(                   int SrcSoundHandle, int BufferNum = 3 ) ;													// “¯‚¶ƒTƒEƒ“ƒhƒf[ƒ^‚ğg—p‚·‚éƒTƒEƒ“ƒhƒnƒ“ƒhƒ‹‚ğì¬‚·‚é( DX_SOUNDDATATYPE_MEMNOPRESS ƒ^ƒCƒv‚ÌƒTƒEƒ“ƒhƒnƒ“ƒhƒ‹‚Ì‚İ‰Â”\ )

extern	int			LoadSoundMemByMemImageBase(          const void *FileImage, int FileImageSize, int BufferNum,      int UnionHandle = -1 ) ;			// ƒƒ‚ƒŠã‚É“WŠJ‚³‚ê‚½ƒTƒEƒ“ƒhƒtƒ@ƒCƒ‹ƒCƒ[ƒW‚©‚çƒTƒEƒ“ƒhƒnƒ“ƒhƒ‹‚ğì¬‚·‚é
extern	int			LoadSoundMemByMemImage(              const void *FileImage, int FileImageSize, int BufferNum = 3 , int UnionHandle = -1 ) ;			// LoadSoundMemByMemImageBase ‚Ì•Ê–¼ŠÖ”
extern	int			LoadSoundMemByMemImage2(             const void *WaveImage, int WaveImageSize, const WAVEFORMATEX *WaveFormat, int WaveHeaderSize ) ;	// ƒƒ‚ƒŠã‚É“WŠJ‚³‚ê‚½‚o‚b‚lƒf[ƒ^‚©‚çƒTƒEƒ“ƒhƒnƒ“ƒhƒ‹‚ğì¬‚·‚é
extern	int			LoadSoundMemByMemImageToBufNumSitei( const void *FileImage, int FileImageSize, int BufferNum ) ;								// LoadSoundMemByMemImageBase ‚ğg—p‚µ‚Ä‰º‚³‚¢
extern	int			LoadSoundMem2ByMemImage(             const void *FileImage1, int FileImageSize1, const void *FileImage2, int FileImageSize2 ) ;	// ‘O‘t•”‚Æƒ‹[ƒv•”‚É•ª‚©‚ê‚½“ñ‚Â‚Ìƒƒ‚ƒŠã‚É“WŠJ‚³‚ê‚½ƒTƒEƒ“ƒhƒtƒ@ƒCƒ‹ƒCƒ[ƒW‚©‚çƒTƒEƒ“ƒhƒnƒ“ƒhƒ‹‚ğì¬‚·‚é
extern	int			LoadSoundMemFromSoftSound(           int SoftSoundHandle, int BufferNum = 3 ) ;													// ƒ\ƒtƒgƒEƒGƒAƒTƒEƒ“ƒhƒnƒ“ƒhƒ‹‚ª‚ÂƒTƒEƒ“ƒhƒf[ƒ^‚©‚çƒTƒEƒ“ƒhƒnƒ“ƒhƒ‹‚ğì¬‚·‚é

extern	int			DeleteSoundMem(                      int SoundHandle, int LogOutFlag = FALSE ) ;												// ƒTƒEƒ“ƒhƒnƒ“ƒhƒ‹‚ğíœ‚·‚é

extern	int			PlaySoundMem(                        int SoundHandle, int PlayType, int TopPositionFlag = TRUE ) ;								// ƒTƒEƒ“ƒhƒnƒ“ƒhƒ‹‚ğÄ¶‚·‚é
extern	int			StopSoundMem(                                                                        int SoundHandle ) ;						// ƒTƒEƒ“ƒhƒnƒ“ƒhƒ‹‚ÌÄ¶‚ğ’â~‚·‚é
extern	int			CheckSoundMem(                                                                       int SoundHandle ) ;						// ƒTƒEƒ“ƒhƒnƒ“ƒhƒ‹‚ªÄ¶’†‚©‚Ç‚¤‚©‚ğæ“¾‚·‚é
extern	int			SetPanSoundMem(                      int PanPal,                                     int SoundHandle ) ;						// ƒTƒEƒ“ƒhƒnƒ“ƒhƒ‹‚Ìƒpƒ“‚ğİ’è‚·‚é( 100•ª‚Ì1ƒfƒVƒxƒ‹’PˆÊ 0 ` 10000 )
extern	int			ChangePanSoundMem(                   int PanPal,                                     int SoundHandle ) ;						// ƒTƒEƒ“ƒhƒnƒ“ƒhƒ‹‚Ìƒpƒ“‚ğİ’è‚·‚é( -255 ` 255 )
extern	int			GetPanSoundMem(                                                                      int SoundHandle ) ;						// ƒTƒEƒ“ƒhƒnƒ“ƒhƒ‹‚Ìƒpƒ“‚ğæ“¾‚·‚é
extern	int			SetVolumeSoundMem(                   int VolumePal,                                  int SoundHandle ) ;						// ƒTƒEƒ“ƒhƒnƒ“ƒhƒ‹‚Ìƒ{ƒŠƒ…[ƒ€‚ğİ’è‚·‚é( 100•ª‚Ì1ƒfƒVƒxƒ‹’PˆÊ 0 ` 10000 )
extern	int			ChangeVolumeSoundMem(                int VolumePal,                                  int SoundHandle ) ;						// ƒTƒEƒ“ƒhƒnƒ“ƒhƒ‹‚Ìƒ{ƒŠƒ…[ƒ€‚ğİ’è‚·‚é( 0 ` 255 )
extern	int			GetVolumeSoundMem(                                                                   int SoundHandle ) ;						// ƒTƒEƒ“ƒhƒnƒ“ƒhƒ‹‚Ìƒ{ƒŠƒ…[ƒ€‚ğæ“¾‚·‚é( 100•ª‚Ì1ƒfƒVƒxƒ‹’PˆÊ 0 ` 10000 )
extern	int			GetVolumeSoundMem2(                                                                  int SoundHandle ) ;						// ƒTƒEƒ“ƒhƒnƒ“ƒhƒ‹‚Ìƒ{ƒŠƒ…[ƒ€‚ğæ“¾‚·‚é( 0 ` 255 )
extern	int			SetChannelVolumeSoundMem(            int Channel, int VolumePal,                     int SoundHandle ) ;						// ƒTƒEƒ“ƒhƒnƒ“ƒhƒ‹‚Ìw’è‚Ìƒ`ƒƒƒ“ƒlƒ‹‚Ìƒ{ƒŠƒ…[ƒ€‚ğİ’è‚·‚é( 100•ª‚Ì1ƒfƒVƒxƒ‹’PˆÊ 0 ` 10000 )
extern	int			ChangeChannelVolumeSoundMem(         int Channel, int VolumePal,                     int SoundHandle ) ;						// ƒTƒEƒ“ƒhƒnƒ“ƒhƒ‹‚Ìw’è‚Ìƒ`ƒƒƒ“ƒlƒ‹‚Ìƒ{ƒŠƒ…[ƒ€‚ğİ’è‚·‚é( 0 ` 255 )
extern	int			GetChannelVolumeSoundMem(            int Channel,                                    int SoundHandle ) ;						// ƒTƒEƒ“ƒhƒnƒ“ƒhƒ‹‚Ìw’è‚Ìƒ`ƒƒƒ“ƒlƒ‹‚Ìƒ{ƒŠƒ…[ƒ€‚ğæ“¾‚·‚é( 100•ª‚Ì1ƒfƒVƒxƒ‹’PˆÊ 0 ` 10000 )
extern	int			GetChannelVolumeSoundMem2(           int Channel,                                    int SoundHandle ) ;						// ƒTƒEƒ“ƒhƒnƒ“ƒhƒ‹‚Ìw’è‚Ìƒ`ƒƒƒ“ƒlƒ‹‚Ìƒ{ƒŠƒ…[ƒ€‚ğæ“¾‚·‚é( 0 ` 255 )
extern	int			SetFrequencySoundMem(                int FrequencyPal,                               int SoundHandle ) ;						// ƒTƒEƒ“ƒhƒnƒ“ƒhƒ‹‚ÌÄ¶ü”g”‚ğİ’è‚·‚é
extern	int			GetFrequencySoundMem(                                                                int SoundHandle ) ;						// ƒTƒEƒ“ƒhƒnƒ“ƒhƒ‹‚ÌÄ¶ü”g”‚ğæ“¾‚·‚é
extern	int			ResetFrequencySoundMem(                                                              int SoundHandle ) ;						// ƒTƒEƒ“ƒhƒnƒ“ƒhƒ‹‚ÌÄ¶ü”g”‚ğ“Ç‚İ‚İ’¼Œã‚Ìó‘Ô‚É–ß‚·

extern	int			SetNextPlayPanSoundMem(              int PanPal,                                     int SoundHandle ) ;						// ƒTƒEƒ“ƒhƒnƒ“ƒhƒ‹‚ÌŸ‚ÌÄ¶‚É‚Ì‚İg—p‚·‚éƒpƒ“‚ğİ’è‚·‚é( 100•ª‚Ì1ƒfƒVƒxƒ‹’PˆÊ 0 ` 10000 )
extern	int			ChangeNextPlayPanSoundMem(           int PanPal,                                     int SoundHandle ) ;						// ƒTƒEƒ“ƒhƒnƒ“ƒhƒ‹‚ÌŸ‚ÌÄ¶‚É‚Ì‚İg—p‚·‚éƒpƒ“‚ğİ’è‚·‚é( -255 ` 255 )
extern	int			SetNextPlayVolumeSoundMem(           int VolumePal,                                  int SoundHandle ) ;						// ƒTƒEƒ“ƒhƒnƒ“ƒhƒ‹‚ÌŸ‚ÌÄ¶‚É‚Ì‚İg—p‚·‚éƒ{ƒŠƒ…[ƒ€‚ğİ’è‚·‚é( 100•ª‚Ì1ƒfƒVƒxƒ‹’PˆÊ 0 ` 10000 )
extern	int			ChangeNextPlayVolumeSoundMem(        int VolumePal,                                  int SoundHandle ) ;						// ƒTƒEƒ“ƒhƒnƒ“ƒhƒ‹‚ÌŸ‚ÌÄ¶‚É‚Ì‚İg—p‚·‚éƒ{ƒŠƒ…[ƒ€‚ğİ’è‚·‚é( 0 ` 255 )
extern	int			SetNextPlayChannelVolumeSoundMem(    int Channel, int VolumePal,                     int SoundHandle ) ;						// ƒTƒEƒ“ƒhƒnƒ“ƒhƒ‹‚ÌŸ‚ÌÄ¶‚É‚Ì‚İg—p‚·‚éƒ`ƒƒƒ“ƒlƒ‹‚Ìƒ{ƒŠƒ…[ƒ€‚ğİ’è‚·‚é( 100•ª‚Ì1ƒfƒVƒxƒ‹’PˆÊ 0 ` 10000 )
extern	int			ChangeNextPlayChannelVolumeSoundMem( int Channel, int VolumePal,                     int SoundHandle ) ;						// ƒTƒEƒ“ƒhƒnƒ“ƒhƒ‹‚ÌŸ‚ÌÄ¶‚É‚Ì‚İg—p‚·‚éƒ`ƒƒƒ“ƒlƒ‹‚Ìƒ{ƒŠƒ…[ƒ€‚ğİ’è‚·‚é( 0 ` 255 )
extern	int			SetNextPlayFrequencySoundMem(        int FrequencyPal,                               int SoundHandle ) ;						// ƒTƒEƒ“ƒhƒnƒ“ƒhƒ‹‚ÌŸ‚ÌÄ¶‚É‚Ì‚İg—p‚·‚éÄ¶ü”g”‚ğİ’è‚·‚é

extern	int			SetCurrentPositionSoundMem(          int SamplePosition,                             int SoundHandle ) ;						// ƒTƒEƒ“ƒhƒnƒ“ƒhƒ‹‚ÌÄ¶ˆÊ’u‚ğƒTƒ“ƒvƒ‹’PˆÊ‚Åİ’è‚·‚é(Ä¶‚ª~‚Ü‚Á‚Ä‚¢‚é‚Ì‚İ—LŒø)
extern	int			GetCurrentPositionSoundMem(                                                          int SoundHandle ) ;						// ƒTƒEƒ“ƒhƒnƒ“ƒhƒ‹‚ÌÄ¶ˆÊ’u‚ğƒTƒ“ƒvƒ‹’PˆÊ‚Åæ“¾‚·‚é
extern	int			SetSoundCurrentPosition(             int Byte,                                       int SoundHandle ) ;						// ƒTƒEƒ“ƒhƒnƒ“ƒhƒ‹‚ÌÄ¶ˆÊ’u‚ğƒoƒCƒg’PˆÊ‚Åİ’è‚·‚é(Ä¶‚ª~‚Ü‚Á‚Ä‚¢‚é‚Ì‚İ—LŒø)
extern	int			GetSoundCurrentPosition(                                                             int SoundHandle ) ;						// ƒTƒEƒ“ƒhƒnƒ“ƒhƒ‹‚ÌÄ¶ˆÊ’u‚ğƒoƒCƒg’PˆÊ‚Åæ“¾‚·‚é
extern	int			SetSoundCurrentTime(                 int Time,                                       int SoundHandle ) ;						// ƒTƒEƒ“ƒhƒnƒ“ƒhƒ‹‚ÌÄ¶ˆÊ’u‚ğƒ~ƒŠ•b’PˆÊ‚Åİ’è‚·‚é(ˆ³kŒ`®‚Ìê‡‚Í³‚µ‚­İ’è‚³‚ê‚È‚¢ê‡‚ª‚ ‚é)
extern	int			GetSoundCurrentTime(                                                                 int SoundHandle ) ;						// ƒTƒEƒ“ƒhƒnƒ“ƒhƒ‹‚ÌÄ¶ˆÊ’u‚ğƒ~ƒŠ•b’PˆÊ‚Åæ“¾‚·‚é(ˆ³kŒ`®‚Ìê‡‚Í³‚µ‚¢’l‚ª•Ô‚Á‚Ä‚±‚È‚¢ê‡‚ª‚ ‚é)
extern	int			GetSoundTotalSample(                                                                 int SoundHandle ) ;						// ƒTƒEƒ“ƒhƒnƒ“ƒhƒ‹‚Ì‰¹‚Ì‘ŠÔ‚ğƒTƒ“ƒvƒ‹’PˆÊ‚Åæ“¾‚·‚é
extern	int			GetSoundTotalTime(                                                                   int SoundHandle ) ;						// ƒTƒEƒ“ƒhƒnƒ“ƒhƒ‹‚Ì‰¹‚Ì‘ŠÔ‚ğƒ~ƒŠ•b’PˆÊ‚Åæ“¾‚·‚é

extern	int			SetLoopPosSoundMem(                  int LoopTime,                                   int SoundHandle ) ;						// SetLoopTimePosSoundMem ‚Ì•Ê–¼ŠÖ”
extern	int			SetLoopTimePosSoundMem(              int LoopTime,                                   int SoundHandle ) ;						// ƒTƒEƒ“ƒhƒnƒ“ƒhƒ‹‚Éƒ‹[ƒvˆÊ’u‚ğİ’è‚·‚é(ƒ~ƒŠ•b’PˆÊ)
extern	int			SetLoopSamplePosSoundMem(            int LoopSamplePosition,                         int SoundHandle ) ;						// ƒTƒEƒ“ƒhƒnƒ“ƒhƒ‹‚Éƒ‹[ƒvˆÊ’u‚ğİ’è‚·‚é(ƒTƒ“ƒvƒ‹’PˆÊ)

extern	int			SetLoopStartTimePosSoundMem(         int LoopStartTime,                              int SoundHandle ) ;						// ƒTƒEƒ“ƒhƒnƒ“ƒhƒ‹‚Éƒ‹[ƒvŠJnˆÊ’u‚ğİ’è‚·‚é(ƒ~ƒŠ•b’PˆÊ)
extern	int			SetLoopStartSamplePosSoundMem(       int LoopStartSamplePosition,                    int SoundHandle ) ;						// ƒTƒEƒ“ƒhƒnƒ“ƒhƒ‹‚Éƒ‹[ƒvŠJnˆÊ’u‚ğİ’è‚·‚é(ƒTƒ“ƒvƒ‹’PˆÊ)

extern	int			SetLoopAreaTimePosSoundMem(          int  LoopStartTime, int  LoopEndTime,                     int SoundHandle ) ;				// ƒTƒEƒ“ƒhƒnƒ“ƒhƒ‹‚Éƒ‹[ƒv”ÍˆÍ‚ğİ’è‚·‚é(ƒ~ƒŠ•b’PˆÊ)
extern	int			GetLoopAreaTimePosSoundMem(          int *LoopStartTime, int *LoopEndTime,                     int SoundHandle ) ;				// ƒTƒEƒ“ƒhƒnƒ“ƒhƒ‹‚Éƒ‹[ƒv”ÍˆÍ‚ğæ“¾‚·‚é(ƒ~ƒŠ•b’PˆÊ)
extern	int			SetLoopAreaSamplePosSoundMem(        int  LoopStartSamplePosition, int  LoopEndSamplePosition, int SoundHandle ) ;				// ƒTƒEƒ“ƒhƒnƒ“ƒhƒ‹‚Éƒ‹[ƒv”ÍˆÍ‚ğİ’è‚·‚é(ƒTƒ“ƒvƒ‹’PˆÊ)
extern	int			GetLoopAreaSamplePosSoundMem(        int *LoopStartSamplePosition, int *LoopEndSamplePosition, int SoundHandle ) ;				// ƒTƒEƒ“ƒhƒnƒ“ƒhƒ‹‚Éƒ‹[ƒv”ÍˆÍ‚ğæ“¾‚·‚é(ƒTƒ“ƒvƒ‹’PˆÊ)

extern	int			SetPlayFinishDeleteSoundMem(         int DeleteFlag,                                 int SoundHandle ) ;						// ƒTƒEƒ“ƒhƒnƒ“ƒhƒ‹‚ÌÄ¶‚ªI—¹‚µ‚½‚ç©“®“I‚Éƒnƒ“ƒhƒ‹‚ğíœ‚·‚é‚©‚Ç‚¤‚©‚ğİ’è‚·‚é

extern	int			Set3DReverbParamSoundMem(            const SOUND3D_REVERB_PARAM *Param,              int SoundHandle ) ;						// ƒTƒEƒ“ƒhƒnƒ“ƒhƒ‹‚Ì‚R‚cƒTƒEƒ“ƒh—p‚ÌƒŠƒo[ƒuƒpƒ‰ƒ[ƒ^‚ğİ’è‚·‚é
extern	int			Set3DPresetReverbParamSoundMem(      int PresetNo /* DX_REVERB_PRESET_DEFAULT “™ */ , int SoundHandle ) ;						// ƒTƒEƒ“ƒhƒnƒ“ƒhƒ‹‚Ì‚R‚cƒTƒEƒ“ƒh—p‚ÌƒŠƒo[ƒuƒpƒ‰ƒ[ƒ^‚ğƒvƒŠƒZƒbƒg‚ğg—p‚µ‚Äİ’è‚·‚é
extern	int			Set3DReverbParamSoundMemAll(         const SOUND3D_REVERB_PARAM *Param, int PlaySoundOnly = FALSE ) ;							// ‘S‚Ä‚Ì‚R‚cƒTƒEƒ“ƒh‚ÌƒTƒEƒ“ƒhƒnƒ“ƒhƒ‹‚ÉƒŠƒo[ƒuƒpƒ‰ƒ[ƒ^‚ğİ’è‚·‚é( PlaySoundOnly TRUE:Ä¶’†‚ÌƒTƒEƒ“ƒh‚É‚Ì‚İİ’è‚·‚é  FALSE:Ä¶‚µ‚Ä‚¢‚È‚¢ƒTƒEƒ“ƒh‚É‚àİ’è‚·‚é )
extern	int			Set3DPresetReverbParamSoundMemAll(   int PresetNo /* DX_REVERB_PRESET_DEFAULT “™ */ , int PlaySoundOnly = FALSE  ) ;			// ‘S‚Ä‚Ì‚R‚cƒTƒEƒ“ƒh‚ÌƒTƒEƒ“ƒhƒnƒ“ƒhƒ‹‚ÉƒŠƒo[ƒuƒpƒ‰ƒ[ƒ^‚ğƒvƒŠƒZƒbƒg‚ğg—p‚µ‚Äİ’è‚·‚é( PlaySoundOnly TRUE:Ä¶’†‚ÌƒTƒEƒ“ƒh‚É‚Ì‚İİ’è‚·‚é  FALSE:Ä¶‚µ‚Ä‚¢‚È‚¢ƒTƒEƒ“ƒh‚É‚àİ’è‚·‚é )
extern	int			Get3DReverbParamSoundMem(            SOUND3D_REVERB_PARAM *ParamBuffer,              int SoundHandle ) ;						// ƒTƒEƒ“ƒhƒnƒ“ƒhƒ‹‚Éİ’è‚³‚ê‚Ä‚¢‚é‚R‚cƒTƒEƒ“ƒh—p‚ÌƒŠƒo[ƒuƒpƒ‰ƒ[ƒ^‚ğæ“¾‚·‚é
extern	int			Get3DPresetReverbParamSoundMem(      SOUND3D_REVERB_PARAM *ParamBuffer, int PresetNo /* DX_REVERB_PRESET_DEFAULT “™ */ ) ;		// ƒvƒŠƒZƒbƒg‚Ì‚R‚cƒTƒEƒ“ƒh—p‚ÌƒŠƒo[ƒuƒpƒ‰ƒ[ƒ^‚ğæ“¾‚·‚é

extern	int			Set3DPositionSoundMem(               VECTOR Position,                                int SoundHandle ) ;						// ƒTƒEƒ“ƒhƒnƒ“ƒhƒ‹‚Ì‚R‚cƒTƒEƒ“ƒh—p‚ÌÄ¶ˆÊ’u‚ğİ’è‚·‚é
extern	int			Set3DRadiusSoundMem(                 float Radius,                                   int SoundHandle ) ;						// ƒTƒEƒ“ƒhƒnƒ“ƒhƒ‹‚Ì‚R‚cƒTƒEƒ“ƒh—p‚Ì‰¹‚ª•·‚±‚¦‚é‹——£‚ğİ’è‚·‚é
extern	int			Set3DVelocitySoundMem(               VECTOR Velocity,                                int SoundHandle ) ;						// ƒTƒEƒ“ƒhƒnƒ“ƒhƒ‹‚Ì‚R‚cƒTƒEƒ“ƒh—p‚ÌˆÚ“®‘¬“x‚ğİ’è‚·‚é

extern	int			SetNextPlay3DPositionSoundMem(       VECTOR Position,                                int SoundHandle ) ;						// ƒTƒEƒ“ƒhƒnƒ“ƒhƒ‹‚ÌŸ‚ÌÄ¶‚Ì‚İ‚Ég—p‚·‚é‚R‚cƒTƒEƒ“ƒh—p‚ÌÄ¶ˆÊ’u‚ğİ’è‚·‚é
extern	int			SetNextPlay3DRadiusSoundMem(         float Radius,                                   int SoundHandle ) ;						// ƒTƒEƒ“ƒhƒnƒ“ƒhƒ‹‚ÌŸ‚ÌÄ¶‚Ì‚İ‚Ég—p‚·‚é‚R‚cƒTƒEƒ“ƒh—p‚Ì‰¹‚ª•·‚±‚¦‚é‹——£‚ğİ’è‚·‚é
extern	int			SetNextPlay3DVelocitySoundMem(       VECTOR Velocity,                                int SoundHandle ) ;						// ƒTƒEƒ“ƒhƒnƒ“ƒhƒ‹‚ÌŸ‚ÌÄ¶‚Ì‚İ‚Ég—p‚·‚é‚R‚cƒTƒEƒ“ƒh—p‚ÌˆÚ“®‘¬“x‚ğİ’è‚·‚é

// İ’èŠÖŒWŠÖ”
extern	int			SetCreateSoundDataType(              int SoundDataType ) ;																		// ì¬‚·‚éƒTƒEƒ“ƒhƒnƒ“ƒhƒ‹‚ÌÄ¶ƒ^ƒCƒv‚ğİ’è‚·‚é( DX_SOUNDDATATYPE_MEMNOPRESS “™ )
extern	int			GetCreateSoundDataType(              void ) ;																					// ì¬‚·‚éƒTƒEƒ“ƒhƒnƒ“ƒhƒ‹‚ÌÄ¶ƒ^ƒCƒv‚ğæ“¾‚·‚é( DX_SOUNDDATATYPE_MEMNOPRESS “™ )
extern	int			SetCreateSoundPitchRate(             float Cents ) ;																			// ì¬‚·‚éƒTƒEƒ“ƒhƒnƒ“ƒhƒ‹‚Ìƒsƒbƒ`( ‰¹‚Ì’·‚³‚ğ•Ï‚¦‚¸‚É‰¹’ö‚ğ•ÏX‚·‚é )ƒŒ[ƒg‚ğİ’è‚·‚é( ’PˆÊ‚ÍƒZƒ“ƒg( 100.0f‚Å”¼‰¹A1200.0f‚Å‚PƒIƒNƒ^[ƒ” )Aƒvƒ‰ƒX‚Ì’l‚Å‰¹’ö‚ª‚‚­Aƒ}ƒCƒiƒX‚Ì’l‚Å‰¹’ö‚ª’á‚­‚È‚è‚Ü‚· )
extern	float		GetCreateSoundPitchRate(             void ) ;																					// ì¬‚·‚éƒTƒEƒ“ƒhƒnƒ“ƒhƒ‹‚Ìƒsƒbƒ`( ‰¹‚Ì’·‚³‚ğ•Ï‚¦‚¸‚É‰¹’ö‚ğ•ÏX‚·‚é )ƒŒ[ƒg‚ğæ“¾‚·‚é( ’PˆÊ‚ÍƒZƒ“ƒg( 100.0f‚Å”¼‰¹A1200.0f‚Å‚PƒIƒNƒ^[ƒ” )Aƒvƒ‰ƒX‚Ì’l‚Å‰¹’ö‚ª‚‚­Aƒ}ƒCƒiƒX‚Ì’l‚Å‰¹’ö‚ª’á‚­‚È‚è‚Ü‚· )
extern	int			SetCreateSoundTimeStretchRate(       float Rate ) ;																				// ì¬‚·‚éƒTƒEƒ“ƒhƒnƒ“ƒhƒ‹‚Ìƒ^ƒCƒ€ƒXƒgƒŒƒbƒ`( ‰¹’ö‚ğ•Ï‚¦‚¸‚É‰¹‚Ì’·‚³‚ğ•ÏX‚·‚é )ƒŒ[ƒg‚ğİ’è‚·‚é( ’PˆÊ‚Í”{—¦A2.0f ‚Å‰¹‚Ì’·‚³‚ª‚Q”{‚ÉA0.5f ‚Å‰¹‚Ì’·‚³‚ª”¼•ª‚É‚È‚è‚Ü‚· )
extern	float		GetCreateSoundTimeStretchRate(       void ) ;																					// ì¬‚·‚éƒTƒEƒ“ƒhƒnƒ“ƒhƒ‹‚Ìƒ^ƒCƒ€ƒXƒgƒŒƒbƒ`( ‰¹’ö‚ğ•Ï‚¦‚¸‚É‰¹‚Ì’·‚³‚ğ•ÏX‚·‚é )ƒŒ[ƒg‚ğæ“¾‚·‚é( ’PˆÊ‚Í”{—¦A2.0f ‚Å‰¹‚Ì’·‚³‚ª‚Q”{‚ÉA0.5f ‚Å‰¹‚Ì’·‚³‚ª”¼•ª‚É‚È‚è‚Ü‚· )
extern	int			SetCreateSoundLoopAreaTimePos(       int  LoopStartTime,           int  LoopEndTime ) ;											// ì¬‚·‚éƒTƒEƒ“ƒhƒnƒ“ƒhƒ‹‚Ìƒ‹[ƒv”ÍˆÍ‚ğİ’è‚·‚é( ƒ~ƒŠ•b’PˆÊ )
extern	int			GetCreateSoundLoopAreaTimePos(       int *LoopStartTime,           int *LoopEndTime ) ;											// ì¬‚·‚éƒTƒEƒ“ƒhƒnƒ“ƒhƒ‹‚Ìƒ‹[ƒv”ÍˆÍ‚ğæ“¾‚·‚é( ƒ~ƒŠ•b’PˆÊ )
extern	int			SetCreateSoundLoopAreaSamplePos(     int  LoopStartSamplePosition, int  LoopEndSamplePosition ) ;								// ì¬‚·‚éƒTƒEƒ“ƒhƒnƒ“ƒhƒ‹‚Ìƒ‹[ƒv”ÍˆÍ‚ğİ’è‚·‚é( ƒTƒ“ƒvƒ‹’PˆÊ )
extern	int			GetCreateSoundLoopAreaSamplePos(     int *LoopStartSamplePosition, int *LoopEndSamplePosition ) ;								// ì¬‚·‚éƒTƒEƒ“ƒhƒnƒ“ƒhƒ‹‚Ìƒ‹[ƒv”ÍˆÍ‚ğæ“¾‚·‚é( ƒTƒ“ƒvƒ‹’PˆÊ )
extern	int			SetCreateSoundIgnoreLoopAreaInfo(    int IgnoreFlag ) ;																			// LoadSoundMem ‚È‚Ç‚Å“Ç‚İ‚ŞƒTƒEƒ“ƒhƒf[ƒ^‚Éƒ‹[ƒv”ÍˆÍî•ñ‚ª‚ ‚Á‚Ä‚à–³‹‚·‚é‚©‚Ç‚¤‚©‚ğİ’è‚·‚é( TRUE:–³‹‚·‚é  FALSE:–³‹‚µ‚È‚¢( ƒfƒtƒHƒ‹ƒg ) )
extern	int			GetCreateSoundIgnoreLoopAreaInfo(    void ) ;																					// LoadSoundMem ‚È‚Ç‚Å“Ç‚İ‚ŞƒTƒEƒ“ƒhƒf[ƒ^‚Éƒ‹[ƒv”ÍˆÍî•ñ‚ª‚ ‚Á‚Ä‚à–³‹‚·‚é‚©‚Ç‚¤‚©‚ğæ“¾‚·‚é( TRUE:–³‹‚·‚é  FALSE:–³‹‚µ‚È‚¢( ƒfƒtƒHƒ‹ƒg ) )
extern	int			SetDisableReadSoundFunctionMask(     int Mask ) ;																				// g—p‚µ‚È‚¢ƒTƒEƒ“ƒhƒf[ƒ^“Ç‚İ‚İˆ—‚Ìƒ}ƒXƒN‚ğİ’è‚·‚é( DX_READSOUNDFUNCTION_PCM “™ )
extern	int			GetDisableReadSoundFunctionMask(     void ) ;																					// g—p‚µ‚È‚¢ƒTƒEƒ“ƒhƒf[ƒ^“Ç‚İ‚İˆ—‚Ìƒ}ƒXƒN‚ğæ“¾‚·‚é( DX_READSOUNDFUNCTION_PCM “™ )
extern	int			SetEnableSoundCaptureFlag(           int Flag ) ;																				// ƒTƒEƒ“ƒhƒLƒƒƒvƒ`ƒƒ‚ğ‘O’ñ‚Æ‚µ‚½“®ì‚ğ‚·‚é‚©‚Ç‚¤‚©‚ğİ’è‚·‚é
extern	int			SetUseOldVolumeCalcFlag(             int Flag ) ;																				// ChangeVolumeSoundMem, ChangeNextPlayVolumeSoundMem, ChangeMovieVolumeToGraph ‚Ì‰¹—ÊŒvZ®‚ğ Ver3.10cˆÈ‘O‚Ì‚à‚Ì‚ğg—p‚·‚é‚©‚Ç‚¤‚©‚ğİ’è‚·‚é( TRUE:Ver3.10cˆÈ‘O‚ÌŒvZ®‚ğg—p  FALSE:3.10dˆÈ~‚ÌŒvZ®‚ğg—p( ƒfƒtƒHƒ‹ƒg ) )

extern	int			SetCreate3DSoundFlag(                     int Flag ) ;																			// Ÿ‚Éì¬‚·‚éƒTƒEƒ“ƒhƒnƒ“ƒhƒ‹‚ğ‚R‚cƒTƒEƒ“ƒh—p‚É‚·‚é‚©‚Ç‚¤‚©‚ğİ’è‚·‚é( TRUE:‚R‚cƒTƒEƒ“ƒh—p‚É‚·‚é  FALSE:‚R‚cƒTƒEƒ“ƒh—p‚É‚µ‚È‚¢( ƒfƒtƒHƒ‹ƒg ) )
extern	int			Set3DSoundOneMetre(                       float Distance ) ;																	// ‚R‚c‹óŠÔ‚Ì‚Pƒ[ƒgƒ‹‚É‘Š“–‚·‚é‹——£‚ğİ’è‚·‚éADxLib_Init ‚ğŒÄ‚Ño‚·‘O‚Å‚Ì‚İŒÄ‚Ño‚µ‰Â”\( ƒfƒtƒHƒ‹ƒg:1.0f )
extern	int			Set3DSoundListenerPosAndFrontPos_UpVecY(  VECTOR Position, VECTOR FrontPosition ) ;												// ‚R‚cƒTƒEƒ“ƒh‚ÌƒŠƒXƒi[‚ÌˆÊ’u‚ÆƒŠƒXƒi[‚Ì‘O•ûˆÊ’u‚ğİ’è‚·‚é( ƒŠƒXƒi[‚Ìã•ûŒü‚Í‚x²ŒÅ’è )
extern	int			Set3DSoundListenerPosAndFrontPosAndUpVec( VECTOR Position, VECTOR FrontPosition, VECTOR UpVector ) ;							// ‚R‚cƒTƒEƒ“ƒh‚ÌƒŠƒXƒi[‚ÌˆÊ’u‚ÆƒŠƒXƒi[‚Ì‘O•ûˆÊ’u‚ÆƒŠƒXƒi[‚Ìã•ûŒü‚ğİ’è‚·‚é
extern	int			Set3DSoundListenerVelocity(               VECTOR Velocity ) ;																	// ‚R‚cƒTƒEƒ“ƒh‚ÌƒŠƒXƒi[‚ÌˆÚ“®‘¬“x‚ğİ’è‚·‚é
extern	int			Set3DSoundListenerConeAngle(              float InnerAngle, float OuterAngle ) ;												// ‚R‚cƒTƒEƒ“ƒh‚ÌƒŠƒXƒi[‚Ì‰Â’®Šp“x”ÍˆÍ‚ğİ’è‚·‚é
extern	int			Set3DSoundListenerConeVolume(             float InnerAngleVolume, float OuterAngleVolume ) ;									// ‚R‚cƒTƒEƒ“ƒh‚ÌƒŠƒXƒi[‚Ì‰Â’®Šp“x”ÍˆÍ‚Ì‰¹—Ê”{—¦‚ğİ’è‚·‚é

#ifndef DX_NON_BEEP
// BEEP‰¹Ä¶—p–½—ß
extern	int			SetBeepFrequency(					int Freq ) ;																				// ƒr[ƒv‰¹ü”g”İ’èŠÖ”
extern	int			PlayBeep(							void ) ;																					// ƒr[ƒv‰¹‚ğÄ¶‚·‚é
extern	int			StopBeep(							void ) ;																					// ƒr[ƒv‰¹‚ğ~‚ß‚é
#endif // DX_NON_BEEP

// ƒ‰ƒbƒp[ŠÖ”
extern	int			PlaySoundFile(						const TCHAR *FileName, int PlayType ) ;														// ƒTƒEƒ“ƒhƒtƒ@ƒCƒ‹‚ğÄ¶‚·‚é
extern	int			PlaySound(							const TCHAR *FileName, int PlayType ) ;														// PlaySoundFile ‚Ì‹Œ–¼Ì
extern	int			CheckSoundFile(						void ) ;																					// ƒTƒEƒ“ƒhƒtƒ@ƒCƒ‹‚ÌÄ¶’†‚©‚Ç‚¤‚©‚ğæ“¾‚·‚é
extern	int			CheckSound(							void ) ;																					// CheckSoundFile ‚Ì‹Œ–¼Ì
extern	int			StopSoundFile(						void ) ;																					// ƒTƒEƒ“ƒhƒtƒ@ƒCƒ‹‚ÌÄ¶‚ğ’â~‚·‚é
extern	int			StopSound(							void ) ;																					// StopSoundFile ‚Ì‹Œ–¼Ì
extern	int			SetVolumeSoundFile(					int VolumePal ) ;																			// ƒTƒEƒ“ƒhƒtƒ@ƒCƒ‹‚Ì‰¹—Ê‚ğİ’è‚·‚é
extern	int			SetVolumeSound(						int VolumePal ) ;																			// SetVolumeSound ‚Ì‹Œ–¼Ì

// ƒ\ƒtƒgƒEƒGƒA§ŒäƒTƒEƒ“ƒhŒnŠÖ”
extern	int			InitSoftSound(						void ) ;																					// ƒ\ƒtƒgƒEƒGƒA‚Åˆµ‚¤”gŒ`ƒf[ƒ^ƒnƒ“ƒhƒ‹‚ğ‚·‚×‚Äíœ‚·‚é
extern	int			LoadSoftSound(						const TCHAR *FileName ) ;																	// ƒ\ƒtƒgƒEƒGƒA‚Åˆµ‚¤”gŒ`ƒf[ƒ^ƒnƒ“ƒhƒ‹‚ğƒTƒEƒ“ƒhƒtƒ@ƒCƒ‹‚©‚çì¬‚·‚é
extern	int			LoadSoftSoundFromMemImage(			const void *FileImage, int FileImageSize ) ;												// ƒ\ƒtƒgƒEƒGƒA‚Åˆµ‚¤”gŒ`ƒf[ƒ^ƒnƒ“ƒhƒ‹‚ğƒƒ‚ƒŠã‚É“WŠJ‚³‚ê‚½ƒTƒEƒ“ƒhƒtƒ@ƒCƒ‹ƒCƒ[ƒW‚©‚çì¬‚·‚é
extern	int			MakeSoftSound(						int UseFormat_SoftSoundHandle, int SampleNum ) ;											// ƒ\ƒtƒgƒEƒGƒA‚Åˆµ‚¤‹ó‚Ì”gŒ`ƒf[ƒ^ƒnƒ“ƒhƒ‹‚ğì¬‚·‚é( ƒtƒH[ƒ}ƒbƒg‚Íˆø”‚Ìƒ\ƒtƒgƒEƒGƒAƒTƒEƒ“ƒhƒnƒ“ƒhƒ‹‚Æ“¯‚¶‚à‚Ì‚É‚·‚é )
extern	int			MakeSoftSound2Ch16Bit44KHz(			int SampleNum ) ;																			// ƒ\ƒtƒgƒEƒGƒA‚Åˆµ‚¤‹ó‚Ì”gŒ`ƒf[ƒ^ƒnƒ“ƒhƒ‹‚ğì¬‚·‚é( ƒ`ƒƒƒ“ƒlƒ‹”:2 —Êq‰»ƒrƒbƒg”:16bit ƒTƒ“ƒvƒŠƒ“ƒOü”g”:44KHz )
extern	int			MakeSoftSound2Ch16Bit22KHz(			int SampleNum ) ;																			// ƒ\ƒtƒgƒEƒGƒA‚Åˆµ‚¤‹ó‚Ì”gŒ`ƒf[ƒ^ƒnƒ“ƒhƒ‹‚ğì¬‚·‚é( ƒ`ƒƒƒ“ƒlƒ‹”:2 —Êq‰»ƒrƒbƒg”:16bit ƒTƒ“ƒvƒŠƒ“ƒOü”g”:22KHz )
extern	int			MakeSoftSound2Ch8Bit44KHz(			int SampleNum ) ;																			// ƒ\ƒtƒgƒEƒGƒA‚Åˆµ‚¤‹ó‚Ì”gŒ`ƒf[ƒ^ƒnƒ“ƒhƒ‹‚ğì¬‚·‚é( ƒ`ƒƒƒ“ƒlƒ‹”:2 —Êq‰»ƒrƒbƒg”: 8bit ƒTƒ“ƒvƒŠƒ“ƒOü”g”:44KHz )
extern	int			MakeSoftSound2Ch8Bit22KHz(			int SampleNum ) ;																			// ƒ\ƒtƒgƒEƒGƒA‚Åˆµ‚¤‹ó‚Ì”gŒ`ƒf[ƒ^ƒnƒ“ƒhƒ‹‚ğì¬‚·‚é( ƒ`ƒƒƒ“ƒlƒ‹”:2 —Êq‰»ƒrƒbƒg”: 8bit ƒTƒ“ƒvƒŠƒ“ƒOü”g”:22KHz )
extern	int			MakeSoftSound1Ch16Bit44KHz(			int SampleNum ) ;																			// ƒ\ƒtƒgƒEƒGƒA‚Åˆµ‚¤‹ó‚Ì”gŒ`ƒf[ƒ^ƒnƒ“ƒhƒ‹‚ğì¬‚·‚é( ƒ`ƒƒƒ“ƒlƒ‹”:1 —Êq‰»ƒrƒbƒg”:16bit ƒTƒ“ƒvƒŠƒ“ƒOü”g”:44KHz )
extern	int			MakeSoftSound1Ch16Bit22KHz(			int SampleNum ) ;																			// ƒ\ƒtƒgƒEƒGƒA‚Åˆµ‚¤‹ó‚Ì”gŒ`ƒf[ƒ^ƒnƒ“ƒhƒ‹‚ğì¬‚·‚é( ƒ`ƒƒƒ“ƒlƒ‹”:1 —Êq‰»ƒrƒbƒg”:16bit ƒTƒ“ƒvƒŠƒ“ƒOü”g”:22KHz )
extern	int			MakeSoftSound1Ch8Bit44KHz(			int SampleNum ) ;																			// ƒ\ƒtƒgƒEƒGƒA‚Åˆµ‚¤‹ó‚Ì”gŒ`ƒf[ƒ^ƒnƒ“ƒhƒ‹‚ğì¬‚·‚é( ƒ`ƒƒƒ“ƒlƒ‹”:1 —Êq‰»ƒrƒbƒg”: 8bit ƒTƒ“ƒvƒŠƒ“ƒOü”g”:44KHz )
extern	int			MakeSoftSound1Ch8Bit22KHz(			int SampleNum ) ;																			// ƒ\ƒtƒgƒEƒGƒA‚Åˆµ‚¤‹ó‚Ì”gŒ`ƒf[ƒ^ƒnƒ“ƒhƒ‹‚ğì¬‚·‚é( ƒ`ƒƒƒ“ƒlƒ‹”:1 —Êq‰»ƒrƒbƒg”: 8bit ƒTƒ“ƒvƒŠƒ“ƒOü”g”:22KHz )
extern	int			MakeSoftSoundCustom(				int ChannelNum, int BitsPerSample, int SamplesPerSec, int SampleNum, int IsFloatType = 0 ) ;	// ƒ\ƒtƒgƒEƒGƒA‚Åˆµ‚¤‹ó‚Ì”gŒ`ƒf[ƒ^ƒnƒ“ƒhƒ‹‚ğì¬‚·‚é
extern	int			DeleteSoftSound(					int SoftSoundHandle ) ;																		// ƒ\ƒtƒgƒEƒGƒA‚Åˆµ‚¤”gŒ`ƒf[ƒ^ƒnƒ“ƒhƒ‹‚ğíœ‚·‚é
#ifndef DX_NON_SAVEFUNCTION
extern	int			SaveSoftSound(						int SoftSoundHandle, const TCHAR *FileName ) ;												// ƒ\ƒtƒgƒEƒGƒA‚Åˆµ‚¤”gŒ`ƒf[ƒ^ƒnƒ“ƒhƒ‹‚ğWAVEƒtƒ@ƒCƒ‹(PCM)Œ`®‚Å•Û‘¶‚·‚é
#endif // DX_NON_SAVEFUNCTION
extern	int			GetSoftSoundSampleNum(				int SoftSoundHandle ) ;																		// ƒ\ƒtƒgƒEƒGƒA‚Åˆµ‚¤”gŒ`ƒf[ƒ^ƒnƒ“ƒhƒ‹‚ÌƒTƒ“ƒvƒ‹”‚ğæ“¾‚·‚é
extern	int			GetSoftSoundFormat(					int SoftSoundHandle, int *Channels, int *BitsPerSample, int *SamplesPerSec, int *IsFloatType = NULL ) ;				// ƒ\ƒtƒgƒEƒGƒA‚Åˆµ‚¤”gŒ`ƒf[ƒ^ƒnƒ“ƒhƒ‹‚ÌƒtƒH[ƒ}ƒbƒg‚ğæ“¾‚·‚é
extern	int			ReadSoftSoundData(					int SoftSoundHandle, int SamplePosition, int *Channel1, int *Channel2 ) ;					// ƒ\ƒtƒgƒEƒGƒA‚Åˆµ‚¤”gŒ`ƒf[ƒ^ƒnƒ“ƒhƒ‹‚ÌƒTƒ“ƒvƒ‹‚ğ“Ç‚İæ‚é
extern	int			ReadSoftSoundDataF(					int SoftSoundHandle, int SamplePosition, float *Channel1, float *Channel2 ) ;				// ƒ\ƒtƒgƒEƒGƒA‚Åˆµ‚¤”gŒ`ƒf[ƒ^ƒnƒ“ƒhƒ‹‚ÌƒTƒ“ƒvƒ‹‚ğ“Ç‚İæ‚é( floatŒ^”Å )
extern	int			WriteSoftSoundData(					int SoftSoundHandle, int SamplePosition, int Channel1, int Channel2 ) ;						// ƒ\ƒtƒgƒEƒGƒA‚Åˆµ‚¤”gŒ`ƒf[ƒ^ƒnƒ“ƒhƒ‹‚ÌƒTƒ“ƒvƒ‹‚ğ‘‚«‚Ş
extern	int			WriteSoftSoundDataF(				int SoftSoundHandle, int SamplePosition, float Channel1, float Channel2 ) ;					// ƒ\ƒtƒgƒEƒGƒA‚Åˆµ‚¤”gŒ`ƒf[ƒ^ƒnƒ“ƒhƒ‹‚ÌƒTƒ“ƒvƒ‹‚ğ‘‚«‚Ş( floatŒ^”Å )
extern	int			WriteTimeStretchSoftSoundData(		int SrcSoftSoundHandle, int DestSoftSoundHandle ) ;											// ƒ\ƒtƒgƒEƒGƒA‚Åˆµ‚¤”gŒ`ƒf[ƒ^ƒnƒ“ƒhƒ‹‚Ì”gŒ`ƒf[ƒ^‚ğ‰¹’ö‚ğ•Ï‚¦‚¸‚Éƒf[ƒ^‚Ì’·‚³‚ğ•ÏX‚·‚é
extern	int			WritePitchShiftSoftSoundData(		int SrcSoftSoundHandle, int DestSoftSoundHandle ) ;											// ƒ\ƒtƒgƒEƒGƒA‚Åˆµ‚¤”gŒ`ƒf[ƒ^ƒnƒ“ƒhƒ‹‚Ì”gŒ`ƒf[ƒ^‚Ì’·‚³‚ğ•ÏX‚·‚é
extern	void*		GetSoftSoundDataImage(				int SoftSoundHandle ) ;																		// ƒ\ƒtƒgƒEƒGƒA‚Åˆµ‚¤”gŒ`ƒf[ƒ^ƒnƒ“ƒhƒ‹‚Ì”gŒ`ƒCƒ[ƒW‚ªŠi”[‚³‚ê‚Ä‚¢‚éƒƒ‚ƒŠƒAƒhƒŒƒX‚ğæ“¾‚·‚é
extern	int			GetFFTVibrationSoftSound(			int SoftSoundHandle, int Channel, int SamplePosition, int SampleNum, float *Buffer_Array, int BufferLength ) ;		// ƒ\ƒtƒgƒEƒGƒA‚Åˆµ‚¤”gŒ`ƒf[ƒ^ƒnƒ“ƒhƒ‹‚Ìw’è‚Ì”ÍˆÍ‚ğ‚‘¬ƒt[ƒŠƒG•ÏŠ·‚ğs‚¢AŠeü”g”ˆæ‚ÌU•‚ğæ“¾‚·‚é( SampleNum ‚Í 256, 512, 1024, 2048, 4096, 8192, 16384 ‚Ì‰½‚ê‚©‚Å‚ ‚é•K—v‚ª‚ ‚è‚Ü‚·AChannel ‚ğ -1 ‚É‚·‚é‚Æ“ñ‚Â‚Ìƒ`ƒƒƒ“ƒlƒ‹‚ğ‡¬‚µ‚½Œ‹‰Ê‚É‚È‚è‚Ü‚· )

extern	int			InitSoftSoundPlayer(				void ) ;																					// ƒ\ƒtƒgƒEƒGƒA‚Åˆµ‚¤”gŒ`ƒf[ƒ^‚ÌƒvƒŒƒCƒ„[ƒnƒ“ƒhƒ‹‚ğ‚·‚×‚Ä‰ğ•ú‚·‚é
extern	int			MakeSoftSoundPlayer(				int UseFormat_SoftSoundHandle ) ;															// ƒ\ƒtƒgƒEƒGƒA‚Åˆµ‚¤”gŒ`ƒf[ƒ^‚ÌƒvƒŒƒCƒ„[ƒnƒ“ƒhƒ‹‚ğì¬‚·‚é( ƒtƒH[ƒ}ƒbƒg‚Íˆø”‚Ìƒ\ƒtƒgƒEƒGƒAƒTƒEƒ“ƒhƒnƒ“ƒhƒ‹‚Æ“¯‚¶‚à‚Ì‚É‚·‚é )
extern	int			MakeSoftSoundPlayer2Ch16Bit44KHz(	void ) ;																					// ƒ\ƒtƒgƒEƒGƒA‚Åˆµ‚¤”gŒ`ƒf[ƒ^‚ÌƒvƒŒƒCƒ„[ƒnƒ“ƒhƒ‹‚ğì¬‚·‚é( ƒ`ƒƒƒ“ƒlƒ‹”:2 —Êq‰»ƒrƒbƒg”:16bit ƒTƒ“ƒvƒŠƒ“ƒOü”g”:44KHz )
extern	int			MakeSoftSoundPlayer2Ch16Bit22KHz(	void ) ;																					// ƒ\ƒtƒgƒEƒGƒA‚Åˆµ‚¤”gŒ`ƒf[ƒ^‚ÌƒvƒŒƒCƒ„[ƒnƒ“ƒhƒ‹‚ğì¬‚·‚é( ƒ`ƒƒƒ“ƒlƒ‹”:2 —Êq‰»ƒrƒbƒg”:16bit ƒTƒ“ƒvƒŠƒ“ƒOü”g”:22KHz )
extern	int			MakeSoftSoundPlayer2Ch8Bit44KHz(	void ) ;																					// ƒ\ƒtƒgƒEƒGƒA‚Åˆµ‚¤”gŒ`ƒf[ƒ^‚ÌƒvƒŒƒCƒ„[ƒnƒ“ƒhƒ‹‚ğì¬‚·‚é( ƒ`ƒƒƒ“ƒlƒ‹”:2 —Êq‰»ƒrƒbƒg”: 8bit ƒTƒ“ƒvƒŠƒ“ƒOü”g”:44KHz )
extern	int			MakeSoftSoundPlayer2Ch8Bit22KHz(	void ) ;																					// ƒ\ƒtƒgƒEƒGƒA‚Åˆµ‚¤”gŒ`ƒf[ƒ^‚ÌƒvƒŒƒCƒ„[ƒnƒ“ƒhƒ‹‚ğì¬‚·‚é( ƒ`ƒƒƒ“ƒlƒ‹”:2 —Êq‰»ƒrƒbƒg”: 8bit ƒTƒ“ƒvƒŠƒ“ƒOü”g”:22KHz )
extern	int			MakeSoftSoundPlayer1Ch16Bit44KHz(	void ) ;																					// ƒ\ƒtƒgƒEƒGƒA‚Åˆµ‚¤”gŒ`ƒf[ƒ^‚ÌƒvƒŒƒCƒ„[ƒnƒ“ƒhƒ‹‚ğì¬‚·‚é( ƒ`ƒƒƒ“ƒlƒ‹”:1 —Êq‰»ƒrƒbƒg”:16bit ƒTƒ“ƒvƒŠƒ“ƒOü”g”:44KHz )
extern	int			MakeSoftSoundPlayer1Ch16Bit22KHz(	void ) ;																					// ƒ\ƒtƒgƒEƒGƒA‚Åˆµ‚¤”gŒ`ƒf[ƒ^‚ÌƒvƒŒƒCƒ„[ƒnƒ“ƒhƒ‹‚ğì¬‚·‚é( ƒ`ƒƒƒ“ƒlƒ‹”:1 —Êq‰»ƒrƒbƒg”:16bit ƒTƒ“ƒvƒŠƒ“ƒOü”g”:22KHz )
extern	int			MakeSoftSoundPlayer1Ch8Bit44KHz(	void ) ;																					// ƒ\ƒtƒgƒEƒGƒA‚Åˆµ‚¤”gŒ`ƒf[ƒ^‚ÌƒvƒŒƒCƒ„[ƒnƒ“ƒhƒ‹‚ğì¬‚·‚é( ƒ`ƒƒƒ“ƒlƒ‹”:1 —Êq‰»ƒrƒbƒg”: 8bit ƒTƒ“ƒvƒŠƒ“ƒOü”g”:44KHz )
extern	int			MakeSoftSoundPlayer1Ch8Bit22KHz(	void ) ;																					// ƒ\ƒtƒgƒEƒGƒA‚Åˆµ‚¤”gŒ`ƒf[ƒ^‚ÌƒvƒŒƒCƒ„[ƒnƒ“ƒhƒ‹‚ğì¬‚·‚é( ƒ`ƒƒƒ“ƒlƒ‹”:1 —Êq‰»ƒrƒbƒg”: 8bit ƒTƒ“ƒvƒŠƒ“ƒOü”g”:22KHz )
extern	int			MakeSoftSoundPlayerCustom(			int ChannelNum, int BitsPerSample, int SamplesPerSec ) ;									// ƒ\ƒtƒgƒEƒGƒA‚Åˆµ‚¤”gŒ`ƒf[ƒ^‚ÌƒvƒŒƒCƒ„[ƒnƒ“ƒhƒ‹‚ğì¬‚·‚é
extern	int			DeleteSoftSoundPlayer(				int SSoundPlayerHandle ) ;																	// ƒ\ƒtƒgƒEƒGƒA‚Åˆµ‚¤”gŒ`ƒf[ƒ^‚ÌƒvƒŒƒCƒ„[ƒnƒ“ƒhƒ‹‚ğíœ‚·‚é
extern	int			AddDataSoftSoundPlayer(				int SSoundPlayerHandle, int SoftSoundHandle, int AddSamplePosition, int AddSampleNum ) ;	// ƒ\ƒtƒgƒEƒGƒA‚Åˆµ‚¤”gŒ`ƒf[ƒ^‚ÌƒvƒŒƒCƒ„[ƒnƒ“ƒhƒ‹‚É”gŒ`ƒf[ƒ^‚ğ’Ç‰Á‚·‚é( ƒtƒH[ƒ}ƒbƒg‚ª“¯‚¶‚Å‚Í‚È‚¢ê‡‚ÍƒGƒ‰[ )
extern	int			AddDirectDataSoftSoundPlayer(		int SSoundPlayerHandle, const void *SoundData, int AddSampleNum ) ;							// ƒ\ƒtƒgƒEƒGƒA‚Åˆµ‚¤”gŒ`ƒf[ƒ^‚ÌƒvƒŒƒCƒ„[ƒnƒ“ƒhƒ‹‚ÉƒvƒŒƒCƒ„[‚ª‘Î‰‚µ‚½ƒtƒH[ƒ}ƒbƒg‚Ì¶”gŒ`ƒf[ƒ^‚ğ’Ç‰Á‚·‚é
extern	int			AddOneDataSoftSoundPlayer(			int SSoundPlayerHandle, int Channel1, int Channel2 ) ;										// ƒ\ƒtƒgƒEƒGƒA‚Åˆµ‚¤”gŒ`ƒf[ƒ^‚ÌƒvƒŒƒCƒ„[ƒnƒ“ƒhƒ‹‚É”gŒ`ƒf[ƒ^‚ğˆê‚Â’Ç‰Á‚·‚é
extern	int			GetSoftSoundPlayerFormat(			int SSoundPlayerHandle, int *Channels, int *BitsPerSample, int *SamplesPerSec ) ;			// ƒ\ƒtƒgƒEƒGƒA‚Åˆµ‚¤”gŒ`ƒf[ƒ^‚ÌƒvƒŒƒCƒ„[ƒnƒ“ƒhƒ‹‚ªˆµ‚¤ƒf[ƒ^ƒtƒH[ƒ}ƒbƒg‚ğæ“¾‚·‚é
extern	int			StartSoftSoundPlayer(				int SSoundPlayerHandle ) ;																	// ƒ\ƒtƒgƒEƒGƒA‚Åˆµ‚¤”gŒ`ƒf[ƒ^‚ÌƒvƒŒƒCƒ„[ƒnƒ“ƒhƒ‹‚ÌÄ¶ˆ—‚ğŠJn‚·‚é
extern	int			CheckStartSoftSoundPlayer(			int SSoundPlayerHandle ) ;																	// ƒ\ƒtƒgƒEƒGƒA‚Åˆµ‚¤”gŒ`ƒf[ƒ^‚ÌƒvƒŒƒCƒ„[ƒnƒ“ƒhƒ‹‚ÌÄ¶ˆ—‚ªŠJn‚³‚ê‚Ä‚¢‚é‚©æ“¾‚·‚é( TRUE:ŠJn‚µ‚Ä‚¢‚é  FALSE:’â~‚µ‚Ä‚¢‚é )
extern	int			StopSoftSoundPlayer(				int SSoundPlayerHandle ) ;																	// ƒ\ƒtƒgƒEƒGƒA‚Åˆµ‚¤”gŒ`ƒf[ƒ^‚ÌƒvƒŒƒCƒ„[ƒnƒ“ƒhƒ‹‚ÌÄ¶ˆ—‚ğ’â~‚·‚é
extern	int			ResetSoftSoundPlayer(				int SSoundPlayerHandle ) ;																	// ƒ\ƒtƒgƒEƒGƒA‚Åˆµ‚¤”gŒ`ƒf[ƒ^‚ÌƒvƒŒƒCƒ„[ƒnƒ“ƒhƒ‹‚Ìó‘Ô‚ğ‰Šúó‘Ô‚É–ß‚·( ’Ç‰Á‚³‚ê‚½”gŒ`ƒf[ƒ^‚Ííœ‚³‚êAÄ¶ó‘Ô‚¾‚Á‚½ê‡‚Í’â~‚·‚é )
extern	int			GetStockDataLengthSoftSoundPlayer(	int SSoundPlayerHandle ) ;																	// ƒ\ƒtƒgƒEƒGƒA‚Åˆµ‚¤”gŒ`ƒf[ƒ^‚ÌƒvƒŒƒCƒ„[ƒnƒ“ƒhƒ‹‚É’Ç‰Á‚µ‚½”gŒ`ƒf[ƒ^‚Å‚Ü‚¾Ä¶—pƒTƒEƒ“ƒhƒoƒbƒtƒ@‚É“]‘—‚³‚ê‚Ä‚¢‚È‚¢”gŒ`ƒf[ƒ^‚ÌƒTƒ“ƒvƒ‹”‚ğæ“¾‚·‚é
extern	int			CheckSoftSoundPlayerNoneData(		int SSoundPlayerHandle ) ;																	// ƒ\ƒtƒgƒEƒGƒA‚Åˆµ‚¤”gŒ`ƒf[ƒ^‚ÌƒvƒŒƒCƒ„[ƒnƒ“ƒhƒ‹‚ÉÄ¶—pƒTƒEƒ“ƒhƒoƒbƒtƒ@‚É“]‘—‚µ‚Ä‚¢‚È‚¢”gŒ`ƒf[ƒ^‚ª–³‚­AÄ¶—pƒTƒEƒ“ƒhƒoƒbƒtƒ@‚É‚à–³‰¹ƒf[ƒ^ˆÈŠO–³‚¢‚©‚Ç‚¤‚©‚ğæ“¾‚·‚é( TRUE:–³‰¹ƒf[ƒ^ˆÈŠO–³‚¢  FALSE:—LŒøƒf[ƒ^‚ª‚ ‚é )




// ‚l‚h‚c‚h§ŒäŠÖ”
extern	int			DeleteMusicMem(						int MusicHandle ) ;																			// ‚l‚h‚c‚hƒnƒ“ƒhƒ‹‚ğíœ‚·‚é
extern	int			LoadMusicMem(						const TCHAR *FileName ) ;																	// ‚l‚h‚c‚hƒtƒ@ƒCƒ‹‚ğ“Ç‚İ‚İ‚l‚h‚c‚hƒnƒ“ƒhƒ‹‚ğì¬‚·‚é
extern	int			LoadMusicMemByMemImage(				const void *FileImage, int FileImageSize ) ;												// ƒƒ‚ƒŠã‚É“WŠJ‚³‚ê‚½‚l‚h‚c‚hƒtƒ@ƒCƒ‹ƒCƒ[ƒW‚©‚ç‚l‚h‚c‚hƒnƒ“ƒhƒ‹‚ğì¬‚·‚é
extern	int			PlayMusicMem(						int MusicHandle, int PlayType ) ;															// ‚l‚h‚c‚hƒnƒ“ƒhƒ‹‚Ì‰‰‘t‚ğŠJn‚·‚é
extern	int			StopMusicMem(						int MusicHandle ) ;																			// ‚l‚h‚c‚hƒnƒ“ƒhƒ‹‚Ì‰‰‘t‚ğ’â~‚·‚é
extern	int			CheckMusicMem(						int MusicHandle ) ;																			// ‚l‚h‚c‚hƒnƒ“ƒhƒ‹‚ª‰‰‘t’†‚©‚Ç‚¤‚©‚ğæ“¾‚·‚é( TRUE:‰‰‘t’†  FALSE:’â~’† )
extern	int			SetVolumeMusicMem(					int Volume, int MusicHandle ) ;																// ‚l‚h‚c‚hƒnƒ“ƒhƒ‹‚ÌÄ¶‰¹—Ê‚ğƒZƒbƒg‚·‚é
extern	int			GetMusicMemPosition(				int MusicHandle ) ;																			// ‚l‚h‚c‚hƒnƒ“ƒhƒ‹‚ÌŒ»İ‚ÌÄ¶ˆÊ’u‚ğæ“¾‚·‚é
extern	int			InitMusicMem(						void ) ;																					// ‚l‚h‚c‚hƒnƒ“ƒhƒ‹‚ğ‚·‚×‚Äíœ‚·‚é
extern	int			ProcessMusicMem(					void ) ;																					// ‚l‚h‚c‚hƒnƒ“ƒhƒ‹‚ÌüŠú“Iˆ—( “à•”‚ÅŒÄ‚Î‚ê‚Ü‚· )

extern	int			PlayMusic(							const TCHAR *FileName, int PlayType ) ;														// ‚l‚h‚c‚hƒtƒ@ƒCƒ‹‚ğ‰‰‘t‚·‚é
extern	int			PlayMusicByMemImage(				const void *FileImage, int FileImageSize, int PlayType ) ;									// ƒƒ‚ƒŠã‚É“WŠJ‚³‚ê‚Ä‚¢‚é‚l‚h‚c‚hƒtƒ@ƒCƒ‹‚ğ‰‰‘t‚·‚é
extern	int			PlayMusicByResource(				const TCHAR *ResourceName, const TCHAR *ResourceType, int PlayType ) ;						// ƒŠƒ\[ƒX‚©‚ç‚l‚h‚c‚hƒtƒ@ƒCƒ‹‚ğ“Ç‚İ‚ñ‚Å‰‰‘t‚·‚é
extern	int			SetVolumeMusic(						int Volume ) ;																				// ‚l‚h‚c‚h‚ÌÄ¶‰¹—Ê‚ğƒZƒbƒg‚·‚é
extern	int			StopMusic(							void ) ;																					// ‚l‚h‚c‚hƒtƒ@ƒCƒ‹‚Ì‰‰‘t’â~
extern	int			CheckMusic(							void ) ;																					// ‚l‚h‚c‚hƒtƒ@ƒCƒ‹‚ª‰‰‘t’†‚©”Û‚©î•ñ‚ğæ“¾‚·‚é
extern	int			GetMusicPosition(					void ) ;																					// ‚l‚h‚c‚h‚ÌŒ»İ‚ÌÄ¶ˆÊ’u‚ğæ“¾‚·‚é

extern	int			SelectMidiMode(						int Mode ) ;																				// ‚l‚h‚c‚h‚ÌÄ¶Œ`®‚ğİ’è‚·‚é

#endif // DX_NON_SOUND










// DxArchive_.cpp ŠÖ” ƒvƒƒgƒ^ƒCƒvéŒ¾
extern	int			SetUseDXArchiveFlag(		int Flag ) ;													// ‚c‚wƒA[ƒJƒCƒuƒtƒ@ƒCƒ‹‚Ì“Ç‚İ‚İ‹@”\‚ğg‚¤‚©‚Ç‚¤‚©‚ğİ’è‚·‚é( FALSE:g—p‚µ‚È‚¢  TRUE:g—p‚·‚é )
extern	int			SetDXArchivePriority(		int Priority = 0 ) ;											// “¯–¼‚Ì‚c‚wƒA[ƒJƒCƒuƒtƒ@ƒCƒ‹‚ÆƒtƒHƒ‹ƒ_‚ª‘¶İ‚µ‚½ê‡A‚Ç‚¿‚ç‚ğ—Dæ‚³‚¹‚é‚©‚ğİ’è‚·‚é( 1:ƒtƒHƒ‹ƒ_‚ğ—Dæ@ 0:‚c‚wƒA[ƒJƒCƒuƒtƒ@ƒCƒ‹‚ğ—Dæ( ƒfƒtƒHƒ‹ƒg ) )
extern	int			SetDXArchiveExtension(		const TCHAR *Extension = NULL ) ;								// ŒŸõ‚·‚é‚c‚wƒA[ƒJƒCƒuƒtƒ@ƒCƒ‹‚ÌŠg’£q‚ğİ’è‚·‚é( Extension:Šg’£q–¼•¶š—ñ )
extern	int			SetDXArchiveKeyString(		const TCHAR *KeyString = NULL ) ;								// ‚c‚wƒA[ƒJƒCƒuƒtƒ@ƒCƒ‹‚ÌŒ®•¶š—ñ‚ğİ’è‚·‚é( KeyString:Œ®•¶š—ñ )

extern	int			DXArchivePreLoad(			const TCHAR *FilePath , int ASync = FALSE ) ;					// w’è‚Ì‚c‚w‚`ƒtƒ@ƒCƒ‹‚ğŠÛ‚²‚Æƒƒ‚ƒŠ‚É“Ç‚İ‚Ş( –ß‚è’l  -1:ƒGƒ‰[  0:¬Œ÷ )
extern	int			DXArchiveCheckIdle(			const TCHAR *FilePath ) ;										// w’è‚Ì‚c‚w‚`ƒtƒ@ƒCƒ‹‚Ì–‘O“Ç‚İ‚İ‚ªŠ®—¹‚µ‚½‚©‚Ç‚¤‚©‚ğæ“¾‚·‚é( –ß‚è’l  TRUE:Š®—¹‚µ‚½ FALSE:‚Ü‚¾ )
extern	int			DXArchiveRelease(			const TCHAR *FilePath ) ;										// w’è‚Ì‚c‚w‚`ƒtƒ@ƒCƒ‹‚ğƒƒ‚ƒŠ‚©‚ç‰ğ•ú‚·‚é
extern	int			DXArchiveCheckFile(			const TCHAR *FilePath, const TCHAR *TargetFilePath ) ;			// ‚c‚w‚`ƒtƒ@ƒCƒ‹‚Ì’†‚Éw’è‚Ìƒtƒ@ƒCƒ‹‚ª‘¶İ‚·‚é‚©‚Ç‚¤‚©‚ğ’²‚×‚éATargetFilePath ‚Í‚c‚w‚`ƒtƒ@ƒCƒ‹‚ğƒJƒŒƒ“ƒgƒtƒHƒ‹ƒ_‚Æ‚µ‚½ê‡‚ÌƒpƒX( –ß‚è’l:  -1=ƒGƒ‰[  0:–³‚¢  1:‚ ‚é )
extern	int			DXArchiveSetMemImage(		void *ArchiveImage, int ArchiveImageSize, const TCHAR *EmulateFilePath, int ArchiveImageCopyFlag = FALSE, int ArchiveImageReadOnly = TRUE ) ;	// ƒƒ‚ƒŠã‚É“WŠJ‚³‚ê‚½‚c‚w‚`ƒtƒ@ƒCƒ‹‚ğw’è‚Ìƒtƒ@ƒCƒ‹ƒpƒX‚É‚ ‚é‚±‚Æ‚É‚·‚é( EmulateFilePath ‚ÍŒ©—§‚Ä‚é dxa ƒtƒ@ƒCƒ‹‚ÌƒpƒXA—á‚¦‚Î‚c‚w‚`ƒtƒ@ƒCƒ‹ƒCƒ[ƒW‚ğ Image.dxa ‚Æ‚¢‚¤ƒtƒ@ƒCƒ‹–¼‚Å c:\Temp ‚É‚ ‚é‚±‚Æ‚É‚µ‚½‚¢ê‡‚Í EmulateFilePath ‚É "c:\\Temp\\Image.dxa" ‚ğ“n‚·ASetDXArchiveExtension ‚ÅŠg’£q‚ğ•ÏX‚µ‚Ä‚¢‚éê‡‚Í EmulateFilePath ‚É“n‚·ƒtƒ@ƒCƒ‹ƒpƒX‚ÌŠg’£q‚à‚»‚ê‚É‡‚í‚¹‚é•K—v‚ ‚è )
extern	int			DXArchiveReleaseMemImage(	void *ArchiveImage ) ;											// DXArchiveSetMemImage ‚Ìİ’è‚ğ‰ğœ‚·‚é





















// DxModel.cpp ŠÖ” ƒvƒƒgƒ^ƒCƒvéŒ¾

#ifndef DX_NON_MODEL

// ƒ‚ƒfƒ‹‚Ì“Ç‚İ‚İE•¡»ŠÖŒW
extern	int			MV1LoadModel(						const TCHAR *FileName ) ;											// ƒ‚ƒfƒ‹‚Ì“Ç‚İ‚İ( -1:ƒGƒ‰[  0ˆÈã:ƒ‚ƒfƒ‹ƒnƒ“ƒhƒ‹ )
extern	int			MV1LoadModelFromMem(				const void *FileImage, int FileSize, int (* FileReadFunc )( const TCHAR *FilePath, void **FileImageAddr, int *FileSize, void *FileReadFuncData ), int (* FileReleaseFunc )( void *MemoryAddr, void *FileReadFuncData ), void *FileReadFuncData = NULL ) ;	// ƒƒ‚ƒŠã‚Ìƒ‚ƒfƒ‹ƒtƒ@ƒCƒ‹ƒCƒ[ƒW‚Æ“Æ©‚Ì“Ç‚İ‚İƒ‹[ƒ`ƒ“‚ğg—p‚µ‚Äƒ‚ƒfƒ‹‚ğ“Ç‚İ‚Ş
extern	int			MV1DuplicateModel(					int SrcMHandle ) ;													// w’è‚Ìƒ‚ƒfƒ‹‚Æ“¯‚¶ƒ‚ƒfƒ‹Šî–{ƒf[ƒ^‚ğg—p‚µ‚Äƒ‚ƒfƒ‹‚ğì¬‚·‚é( -1:ƒGƒ‰[  0ˆÈã:ƒ‚ƒfƒ‹ƒnƒ“ƒhƒ‹ )
extern	int			MV1CreateCloneModel(				int SrcMHandle ) ;													// w’è‚Ìƒ‚ƒfƒ‹‚ğƒ‚ƒfƒ‹Šî–{ƒf[ƒ^‚àŠÜ‚ß•¡»‚·‚é( MV1DuplicateModel ‚Íƒ‚ƒfƒ‹Šî–{ƒf[ƒ^‚Í‹¤—L‚µ‚Ü‚·‚ªA‚±‚¿‚ç‚Í•¡»Œ³‚Ìƒ‚ƒfƒ‹‚Æ‚ÍˆêØ‹¤—Lƒf[ƒ^‚Ì–³‚¢ƒ‚ƒfƒ‹ƒnƒ“ƒhƒ‹‚ğì¬‚µ‚Ü‚· )( -1:ƒGƒ‰[  0ˆÈã:ƒ‚ƒfƒ‹ƒnƒ“ƒhƒ‹ )

extern	int			MV1DeleteModel(						int MHandle ) ;														// ƒ‚ƒfƒ‹‚ğíœ‚·‚é
extern	int			MV1InitModel(						void ) ;															// ‚·‚×‚Ä‚Ìƒ‚ƒfƒ‹‚ğíœ‚·‚é

extern	int			MV1SetLoadModelReMakeNormal(		int Flag ) ;														// ƒ‚ƒfƒ‹‚ğ“Ç‚İ‚ŞÛ‚É–@ü‚ÌÄŒvZ‚ğs‚¤‚©‚Ç‚¤‚©‚ğİ’è‚·‚é( TRUE:s‚¤  FALSE:s‚í‚È‚¢( ƒfƒtƒHƒ‹ƒg ) )
extern	int			MV1SetLoadModelReMakeNormalSmoothingAngle( float SmoothingAngle = 1.562069f ) ;							// ƒ‚ƒfƒ‹‚ğ“Ç‚İ‚ŞÛ‚És‚¤–@ò‚ÌÄŒvZ‚Åg—p‚·‚éƒXƒ€[ƒWƒ“ƒOŠp“x‚ğİ’è‚·‚é( ’PˆÊ‚Íƒ‰ƒWƒAƒ“ )
extern	int			MV1SetLoadModelIgnoreScaling(       int Flag ) ;														// ƒ‚ƒfƒ‹‚ğ“Ç‚İ‚ŞÛ‚ÉƒXƒP[ƒŠƒ“ƒOƒf[ƒ^‚ğ–³‹‚·‚é‚©‚Ç‚¤‚©‚ğİ’è‚·‚é( TRUE:–³‹‚·‚é  FALSE:–³‹‚µ‚È‚¢( ƒfƒtƒHƒ‹ƒg ) )
extern	int			MV1SetLoadModelPositionOptimize(	int Flag ) ;														// ƒ‚ƒfƒ‹‚ğ“Ç‚İ‚ŞÛ‚ÉÀ•Wƒf[ƒ^‚ÌÅ“K‰»‚ğs‚¤‚©‚Ç‚¤‚©‚ğİ’è‚·‚é( TRUE:s‚¤  FALSE:s‚í‚È‚¢( ƒfƒtƒHƒ‹ƒg ) )
extern	int			MV1SetLoadModelNotEqNormalSide_AddZeroAreaPolygon( int Flag ) ;											// ƒ‚ƒfƒ‹‚ğ“Ç‚İ‚ŞÛ‚Éƒ|ƒŠƒSƒ“‚Ì•Ó‚ªÚ‚µ‚Ä‚¢‚ÄAŠ‚Â–@ü‚Ì•ûŒü‚ªˆÙ‚È‚é•Ó‚É–ÊÏ‚O‚Ìƒ|ƒŠƒSƒ“‚ğ–„‚ß‚Ş‚©‚Ç‚¤‚©‚ğİ’è‚·‚é( TRUE:–„‚ß‚Ş@FALSE:–„‚ß‚Ü‚È‚¢( ƒfƒtƒHƒ‹ƒg ) )A( MV1ƒtƒ@ƒCƒ‹‚Ì“Ç‚İ‚İ‚Å‚Í‚±‚ÌŠÖ”‚Ìİ’è‚Í–³‹‚³‚êAƒ|ƒŠƒSƒ“‚Ì–„‚ß‚İ‚ÍÀs‚³‚ê‚Ü‚¹‚ñ )
extern	int			MV1SetLoadModelUsePhysicsMode(		int PhysicsMode /* DX_LOADMODEL_PHYSICS_LOADCALC “™ */ ) ;			// “Ç‚İ‚Şƒ‚ƒfƒ‹‚Ì•¨—‰‰Zƒ‚[ƒh‚ğİ’è‚·‚é
extern	int			MV1SetLoadModelPhysicsWorldGravity( float Gravity ) ;													// “Ç‚İ‚Şƒ‚ƒfƒ‹‚Ì•¨—‰‰Z‚É“K—p‚·‚éd—Íƒpƒ‰ƒ[ƒ^‚ğİ’è‚·‚é
extern	int			MV1SetLoadCalcPhysicsWorldGravity(	int GravityNo, VECTOR Gravity ) ;									// “Ç‚İ‚Şƒ‚ƒfƒ‹‚Ì•¨—‰‰Zƒ‚[ƒh‚ª–‘OŒvZ( DX_LOADMODEL_PHYSICS_LOADCALC )‚¾‚Á‚½ê‡‚É“K—p‚³‚ê‚éd—Í‚Ìİ’è‚ğ‚·‚é
extern	int			MV1SetLoadModelPhysicsCalcPrecision( int Precision ) ;													// “Ç‚İ‚Şƒ‚ƒfƒ‹‚Ì•¨—‰‰Zƒ‚[ƒh‚ª–‘OŒvZ( DX_LOADMODEL_PHYSICS_LOADCALC )‚¾‚Á‚½ê‡‚É“K—p‚³‚ê‚é•¨—‰‰Z‚ÌŠÔis‚Ì¸“x‚ğİ’è‚·‚é( 0:60FPS  1:120FPS  2:240FPS  3:480FPS  4:960FPS  5:1920FPS )
extern	int			MV1SetLoadModel_PMD_PMX_AnimationFPSMode( int FPSMode /* DX_LOADMODEL_PMD_PMX_ANIMATION_FPSMODE_30 “™ */ ) ; // PMD, PMX ƒtƒ@ƒCƒ‹‚ğ“Ç‚İ‚ñ‚¾Û‚ÌƒAƒjƒ[ƒVƒ‡ƒ“‚Ì FPS ƒ‚[ƒh‚ğİ’è‚·‚é
extern	int			MV1AddLoadModelDisablePhysicsNameWord( const TCHAR *NameWord ) ;										// “Ç‚İ‚Şƒ‚ƒfƒ‹‚Ì•¨—‰‰Z‚ğ“Á’è‚Ì„‘Ì‚Ì‚İ–³Œø‚É‚·‚é‚½‚ß‚Ì–¼‘O‚Ìƒ[ƒh‚ğ’Ç‰Á‚·‚éA’Ç‰Á‚Å‚«‚éƒ[ƒh•¶š—ñ‚ÌÅ‘å’·‚Í 63 •¶šA’Ç‰Á‚Å‚«‚éƒ[ƒh‚Ì”‚ÍÅ‘å 256 ŒÂ
extern	int			MV1ResetLoadModelDisablePhysicsNameWord( void ) ;														// MV1AddLoadModelDisablePhysicsNameWord ‚Å’Ç‰Á‚µ‚½„‘Ì‚Ì–³Œøƒ[ƒh‚ğƒŠƒZƒbƒg‚µ‚Ä–³Œøƒ[ƒh–³‚µ‚Ì‰Šúó‘Ô‚É–ß‚·
extern	int			MV1SetLoadModelDisablePhysicsNameWordMode( int DisableNameWordMode /* DX_LOADMODEL_PHYSICS_DISABLENAMEWORD_ALWAYS “™ */ ) ;	// MV1AddLoadModelDisablePhysicsNameWord ‚Å’Ç‰Á‚µ‚½„‘Ì‚Ì–³Œøƒ[ƒh‚Ì“K—pƒ‹[ƒ‹‚ğ•ÏX‚·‚é
extern	int			MV1SetLoadModelAnimFilePath(		const TCHAR *FileName ) ;											// “Ç‚İ‚Şƒ‚ƒfƒ‹‚É“K—p‚·‚éƒAƒjƒ[ƒVƒ‡ƒ“ƒtƒ@ƒCƒ‹‚ÌƒpƒX‚ğİ’è‚·‚éANULL‚ğ“n‚·‚Æİ’èƒŠƒZƒbƒg( Œ»İ‚Í PMD,PMX ‚Ì‚İ‚ÉŒø‰Ê‚ ‚è )
extern	int			MV1SetLoadModelUsePackDraw(			int Flag ) ;														// “Ç‚İ‚Şƒ‚ƒfƒ‹‚ğ“¯•¡”•`‰æ‚É‘Î‰‚³‚¹‚é‚©‚Ç‚¤‚©‚ğİ’è‚·‚é( TRUE:‘Î‰‚³‚¹‚é  FALSE:‘Î‰‚³‚¹‚È‚¢( ƒfƒtƒHƒ‹ƒg ) )A( u‘Î‰‚³‚¹‚év‚É‚·‚é‚Æ•`‰æ‚ª‚‘¬‚É‚È‚é‰Â”\«‚ª‚ ‚é‘ã‚í‚è‚ÉÁ”ïVRAM‚ª‘‚¦‚Ü‚· )
extern	int			MV1SetLoadModelTriangleListUseMaxBoneNum( int UseMaxBoneNum ) ;											// “Ç‚İ‚Şƒ‚ƒfƒ‹‚Ì‚Ğ‚Æ‚Â‚Ìƒgƒ‰ƒCƒAƒ“ƒOƒ‹ƒŠƒXƒg‚Åg—p‚Å‚«‚éÅ‘åƒ{[ƒ“”‚ğİ’è‚·‚é( UseMaxBoneNum ‚Åw’è‚Å‚«‚é’l‚Ì”ÍˆÍ‚Í 8 ` 54A 0 ‚ğw’è‚·‚é‚ÆƒfƒtƒHƒ‹ƒg“®ì‚É–ß‚é )

// ƒ‚ƒfƒ‹•Û‘¶ŠÖŒW
extern	int			MV1SaveModelToMV1File( int MHandle, const TCHAR *FileName, int SaveType = MV1_SAVETYPE_NORMAL , int AnimMHandle = -1 , int AnimNameCheck = TRUE , int Normal8BitFlag = 1 , int Position16BitFlag = 1 , int Weight8BitFlag = 0 , int Anim16BitFlag = 1 ) ;		// w’è‚ÌƒpƒX‚Éƒ‚ƒfƒ‹‚ğ•Û‘¶‚·‚é( –ß‚è’l  0:¬Œ÷  -1:ƒƒ‚ƒŠ•s‘«  -2:g‚í‚ê‚Ä‚¢‚È‚¢ƒAƒjƒ[ƒVƒ‡ƒ“‚ª‚ ‚Á‚½ )
#ifndef DX_NON_SAVEFUNCTION
extern	int			MV1SaveModelToXFile(   int MHandle, const TCHAR *FileName, int SaveType = MV1_SAVETYPE_NORMAL , int AnimMHandle = -1 , int AnimNameCheck = TRUE ) ;	// w’è‚ÌƒpƒX‚Éƒ‚ƒfƒ‹‚ğ‚wƒtƒ@ƒCƒ‹Œ`®‚Å•Û‘¶‚·‚é( –ß‚è’l  0:¬Œ÷  -1:ƒƒ‚ƒŠ•s‘«  -2:g‚í‚ê‚Ä‚¢‚È‚¢ƒAƒjƒ[ƒVƒ‡ƒ“‚ª‚ ‚Á‚½ )
#endif // DX_NON_SAVEFUNCTION

// ƒ‚ƒfƒ‹•`‰æŠÖŒW
extern	int			MV1DrawModel(						int MHandle ) ;														// ƒ‚ƒfƒ‹‚ğ•`‰æ‚·‚é
extern	int			MV1DrawFrame(						int MHandle, int FrameIndex ) ;										// ƒ‚ƒfƒ‹‚Ìw’è‚ÌƒtƒŒ[ƒ€‚ğ•`‰æ‚·‚é
extern	int			MV1DrawMesh(						int MHandle, int MeshIndex ) ;										// ƒ‚ƒfƒ‹‚Ìw’è‚ÌƒƒbƒVƒ…‚ğ•`‰æ‚·‚é
extern	int			MV1DrawTriangleList(				int MHandle, int TriangleListIndex ) ;								// ƒ‚ƒfƒ‹‚Ìw’è‚Ìƒgƒ‰ƒCƒAƒ“ƒOƒ‹ƒŠƒXƒg‚ğ•`‰æ‚·‚é
extern	int			MV1DrawModelDebug(					int MHandle, unsigned int Color, int IsNormalLine, float NormalLineLength, int IsPolyLine, int IsCollisionBox ) ;	// ƒ‚ƒfƒ‹‚ÌƒfƒoƒbƒO•`‰æ

// •`‰æİ’èŠÖŒW
extern	int			MV1SetUseOrigShader(				int UseFlag ) ;														// ƒ‚ƒfƒ‹‚Ì•`‰æ‚É SetUseVertexShader, SetUsePixelShader ‚Åw’è‚µ‚½ƒVƒF[ƒ_[‚ğg—p‚·‚é‚©‚Ç‚¤‚©‚ğİ’è‚·‚é( TRUE:g—p‚·‚é  FALSE:g—p‚µ‚È‚¢( ƒfƒtƒHƒ‹ƒg ) )
extern	int			MV1SetSemiTransDrawMode(			int DrawMode /* DX_SEMITRANSDRAWMODE_ALWAYS “™ */ ) ;				// ƒ‚ƒfƒ‹‚Ì”¼“§–¾—v‘f‚ª‚ ‚é•”•ª‚É‚Â‚¢‚Ä‚Ì•`‰æƒ‚[ƒh‚ğİ’è‚·‚é

// ƒ‚ƒfƒ‹Šî–{§ŒäŠÖŒW
extern	MATRIX		MV1GetLocalWorldMatrix(				int MHandle ) ;														// ƒ‚ƒfƒ‹‚Ìƒ[ƒJƒ‹À•W‚©‚çƒ[ƒ‹ƒhÀ•W‚É•ÏŠ·‚·‚és—ñ‚ğ“¾‚é
extern	MATRIX_D	MV1GetLocalWorldMatrixD(			int MHandle ) ;														// ƒ‚ƒfƒ‹‚Ìƒ[ƒJƒ‹À•W‚©‚çƒ[ƒ‹ƒhÀ•W‚É•ÏŠ·‚·‚és—ñ‚ğ“¾‚é
extern	int			MV1SetPosition(						int MHandle, VECTOR   Position ) ;									// ƒ‚ƒfƒ‹‚ÌÀ•W‚ğƒZƒbƒg
extern	int			MV1SetPositionD(					int MHandle, VECTOR_D Position ) ;									// ƒ‚ƒfƒ‹‚ÌÀ•W‚ğƒZƒbƒg
extern	VECTOR		MV1GetPosition(						int MHandle ) ;														// ƒ‚ƒfƒ‹‚ÌÀ•W‚ğæ“¾
extern	VECTOR_D	MV1GetPositionD(					int MHandle ) ;														// ƒ‚ƒfƒ‹‚ÌÀ•W‚ğæ“¾
extern	int			MV1SetScale(						int MHandle, VECTOR Scale ) ;										// ƒ‚ƒfƒ‹‚ÌŠg‘å’l‚ğƒZƒbƒg
extern	VECTOR		MV1GetScale(						int MHandle ) ;														// ƒ‚ƒfƒ‹‚ÌŠg‘å’l‚ğæ“¾
extern	int			MV1SetRotationXYZ(					int MHandle, VECTOR Rotate ) ;										// ƒ‚ƒfƒ‹‚Ì‰ñ“]’l‚ğƒZƒbƒg( X²‰ñ“]¨Y²‰ñ“]¨Z²‰ñ“]•û® )
extern	VECTOR		MV1GetRotationXYZ(					int MHandle ) ;														// ƒ‚ƒfƒ‹‚Ì‰ñ“]’l‚ğæ“¾( X²‰ñ“]¨Y²‰ñ“]¨Z²‰ñ“]•û® )
extern	int			MV1SetRotationZYAxis(				int MHandle, VECTOR ZAxisDirection, VECTOR YAxisDirection, float ZAxisTwistRotate ) ;	// ƒ‚ƒfƒ‹‚Ì‚y²‚Æ‚x²‚ÌŒü‚«‚ğƒZƒbƒg‚·‚é
extern	int			MV1SetRotationYUseDir(				int MHandle, VECTOR Direction, float OffsetYAngle ) ;				// ƒ‚ƒfƒ‹‚Ì‚x²‚Ì‰ñ“]’l‚ğw’è‚ÌƒxƒNƒgƒ‹‚ÌŒü‚«‚ğŒ³‚Éİ’è‚·‚éAƒ‚ƒfƒ‹‚ÍZ²‚Ìƒ}ƒCƒiƒX•ûŒü‚ğŒü‚¢‚Ä‚¢‚é‚±‚Æ‚ğ‘z’è‚·‚é‚Ì‚ÅA‚»‚¤‚Å‚Í‚È‚¢ê‡‚Í OffsetYAngle ‚Å•â³‚·‚éA‚w²‰ñ“]A‚y²‰ñ“]‚Í‚O‚ÅŒÅ’è
extern	int			MV1SetRotationMatrix(				int MHandle, MATRIX Matrix ) ;										// ƒ‚ƒfƒ‹‚Ì‰ñ“]—ps—ñ‚ğƒZƒbƒg‚·‚é
extern	MATRIX		MV1GetRotationMatrix(				int MHandle ) ;														// ƒ‚ƒfƒ‹‚Ì‰ñ“]—ps—ñ‚ğæ“¾‚·‚é
extern	int			MV1SetMatrix(						int MHandle, MATRIX   Matrix ) ;									// ƒ‚ƒfƒ‹‚Ì•ÏŒ`—ps—ñ‚ğƒZƒbƒg‚·‚é
extern	int			MV1SetMatrixD(						int MHandle, MATRIX_D Matrix ) ;									// ƒ‚ƒfƒ‹‚Ì•ÏŒ`—ps—ñ‚ğƒZƒbƒg‚·‚é
extern	MATRIX		MV1GetMatrix(						int MHandle ) ;														// ƒ‚ƒfƒ‹‚Ì•ÏŒ`—ps—ñ‚ğæ“¾‚·‚é
extern	MATRIX_D	MV1GetMatrixD(						int MHandle ) ;														// ƒ‚ƒfƒ‹‚Ì•ÏŒ`—ps—ñ‚ğæ“¾‚·‚é
extern	int			MV1SetVisible(						int MHandle, int VisibleFlag ) ;									// ƒ‚ƒfƒ‹‚Ì•\¦A”ñ•\¦ó‘Ô‚ğ•ÏX‚·‚é( TRUE:•\¦  FALSE:”ñ•\¦ )
extern	int			MV1GetVisible(						int MHandle ) ;														// ƒ‚ƒfƒ‹‚Ì•\¦A”ñ•\¦ó‘Ô‚ğæ“¾‚·‚é( TRUE:•\¦  FALSE:”ñ•\¦ )
extern	int			MV1SetMeshCategoryVisible(			int MHandle, int MeshCategory, int VisibleFlag ) ;					// ƒ‚ƒfƒ‹‚ÌƒƒbƒVƒ…‚Ìí—Ş( DX_MV1_MESHCATEGORY_NORMAL ‚È‚Ç )–ˆ‚Ì•\¦A”ñ•\¦‚ğİ’è‚·‚é( TRUE:•\¦  FALSE:”ñ•\¦ )
extern	int			MV1GetMeshCategoryVisible(			int MHandle, int MeshCategory ) ;									// ƒ‚ƒfƒ‹‚ÌƒƒbƒVƒ…‚Ìí—Ş( DX_MV1_MESHCATEGORY_NORMAL ‚È‚Ç )–ˆ‚Ì•\¦A”ñ•\¦‚ğæ“¾‚·‚é( TRUE:•\¦  FALSE:”ñ•\¦ )
extern	int			MV1SetDifColorScale(				int MHandle, COLOR_F Scale ) ;										// ƒ‚ƒfƒ‹‚ÌƒfƒBƒtƒ…[ƒYƒJƒ‰[‚ÌƒXƒP[ƒ‹’l‚ğİ’è‚·‚é( ƒfƒtƒHƒ‹ƒg’l‚Í 1.0f )
extern	COLOR_F		MV1GetDifColorScale(				int MHandle ) ;														// ƒ‚ƒfƒ‹‚ÌƒfƒBƒtƒ…[ƒYƒJƒ‰[‚ÌƒXƒP[ƒ‹’l‚ğæ“¾‚·‚é( ƒfƒtƒHƒ‹ƒg’l‚Í 1.0f )
extern	int			MV1SetSpcColorScale(				int MHandle, COLOR_F Scale ) ;										// ƒ‚ƒfƒ‹‚ÌƒXƒyƒLƒ…ƒ‰ƒJƒ‰[‚ÌƒXƒP[ƒ‹’l‚ğİ’è‚·‚é( ƒfƒtƒHƒ‹ƒg’l‚Í 1.0f )
extern	COLOR_F		MV1GetSpcColorScale(				int MHandle ) ;														// ƒ‚ƒfƒ‹‚ÌƒXƒyƒLƒ…ƒ‰ƒJƒ‰[‚ÌƒXƒP[ƒ‹’l‚ğæ“¾‚·‚é( ƒfƒtƒHƒ‹ƒg’l‚Í 1.0f )
extern	int			MV1SetEmiColorScale(				int MHandle, COLOR_F Scale ) ;										// ƒ‚ƒfƒ‹‚ÌƒGƒ~ƒbƒVƒuƒJƒ‰[‚ÌƒXƒP[ƒ‹’l‚ğİ’è‚·‚é( ƒfƒtƒHƒ‹ƒg’l‚Í 1.0f )
extern	COLOR_F		MV1GetEmiColorScale(				int MHandle ) ;														// ƒ‚ƒfƒ‹‚ÌƒGƒ~ƒbƒVƒuƒJƒ‰[‚ÌƒXƒP[ƒ‹’l‚ğæ“¾‚·‚é( ƒfƒtƒHƒ‹ƒg’l‚Í 1.0f )
extern	int			MV1SetAmbColorScale(				int MHandle, COLOR_F Scale ) ;										// ƒ‚ƒfƒ‹‚ÌƒAƒ“ƒrƒGƒ“ƒgƒJƒ‰[‚ÌƒXƒP[ƒ‹’l‚ğİ’è‚·‚é( ƒfƒtƒHƒ‹ƒg’l‚Í 1.0f )
extern	COLOR_F		MV1GetAmbColorScale(				int MHandle ) ;														// ƒ‚ƒfƒ‹‚ÌƒAƒ“ƒrƒGƒ“ƒgƒJƒ‰[‚ÌƒXƒP[ƒ‹’l‚ğæ“¾‚·‚é( ƒfƒtƒHƒ‹ƒg’l‚Í 1.0f )
extern	int			MV1GetSemiTransState(				int MHandle ) ;														// ƒ‚ƒfƒ‹‚É”¼“§–¾—v‘f‚ª‚ ‚é‚©‚Ç‚¤‚©‚ğæ“¾‚·‚é( –ß‚è’l TRUE:‚ ‚é  FALSE:‚È‚¢ )
extern	int			MV1SetOpacityRate(					int MHandle, float Rate ) ;											// ƒ‚ƒfƒ‹‚Ì•s“§–¾“x‚ğİ’è‚·‚é( •s“§–¾ 1.0f ` “§–¾ 0.0f )
extern	float		MV1GetOpacityRate(					int MHandle ) ;														// ƒ‚ƒfƒ‹‚Ì•s“§–¾“x‚ğæ“¾‚·‚é( •s“§–¾ 1.0f ` “§–¾ 0.0f )
extern	int			MV1SetUseDrawMulAlphaColor(			int MHandle, int Flag ) ;											// ƒ‚ƒfƒ‹‚ğ•`‰æ‚·‚éÛ‚ÉRGB’l‚É‘Î‚µ‚ÄA’l‚ğæZ‚·‚é‚©‚Ç‚¤‚©‚ğİ’è‚·‚é( •`‰æŒ‹‰Ê‚ªæZÏ‚İƒAƒ‹ƒtƒ@‰æ‘œ‚É‚È‚è‚Ü‚· )( Flag   TRUE:RGB’l‚É‘Î‚µ‚ÄA’l‚ğæZ‚·‚é  FALSE:æZ‚µ‚È‚¢(ƒfƒtƒHƒ‹ƒg) )
extern	int			MV1GetUseDrawMulAlphaColor(			int MHandle ) ;														// ƒ‚ƒfƒ‹‚ğ•`‰æ‚·‚éÛ‚ÉRGB’l‚É‘Î‚µ‚ÄA’l‚ğæZ‚·‚é‚©‚Ç‚¤‚©‚ğæ“¾‚·‚é( •`‰æŒ‹‰Ê‚ªæZÏ‚İƒAƒ‹ƒtƒ@‰æ‘œ‚É‚È‚è‚Ü‚· )( –ß‚è’l TRUE:RGB’l‚É‘Î‚µ‚ÄA’l‚ğæZ‚·‚é  FALSE:æZ‚µ‚È‚¢(ƒfƒtƒHƒ‹ƒg) )
extern	int			MV1SetUseZBuffer(					int MHandle, int Flag ) ;											// ƒ‚ƒfƒ‹‚ğ•`‰æ‚·‚éÛ‚É‚yƒoƒbƒtƒ@‚ğg—p‚·‚é‚©‚Ç‚¤‚©‚ğİ’è‚·‚é
extern	int			MV1SetWriteZBuffer(					int MHandle, int Flag ) ;											// ƒ‚ƒfƒ‹‚ğ•`‰æ‚·‚éÛ‚É‚yƒoƒbƒtƒ@‚É‘‚«‚İ‚ğs‚¤‚©‚Ç‚¤‚©‚ğİ’è‚·‚é
extern	int			MV1SetZBufferCmpType(				int MHandle, int CmpType /* DX_CMP_NEVER “™ */ ) ;					// ƒ‚ƒfƒ‹‚Ì•`‰æ‚Ì‚y’l‚Ì”äŠrƒ‚[ƒh‚ğİ’è‚·‚é
extern	int			MV1SetZBias(						int MHandle, int Bias ) ;											// ƒ‚ƒfƒ‹‚Ì•`‰æ‚Ì‘‚«‚Ş‚y’l‚ÌƒoƒCƒAƒX‚ğİ’è‚·‚é
extern	int			MV1SetUseVertDifColor(				int MHandle, int UseFlag ) ;										// ƒ‚ƒfƒ‹‚ÌŠÜ‚Ü‚ê‚éƒƒbƒVƒ…‚Ì’¸“_ƒfƒBƒtƒ…[ƒYƒJƒ‰[‚ğƒ}ƒeƒŠƒAƒ‹‚ÌƒfƒBƒtƒ…[ƒYƒJƒ‰[‚Ì‘ã‚í‚è‚Ég—p‚·‚é‚©‚Ç‚¤‚©‚ğİ’è‚·‚é( TRUE:ƒ}ƒeƒŠƒAƒ‹ƒJƒ‰[‚Ì‘ã‚í‚è‚Ég—p‚·‚é  FALSE:ƒ}ƒeƒŠƒAƒ‹ƒJƒ‰[‚ğg—p‚·‚é )
extern	int			MV1SetUseVertSpcColor(				int MHandle, int UseFlag ) ;										// ƒ‚ƒfƒ‹‚ÉŠÜ‚Ü‚ê‚éƒƒbƒVƒ…‚Ì’¸“_ƒXƒyƒLƒ…ƒ‰ƒJƒ‰[‚ğƒ}ƒeƒŠƒAƒ‹‚ÌƒXƒyƒLƒ…ƒ‰ƒJƒ‰[‚Ì‘ã‚í‚è‚Ég—p‚·‚é‚©‚Ç‚¤‚©‚ğİ’è‚·‚é( TRUE:ƒ}ƒeƒŠƒAƒ‹ƒJƒ‰[‚Ì‘ã‚í‚è‚Ég—p‚·‚é  FALSE:ƒ}ƒeƒŠƒAƒ‹ƒJƒ‰[‚ğg—p‚·‚é )
extern	int			MV1SetSampleFilterMode(				int MHandle, int FilterMode ) ;										// ƒ‚ƒfƒ‹‚ÌƒeƒNƒXƒ`ƒƒ‚ÌƒTƒ“ƒvƒ‹ƒtƒBƒ‹ƒ^[ƒ‚[ƒh‚ğ•ÏX‚·‚é( FilterMode ‚Í DX_DRAWMODE_NEAREST “™ )
extern	int			MV1SetMaxAnisotropy(				int MHandle, int MaxAnisotropy ) ;									// ƒ‚ƒfƒ‹‚ÌˆÙ•û«ƒtƒBƒ‹ƒ^ƒŠƒ“ƒO‚ÌÅ‘åŸ”‚ğİ’è‚·‚é
extern	int			MV1SetWireFrameDrawFlag(			int MHandle, int Flag ) ;											// ƒ‚ƒfƒ‹‚ğƒƒCƒ„[ƒtƒŒ[ƒ€‚Å•`‰æ‚·‚é‚©‚Ç‚¤‚©‚ğİ’è‚·‚é
extern	int			MV1RefreshVertColorFromMaterial(	int MHandle ) ;														// ƒ‚ƒfƒ‹‚Ì’¸“_ƒJƒ‰[‚ğŒ»İİ’è‚³‚ê‚Ä‚¢‚éƒ}ƒeƒŠƒAƒ‹‚ÌƒJƒ‰[‚É‚·‚é
extern	int			MV1SetPhysicsWorldGravity(			int MHandle, VECTOR Gravity ) ;										// ƒ‚ƒfƒ‹‚Ì•¨—‰‰Z‚Ìd—Í‚ğİ’è‚·‚é
extern	int			MV1PhysicsCalculation(				int MHandle, float MillisecondTime ) ;								// ƒ‚ƒfƒ‹‚Ì•¨—‰‰Z‚ğw’èŠÔ•ªŒo‰ß‚µ‚½‚Æ‰¼’è‚µ‚ÄŒvZ‚·‚é( MillisecondTime ‚Åw’è‚·‚éŠÔ‚Ì’PˆÊ‚Íƒ~ƒŠ•b )
extern	int			MV1PhysicsResetState(				int MHandle ) ;														// ƒ‚ƒfƒ‹‚Ì•¨—‰‰Z‚Ìó‘Ô‚ğƒŠƒZƒbƒg‚·‚é( ˆÊ’u‚ªƒ[ƒv‚µ‚½‚Æ‚«—p )
extern	int			MV1SetUseShapeFlag(					int MHandle, int UseFlag ) ;										// ƒ‚ƒfƒ‹‚ÌƒVƒFƒCƒv‹@”\‚ğg—p‚·‚é‚©‚Ç‚¤‚©‚ğİ’è‚·‚é( UseFlag  TRUE:g—p‚·‚é( ƒfƒtƒHƒ‹ƒg )  FALSE:g—p‚µ‚È‚¢ )
extern	int			MV1GetMaterialNumberOrderFlag(		int MHandle ) ;														// ƒ‚ƒfƒ‹‚Ìƒ}ƒeƒŠƒAƒ‹”Ô†‡‚ÉƒƒbƒVƒ…‚ğ•`‰æ‚·‚é‚©‚Ç‚¤‚©‚Ìƒtƒ‰ƒO‚ğæ“¾‚·‚é( TRUE:ƒ}ƒeƒŠƒAƒ‹”Ô†‡‚É•`‰æ  FALSE:•s“§–¾ƒƒbƒVƒ…‚ÌŒã”¼“§–¾ƒƒbƒVƒ… )

// ƒAƒjƒ[ƒVƒ‡ƒ“ŠÖŒW
extern	int			MV1AttachAnim(						int MHandle, int AnimIndex, int AnimSrcMHandle = -1 , int NameCheck = TRUE ) ;		// ƒAƒjƒ[ƒVƒ‡ƒ“‚ğƒAƒ^ƒbƒ`‚·‚é( –ß‚è’l  -1:ƒGƒ‰[  0ˆÈã:ƒAƒ^ƒbƒ`ƒCƒ“ƒfƒbƒNƒX )
extern	int			MV1DetachAnim(						int MHandle, int AttachIndex ) ;													// ƒAƒjƒ[ƒVƒ‡ƒ“‚ğƒfƒ^ƒbƒ`‚·‚é
extern	int			MV1SetAttachAnimTime(				int MHandle, int AttachIndex, float Time ) ;										// ƒAƒ^ƒbƒ`‚µ‚Ä‚¢‚éƒAƒjƒ[ƒVƒ‡ƒ“‚ÌÄ¶ŠÔ‚ğİ’è‚·‚é
extern	float		MV1GetAttachAnimTime(				int MHandle, int AttachIndex ) ;													// ƒAƒ^ƒbƒ`‚µ‚Ä‚¢‚éƒAƒjƒ[ƒVƒ‡ƒ“‚ÌÄ¶ŠÔ‚ğæ“¾‚·‚é
extern	float		MV1GetAttachAnimTotalTime(			int MHandle, int AttachIndex ) ;													// ƒAƒ^ƒbƒ`‚µ‚Ä‚¢‚éƒAƒjƒ[ƒVƒ‡ƒ“‚Ì‘ŠÔ‚ğ“¾‚é
extern	int			MV1SetAttachAnimBlendRate(			int MHandle, int AttachIndex, float Rate = 1.0f ) ;									// ƒAƒ^ƒbƒ`‚µ‚Ä‚¢‚éƒAƒjƒ[ƒVƒ‡ƒ“‚ÌƒuƒŒƒ“ƒh—¦‚ğİ’è‚·‚é
extern	float		MV1GetAttachAnimBlendRate(			int MHandle, int AttachIndex ) ;													// ƒAƒ^ƒbƒ`‚µ‚Ä‚¢‚éƒAƒjƒ[ƒVƒ‡ƒ“‚ÌƒuƒŒƒ“ƒh—¦‚ğæ“¾‚·‚é
extern	int			MV1SetAttachAnimBlendRateToFrame(	int MHandle, int AttachIndex, int FrameIndex, float Rate, int SetChild = TRUE ) ;	// ƒAƒ^ƒbƒ`‚µ‚Ä‚¢‚éƒAƒjƒ[ƒVƒ‡ƒ“‚ÌƒuƒŒƒ“ƒh—¦‚ğİ’è‚·‚é( ƒtƒŒ[ƒ€’PˆÊ )
extern	float		MV1GetAttachAnimBlendRateToFrame(	int MHandle, int AttachIndex, int FrameIndex ) ;									// ƒAƒ^ƒbƒ`‚µ‚Ä‚¢‚éƒAƒjƒ[ƒVƒ‡ƒ“‚ÌƒuƒŒƒ“ƒh—¦‚ğİ’è‚·‚é( ƒtƒŒ[ƒ€’PˆÊ )
extern	int			MV1GetAttachAnim(					int MHandle, int AttachIndex ) ;													// ƒAƒ^ƒbƒ`‚µ‚Ä‚¢‚éƒAƒjƒ[ƒVƒ‡ƒ“‚ÌƒAƒjƒ[ƒVƒ‡ƒ“ƒCƒ“ƒfƒbƒNƒX‚ğæ“¾‚·‚é
extern	int			MV1SetAttachAnimUseShapeFlag(		int MHandle, int AttachIndex, int UseFlag ) ;										// ƒAƒ^ƒbƒ`‚µ‚Ä‚¢‚éƒAƒjƒ[ƒVƒ‡ƒ“‚ÌƒVƒFƒCƒv‚ğg—p‚·‚é‚©‚Ç‚¤‚©‚ğİ’è‚·‚é( UseFlag  TRUE:g—p‚·‚é( ƒfƒtƒHƒ‹ƒg )  FALSE:g—p‚µ‚È‚¢ )
extern	int			MV1GetAttachAnimUseShapeFlag(		int MHandle, int AttachIndex ) ;													// ƒAƒ^ƒbƒ`‚µ‚Ä‚¢‚éƒAƒjƒ[ƒVƒ‡ƒ“‚ÌƒVƒFƒCƒv‚ğg—p‚·‚é‚©‚Ç‚¤‚©‚ğæ“¾‚·‚é
extern	VECTOR		MV1GetAttachAnimFrameLocalPosition(	int MHandle, int AttachIndex, int FrameIndex ) ;									// ƒAƒ^ƒbƒ`‚µ‚Ä‚¢‚éƒAƒjƒ[ƒVƒ‡ƒ“‚Ìw’è‚ÌƒtƒŒ[ƒ€‚ÌŒ»İ‚Ìƒ[ƒJƒ‹À•W‚ğæ“¾‚·‚é
extern	MATRIX		MV1GetAttachAnimFrameLocalMatrix(	int MHandle, int AttachIndex, int FrameIndex ) ;									// ƒAƒ^ƒbƒ`‚µ‚Ä‚¢‚éƒAƒjƒ[ƒVƒ‡ƒ“‚Ìw’è‚ÌƒtƒŒ[ƒ€‚ÌŒ»İ‚Ìƒ[ƒJƒ‹•ÏŠ·s—ñ‚ğæ“¾‚·‚é

extern	int			MV1GetAnimNum(						int MHandle ) ;																		// ƒAƒjƒ[ƒVƒ‡ƒ“‚Ì”‚ğæ“¾‚·‚é
extern	const TCHAR *MV1GetAnimName(					int MHandle, int AnimIndex ) ;														// w’è”Ô†‚ÌƒAƒjƒ[ƒVƒ‡ƒ“–¼‚ğæ“¾‚·‚é( NULL:ƒGƒ‰[ )
extern	int			MV1SetAnimName(						int MHandle, int AnimIndex, const TCHAR *AnimName ) ;								// w’è”Ô†‚ÌƒAƒjƒ[ƒVƒ‡ƒ“–¼‚ğ•ÏX‚·‚é
extern	int			MV1GetAnimIndex(					int MHandle, const TCHAR *AnimName ) ;												// w’è–¼‚ÌƒAƒjƒ[ƒVƒ‡ƒ“”Ô†‚ğæ“¾‚·‚é( -1:ƒGƒ‰[ )
extern	float		MV1GetAnimTotalTime(				int MHandle, int AnimIndex ) ;														// w’è”Ô†‚ÌƒAƒjƒ[ƒVƒ‡ƒ“‚Ì‘ŠÔ‚ğ“¾‚é
extern	int			MV1GetAnimTargetFrameNum(			int MHandle, int AnimIndex ) ;														// w’è‚ÌƒAƒjƒ[ƒVƒ‡ƒ“‚ªƒ^[ƒQƒbƒg‚Æ‚·‚éƒtƒŒ[ƒ€‚Ì”‚ğæ“¾‚·‚é
extern	const TCHAR *MV1GetAnimTargetFrameName(			int MHandle, int AnimIndex, int AnimFrameIndex ) ;									// w’è‚ÌƒAƒjƒ[ƒVƒ‡ƒ“‚ªƒ^[ƒQƒbƒg‚Æ‚·‚éƒtƒŒ[ƒ€‚Ì–¼‘O‚ğæ“¾‚·‚é
extern	int			MV1GetAnimTargetFrame(				int MHandle, int AnimIndex, int AnimFrameIndex ) ;									// w’è‚ÌƒAƒjƒ[ƒVƒ‡ƒ“‚ªƒ^[ƒQƒbƒg‚Æ‚·‚éƒtƒŒ[ƒ€‚Ì”Ô†‚ğæ“¾‚·‚é
extern	int			MV1GetAnimTargetFrameKeySetNum(		int MHandle, int AnimIndex, int AnimFrameIndex ) ;									// w’è‚ÌƒAƒjƒ[ƒVƒ‡ƒ“‚ªƒ^[ƒQƒbƒg‚Æ‚·‚éƒtƒŒ[ƒ€—p‚ÌƒAƒjƒ[ƒVƒ‡ƒ“ƒL[ƒZƒbƒg‚Ì”‚ğæ“¾‚·‚é
extern	int			MV1GetAnimTargetFrameKeySet(		int MHandle, int AnimIndex, int AnimFrameIndex, int Index ) ;						// w’è‚ÌƒAƒjƒ[ƒVƒ‡ƒ“‚ªƒ^[ƒQƒbƒg‚Æ‚·‚éƒtƒŒ[ƒ€—p‚ÌƒAƒjƒ[ƒVƒ‡ƒ“ƒL[ƒZƒbƒgƒL[ƒZƒbƒgƒCƒ“ƒfƒbƒNƒX‚ğæ“¾‚·‚é

extern	int			MV1GetAnimKeySetNum(				int MHandle ) ;																		// ƒ‚ƒfƒ‹‚ÉŠÜ‚Ü‚ê‚éƒAƒjƒ[ƒVƒ‡ƒ“ƒL[ƒZƒbƒg‚Ì‘”‚ğ“¾‚é
extern	int			MV1GetAnimKeySetType(				int MHandle, int AnimKeySetIndex ) ;												// w’è‚ÌƒAƒjƒ[ƒVƒ‡ƒ“ƒL[ƒZƒbƒg‚Ìƒ^ƒCƒv‚ğæ“¾‚·‚é( MV1_ANIMKEY_TYPE_QUATERNION “™ )
extern	int			MV1GetAnimKeySetDataType(			int MHandle, int AnimKeySetIndex ) ;												// w’è‚ÌƒAƒjƒ[ƒVƒ‡ƒ“ƒL[ƒZƒbƒg‚Ìƒf[ƒ^ƒ^ƒCƒv‚ğæ“¾‚·‚é( MV1_ANIMKEY_DATATYPE_ROTATE “™ )
extern	int			MV1GetAnimKeySetTimeType(			int MHandle, int AnimKeySetIndex ) ;												// w’è‚ÌƒAƒjƒ[ƒVƒ‡ƒ“ƒL[ƒZƒbƒg‚ÌƒL[‚ÌŠÔƒf[ƒ^ƒ^ƒCƒv‚ğæ“¾‚·‚é( MV1_ANIMKEY_TIME_TYPE_ONE “™ )
extern	int			MV1GetAnimKeySetDataNum(			int MHandle, int AnimKeySetIndex ) ;												// w’è‚ÌƒAƒjƒ[ƒVƒ‡ƒ“ƒL[ƒZƒbƒg‚ÌƒL[‚Ì”‚ğæ“¾‚·‚é
extern	float		MV1GetAnimKeyDataTime(				int MHandle, int AnimKeySetIndex, int Index ) ;										// w’è‚ÌƒAƒjƒ[ƒVƒ‡ƒ“ƒL[ƒZƒbƒg‚ÌƒL[‚ÌŠÔ‚ğæ“¾‚·‚é
extern	int			MV1GetAnimKeyDataIndexFromTime(		int MHandle, int AnimKeySetIndex, float Time ) ;									// w’è‚ÌƒAƒjƒ[ƒVƒ‡ƒ“ƒL[ƒZƒbƒg‚Ìw’è‚ÌŠÔ‚Å‚ÌƒL[‚Ì”Ô†‚ğæ“¾‚·‚é
extern	FLOAT4		MV1GetAnimKeyDataToQuaternion(		int MHandle, int AnimKeySetIndex, int Index ) ;										// w’è‚ÌƒAƒjƒ[ƒVƒ‡ƒ“ƒL[ƒZƒbƒg‚ÌƒL[‚ğæ“¾‚·‚éAƒL[ƒ^ƒCƒv‚ª MV1_ANIMKEY_TYPE_QUATERNION ‚Å‚Í–³‚©‚Á‚½ê‡‚Í¸”s‚·‚é
extern	FLOAT4		MV1GetAnimKeyDataToQuaternionFromTime( int MHandle, int AnimKeySetIndex, float Time ) ;									// w’è‚ÌƒAƒjƒ[ƒVƒ‡ƒ“ƒL[ƒZƒbƒg‚ÌƒL[‚ğæ“¾‚·‚éAƒL[ƒ^ƒCƒv‚ª MV1_ANIMKEY_TYPE_QUATERNION ‚Å‚Í–³‚©‚Á‚½ê‡‚Í¸”s‚·‚é( ŠÔw’è”Å )
extern	VECTOR		MV1GetAnimKeyDataToVector(			int MHandle, int AnimKeySetIndex, int Index ) ;										// w’è‚ÌƒAƒjƒ[ƒVƒ‡ƒ“ƒL[ƒZƒbƒg‚ÌƒL[‚ğæ“¾‚·‚éAƒL[ƒ^ƒCƒv‚ª MV1_ANIMKEY_TYPE_VECTOR ‚Å‚Í–³‚©‚Á‚½ê‡‚Í¸”s‚·‚é
extern	VECTOR		MV1GetAnimKeyDataToVectorFromTime(	int MHandle, int AnimKeySetIndex, float Time ) ;									// w’è‚ÌƒAƒjƒ[ƒVƒ‡ƒ“ƒL[ƒZƒbƒg‚ÌƒL[‚ğæ“¾‚·‚éAƒL[ƒ^ƒCƒv‚ª MV1_ANIMKEY_TYPE_VECTOR ‚Å‚Í–³‚©‚Á‚½ê‡‚Í¸”s‚·‚é( ŠÔw’è”Å )
extern	MATRIX		MV1GetAnimKeyDataToMatrix(			int MHandle, int AnimKeySetIndex, int Index ) ;										// w’è‚ÌƒAƒjƒ[ƒVƒ‡ƒ“ƒL[ƒZƒbƒg‚ÌƒL[‚ğæ“¾‚·‚éAƒL[ƒ^ƒCƒv‚ª MV1_ANIMKEY_TYPE_MATRIX4X4C ‚© MV1_ANIMKEY_TYPE_MATRIX3X3 ‚Å‚Í–³‚©‚Á‚½ê‡‚Í¸”s‚·‚é
extern	MATRIX		MV1GetAnimKeyDataToMatrixFromTime(	int MHandle, int AnimKeySetIndex, float Time ) ;									// w’è‚ÌƒAƒjƒ[ƒVƒ‡ƒ“ƒL[ƒZƒbƒg‚ÌƒL[‚ğæ“¾‚·‚éAƒL[ƒ^ƒCƒv‚ª MV1_ANIMKEY_TYPE_MATRIX4X4C ‚© MV1_ANIMKEY_TYPE_MATRIX3X3 ‚Å‚Í–³‚©‚Á‚½ê‡‚Í¸”s‚·‚é( ŠÔw’è”Å )
extern	float		MV1GetAnimKeyDataToFlat(			int MHandle, int AnimKeySetIndex, int Index ) ;										// w’è‚ÌƒAƒjƒ[ƒVƒ‡ƒ“ƒL[ƒZƒbƒg‚ÌƒL[‚ğæ“¾‚·‚éAƒL[ƒ^ƒCƒv‚ª MV1_ANIMKEY_TYPE_FLAT ‚Å‚Í–³‚©‚Á‚½ê‡‚Í¸”s‚·‚é
extern	float		MV1GetAnimKeyDataToFlatFromTime(	int MHandle, int AnimKeySetIndex, float Time ) ;									// w’è‚ÌƒAƒjƒ[ƒVƒ‡ƒ“ƒL[ƒZƒbƒg‚ÌƒL[‚ğæ“¾‚·‚éAƒL[ƒ^ƒCƒv‚ª MV1_ANIMKEY_TYPE_FLAT ‚Å‚Í–³‚©‚Á‚½ê‡‚Í¸”s‚·‚é( ŠÔw’è”Å )
extern	float		MV1GetAnimKeyDataToLinear(			int MHandle, int AnimKeySetIndex, int Index ) ;										// w’è‚ÌƒAƒjƒ[ƒVƒ‡ƒ“ƒL[ƒZƒbƒg‚ÌƒL[‚ğæ“¾‚·‚éAƒL[ƒ^ƒCƒv‚ª MV1_ANIMKEY_TYPE_LINEAR ‚Å‚Í–³‚©‚Á‚½ê‡‚Í¸”s‚·‚é
extern	float		MV1GetAnimKeyDataToLinearFromTime(	int MHandle, int AnimKeySetIndex, float Time ) ;									// w’è‚ÌƒAƒjƒ[ƒVƒ‡ƒ“ƒL[ƒZƒbƒg‚ÌƒL[‚ğæ“¾‚·‚éAƒL[ƒ^ƒCƒv‚ª MV1_ANIMKEY_TYPE_LINEAR ‚Å‚Í–³‚©‚Á‚½ê‡‚Í¸”s‚·‚é( ŠÔw’è”Å )

// ƒ}ƒeƒŠƒAƒ‹ŠÖŒW
extern	int			MV1GetMaterialNum(					int MHandle ) ;															// ƒ‚ƒfƒ‹‚Åg—p‚µ‚Ä‚¢‚éƒ}ƒeƒŠƒAƒ‹‚Ì”‚ğæ“¾‚·‚é
extern	const TCHAR *MV1GetMaterialName(				int MHandle, int MaterialIndex ) ;										// w’è‚Ìƒ}ƒeƒŠƒAƒ‹‚Ì–¼‘O‚ğæ“¾‚·‚é
extern	int			MV1SetMaterialTypeAll(				int MHandle,                    int Type ) ;							// ‘S‚Ä‚Ìƒ}ƒeƒŠƒAƒ‹‚Ìƒ^ƒCƒv‚ğ•ÏX‚·‚é( Type : DX_MATERIAL_TYPE_NORMAL ‚È‚Ç )
extern	int			MV1SetMaterialType(					int MHandle, int MaterialIndex, int Type ) ;							// w’è‚Ìƒ}ƒeƒŠƒAƒ‹‚Ìƒ^ƒCƒv‚ğ•ÏX‚·‚é( Type : DX_MATERIAL_TYPE_NORMAL ‚È‚Ç )
extern	int			MV1GetMaterialType(					int MHandle, int MaterialIndex ) ;										// w’è‚Ìƒ}ƒeƒŠƒAƒ‹‚Ìƒ^ƒCƒv‚ğæ“¾‚·‚é( –ß‚è’l : DX_MATERIAL_TYPE_NORMAL ‚È‚Ç )
extern	int			MV1SetMaterialTypeParamAll(			int MHandle,                    ... ) ;									// ‘S‚Ä‚Ìƒ}ƒeƒŠƒAƒ‹‚Ìƒ^ƒCƒv•Êƒpƒ‰ƒ[ƒ^‚ğ•ÏX‚·‚é( ƒ}ƒeƒŠƒAƒ‹ƒ^ƒCƒv DX_MATERIAL_TYPE_MAT_SPEC_LUMINANCE_TWO_COLOR ‚È‚Ç‚Åg—p )
extern	int			MV1SetMaterialTypeParam(			int MHandle, int MaterialIndex, ... ) ;									// w’è‚Ìƒ}ƒeƒŠƒAƒ‹‚Ìƒ^ƒCƒv•Êƒpƒ‰ƒ[ƒ^‚ğ•ÏX‚·‚é( ƒ}ƒeƒŠƒAƒ‹ƒ^ƒCƒv DX_MATERIAL_TYPE_MAT_SPEC_LUMINANCE_TWO_COLOR ‚È‚Ç‚Åg—p )
//		int			MV1SetMaterialTypeParam(			int MHandle, int MaterialIndex, /* DX_MATERIAL_TYPE_MAT_SPEC_LUMINANCE_UNORM            ‚Ìê‡ */ float MinParam = ³‹K‰»‚Ì‰ºŒÀ’l( ‚±‚Ì’lˆÈ‰º‚ª 0.0f ‚É‚È‚é ), float MaxParam = ³‹K‰»‚ÌãŒÀ’l( ‚±‚Ì’lˆÈã‚ª 1.0f ‚É‚È‚é ) ) ;
//		int			MV1SetMaterialTypeParam(			int MHandle, int MaterialIndex, /* DX_MATERIAL_TYPE_MAT_SPEC_LUMINANCE_CLIP_UNORM       ‚Ìê‡ */ float MinParam = ³‹K‰»‚Ì‰ºŒÀ’l( ‚±‚Ì’lˆÈ‰º‚ª 0.0f ‚É‚È‚é ), float MaxParam = ³‹K‰»‚ÌãŒÀ’l( ‚±‚Ì’lˆÈã‚ª 1.0f ‚É‚È‚é ), float ClipParam = è‡’l( ‚±‚Ì’l–¢–‚ª 0.0f ‚É‚È‚é ) ) ;
//		int			MV1SetMaterialTypeParam(			int MHandle, int MaterialIndex, /* DX_MATERIAL_TYPE_MAT_SPEC_LUMINANCE_CMP_GREATEREQUAL ‚Ìê‡ */ float CmpParam = ”äŠr’l( ‚±‚Ì’lˆÈã‚Ìê‡‚Í 1.0f ‚ªA–¢–‚Ìê‡‚Í 0.0f ‚ª‘‚«‚Ü‚ê‚é ) ) ;
//		int			MV1SetMaterialTypeParam(			int MHandle, int MaterialIndex, /* DX_MATERIAL_TYPE_MAT_SPEC_POWER_UNORM                ‚Ìê‡ */ float MinParam = ³‹K‰»‚Ì‰ºŒÀ’l( ‚±‚Ì’lˆÈ‰º‚ª 0.0f ‚É‚È‚é ), float MaxParam = ³‹K‰»‚ÌãŒÀ’l( ‚±‚Ì’lˆÈã‚ª 1.0f ‚É‚È‚é ) ) ;
//		int			MV1SetMaterialTypeParam(			int MHandle, int MaterialIndex, /* DX_MATERIAL_TYPE_MAT_SPEC_POWER_CLIP_UNORM           ‚Ìê‡ */ float MinParam = ³‹K‰»‚Ì‰ºŒÀ’l( ‚±‚Ì’lˆÈ‰º‚ª 0.0f ‚É‚È‚é ), float MaxParam = ³‹K‰»‚ÌãŒÀ’l( ‚±‚Ì’lˆÈã‚ª 1.0f ‚É‚È‚é ), float ClipParam = è‡’l( ‚±‚Ì’l–¢–‚ª 0.0f ‚É‚È‚é ) ) ;
//		int			MV1SetMaterialTypeParam(			int MHandle, int MaterialIndex, /* DX_MATERIAL_TYPE_MAT_SPEC_POWER_CMP_GREATEREQUAL     ‚Ìê‡ */ float CmpParam = ”äŠr’l( ‚±‚Ì’lˆÈã‚Ìê‡‚Í 1.0f ‚ªA–¢–‚Ìê‡‚Í 0.0f ‚ª‘‚«‚Ü‚ê‚é ) ) ;
extern	int			MV1SetMaterialDifColor(				int MHandle, int MaterialIndex, COLOR_F Color ) ;						// w’è‚Ìƒ}ƒeƒŠƒAƒ‹‚ÌƒfƒBƒtƒ…[ƒYƒJƒ‰[‚ğİ’è‚·‚é
extern	COLOR_F		MV1GetMaterialDifColor( 			int MHandle, int MaterialIndex ) ;										// w’è‚Ìƒ}ƒeƒŠƒAƒ‹‚ÌƒfƒBƒtƒ…[ƒYƒJƒ‰[‚ğæ“¾‚·‚é
extern	int			MV1SetMaterialSpcColor( 			int MHandle, int MaterialIndex, COLOR_F Color ) ;						// w’è‚Ìƒ}ƒeƒŠƒAƒ‹‚ÌƒXƒyƒLƒ…ƒ‰ƒJƒ‰[‚ğİ’è‚·‚é
extern	COLOR_F		MV1GetMaterialSpcColor( 			int MHandle, int MaterialIndex ) ;										// w’è‚Ìƒ}ƒeƒŠƒAƒ‹‚ÌƒXƒyƒLƒ…ƒ‰ƒJƒ‰[‚ğæ“¾‚·‚é
extern	int			MV1SetMaterialEmiColor( 			int MHandle, int MaterialIndex, COLOR_F Color ) ;						// w’è‚Ìƒ}ƒeƒŠƒAƒ‹‚ÌƒGƒ~ƒbƒVƒuƒJƒ‰[‚ğİ’è‚·‚é
extern	COLOR_F		MV1GetMaterialEmiColor( 			int MHandle, int MaterialIndex ) ;										// w’è‚Ìƒ}ƒeƒŠƒAƒ‹‚ÌƒGƒ~ƒbƒVƒuƒJƒ‰[‚ğæ“¾‚·‚é
extern	int			MV1SetMaterialAmbColor( 			int MHandle, int MaterialIndex, COLOR_F Color ) ;						// w’è‚Ìƒ}ƒeƒŠƒAƒ‹‚ÌƒAƒ“ƒrƒGƒ“ƒgƒJƒ‰[‚ğİ’è‚·‚é
extern	COLOR_F		MV1GetMaterialAmbColor( 			int MHandle, int MaterialIndex ) ;										// w’è‚Ìƒ}ƒeƒŠƒAƒ‹‚ÌƒAƒ“ƒrƒGƒ“ƒgƒJƒ‰[‚ğæ“¾‚·‚é
extern	int			MV1SetMaterialSpcPower( 			int MHandle, int MaterialIndex, float Power ) ;							// w’è‚Ìƒ}ƒeƒŠƒAƒ‹‚ÌƒXƒyƒLƒ…ƒ‰‚Ì‹­‚³‚ğİ’è‚·‚é
extern	float		MV1GetMaterialSpcPower( 			int MHandle, int MaterialIndex ) ;										// w’è‚Ìƒ}ƒeƒŠƒAƒ‹‚ÌƒXƒyƒLƒ…ƒ‰‚Ì‹­‚³‚ğæ“¾‚·‚é
extern	int			MV1SetMaterialDifMapTexture(		int MHandle, int MaterialIndex, int TexIndex ) ;						// w’è‚Ìƒ}ƒeƒŠƒAƒ‹‚ÅƒfƒBƒtƒ…[ƒYƒ}ƒbƒv‚Æ‚µ‚Äg—p‚·‚éƒeƒNƒXƒ`ƒƒ‚ğw’è‚·‚é
extern	int			MV1GetMaterialDifMapTexture(		int MHandle, int MaterialIndex ) ;										// w’è‚Ìƒ}ƒeƒŠƒAƒ‹‚ÅƒfƒBƒtƒ…[ƒYƒ}ƒbƒv‚Æ‚µ‚Äg—p‚³‚ê‚Ä‚¢‚éƒeƒNƒXƒ`ƒƒ‚ÌƒCƒ“ƒfƒbƒNƒX‚ğæ“¾‚·‚é
extern	int			MV1SetMaterialSpcMapTexture(		int MHandle, int MaterialIndex, int TexIndex ) ;						// w’è‚Ìƒ}ƒeƒŠƒAƒ‹‚ÅƒXƒyƒLƒ…ƒ‰ƒ}ƒbƒv‚Æ‚µ‚Äg—p‚·‚éƒeƒNƒXƒ`ƒƒ‚ğw’è‚·‚é
extern	int			MV1GetMaterialSpcMapTexture(		int MHandle, int MaterialIndex ) ;										// w’è‚Ìƒ}ƒeƒŠƒAƒ‹‚ÅƒXƒyƒLƒ…ƒ‰ƒ}ƒbƒv‚Æ‚µ‚Äg—p‚³‚ê‚Ä‚¢‚éƒeƒNƒXƒ`ƒƒ‚ÌƒCƒ“ƒfƒbƒNƒX‚ğæ“¾‚·‚é
extern	int			MV1GetMaterialNormalMapTexture(		int MHandle, int MaterialIndex ) ;										// w’è‚Ìƒ}ƒeƒŠƒAƒ‹‚Å–@üƒ}ƒbƒv‚Æ‚µ‚Äg—p‚³‚ê‚Ä‚¢‚éƒeƒNƒXƒ`ƒƒ‚ÌƒCƒ“ƒfƒbƒNƒX‚ğæ“¾‚·‚é
extern	int			MV1SetMaterialDifGradTexture(		int MHandle, int MaterialIndex, int TexIndex ) ;						// w’è‚Ìƒ}ƒeƒŠƒAƒ‹‚ÅƒgƒD[ƒ“ƒŒƒ“ƒ_ƒŠƒ“ƒO‚ÌƒfƒBƒtƒ…[ƒYƒOƒ‰ƒf[ƒVƒ‡ƒ“ƒ}ƒbƒv‚Æ‚µ‚Äg—p‚·‚éƒeƒNƒXƒ`ƒƒ‚ğİ’è‚·‚é
extern	int			MV1GetMaterialDifGradTexture(		int MHandle, int MaterialIndex ) ;										// w’è‚Ìƒ}ƒeƒŠƒAƒ‹‚ÅƒgƒD[ƒ“ƒŒƒ“ƒ_ƒŠƒ“ƒO‚ÌƒfƒBƒtƒ…[ƒYƒOƒ‰ƒf[ƒVƒ‡ƒ“ƒ}ƒbƒv‚Æ‚µ‚Äg—p‚·‚éƒeƒNƒXƒ`ƒƒ‚ğæ“¾‚·‚é
extern	int			MV1SetMaterialSpcGradTexture(		int MHandle, int MaterialIndex, int TexIndex ) ;						// w’è‚Ìƒ}ƒeƒŠƒAƒ‹‚ÅƒgƒD[ƒ“ƒŒƒ“ƒ_ƒŠƒ“ƒO‚ÌƒXƒyƒLƒ…ƒ‰ƒOƒ‰ƒf[ƒVƒ‡ƒ“ƒ}ƒbƒv‚Æ‚µ‚Äg—p‚·‚éƒeƒNƒXƒ`ƒƒ‚ğİ’è‚·‚é
extern	int			MV1GetMaterialSpcGradTexture(		int MHandle, int MaterialIndex ) ;										// w’è‚Ìƒ}ƒeƒŠƒAƒ‹‚ÅƒgƒD[ƒ“ƒŒƒ“ƒ_ƒŠƒ“ƒO‚ÌƒXƒyƒLƒ…ƒ‰ƒOƒ‰ƒf[ƒVƒ‡ƒ“ƒ}ƒbƒv‚Æ‚µ‚Äg—p‚·‚éƒeƒNƒXƒ`ƒƒ‚ğæ“¾‚·‚é
extern	int			MV1SetMaterialSphereMapTexture(		int MHandle, int MaterialIndex, int TexIndex ) ;						// w’è‚Ìƒ}ƒeƒŠƒAƒ‹‚ÅƒgƒD[ƒ“ƒŒƒ“ƒ_ƒŠƒ“ƒO‚ÌƒXƒtƒBƒAƒ}ƒbƒv‚Æ‚µ‚Äg—p‚·‚éƒeƒNƒXƒ`ƒƒ‚ğİ’è‚·‚é
extern	int			MV1GetMaterialSphereMapTexture(		int MHandle, int MaterialIndex ) ;										// w’è‚Ìƒ}ƒeƒŠƒAƒ‹‚ÅƒgƒD[ƒ“ƒŒƒ“ƒ_ƒŠƒ“ƒO‚ÌƒXƒtƒBƒAƒ}ƒbƒv‚Æ‚µ‚Äg—p‚·‚éƒeƒNƒXƒ`ƒƒ‚ğæ“¾‚·‚é
extern	int			MV1SetMaterialDifGradBlendTypeAll(	int MHandle,                    int BlendType ) ;						// ‘S‚Ä‚Ìƒ}ƒeƒŠƒAƒ‹‚ÌƒgƒD[ƒ“ƒŒƒ“ƒ_ƒŠƒ“ƒO‚Åg—p‚·‚éƒfƒBƒtƒ…[ƒYƒOƒ‰ƒf[ƒVƒ‡ƒ“ƒ}ƒbƒv‚ÆƒfƒBƒtƒ…[ƒYƒJƒ‰[‚Ì‡¬•û–@‚ğİ’è‚·‚é( DX_MATERIAL_BLENDTYPE_ADDITIVE ‚È‚Ç )
extern	int			MV1SetMaterialDifGradBlendType(		int MHandle, int MaterialIndex, int BlendType ) ;						// w’è‚Ìƒ}ƒeƒŠƒAƒ‹‚ÌƒgƒD[ƒ“ƒŒƒ“ƒ_ƒŠƒ“ƒO‚Åg—p‚·‚éƒfƒBƒtƒ…[ƒYƒOƒ‰ƒf[ƒVƒ‡ƒ“ƒ}ƒbƒv‚ÆƒfƒBƒtƒ…[ƒYƒJƒ‰[‚Ì‡¬•û–@‚ğİ’è‚·‚é( DX_MATERIAL_BLENDTYPE_ADDITIVE ‚È‚Ç )
extern	int			MV1GetMaterialDifGradBlendType(		int MHandle, int MaterialIndex ) ;										// w’è‚Ìƒ}ƒeƒŠƒAƒ‹‚ÌƒgƒD[ƒ“ƒŒƒ“ƒ_ƒŠƒ“ƒO‚Åg—p‚·‚éƒfƒBƒtƒ…[ƒYƒOƒ‰ƒf[ƒVƒ‡ƒ“ƒ}ƒbƒv‚ÆƒfƒBƒtƒ…[ƒYƒJƒ‰[‚Ì‡¬•û–@‚ğæ“¾‚·‚é( DX_MATERIAL_BLENDTYPE_ADDITIVE ‚È‚Ç )
extern	int			MV1SetMaterialSpcGradBlendTypeAll(	int MHandle,                    int BlendType ) ;						// ‘S‚Ä‚Ìƒ}ƒeƒŠƒAƒ‹‚ÌƒgƒD[ƒ“ƒŒƒ“ƒ_ƒŠƒ“ƒO‚Åg—p‚·‚éƒXƒyƒLƒ…ƒ‰ƒOƒ‰ƒf[ƒVƒ‡ƒ“ƒ}ƒbƒv‚ÆƒXƒyƒLƒ…ƒ‰ƒJƒ‰[‚Ì‡¬•û–@‚ğİ’è‚·‚é( DX_MATERIAL_BLENDTYPE_ADDITIVE ‚È‚Ç )
extern	int			MV1SetMaterialSpcGradBlendType(		int MHandle, int MaterialIndex, int BlendType ) ;						// w’è‚Ìƒ}ƒeƒŠƒAƒ‹‚ÌƒgƒD[ƒ“ƒŒƒ“ƒ_ƒŠƒ“ƒO‚Åg—p‚·‚éƒXƒyƒLƒ…ƒ‰ƒOƒ‰ƒf[ƒVƒ‡ƒ“ƒ}ƒbƒv‚ÆƒXƒyƒLƒ…ƒ‰ƒJƒ‰[‚Ì‡¬•û–@‚ğİ’è‚·‚é( DX_MATERIAL_BLENDTYPE_ADDITIVE ‚È‚Ç )
extern	int			MV1GetMaterialSpcGradBlendType(		int MHandle, int MaterialIndex ) ;										// w’è‚Ìƒ}ƒeƒŠƒAƒ‹‚ÌƒgƒD[ƒ“ƒŒƒ“ƒ_ƒŠƒ“ƒO‚Åg—p‚·‚éƒXƒyƒLƒ…ƒ‰ƒOƒ‰ƒf[ƒVƒ‡ƒ“ƒ}ƒbƒv‚ÆƒXƒyƒLƒ…ƒ‰ƒJƒ‰[‚Ì‡¬•û–@‚ğæ“¾‚·‚é( DX_MATERIAL_BLENDTYPE_ADDITIVE ‚È‚Ç )
extern	int			MV1SetMaterialSphereMapBlendTypeAll( int MHandle,                   int BlendType ) ;						// ‘S‚Ä‚Ìƒ}ƒeƒŠƒAƒ‹‚ÌƒgƒD[ƒ“ƒŒƒ“ƒ_ƒŠƒ“ƒO‚Åg—p‚·‚éƒXƒtƒBƒAƒ}ƒbƒv‚Ì‡¬•û–@‚ğİ’è‚·‚é( DX_MATERIAL_BLENDTYPE_ADDITIVE ‚È‚Ç )
extern	int			MV1SetMaterialSphereMapBlendType(	int MHandle, int MaterialIndex, int BlendType ) ;						// w’è‚Ìƒ}ƒeƒŠƒAƒ‹‚ÌƒgƒD[ƒ“ƒŒƒ“ƒ_ƒŠƒ“ƒO‚Åg—p‚·‚éƒXƒtƒBƒAƒ}ƒbƒv‚Ì‡¬•û–@‚ğİ’è‚·‚é( DX_MATERIAL_BLENDTYPE_ADDITIVE ‚È‚Ç )
extern	int			MV1GetMaterialSphereMapBlendType(	int MHandle, int MaterialIndex ) ;										// w’è‚Ìƒ}ƒeƒŠƒAƒ‹‚ÌƒgƒD[ƒ“ƒŒƒ“ƒ_ƒŠƒ“ƒO‚Åg—p‚·‚éƒXƒtƒBƒAƒ}ƒbƒv‚Ì‡¬•û–@‚ğæ“¾‚·‚é( DX_MATERIAL_BLENDTYPE_ADDITIVE ‚È‚Ç )
extern	int			MV1SetMaterialOutLineWidthAll(		int MHandle,                    float Width ) ;							// ‘S‚Ä‚Ìƒ}ƒeƒŠƒAƒ‹‚ÌƒgƒD[ƒ“ƒŒƒ“ƒ_ƒŠƒ“ƒO‚Åg—p‚·‚é—ÖŠsü‚Ì‘¾‚³‚ğİ’è‚·‚é
extern	int			MV1SetMaterialOutLineWidth(			int MHandle, int MaterialIndex, float Width ) ;							// w’è‚Ìƒ}ƒeƒŠƒAƒ‹‚ÌƒgƒD[ƒ“ƒŒƒ“ƒ_ƒŠƒ“ƒO‚Åg—p‚·‚é—ÖŠsü‚Ì‘¾‚³‚ğİ’è‚·‚é
extern	float		MV1GetMaterialOutLineWidth(			int MHandle, int MaterialIndex ) ;										// w’è‚Ìƒ}ƒeƒŠƒAƒ‹‚ÌƒgƒD[ƒ“ƒŒƒ“ƒ_ƒŠƒ“ƒO‚Åg—p‚·‚é—ÖŠsü‚Ì‘¾‚³‚ğæ“¾‚·‚é
extern	int			MV1SetMaterialOutLineDotWidthAll(	int MHandle,                    float Width ) ;							// ‘S‚Ä‚Ìƒ}ƒeƒŠƒAƒ‹‚ÌƒgƒD[ƒ“ƒŒƒ“ƒ_ƒŠƒ“ƒO‚Åg—p‚·‚é—ÖŠsü‚Ìƒhƒbƒg’PˆÊ‚Ì‘¾‚³‚ğİ’è‚·‚é
extern	int			MV1SetMaterialOutLineDotWidth(		int MHandle, int MaterialIndex, float Width ) ;							// w’è‚Ìƒ}ƒeƒŠƒAƒ‹‚ÌƒgƒD[ƒ“ƒŒƒ“ƒ_ƒŠƒ“ƒO‚Åg—p‚·‚é—ÖŠsü‚Ìƒhƒbƒg’PˆÊ‚Ì‘¾‚³‚ğİ’è‚·‚é
extern	float		MV1GetMaterialOutLineDotWidth(		int MHandle, int MaterialIndex ) ;										// w’è‚Ìƒ}ƒeƒŠƒAƒ‹‚ÌƒgƒD[ƒ“ƒŒƒ“ƒ_ƒŠƒ“ƒO‚Åg—p‚·‚é—ÖŠsü‚Ìƒhƒbƒg’PˆÊ‚Ì‘¾‚³‚ğæ“¾‚·‚é
extern	int			MV1SetMaterialOutLineColorAll(		int MHandle,                    COLOR_F Color ) ;						// ‘S‚Ä‚Ìƒ}ƒeƒŠƒAƒ‹‚ÌƒgƒD[ƒ“ƒŒƒ“ƒ_ƒŠƒ“ƒO‚Åg—p‚·‚é—ÖŠsü‚ÌF‚ğİ’è‚·‚é
extern	int			MV1SetMaterialOutLineColor(			int MHandle, int MaterialIndex, COLOR_F Color ) ;						// w’è‚Ìƒ}ƒeƒŠƒAƒ‹‚ÌƒgƒD[ƒ“ƒŒƒ“ƒ_ƒŠƒ“ƒO‚Åg—p‚·‚é—ÖŠsü‚ÌF‚ğİ’è‚·‚é
extern	COLOR_F		MV1GetMaterialOutLineColor(			int MHandle, int MaterialIndex ) ;										// w’è‚Ìƒ}ƒeƒŠƒAƒ‹‚ÌƒgƒD[ƒ“ƒŒƒ“ƒ_ƒŠƒ“ƒO‚Åg—p‚·‚é—ÖŠsü‚ÌF‚ğæ“¾‚·‚é
extern	int			MV1SetMaterialDrawBlendModeAll(		int MHandle,                    int BlendMode ) ;						// ‘S‚Ä‚Ìƒ}ƒeƒŠƒAƒ‹‚Ì•`‰æƒuƒŒƒ“ƒhƒ‚[ƒh‚ğİ’è‚·‚é( DX_BLENDMODE_ALPHA “™ )
extern	int			MV1SetMaterialDrawBlendMode(		int MHandle, int MaterialIndex, int BlendMode ) ;						// w’è‚Ìƒ}ƒeƒŠƒAƒ‹‚Ì•`‰æƒuƒŒƒ“ƒhƒ‚[ƒh‚ğİ’è‚·‚é( DX_BLENDMODE_ALPHA “™ )
extern	int			MV1GetMaterialDrawBlendMode(		int MHandle, int MaterialIndex ) ;										// w’è‚Ìƒ}ƒeƒŠƒAƒ‹‚Ì•`‰æƒuƒŒƒ“ƒhƒ‚[ƒh‚ğæ“¾‚·‚é( DX_BLENDMODE_ALPHA “™ )
extern	int			MV1SetMaterialDrawBlendParamAll(	int MHandle,                    int BlendParam ) ;						// ‘S‚Ä‚Ìƒ}ƒeƒŠƒAƒ‹‚Ì•`‰æƒuƒŒƒ“ƒhƒpƒ‰ƒ[ƒ^‚ğİ’è‚·‚é
extern	int			MV1SetMaterialDrawBlendParam(		int MHandle, int MaterialIndex, int BlendParam ) ;						// w’è‚Ìƒ}ƒeƒŠƒAƒ‹‚Ì•`‰æƒuƒŒƒ“ƒhƒpƒ‰ƒ[ƒ^‚ğİ’è‚·‚é
extern	int			MV1GetMaterialDrawBlendParam(		int MHandle, int MaterialIndex ) ;										// w’è‚Ìƒ}ƒeƒŠƒAƒ‹‚Ì•`‰æƒuƒŒƒ“ƒhƒpƒ‰ƒ[ƒ^‚ğİ’è‚·‚é
extern	int			MV1SetMaterialDrawAlphaTestAll(		int MHandle,                    int Enable, int Mode, int Param ) ;		// ‘S‚Ä‚Ìƒ}ƒeƒŠƒAƒ‹‚Ì•`‰æ‚ÌƒAƒ‹ƒtƒ@ƒeƒXƒg‚Ìİ’è‚ğs‚¤( Enable:ƒ¿ƒeƒXƒg‚ğs‚¤‚©‚Ç‚¤‚©( TRUE:s‚¤  FALSE:s‚í‚È‚¢( ƒfƒtƒHƒ‹ƒg ) ) Mode:ƒeƒXƒgƒ‚[ƒh( DX_CMP_GREATER“™ )  Param:•`‰æƒAƒ‹ƒtƒ@’l‚Æ‚Ì”äŠr‚Ég—p‚·‚é’l( 0`255 ) )
extern	int			MV1SetMaterialDrawAlphaTest(		int MHandle, int MaterialIndex,	int Enable, int Mode, int Param ) ;		// w’è‚Ìƒ}ƒeƒŠƒAƒ‹‚Ì•`‰æ‚ÌƒAƒ‹ƒtƒ@ƒeƒXƒg‚Ìİ’è‚ğs‚¤( Enable:ƒ¿ƒeƒXƒg‚ğs‚¤‚©‚Ç‚¤‚©( TRUE:s‚¤  FALSE:s‚í‚È‚¢( ƒfƒtƒHƒ‹ƒg ) ) Mode:ƒeƒXƒgƒ‚[ƒh( DX_CMP_GREATER“™ )  Param:•`‰æƒAƒ‹ƒtƒ@’l‚Æ‚Ì”äŠr‚Ég—p‚·‚é’l( 0`255 ) )
extern	int			MV1GetMaterialDrawAlphaTestEnable(	int MHandle, int MaterialIndex ) ;										// w’è‚Ìƒ}ƒeƒŠƒAƒ‹‚Ì•`‰æ‚ÌƒAƒ‹ƒtƒ@ƒeƒXƒg‚ğs‚¤‚©‚Ç‚¤‚©‚ğæ“¾‚·‚é( –ß‚è’l  TRUE:ƒAƒ‹ƒtƒ@ƒeƒXƒg‚ğs‚¤  FALSE:ƒAƒ‹ƒtƒ@ƒeƒXƒg‚ğs‚í‚È‚¢ )
extern	int			MV1GetMaterialDrawAlphaTestMode(	int MHandle, int MaterialIndex ) ;										// w’è‚Ìƒ}ƒeƒŠƒAƒ‹‚Ì•`‰æ‚ÌƒAƒ‹ƒtƒ@ƒeƒXƒg‚ÌƒeƒXƒgƒ‚[ƒh‚ğæ“¾‚·‚é( –ß‚è’l  ƒeƒXƒgƒ‚[ƒh( DX_CMP_GREATER“™ ) )
extern	int			MV1GetMaterialDrawAlphaTestParam(	int MHandle, int MaterialIndex ) ;										// w’è‚Ìƒ}ƒeƒŠƒAƒ‹‚Ì•`‰æ‚ÌƒAƒ‹ƒtƒ@ƒeƒXƒg‚Ì•`‰æƒAƒ‹ƒtƒ@’n‚Æ‚Ì”äŠr‚Ég—p‚·‚é’l( 0`255 )‚ğæ“¾‚·‚é

// ƒeƒNƒXƒ`ƒƒŠÖŒW
extern	int			MV1GetTextureNum(					int MHandle ) ;													// ƒeƒNƒXƒ`ƒƒ‚Ì”‚ğæ“¾
extern	const TCHAR *MV1GetTextureName(					int MHandle, int TexIndex ) ;									// ƒeƒNƒXƒ`ƒƒ‚Ì–¼‘O‚ğæ“¾
extern	int			MV1SetTextureColorFilePath(			int MHandle, int TexIndex, const TCHAR *FilePath ) ;			// ƒJƒ‰[ƒeƒNƒXƒ`ƒƒ‚Ìƒtƒ@ƒCƒ‹ƒpƒX‚ğ•ÏX‚·‚é
extern	const TCHAR *MV1GetTextureColorFilePath(		int MHandle, int TexIndex ) ;									// ƒJƒ‰[ƒeƒNƒXƒ`ƒƒ‚Ìƒtƒ@ƒCƒ‹ƒpƒX‚ğæ“¾
extern	int			MV1SetTextureAlphaFilePath(			int MHandle, int TexIndex, const TCHAR *FilePath ) ;			// ƒAƒ‹ƒtƒ@ƒeƒNƒXƒ`ƒƒ‚Ìƒtƒ@ƒCƒ‹ƒpƒX‚ğ•ÏX‚·‚é
extern	const TCHAR *MV1GetTextureAlphaFilePath(		int MHandle, int TexIndex ) ;									// ƒAƒ‹ƒtƒ@ƒeƒNƒXƒ`ƒƒ‚Ìƒtƒ@ƒCƒ‹ƒpƒX‚ğæ“¾
extern	int			MV1SetTextureGraphHandle(			int MHandle, int TexIndex, int GrHandle, int SemiTransFlag ) ;	// ƒeƒNƒXƒ`ƒƒ‚Åg—p‚·‚éƒOƒ‰ƒtƒBƒbƒNƒnƒ“ƒhƒ‹‚ğ•ÏX‚·‚é( GrHandle ‚ğ -1 ‚É‚·‚é‚Æ‰ğœ )
extern	int			MV1GetTextureGraphHandle(			int MHandle, int TexIndex ) ;									// ƒeƒNƒXƒ`ƒƒ‚ÌƒOƒ‰ƒtƒBƒbƒNƒnƒ“ƒhƒ‹‚ğæ“¾‚·‚é
extern	int			MV1SetTextureAddressMode(			int MHandle, int TexIndex, int AddrUMode, int AddrVMode ) ;		// ƒeƒNƒXƒ`ƒƒ‚ÌƒAƒhƒŒƒXƒ‚[ƒh‚ğİ’è‚·‚é( AddUMode ‚Ì’l‚Í DX_TEXADDRESS_WRAP “™ )
extern	int			MV1GetTextureAddressModeU(			int MHandle, int TexIndex ) ;									// ƒeƒNƒXƒ`ƒƒ‚Ì‚t’l‚ÌƒAƒhƒŒƒXƒ‚[ƒh‚ğæ“¾‚·‚é( –ß‚è’l:DX_TEXADDRESS_WRAP “™ )
extern	int			MV1GetTextureAddressModeV(			int MHandle, int TexIndex ) ;									// ƒeƒNƒXƒ`ƒƒ‚Ì‚u’l‚ÌƒAƒhƒŒƒXƒ‚[ƒh‚ğæ“¾‚·‚é( –ß‚è’l:DX_TEXADDRESS_WRAP “™ )
extern	int			MV1GetTextureWidth(					int MHandle, int TexIndex ) ;									// ƒeƒNƒXƒ`ƒƒ‚Ì•‚ğæ“¾‚·‚é
extern	int			MV1GetTextureHeight(				int MHandle, int TexIndex ) ;									// ƒeƒNƒXƒ`ƒƒ‚Ì‚‚³‚ğæ“¾‚·‚é
extern	int			MV1GetTextureSemiTransState(		int MHandle, int TexIndex ) ;									// ƒeƒNƒXƒ`ƒƒ‚É”¼“§–¾—v‘f‚ª‚ ‚é‚©‚Ç‚¤‚©‚ğæ“¾‚·‚é( –ß‚è’l  TRUE:‚ ‚é  FALSE:‚È‚¢ )
extern	int			MV1SetTextureBumpImageFlag(			int MHandle, int TexIndex, int Flag ) ;							// ƒeƒNƒXƒ`ƒƒ‚Åg—p‚µ‚Ä‚¢‚é‰æ‘œ‚ªƒoƒ“ƒvƒ}ƒbƒv‚©‚Ç‚¤‚©‚ğİ’è‚·‚é
extern	int			MV1GetTextureBumpImageFlag(			int MHandle, int TexIndex ) ;									// ƒeƒNƒXƒ`ƒƒ‚ªƒoƒ“ƒvƒ}ƒbƒv‚©‚Ç‚¤‚©‚ğæ“¾‚·‚é( –ß‚è’l  TRUE:ƒoƒ“ƒvƒ}ƒbƒv  FALSE:ˆá‚¤ )
extern	int			MV1SetTextureBumpImageNextPixelLength( int MHandle, int TexIndex, float Length ) ;					// ƒoƒ“ƒvƒ}ƒbƒv‰æ‘œ‚Ìê‡‚Ì—×‚ÌƒsƒNƒZƒ‹‚Æ‚Ì‹——£‚ğİ’è‚·‚é
extern	float		MV1GetTextureBumpImageNextPixelLength( int MHandle, int TexIndex ) ;								// ƒoƒ“ƒvƒ}ƒbƒv‰æ‘œ‚Ìê‡‚Ì—×‚ÌƒsƒNƒZƒ‹‚Æ‚Ì‹——£‚ğæ“¾‚·‚é
extern	int			MV1SetTextureSampleFilterMode(		int MHandle, int TexIndex, int FilterMode ) ;					// ƒeƒNƒXƒ`ƒƒ‚ÌƒtƒBƒ‹ƒ^ƒŠƒ“ƒOƒ‚[ƒh‚ğİ’è‚·‚é
extern	int			MV1GetTextureSampleFilterMode(		int MHandle, int TexIndex ) ;									// ƒeƒNƒXƒ`ƒƒ‚ÌƒtƒBƒ‹ƒ^ƒŠƒ“ƒOƒ‚[ƒh‚ğæ“¾‚·‚é( –ß‚è’l  DX_DRAWMODE_BILINEAR“™ )
extern	int			MV1LoadTexture(						const TCHAR *FilePath ) ;										// ‚R‚cƒ‚ƒfƒ‹‚É“\‚è•t‚¯‚é‚Ì‚ÉŒü‚¢‚½‰æ‘œ‚Ì“Ç‚İ‚İ•û®‚Å‰æ‘œ‚ğ“Ç‚İ‚Ş( –ß‚è’l  -1:ƒGƒ‰[  0ˆÈã:ƒOƒ‰ƒtƒBƒbƒNƒnƒ“ƒhƒ‹ )

// ƒtƒŒ[ƒ€ŠÖŒW
extern	int			MV1GetFrameNum(						int MHandle ) ;															// ƒtƒŒ[ƒ€‚Ì”‚ğæ“¾‚·‚é
extern	int			MV1SearchFrame(						int MHandle, const TCHAR *FrameName ) ;									// ƒtƒŒ[ƒ€‚Ì–¼‘O‚©‚çƒ‚ƒfƒ‹’†‚ÌƒtƒŒ[ƒ€‚ÌƒtƒŒ[ƒ€ƒCƒ“ƒfƒbƒNƒX‚ğæ“¾‚·‚é( –³‚©‚Á‚½ê‡‚Í–ß‚è’l‚ª-1 )
extern	int			MV1SearchFrameChild(				int MHandle, int FrameIndex = -1 , const TCHAR *ChildName = NULL ) ;	// ƒtƒŒ[ƒ€‚Ì–¼‘O‚©‚çw’è‚ÌƒtƒŒ[ƒ€‚ÌqƒtƒŒ[ƒ€‚ÌƒtƒŒ[ƒ€ƒCƒ“ƒfƒbƒNƒX‚ğæ“¾‚·‚é( –¼‘Ow’è”Å )( FrameIndex ‚ğ -1 ‚É‚·‚é‚Æe‚ğ‚½‚È‚¢ƒtƒŒ[ƒ€‚ğ ChildIndex ‚Åw’è‚·‚é )( –³‚©‚Á‚½ê‡‚Í–ß‚è’l‚ª-1 )
extern	const TCHAR *MV1GetFrameName(					int MHandle, int FrameIndex ) ;											// w’è‚ÌƒtƒŒ[ƒ€‚Ì–¼‘O‚ğæ“¾‚·‚é( ƒGƒ‰[‚Ìê‡‚Í–ß‚è’l‚ª NULL )
extern	int			MV1GetFrameName2(					int MHandle, int FrameIndex, TCHAR *StrBuffer ) ;						// w’è‚ÌƒtƒŒ[ƒ€‚Ì–¼‘O‚ğæ“¾‚·‚é( –ß‚è’l   -1:ƒGƒ‰[  -1ˆÈŠO:•¶š—ñ‚ÌƒTƒCƒY )
extern	int			MV1GetFrameParent(					int MHandle, int FrameIndex ) ;											// w’è‚ÌƒtƒŒ[ƒ€‚ÌeƒtƒŒ[ƒ€‚ÌƒCƒ“ƒfƒbƒNƒX‚ğ“¾‚é( e‚ª‚¢‚È‚¢ê‡‚Í -2 ‚ª•Ô‚é )
extern	int			MV1GetFrameChildNum(				int MHandle, int FrameIndex = -1 ) ;									// w’è‚ÌƒtƒŒ[ƒ€‚ÌqƒtƒŒ[ƒ€‚Ì”‚ğæ“¾‚·‚é( FrameIndex ‚ğ -1 ‚É‚·‚é‚Æe‚ğ‚½‚È‚¢ƒtƒŒ[ƒ€‚Ì”‚ª•Ô‚Á‚Ä‚­‚é )
extern	int			MV1GetFrameChild(					int MHandle, int FrameIndex = -1 , int ChildIndex = 0 ) ;				// w’è‚ÌƒtƒŒ[ƒ€‚ÌqƒtƒŒ[ƒ€‚ÌƒtƒŒ[ƒ€ƒCƒ“ƒfƒbƒNƒX‚ğæ“¾‚·‚é( ”Ô†w’è”Å )( FrameIndex ‚ğ -1 ‚É‚·‚é‚Æe‚ğ‚½‚È‚¢ƒtƒŒ[ƒ€‚ğ ChildIndex ‚Åw’è‚·‚é )( ƒGƒ‰[‚Ìê‡‚Í–ß‚è’l‚ª-1 )
extern	VECTOR		MV1GetFramePosition(				int MHandle, int FrameIndex ) ;											// w’è‚ÌƒtƒŒ[ƒ€‚ÌÀ•W‚ğæ“¾‚·‚é
extern	VECTOR_D	MV1GetFramePositionD(				int MHandle, int FrameIndex ) ;											// w’è‚ÌƒtƒŒ[ƒ€‚ÌÀ•W‚ğæ“¾‚·‚é
extern	MATRIX		MV1GetFrameBaseLocalMatrix(			int MHandle, int FrameIndex ) ;											// w’è‚ÌƒtƒŒ[ƒ€‚Ì‰Šúó‘Ô‚Å‚ÌÀ•W•ÏŠ·s—ñ‚ğæ“¾‚·‚é
extern	MATRIX_D	MV1GetFrameBaseLocalMatrixD(		int MHandle, int FrameIndex ) ;											// w’è‚ÌƒtƒŒ[ƒ€‚Ì‰Šúó‘Ô‚Å‚ÌÀ•W•ÏŠ·s—ñ‚ğæ“¾‚·‚é
extern	MATRIX		MV1GetFrameLocalMatrix(				int MHandle, int FrameIndex ) ;											// w’è‚ÌƒtƒŒ[ƒ€‚ÌÀ•W•ÏŠ·s—ñ‚ğæ“¾‚·‚é
extern	MATRIX_D	MV1GetFrameLocalMatrixD(			int MHandle, int FrameIndex ) ;											// w’è‚ÌƒtƒŒ[ƒ€‚ÌÀ•W•ÏŠ·s—ñ‚ğæ“¾‚·‚é
extern	MATRIX		MV1GetFrameLocalWorldMatrix(		int MHandle, int FrameIndex ) ;											// w’è‚ÌƒtƒŒ[ƒ€‚Ìƒ[ƒJƒ‹À•W‚©‚çƒ[ƒ‹ƒhÀ•W‚É•ÏŠ·‚·‚és—ñ‚ğ“¾‚é
extern	MATRIX_D	MV1GetFrameLocalWorldMatrixD(		int MHandle, int FrameIndex ) ;											// w’è‚ÌƒtƒŒ[ƒ€‚Ìƒ[ƒJƒ‹À•W‚©‚çƒ[ƒ‹ƒhÀ•W‚É•ÏŠ·‚·‚és—ñ‚ğ“¾‚é
extern	int			MV1SetFrameUserLocalMatrix(			int MHandle, int FrameIndex, MATRIX   Matrix ) ;						// w’è‚ÌƒtƒŒ[ƒ€‚ÌÀ•W•ÏŠ·s—ñ( ƒ[ƒJƒ‹s—ñ )‚ğİ’è‚·‚é
extern	int			MV1SetFrameUserLocalMatrixD(		int MHandle, int FrameIndex, MATRIX_D Matrix ) ;						// w’è‚ÌƒtƒŒ[ƒ€‚ÌÀ•W•ÏŠ·s—ñ( ƒ[ƒJƒ‹s—ñ )‚ğİ’è‚·‚é
extern	int			MV1ResetFrameUserLocalMatrix(		int MHandle, int FrameIndex ) ;											// w’è‚ÌƒtƒŒ[ƒ€‚ÌÀ•W•ÏŠ·s—ñ( ƒ[ƒJƒ‹s—ñ )‚ğƒfƒtƒHƒ‹ƒg‚É–ß‚·
extern	int			MV1SetFrameUserLocalWorldMatrix(	int MHandle, int FrameIndex, MATRIX   Matrix ) ;						// w’è‚ÌƒtƒŒ[ƒ€‚ÌÀ•W•ÏŠ·s—ñ( ƒ[ƒJƒ‹À•W‚©‚çƒ[ƒ‹ƒhÀ•W‚É•ÏŠ·‚·‚és—ñ )‚ğİ’è‚·‚é
extern	int			MV1SetFrameUserLocalWorldMatrixD(	int MHandle, int FrameIndex, MATRIX_D Matrix ) ;						// w’è‚ÌƒtƒŒ[ƒ€‚ÌÀ•W•ÏŠ·s—ñ( ƒ[ƒJƒ‹À•W‚©‚çƒ[ƒ‹ƒhÀ•W‚É•ÏŠ·‚·‚és—ñ )‚ğİ’è‚·‚é
extern	int			MV1ResetFrameUserLocalWorldMatrix(	int MHandle, int FrameIndex ) ;											// w’è‚ÌƒtƒŒ[ƒ€‚ÌÀ•W•ÏŠ·s—ñ( ƒ[ƒJƒ‹À•W‚©‚çƒ[ƒ‹ƒhÀ•W‚É•ÏŠ·‚·‚és—ñ )‚ğƒfƒtƒHƒ‹ƒg‚É–ß‚·
extern	VECTOR		MV1GetFrameMaxVertexLocalPosition(	int MHandle, int FrameIndex ) ;											// w’è‚ÌƒtƒŒ[ƒ€‚ª‚ÂƒƒbƒVƒ…’¸“_‚Ìƒ[ƒJƒ‹À•W‚Å‚ÌÅ‘å’l‚ğ“¾‚é
extern	VECTOR_D	MV1GetFrameMaxVertexLocalPositionD(	int MHandle, int FrameIndex ) ;											// w’è‚ÌƒtƒŒ[ƒ€‚ª‚ÂƒƒbƒVƒ…’¸“_‚Ìƒ[ƒJƒ‹À•W‚Å‚ÌÅ‘å’l‚ğ“¾‚é
extern	VECTOR		MV1GetFrameMinVertexLocalPosition(	int MHandle, int FrameIndex ) ;											// w’è‚ÌƒtƒŒ[ƒ€‚ª‚ÂƒƒbƒVƒ…’¸“_‚Ìƒ[ƒJƒ‹À•W‚Å‚ÌÅ¬’l‚ğ“¾‚é
extern	VECTOR_D	MV1GetFrameMinVertexLocalPositionD(	int MHandle, int FrameIndex ) ;											// w’è‚ÌƒtƒŒ[ƒ€‚ª‚ÂƒƒbƒVƒ…’¸“_‚Ìƒ[ƒJƒ‹À•W‚Å‚ÌÅ¬’l‚ğ“¾‚é
extern	VECTOR		MV1GetFrameAvgVertexLocalPosition(	int MHandle, int FrameIndex ) ;											// w’è‚ÌƒtƒŒ[ƒ€‚ª‚ÂƒƒbƒVƒ…’¸“_‚Ìƒ[ƒJƒ‹À•W‚Å‚Ì•½‹Ï’l‚ğ“¾‚é
extern	VECTOR_D	MV1GetFrameAvgVertexLocalPositionD(	int MHandle, int FrameIndex ) ;											// w’è‚ÌƒtƒŒ[ƒ€‚ª‚ÂƒƒbƒVƒ…’¸“_‚Ìƒ[ƒJƒ‹À•W‚Å‚Ì•½‹Ï’l‚ğ“¾‚é
extern	int			MV1GetFrameTriangleNum(				int MHandle, int FrameIndex ) ;											// w’è‚ÌƒtƒŒ[ƒ€‚ÉŠÜ‚Ü‚ê‚éƒ|ƒŠƒSƒ“‚Ì”‚ğæ“¾‚·‚é
extern	int			MV1GetFrameMeshNum(					int MHandle, int FrameIndex ) ;											// w’è‚ÌƒtƒŒ[ƒ€‚ª‚ÂƒƒbƒVƒ…‚Ì”‚ğæ“¾‚·‚é
extern	int			MV1GetFrameMesh(					int MHandle, int FrameIndex, int Index ) ;								// w’è‚ÌƒtƒŒ[ƒ€‚ª‚ÂƒƒbƒVƒ…‚ÌƒƒbƒVƒ…ƒCƒ“ƒfƒbƒNƒX‚ğæ“¾‚·‚é
extern	int			MV1SetFrameVisible(					int MHandle, int FrameIndex, int VisibleFlag ) ;						// w’è‚ÌƒtƒŒ[ƒ€‚Ì•\¦A”ñ•\¦ó‘Ô‚ğ•ÏX‚·‚é( TRUE:•\¦  FALSE:”ñ•\¦ )
extern	int			MV1GetFrameVisible(					int MHandle, int FrameIndex ) ;											// w’è‚ÌƒtƒŒ[ƒ€‚Ì•\¦A”ñ•\¦ó‘Ô‚ğæ“¾‚·‚é( TRUE:•\¦  FALSE:”ñ•\¦ )
extern	int			MV1SetFrameDifColorScale(			int MHandle, int FrameIndex, COLOR_F Scale ) ;							// w’è‚ÌƒtƒŒ[ƒ€‚ÌƒfƒBƒtƒ…[ƒYƒJƒ‰[‚ÌƒXƒP[ƒ‹’l‚ğİ’è‚·‚é( ƒfƒtƒHƒ‹ƒg’l‚Í 1.0f )
extern	int			MV1SetFrameSpcColorScale(			int MHandle, int FrameIndex, COLOR_F Scale ) ;							// w’è‚ÌƒtƒŒ[ƒ€‚ÌƒXƒyƒLƒ…ƒ‰ƒJƒ‰[‚ÌƒXƒP[ƒ‹’l‚ğİ’è‚·‚é( ƒfƒtƒHƒ‹ƒg’l‚Í 1.0f )
extern	int			MV1SetFrameEmiColorScale(			int MHandle, int FrameIndex, COLOR_F Scale ) ;							// w’è‚ÌƒtƒŒ[ƒ€‚ÌƒGƒ~ƒbƒVƒuƒJƒ‰[‚ÌƒXƒP[ƒ‹’l‚ğİ’è‚·‚é( ƒfƒtƒHƒ‹ƒg’l‚Í 1.0f )
extern	int			MV1SetFrameAmbColorScale(			int MHandle, int FrameIndex, COLOR_F Scale ) ;							// w’è‚ÌƒtƒŒ[ƒ€‚ÌƒAƒ“ƒrƒGƒ“ƒgƒJƒ‰[‚ÌƒXƒP[ƒ‹’l‚ğİ’è‚·‚é( ƒfƒtƒHƒ‹ƒg’l‚Í 1.0f )
extern	COLOR_F		MV1GetFrameDifColorScale(			int MHandle, int FrameIndex ) ;											// w’è‚ÌƒtƒŒ[ƒ€‚ÌƒfƒBƒtƒ…[ƒYƒJƒ‰[‚ÌƒXƒP[ƒ‹’l‚ğæ“¾‚·‚é( ƒfƒtƒHƒ‹ƒg’l‚Í 1.0f )
extern	COLOR_F		MV1GetFrameSpcColorScale(			int MHandle, int FrameIndex ) ;											// w’è‚ÌƒtƒŒ[ƒ€‚ÌƒXƒyƒLƒ…ƒ‰ƒJƒ‰[‚ÌƒXƒP[ƒ‹’l‚ğæ“¾‚·‚é( ƒfƒtƒHƒ‹ƒg’l‚Í 1.0f )
extern	COLOR_F		MV1GetFrameEmiColorScale(			int MHandle, int FrameIndex ) ;											// w’è‚ÌƒtƒŒ[ƒ€‚ÌƒGƒ~ƒbƒVƒuƒJƒ‰[‚ÌƒXƒP[ƒ‹’l‚ğæ“¾‚·‚é( ƒfƒtƒHƒ‹ƒg’l‚Í 1.0f )
extern	COLOR_F		MV1GetFrameAmbColorScale(			int MHandle, int FrameIndex ) ;											// w’è‚ÌƒtƒŒ[ƒ€‚ÌƒAƒ“ƒrƒGƒ“ƒgƒJƒ‰[‚ÌƒXƒP[ƒ‹’l‚ğæ“¾‚·‚é( ƒfƒtƒHƒ‹ƒg’l‚Í 1.0f )
extern	int			MV1GetFrameSemiTransState(			int MHandle, int FrameIndex ) ;											// w’è‚ÌƒtƒŒ[ƒ€‚É”¼“§–¾—v‘f‚ª‚ ‚é‚©‚Ç‚¤‚©‚ğæ“¾‚·‚é( –ß‚è’l TRUE:‚ ‚é  FALSE:‚È‚¢ )
extern	int			MV1SetFrameOpacityRate(				int MHandle, int FrameIndex, float Rate ) ;								// w’è‚ÌƒtƒŒ[ƒ€‚Ì•s“§–¾“x‚ğİ’è‚·‚é( •s“§–¾ 1.0f ` “§–¾ 0.0f )
extern	float		MV1GetFrameOpacityRate(				int MHandle, int FrameIndex ) ;											// w’è‚ÌƒtƒŒ[ƒ€‚Ì•s“§–¾“x‚ğæ“¾‚·‚é( •s“§–¾ 1.0f ` “§–¾ 0.0f )
extern	int			MV1SetFrameBaseVisible(				int MHandle, int FrameIndex, int VisibleFlag ) ;						// w’è‚ÌƒtƒŒ[ƒ€‚Ì‰Šú•\¦ó‘Ô‚ğİ’è‚·‚é( TRUE:•\¦  FALSE:”ñ•\¦ )
extern	int			MV1GetFrameBaseVisible(				int MHandle, int FrameIndex ) ;											// w’è‚ÌƒtƒŒ[ƒ€‚Ì‰Šú•\¦ó‘Ô‚ğæ“¾‚·‚é( TRUE:•\¦  FALSE:”ñ•\¦ )
extern	int			MV1SetFrameTextureAddressTransform( int MHandle, int FrameIndex, float TransU, float TransV, float ScaleU, float ScaleV, float RotCenterU, float RotCenterV, float Rotate ) ;	// w’è‚ÌƒtƒŒ[ƒ€‚ÌƒeƒNƒXƒ`ƒƒÀ•W•ÏŠ·ƒpƒ‰ƒ[ƒ^‚ğİ’è‚·‚é
extern	int			MV1SetFrameTextureAddressTransformMatrix( int MHandle, int FrameIndex, MATRIX Matrix ) ;					// w’è‚ÌƒtƒŒ[ƒ€‚ÌƒeƒNƒXƒ`ƒƒÀ•W•ÏŠ·s—ñ‚ğƒZƒbƒg‚·‚é
extern	int			MV1ResetFrameTextureAddressTransform( int MHandle, int FrameIndex ) ;										// w’è‚ÌƒtƒŒ[ƒ€‚ÌƒeƒNƒXƒ`ƒƒÀ•W•ÏŠ·ƒpƒ‰ƒ[ƒ^‚ğƒŠƒZƒbƒg‚·‚é

// ƒƒbƒVƒ…ŠÖŒW
extern	int			MV1GetMeshNum(						int MHandle ) ;															// ƒ‚ƒfƒ‹‚ÉŠÜ‚Ü‚ê‚éƒƒbƒVƒ…‚Ì”‚ğæ“¾‚·‚é
extern	int			MV1GetMeshMaterial(					int MHandle, int MeshIndex ) ;											// w’èƒƒbƒVƒ…‚ªg—p‚µ‚Ä‚¢‚éƒ}ƒeƒŠƒAƒ‹‚ÌƒCƒ“ƒfƒbƒNƒX‚ğæ“¾‚·‚é
extern	int			MV1GetMeshTriangleNum(				int MHandle, int MeshIndex ) ;											// w’èƒƒbƒVƒ…‚ÉŠÜ‚Ü‚ê‚éOŠpŒ`ƒ|ƒŠƒSƒ“‚Ì”‚ğæ“¾‚·‚é
extern	int			MV1SetMeshVisible(					int MHandle, int MeshIndex, int VisibleFlag ) ;							// w’èƒƒbƒVƒ…‚Ì•\¦A”ñ•\¦ó‘Ô‚ğ•ÏX‚·‚é( TRUE:•\¦  FALSE:”ñ•\¦ )
extern	int			MV1GetMeshVisible(					int MHandle, int MeshIndex ) ;											// w’èƒƒbƒVƒ…‚Ì•\¦A”ñ•\¦ó‘Ô‚ğæ“¾‚·‚é( TRUE:•\¦  FALSE:”ñ•\¦ )
extern	int			MV1SetMeshDifColorScale(			int MHandle, int MeshIndex, COLOR_F Scale ) ;							// w’è‚ÌƒƒbƒVƒ…‚ÌƒfƒBƒtƒ…[ƒYƒJƒ‰[‚ÌƒXƒP[ƒ‹’l‚ğİ’è‚·‚é( ƒfƒtƒHƒ‹ƒg’l‚Í 1.0f )
extern	int			MV1SetMeshSpcColorScale( 			int MHandle, int MeshIndex, COLOR_F Scale ) ;							// w’è‚ÌƒƒbƒVƒ…‚ÌƒXƒyƒLƒ…ƒ‰ƒJƒ‰[‚ÌƒXƒP[ƒ‹’l‚ğİ’è‚·‚é( ƒfƒtƒHƒ‹ƒg’l‚Í 1.0f )
extern	int			MV1SetMeshEmiColorScale( 			int MHandle, int MeshIndex, COLOR_F Scale ) ;							// w’è‚ÌƒƒbƒVƒ…‚ÌƒGƒ~ƒbƒVƒuƒJƒ‰[‚ÌƒXƒP[ƒ‹’l‚ğİ’è‚·‚é( ƒfƒtƒHƒ‹ƒg’l‚Í 1.0f )
extern	int			MV1SetMeshAmbColorScale( 			int MHandle, int MeshIndex, COLOR_F Scale ) ;							// w’è‚ÌƒƒbƒVƒ…‚ÌƒAƒ“ƒrƒGƒ“ƒgƒJƒ‰[‚ÌƒXƒP[ƒ‹’l‚ğİ’è‚·‚é( ƒfƒtƒHƒ‹ƒg’l‚Í 1.0f )
extern	COLOR_F		MV1GetMeshDifColorScale( 			int MHandle, int MeshIndex ) ;											// w’è‚ÌƒƒbƒVƒ…‚ÌƒfƒBƒtƒ…[ƒYƒJƒ‰[‚ÌƒXƒP[ƒ‹’l‚ğæ“¾‚·‚é( ƒfƒtƒHƒ‹ƒg’l‚Í 1.0f )
extern	COLOR_F		MV1GetMeshSpcColorScale( 			int MHandle, int MeshIndex ) ;											// w’è‚ÌƒƒbƒVƒ…‚ÌƒXƒyƒLƒ…ƒ‰ƒJƒ‰[‚ÌƒXƒP[ƒ‹’l‚ğæ“¾‚·‚é( ƒfƒtƒHƒ‹ƒg’l‚Í 1.0f )
extern	COLOR_F		MV1GetMeshEmiColorScale( 			int MHandle, int MeshIndex ) ;											// w’è‚ÌƒƒbƒVƒ…‚ÌƒGƒ~ƒbƒVƒuƒJƒ‰[‚ÌƒXƒP[ƒ‹’l‚ğæ“¾‚·‚é( ƒfƒtƒHƒ‹ƒg’l‚Í 1.0f )
extern	COLOR_F		MV1GetMeshAmbColorScale( 			int MHandle, int MeshIndex ) ;											// w’è‚ÌƒƒbƒVƒ…‚ÌƒAƒ“ƒrƒGƒ“ƒgƒJƒ‰[‚ÌƒXƒP[ƒ‹’l‚ğæ“¾‚·‚é( ƒfƒtƒHƒ‹ƒg’l‚Í 1.0f )
extern	int			MV1SetMeshOpacityRate( 				int MHandle, int MeshIndex, float Rate ) ;								// w’è‚ÌƒƒbƒVƒ…‚Ì•s“§–¾“x‚ğİ’è‚·‚é( •s“§–¾ 1.0f ` “§–¾ 0.0f )
extern	float		MV1GetMeshOpacityRate( 				int MHandle, int MeshIndex ) ;											// w’è‚ÌƒƒbƒVƒ…‚Ì•s“§–¾“x‚ğæ“¾‚·‚é( •s“§–¾ 1.0f ` “§–¾ 0.0f )
extern	int			MV1SetMeshDrawBlendMode( 			int MHandle, int MeshIndex, int BlendMode ) ;							// w’è‚ÌƒƒbƒVƒ…‚Ì•`‰æƒuƒŒƒ“ƒhƒ‚[ƒh‚ğİ’è‚·‚é( DX_BLENDMODE_ALPHA “™ )
extern	int			MV1SetMeshDrawBlendParam( 			int MHandle, int MeshIndex, int BlendParam ) ;							// w’è‚ÌƒƒbƒVƒ…‚Ì•`‰æƒuƒŒƒ“ƒhƒpƒ‰ƒ[ƒ^‚ğİ’è‚·‚é
extern	int			MV1GetMeshDrawBlendMode( 			int MHandle, int MeshIndex ) ;											// w’è‚ÌƒƒbƒVƒ…‚Ì•`‰æƒuƒŒƒ“ƒhƒ‚[ƒh‚ğæ“¾‚·‚é( DX_BLENDMODE_ALPHA “™ )
extern	int			MV1GetMeshDrawBlendParam( 			int MHandle, int MeshIndex ) ;											// w’è‚ÌƒƒbƒVƒ…‚Ì•`‰æƒuƒŒƒ“ƒhƒpƒ‰ƒ[ƒ^‚ğİ’è‚·‚é
extern	int			MV1SetMeshBaseVisible( 				int MHandle, int MeshIndex, int VisibleFlag ) ;							// w’è‚ÌƒƒbƒVƒ…‚Ì‰Šú•\¦ó‘Ô‚ğİ’è‚·‚é( TRUE:•\¦  FALSE:”ñ•\¦ )
extern	int			MV1GetMeshBaseVisible( 				int MHandle, int MeshIndex ) ;											// w’è‚ÌƒƒbƒVƒ…‚Ì‰Šú•\¦ó‘Ô‚ğæ“¾‚·‚é( TRUE:•\¦  FALSE:”ñ•\¦ )
extern	int			MV1SetMeshBackCulling( 				int MHandle, int MeshIndex, int CullingFlag ) ;							// w’è‚ÌƒƒbƒVƒ…‚ÌƒoƒbƒNƒJƒŠƒ“ƒO‚ğs‚¤‚©‚Ç‚¤‚©‚ğİ’è‚·‚é( DX_CULLING_LEFT “™ )
extern	int			MV1GetMeshBackCulling( 				int MHandle, int MeshIndex ) ;											// w’è‚ÌƒƒbƒVƒ…‚ÌƒoƒbƒNƒJƒŠƒ“ƒO‚ğs‚¤‚©‚Ç‚¤‚©‚ğæ“¾‚·‚é( DX_CULLING_LEFT “™ )
extern	VECTOR		MV1GetMeshMaxPosition( 				int MHandle, int MeshIndex ) ;											// w’è‚ÌƒƒbƒVƒ…‚ÉŠÜ‚Ü‚ê‚éƒ|ƒŠƒSƒ“‚ÌÅ‘åƒ[ƒJƒ‹À•W‚ğæ“¾‚·‚é
extern	VECTOR		MV1GetMeshMinPosition( 				int MHandle, int MeshIndex ) ;											// w’è‚ÌƒƒbƒVƒ…‚ÉŠÜ‚Ü‚ê‚éƒ|ƒŠƒSƒ“‚ÌÅ¬ƒ[ƒJƒ‹À•W‚ğæ“¾‚·‚é
extern	int			MV1GetMeshTListNum( 				int MHandle, int MeshIndex ) ;											// w’è‚ÌƒƒbƒVƒ…‚ÉŠÜ‚Ü‚ê‚éƒgƒ‰ƒCƒAƒ“ƒOƒ‹ƒŠƒXƒg‚Ì”‚ğæ“¾‚·‚é
extern	int			MV1GetMeshTList( 					int MHandle, int MeshIndex, int Index ) ;								// w’è‚ÌƒƒbƒVƒ…‚ÉŠÜ‚Ü‚ê‚éƒgƒ‰ƒCƒAƒ“ƒOƒ‹ƒŠƒXƒg‚ÌƒCƒ“ƒfƒbƒNƒX‚ğæ“¾‚·‚é
extern	int			MV1GetMeshSemiTransState( 			int MHandle, int MeshIndex ) ;											// w’è‚ÌƒƒbƒVƒ…‚É”¼“§–¾—v‘f‚ª‚ ‚é‚©‚Ç‚¤‚©‚ğæ“¾‚·‚é( –ß‚è’l TRUE:‚ ‚é  FALSE:‚È‚¢ )
extern	int			MV1SetMeshUseVertDifColor( 			int MHandle, int MeshIndex, int UseFlag ) ;								// w’è‚ÌƒƒbƒVƒ…‚Ì’¸“_ƒfƒBƒtƒ…[ƒYƒJƒ‰[‚ğƒ}ƒeƒŠƒAƒ‹‚ÌƒfƒBƒtƒ…[ƒYƒJƒ‰[‚Ì‘ã‚í‚è‚Ég—p‚·‚é‚©‚Ç‚¤‚©‚ğİ’è‚·‚é( TRUE:ƒ}ƒeƒŠƒAƒ‹ƒJƒ‰[‚Ì‘ã‚í‚è‚Ég—p‚·‚é  FALSE:ƒ}ƒeƒŠƒAƒ‹ƒJƒ‰[‚ğg—p‚·‚é )
extern	int			MV1SetMeshUseVertSpcColor( 			int MHandle, int MeshIndex, int UseFlag ) ;								// w’è‚ÌƒƒbƒVƒ…‚Ì’¸“_ƒXƒyƒLƒ…ƒ‰ƒJƒ‰[‚ğƒ}ƒeƒŠƒAƒ‹‚ÌƒXƒyƒLƒ…ƒ‰ƒJƒ‰[‚Ì‘ã‚í‚è‚Ég—p‚·‚é‚©‚Ç‚¤‚©‚ğİ’è‚·‚é( TRUE:ƒ}ƒeƒŠƒAƒ‹ƒJƒ‰[‚Ì‘ã‚í‚è‚Ég—p‚·‚é  FALSE:ƒ}ƒeƒŠƒAƒ‹ƒJƒ‰[‚ğg—p‚·‚é )
extern	int			MV1GetMeshUseVertDifColor( 			int MHandle, int MeshIndex ) ;											// w’è‚ÌƒƒbƒVƒ…‚Ì’¸“_ƒfƒBƒtƒ…[ƒYƒJƒ‰[‚ğƒ}ƒeƒŠƒAƒ‹‚ÌƒfƒBƒtƒ…[ƒYƒJƒ‰[‚Ì‘ã‚í‚è‚Ég—p‚·‚é‚©‚Ç‚¤‚©‚Ìİ’è‚ğæ“¾‚·‚é( –ß‚è’l  TRUE:ƒ}ƒeƒŠƒAƒ‹ƒJƒ‰[‚Ì‘ã‚í‚è‚Ég—p‚·‚é  FALSE:ƒ}ƒeƒŠƒAƒ‹ƒJƒ‰[‚ğg—p‚·‚é )
extern	int			MV1GetMeshUseVertSpcColor( 			int MHandle, int MeshIndex ) ;											// w’è‚ÌƒƒbƒVƒ…‚Ì’¸“_ƒXƒyƒLƒ…ƒ‰ƒJƒ‰[‚ğƒ}ƒeƒŠƒAƒ‹‚ÌƒXƒyƒLƒ…ƒ‰ƒJƒ‰[‚Ì‘ã‚í‚è‚Ég—p‚·‚é‚©‚Ç‚¤‚©‚Ìİ’è‚ğæ“¾‚·‚é( –ß‚è’l  TRUE:ƒ}ƒeƒŠƒAƒ‹ƒJƒ‰[‚Ì‘ã‚í‚è‚Ég—p‚·‚é  FALSE:ƒ}ƒeƒŠƒAƒ‹ƒJƒ‰[‚ğg—p‚·‚é )
extern	int			MV1GetMeshShapeFlag(				int MHandle, int MeshIndex ) ;											// w’è‚ÌƒƒbƒVƒ…‚ªƒVƒFƒCƒvƒƒbƒVƒ…‚©‚Ç‚¤‚©‚ğæ“¾‚·‚é( –ß‚è’l TRUE:ƒVƒFƒCƒvƒƒbƒVƒ…  FALSE:’ÊíƒƒbƒVƒ… )

// ƒVƒFƒCƒvŠÖŒW
extern	int			MV1GetShapeNum(						int MHandle ) ;															// ƒ‚ƒfƒ‹‚ÉŠÜ‚Ü‚ê‚éƒVƒFƒCƒv‚Ì”‚ğæ“¾‚·‚é
extern	int			MV1SearchShape(						int MHandle, const TCHAR *ShapeName ) ;									// ƒVƒFƒCƒv‚Ì–¼‘O‚©‚çƒ‚ƒfƒ‹’†‚ÌƒVƒFƒCƒv‚ÌƒVƒFƒCƒvƒCƒ“ƒfƒbƒNƒX‚ğæ“¾‚·‚é( –³‚©‚Á‚½ê‡‚Í–ß‚è’l‚ª-1 )
extern	const TCHAR *MV1GetShapeName(					int MHandle, int ShapeIndex ) ;											// w’èƒVƒFƒCƒv‚Ì–¼‘O‚ğæ“¾‚·‚é
extern	int			MV1GetShapeTargetMeshNum(			int MHandle, int ShapeIndex ) ;											// w’èƒVƒFƒCƒv‚ª‘ÎÛ‚Æ‚µ‚Ä‚¢‚éƒƒbƒVƒ…‚Ì”‚ğæ“¾‚·‚é
extern	int			MV1GetShapeTargetMesh(				int MHandle, int ShapeIndex, int Index ) ;								// w’èƒVƒFƒCƒv‚ª‘ÎÛ‚Æ‚µ‚Ä‚¢‚éƒƒbƒVƒ…‚ÌƒƒbƒVƒ…ƒCƒ“ƒfƒbƒNƒX‚ğæ“¾‚·‚é
extern	int			MV1SetShapeRate(					int MHandle, int ShapeIndex, float Rate ) ;								// w’èƒVƒFƒCƒv‚Ì—LŒø—¦‚ğİ’è‚·‚é( Rate  0.0f:0% ` 1.0f:100% )
extern	float		MV1GetShapeRate(					int MHandle, int ShapeIndex ) ;											// w’èƒVƒFƒCƒv‚Ì—LŒø—¦‚ğæ“¾‚·‚é( –ß‚è’l  0.0f:0% ` 1.0f:100% )

// ƒgƒ‰ƒCƒAƒ“ƒOƒ‹ƒŠƒXƒgŠÖŒW
extern	int			MV1GetTriangleListNum(						int MHandle ) ;																		// ƒ‚ƒfƒ‹‚ÉŠÜ‚Ü‚ê‚éƒgƒ‰ƒCƒAƒ“ƒOƒ‹ƒŠƒXƒg‚Ì”‚ğæ“¾‚·‚é
extern	int			MV1GetTriangleListVertexType(				int MHandle, int TListIndex ) ;														// w’è‚Ìƒgƒ‰ƒCƒAƒ“ƒOƒ‹ƒŠƒXƒg‚Ì’¸“_ƒf[ƒ^ƒ^ƒCƒv‚ğæ“¾‚·‚é( DX_MV1_VERTEX_TYPE_1FRAME “™ )
extern	int			MV1GetTriangleListPolygonNum(				int MHandle, int TListIndex ) ;														// w’è‚Ìƒgƒ‰ƒCƒAƒ“ƒOƒ‹ƒŠƒXƒg‚ÉŠÜ‚Ü‚ê‚éƒ|ƒŠƒSƒ“‚Ì”‚ğæ“¾‚·‚é
extern	int			MV1GetTriangleListVertexNum(				int MHandle, int TListIndex ) ;														// w’è‚Ìƒgƒ‰ƒCƒAƒ“ƒOƒ‹ƒŠƒXƒg‚ÉŠÜ‚Ü‚ê‚é’¸“_ƒf[ƒ^‚Ì”‚ğæ“¾‚·‚é
extern	int			MV1GetTriangleListLocalWorldMatrixNum(		int MHandle, int TListIndex ) ;														// w’è‚Ìƒgƒ‰ƒCƒAƒ“ƒOƒ‹ƒŠƒXƒg‚ªg—p‚·‚éÀ•W•ÏŠ·s—ñ‚Ì”‚ğæ“¾‚·‚é
extern	MATRIX		MV1GetTriangleListLocalWorldMatrix(			int MHandle, int TListIndex, int LWMatrixIndex ) ;									// w’è‚Ìƒgƒ‰ƒCƒAƒ“ƒOƒ‹ƒŠƒXƒg‚ªg—p‚·‚éÀ•W•ÏŠ·s—ñ( ƒ[ƒJƒ‹¨ƒ[ƒ‹ƒh )‚ğæ“¾‚·‚é
extern	int			MV1GetTriangleListPolygonVertexPosition(	int MHandle, int TListIndex, int PolygonIndex, VECTOR *VertexPositionArray = NULL , float *MatrixWeightArray = NULL ) ;	// w’è‚Ìƒgƒ‰ƒCƒAƒ“ƒOƒ‹ƒŠƒXƒg‚Ìw’è‚Ìƒ|ƒŠƒSƒ“‚ªg—p‚µ‚Ä‚¢‚é’¸“_‚ÌÀ•W‚ğæ“¾‚·‚é( –ß‚è’l  ƒGƒ‰[F-1  0ˆÈãFƒ|ƒŠƒSƒ“‚ªg—p‚µ‚Ä‚¢‚é’¸“_‚Ì” )

// ƒRƒŠƒWƒ‡ƒ“ŠÖŒW
extern	int							MV1SetupCollInfo(				int MHandle, int FrameIndex = -1 , int XDivNum = 32 , int YDivNum = 8 , int ZDivNum = 32 ) ;	// ƒRƒŠƒWƒ‡ƒ“î•ñ‚ğ\’z‚·‚é
extern	int							MV1TerminateCollInfo(			int MHandle, int FrameIndex = -1 ) ;															// ƒRƒŠƒWƒ‡ƒ“î•ñ‚ÌŒãn––
extern	int							MV1RefreshCollInfo(				int MHandle, int FrameIndex = -1 ) ;															// ƒRƒŠƒWƒ‡ƒ“î•ñ‚ğXV‚·‚é
extern	MV1_COLL_RESULT_POLY		MV1CollCheck_Line(				int MHandle, int FrameIndex, VECTOR PosStart, VECTOR PosEnd ) ;									// ü‚Æƒ‚ƒfƒ‹‚Ì“–‚½‚è”»’è
extern	MV1_COLL_RESULT_POLY_DIM	MV1CollCheck_LineDim(			int MHandle, int FrameIndex, VECTOR PosStart, VECTOR PosEnd ) ;									// ü‚Æƒ‚ƒfƒ‹‚Ì“–‚½‚è”»’è( –ß‚è’l‚ª MV1_COLL_RESULT_POLY_DIM )
extern	MV1_COLL_RESULT_POLY_DIM	MV1CollCheck_Sphere(			int MHandle, int FrameIndex, VECTOR CenterPos, float r ) ;										// ‹…‚Æƒ‚ƒfƒ‹‚Ì“–‚½‚è”»’è
extern	MV1_COLL_RESULT_POLY_DIM	MV1CollCheck_Capsule(			int MHandle, int FrameIndex, VECTOR Pos1, VECTOR Pos2, float r ) ;								// ƒJƒvƒZƒ‹‚Æƒ‚ƒfƒ‹‚Ì“–‚½‚è”»’è
extern	MV1_COLL_RESULT_POLY_DIM	MV1CollCheck_Triangle(			int MHandle, int FrameIndex, VECTOR Pos1, VECTOR Pos2, VECTOR Pos3 ) ;							// OŠpŒ`‚Æƒ‚ƒfƒ‹‚Ì“–‚½‚è”»’è
extern	MV1_COLL_RESULT_POLY		MV1CollCheck_GetResultPoly(		MV1_COLL_RESULT_POLY_DIM ResultPolyDim, int PolyNo ) ;											// ƒRƒŠƒWƒ‡ƒ“Œ‹‰Êƒ|ƒŠƒSƒ“”z—ñ‚©‚çw’è”Ô†‚Ìƒ|ƒŠƒSƒ“î•ñ‚ğæ“¾‚·‚é
extern	int							MV1CollResultPolyDimTerminate(	MV1_COLL_RESULT_POLY_DIM ResultPolyDim ) ;														// ƒRƒŠƒWƒ‡ƒ“Œ‹‰Êƒ|ƒŠƒSƒ“”z—ñ‚ÌŒãn––‚ğ‚·‚é

// QÆ—pƒƒbƒVƒ…ŠÖŒW
extern	int					MV1SetupReferenceMesh(		int MHandle, int FrameIndex, int IsTransform, int IsPositionOnly = FALSE ) ;						// QÆ—pƒƒbƒVƒ…‚ÌƒZƒbƒgƒAƒbƒv
extern	int					MV1TerminateReferenceMesh(	int MHandle, int FrameIndex, int IsTransform, int IsPositionOnly = FALSE ) ;						// QÆ—pƒƒbƒVƒ…‚ÌŒãn––
extern	int					MV1RefreshReferenceMesh(	int MHandle, int FrameIndex, int IsTransform, int IsPositionOnly = FALSE ) ;						// QÆ—pƒƒbƒVƒ…‚ÌXV
extern	MV1_REF_POLYGONLIST	MV1GetReferenceMesh(		int MHandle, int FrameIndex, int IsTransform, int IsPositionOnly = FALSE ) ;						// QÆ—pƒƒbƒVƒ…‚ğæ“¾‚·‚é

#endif // DX_NON_MODEL

#undef DX_FUNCTION_START
#define DX_FUNCTION_END
#undef DX_FUNCTION_END

#ifndef DX_NON_NAMESPACE

}

#endif // DX_NON_NAMESPACE

// ƒl[ƒ€ƒXƒy[ƒX DxLib ‚ğg—p‚·‚é ------------------------------------------------------
#ifndef DX_NON_NAMESPACE
#ifndef DX_NON_USING_NAMESPACE_DXLIB

using namespace DxLib ;

#endif // DX_NON_USING_NAMESPACE_DXLIB
#endif // DX_NON_NAMESPACE

// ‚c‚wƒ‰ƒCƒuƒ‰ƒŠ“à•”‚Å‚Ì‚İg—p‚·‚éƒwƒbƒ_ƒtƒ@ƒCƒ‹‚ÌƒCƒ“ƒNƒ‹[ƒh -------------------------

#ifdef __DX_MAKE
//	#include "DxStatic.h"
#endif

#endif


