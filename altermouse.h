#ifndef ALTERMOUSE_H__
#define ALTERMOUSE_H__

#include <Carbon/Carbon.h>
typedef int CGSConnectionID;
CG_EXTERN CGSConnectionID CGSMainConnectionID(void);
CG_EXTERN CGError CGSGetCursorScale(CGSConnectionID cid, float *outScale);
CG_EXTERN CGError CGSSetCursorScale(CGSConnectionID cid, float scale);
CG_EXTERN CGError CGSForceWaitCursorActive(CGSConnectionID cid, bool showWaitCursor);
CG_EXTERN int CGSCurrentCursorSeed(void);

#endif // ALTERMOUSE_H__
