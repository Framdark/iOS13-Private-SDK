//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/RLMNotificationToken.h>

@class RLMRealm;

__attribute__((visibility("hidden")))
@interface RLMRealmNotificationToken : RLMNotificationToken
{
    RLMRealm *_realm;
    id /* CDUnknownBlockType */ _block;
}

@property(copy, nonatomic) id /* CDUnknownBlockType */ block; // @synthesize block=_block;
@property(retain, nonatomic) RLMRealm *realm; // @synthesize realm=_realm;
// - (void).cxx_destruct;
- (void)dealloc;
- (void)suppressNextNotification;
- (void)invalidate;

@end

