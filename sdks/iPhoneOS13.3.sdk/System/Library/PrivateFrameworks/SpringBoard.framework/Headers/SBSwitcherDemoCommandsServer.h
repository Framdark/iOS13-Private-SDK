//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/BSServiceConnectionListenerDelegate-Protocol.h>
#import <SpringBoard/SBSSwitcherDemoCommandsClientToServerInterface-Protocol.h>

@class BSServiceConnectionListener, FBServiceClientAuthenticator, NSMutableArray, SBAppSwitcherSettings, SBRecentAppLayouts, SBSwitcherDemoFilteringController;
@protocol OS_dispatch_queue;

@interface SBSwitcherDemoCommandsServer : NSObject <BSServiceConnectionListenerDelegate, SBSSwitcherDemoCommandsClientToServerInterface>
{
    SBAppSwitcherSettings *_switcherSettings;
    FBServiceClientAuthenticator *_clientAuthenticator;
    BSServiceConnectionListener *_connectionListener;
    SBSwitcherDemoFilteringController *_demoFilteringController;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_connections;
    SBRecentAppLayouts *_recents;
}

// - (void).cxx_destruct;
- (void)_queue_removeConnection:(id)arg1;
- (void)_queue_addConnection:(id)arg1;
- (id)_filePathFromUnsanitizedFilename:(id)arg1;
- (void)listener:(id)arg1 didReceiveConnection:(id)arg2 withContext:(id)arg3;
- (BOOL)updateHiddenApplicationBundleIDs:(id)arg1;
- (BOOL)setShouldDisableSwitcherModelUpdates:(id)arg1;
- (BOOL)stashSwitcherModelToFilename:(id)arg1;
- (BOOL)loadStashedSwitcherModelFromFilename:(id)arg1;
- (id)initWithRecentAppLayouts:(id)arg1 demoFilteringController:(id)arg2;

@end

