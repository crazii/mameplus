#pragma once

#ifndef __C6280_H__
#define __C6280_H__

/* Function prototypes */
WRITE8_HANDLER( c6280_0_w );
WRITE8_HANDLER( c6280_1_w );
READ8_HANDLER( c6280_r );

SND_GET_INFO( c6280 );
#define SOUND_C6280 SND_GET_INFO_NAME( c6280 )

#endif /* __C6280_H__ */
