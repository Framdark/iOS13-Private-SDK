//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UNUserNotificationCenter;

@interface EAEmergencyAlertCenter : NSObject
{
    UNUserNotificationCenter *_userNotificationCenter;
}

// - (void).cxx_destruct;
- (void)addNotificationRequest:(id)arg1 withCompletionHandler:(id /* CDUnknownBlockType */)arg2;
- (NSUInteger)currentCallCount;
- (void)addAlertRequestForCellBroadcastMessage:(id)arg1 withCompletionHandler:(id /* CDUnknownBlockType */)arg2;
- (id)initWithUserNotificationCenter:(id)arg1;
- (id)init;

@end

