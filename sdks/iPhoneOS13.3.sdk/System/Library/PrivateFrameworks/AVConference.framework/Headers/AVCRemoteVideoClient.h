//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVConferenceXPCClient, CALayer, NSDictionary, NSString, VideoAttributes;
@protocol AVCRemoteVideoClientDelegate, OS_dispatch_queue;

@interface AVCRemoteVideoClient : NSObject
{
    id _delegate;
    long long _streamToken;
    CALayer *_primaryCameraLayer;
    CALayer *_secondaryCameraLayer;
    CALayer *_screenLayer;
    CALayer *_primaryCameraSubLayer;
    CALayer *_secondaryCameraSubLayer;
    CALayer *_screenSubLayer;
    AVConferenceXPCClient *_connection;
    int _activeVideoMode;
    BOOL _hasReceivedFirstFrame;
    BOOL _isVideoPaused;
    BOOL _isMediaStalled;
    BOOL _isVideoDegraded;
    BOOL _isVideoSuspended;
    BOOL _hasReceivedLastFrame;
    BOOL _shouldDisplayVideoInfoLayer;
    VideoAttributes *_remoteScreenAttributes;
    VideoAttributes *_remoteVideoAttributes;
    NSDictionary *_slotsForModes;
    NSString *_connectionTypeString;
    NSObject<OS_dispatch_queue> *_avcRemoteVideoQueue;
}

@property(copy, nonatomic) NSString *connectionTypeString; // @synthesize connectionTypeString=_connectionTypeString;
@property(nonatomic) BOOL shouldDisplayVideoInfoLayer; // @synthesize shouldDisplayVideoInfoLayer=_shouldDisplayVideoInfoLayer;
@property(retain, nonatomic) VideoAttributes *remoteVideoAttributes; // @synthesize remoteVideoAttributes=_remoteVideoAttributes;
@property(retain, nonatomic) VideoAttributes *remoteScreenAttributes; // @synthesize remoteScreenAttributes=_remoteScreenAttributes;
@property(nonatomic) BOOL isVideoPaused; // @synthesize isVideoPaused=_isVideoPaused;
@property(nonatomic) BOOL isMediaStalled; // @synthesize isMediaStalled=_isMediaStalled;
@property(nonatomic) BOOL isVideoSuspended; // @synthesize isVideoSuspended=_isVideoSuspended;
@property(nonatomic) BOOL isVideoDegraded; // @synthesize isVideoDegraded=_isVideoDegraded;
@property(nonatomic) BOOL hasReceivedLastFrame; // @synthesize hasReceivedLastFrame=_hasReceivedLastFrame;
@property(nonatomic) BOOL hasReceivedFirstFrame; // @synthesize hasReceivedFirstFrame=_hasReceivedFirstFrame;
@property(readonly, nonatomic) long long streamToken; // @synthesize streamToken=_streamToken;
- (void)drawText:(id)arg1 inSubLayer:(id)arg2;
- (void)updateConnectionInfoWithLocalInterfaceType:(id)arg1 remoteInterfaceType:(id)arg2;
- (void)insertInfoSubLayerIntoLayer:(id)arg1 videoMode:(int)arg2;
- (void)terminateConnection;
- (void)cleanupSubLayerForMode:(int)arg1;
- (void)setActiveVideoLayerForMode:(int)arg1;
- (id)subLayerForMode:(int)arg1;
- (id )subLayerRefForMode:(int)arg1;
- (void)insertSubLayerInLayer:(id)arg1 videoMode:(int)arg2 videoSlot:(id)arg3;
- (void)remoteVideoServerDidDie;
- (void)releaseQueueForStreamToken:(long long)arg1;
- (void)remoteVideoDidSuspend:(BOOL)arg1 streamToken:(long long)arg2;
- (void)remoteVideoDidDegrade:(BOOL)arg1 streamToken:(long long)arg2;
- (void)remoteMediaDidStall:(BOOL)arg1 streamToken:(long long)arg2;
- (void)remoteVideoDidPause:(BOOL)arg1 streamToken:(long long)arg2;
- (void)remoteVideoAttributesDidChange:(id)arg1 streamToken:(long long)arg2;
- (void)remoteScreenAttributesDidChange:(id)arg1 streamToken:(long long)arg2;
- (void)didReceiveFirstRemoteFrameForStreamToken:(long long)arg1;
- (id)slotForMode:(int)arg1;
- (void)setVideoLayer:(id)arg1 forMode:(int)arg2;
@property(readonly, nonatomic) id <AVCRemoteVideoClientDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dealloc;
- (id)initWithStreamToken:(long long)arg1 delegate:(id)arg2;

@end

