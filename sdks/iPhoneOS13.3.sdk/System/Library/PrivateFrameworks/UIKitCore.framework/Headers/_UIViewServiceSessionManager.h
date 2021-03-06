//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSMutableArray, NSXPCListener;

@interface _UIViewServiceSessionManager : NSObject <NSXPCListenerDelegate>
{
//     struct os_unfair_lock_s _lock;
    NSXPCListener *_listener;
    NSMutableArray *_sessions;
    int _connectionNotificationToken;
}

+ (id)__serviceSessionManager;
+ (BOOL)hasActiveSessions;
+ (void)startViewServiceSessionManagerAsPlugin:(BOOL)arg1;
// - (void).cxx_destruct;
- (void)_startOrStopSystemsForBackgroundRunning;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)_configureSessionForConnection:(id)arg1;
- (BOOL)_hasActiveSessions;
- (void)_registerSessionForDefaultDeputies:(id)arg1;
- (void)_startListenerWithName:(id)arg1;
- (void)_startListener;
- (id)_initAsPlugIn:(BOOL)arg1;
- (void)dealloc;
- (id)init;

@end

