//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMFObject-Protocol.h>

@class HMDDevice, HMFTimer, NSArray, NSMutableArray;
@protocol HMFLocking;

@interface HMDRemoteDeviceInformation : HMFObject <HMFObject>
{
    id <HMFLocking> _lock;
    NSMutableArray *_confirmationHandlers;
    BOOL _reachable;
    long long _state;
    HMDDevice *_device;
    HMFTimer *_retryTimer;
}

@property(retain, nonatomic) HMFTimer *retryTimer; // @synthesize retryTimer=_retryTimer;
@property(readonly, nonatomic) HMDDevice *device; // @synthesize device=_device;
// - (void).cxx_destruct;
- (void)completeConfirmationsWithError:(id)arg1;
- (void)queueConfirmationHandler:(id /* CDUnknownBlockType */)arg1 timeout:(double)arg2;
@property(getter=isReachable) BOOL reachable; // @synthesize reachable=_reachable;
- (void)clearState:(long long)arg1;
@property(readonly) long long state; // @synthesize state=_state;
@property(readonly, copy, nonatomic) NSArray *attributeDescriptions;
- (id)initWithDevice:(id)arg1;
- (id)init;

@end
