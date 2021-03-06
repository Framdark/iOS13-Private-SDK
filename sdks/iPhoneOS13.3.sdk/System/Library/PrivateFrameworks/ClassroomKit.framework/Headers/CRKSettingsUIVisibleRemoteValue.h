//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ClassroomKit/CATTaskOperationNotificationDelegate-Protocol.h>

@class CATRemoteTaskOperation;
@protocol CRKRequestPerformingProtocol;

@interface CRKSettingsUIVisibleRemoteValue : NSObject <CATTaskOperationNotificationDelegate>
{
    id <CRKRequestPerformingProtocol> mDaemonProxy;
    CATRemoteTaskOperation *mSubscriptionOperation;
    long long _settingsUIVisible;
}

@property(nonatomic) long long settingsUIVisible; // @synthesize settingsUIVisible=_settingsUIVisible;
// - (void).cxx_destruct;
- (void)settingsUIVisibleDidChange:(BOOL)arg1;
- (void)taskOperation:(id)arg1 didPostNotificationWithName:(id)arg2 userInfo:(id)arg3;
- (BOOL)isCurrentSubscriptionOperation:(id)arg1;
- (void)endUpdating;
- (void)settingsUIVisibilitySubscriptionOperationDidFinish:(id)arg1;
- (void)beginUpdating;
- (id)initWithDaemonProxy:(id)arg1;
- (void)dealloc;

@end

