#ifndef MAIN_H
#define MAIN_H

struct RumbleData {
    u8 unk00;
    u8 unk01;
    s16 unk02;
    s16 unk04;
};

struct StructSH8031D9B0 {
    s16 unk00;
    s16 unk02;
    s16 unk04;
    s16 unk06;
    s16 unk08;
    s16 unk0A;
    s16 unk0C;
    s16 unk0E;
};

extern OSThread D_80339210;
extern OSThread gIdleThread;
extern OSThread gMainThread;
extern OSThread gGameLoopThread;
extern OSThread gSoundThread;
#if FEATURE_RUMBLE_PAK_SUPPORT
extern OSThread gRumblePakThread;

extern s32 gRumblePakPfs; // Actually an OSPfs but we don't have that header yet
#endif

extern OSMesgQueue gPIMesgQueue;
extern OSMesgQueue gIntrMesgQueue;
extern OSMesgQueue gSPTaskMesgQueue;
#if FEATURE_RUMBLE_PAK_SUPPORT
extern OSMesgQueue gRumblePakSchedulerMesgQueue;
extern OSMesgQueue gRumbleThreadVIMesgQueue;
#endif
extern OSMesg gDmaMesgBuf[1];
extern OSMesg gPIMesgBuf[32];
extern OSMesg gSIEventMesgBuf[1];
extern OSMesg gIntrMesgBuf[16];
extern OSMesg gUnknownMesgBuf[16];
extern OSIoMesg gDmaIoMesg;
extern OSMesg D_80339BEC;
extern OSMesgQueue gDmaMesgQueue;
extern OSMesgQueue gSIEventMesgQueue;
#if FEATURE_RUMBLE_PAK_SUPPORT
extern OSMesg gRumblePakSchedulerMesgBuf[1];
extern OSMesg gRumbleThreadVIMesgBuf[1];

extern struct RumbleData gRumbleDataQueue[3];
extern struct StructSH8031D9B0 gCurrRumbleSettings;
#endif

extern struct VblankHandler *gVblankHandler1;
extern struct VblankHandler *gVblankHandler2;
extern struct SPTask *gActiveSPTask;
extern u32 gNumVblanks;
extern s8 gResetTimer;
extern s8 D_8032C648;
extern s8 gDebugLevelSelect;
extern s8 D_8032C650;
extern s8 gShowProfiler;
extern s8 gShowDebugText;

void set_vblank_handler(s32 index, struct VblankHandler *handler, OSMesgQueue *queue, OSMesg *msg);
void dispatch_audio_sptask(struct SPTask *spTask);
void send_display_list(struct SPTask *spTask);

#endif // MAIN_H
