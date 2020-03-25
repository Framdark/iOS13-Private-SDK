//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FBSOpenApplicationService, FBSSystemAppProxy;

@interface FBSSystemService : NSObject
{
    FBSSystemAppProxy *_systemAppProxy;
    FBSOpenApplicationService *_defaultOpenApplicationService;
}

+ (id)clientCallbackQueue;
+ (id)sharedService;
// - (void).cxx_destruct;
- (void)setKeyboardFocusApplicationPID:(int)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)setKeyboardFocusApplicationPID:(int)arg1 deferringToken:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)setKeyboardFocusApplicationWithBundleID:(id)arg1 pid:(int)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)shutdownWithOptions:(id)arg1;
- (void)shutdown;
- (void)reboot;
- (void)dataResetWithRequest:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)setBadgeValue:(id)arg1 forBundleID:(id)arg2;
- (id)badgeValueForBundleID:(id)arg1;
- (id)processHandleForApplication:(id)arg1;
- (void)cleanupClientPort:(unsigned int)arg1;
- (unsigned int)createClientPort;
- (void)openURL:(id)arg1 application:(id)arg2 options:(id)arg3 clientPort:(unsigned int)arg4 withResult:(id /* CDUnknownBlockType */)arg5;
- (void)openApplication:(id)arg1 options:(id)arg2 clientPort:(unsigned int)arg3 withResult:(id /* CDUnknownBlockType */)arg4;
- (void)terminateApplicationGroup:(long long)arg1 forReason:(long long)arg2 andReport:(BOOL)arg3 withDescription:(id)arg4 completion:(id /* CDUnknownBlockType */)arg5;
- (void)terminateApplicationGroup:(long long)arg1 forReason:(long long)arg2 andReport:(BOOL)arg3 withDescription:(id)arg4;
- (void)terminateApplication:(id)arg1 forReason:(long long)arg2 andReport:(BOOL)arg3 withDescription:(id)arg4 completion:(id /* CDUnknownBlockType */)arg5;
- (void)terminateApplication:(id)arg1 forReason:(long long)arg2 andReport:(BOOL)arg3 withDescription:(id)arg4;
- (void)sendActions:(id)arg1 withResult:(id /* CDUnknownBlockType */)arg2;
- (void)openApplication:(id)arg1 options:(id)arg2 withResult:(id /* CDUnknownBlockType */)arg3;
- (BOOL)canOpenApplication:(id)arg1 reason:(long long )arg2;
- (int)pidForApplication:(id)arg1;
- (BOOL)isPasscodeLockedOrBlocked;
- (id)systemApplicationBundleIdentifier;
- (void)dealloc;
- (id)initWithEndpoint:(id)arg1;
- (id)init;

@end
