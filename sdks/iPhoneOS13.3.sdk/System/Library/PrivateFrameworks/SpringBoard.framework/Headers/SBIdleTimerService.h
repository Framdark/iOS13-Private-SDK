//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/ITIdleTimerStateServiceDelegate-Protocol.h>
#import <SpringBoard/SBIdleTimerIdleEventHandler-Protocol.h>

@class NSMutableArray, NSMutableDictionary, SBIdleTimerAggregateClientConfiguration;
@protocol BSInvalidatable, SBIdleTimerServiceDelegate;

@interface SBIdleTimerService : NSObject <ITIdleTimerStateServiceDelegate, SBIdleTimerIdleEventHandler>
{
//     struct os_unfair_lock_s _accessLock;
    NSMutableArray *_access_idleExpirationHandlers;
    NSMutableArray *_access_idleWarnHandlers;
    NSMutableArray *_access_idleUserAttentionResetHandlers;
    NSMutableDictionary *_disableTimerConfigurations;
    NSMutableDictionary *_minExpirationConfigurations;
    NSMutableDictionary *_maxEpirationConfigurations;
    id <BSInvalidatable> _stateCaptureAssertion;
    id <SBIdleTimerServiceDelegate> _delegate;
    SBIdleTimerAggregateClientConfiguration *_aggregateClientConfiguration;
}

+ (id)sharedInstance;
+ (void)registerServices;
+ (id)_sharedIdleTimerStateServiceIfExists;
+ (id)_sharedIdleTimerStateServiceCreatingIfNeeded:(BOOL)arg1;
@property(readonly, nonatomic) SBIdleTimerAggregateClientConfiguration *aggregateClientConfiguration; // @synthesize aggregateClientConfiguration=_aggregateClientConfiguration;
@property(nonatomic) __weak id <SBIdleTimerServiceDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)_removeConfigurationInfoForReason:(id)arg1 fromArray:(id)arg2;
- (void)_addConfigurationInfo:(id)arg1 toSortedArray:(id)arg2;
- (id)_stateCaptureDescription;
- (void)_addStateCaptureHandlers;
- (void)_removeAssertionsForReason:(id)arg1;
- (void)_aggregateConfigurations;
- (id)_acquireIdleTimerDisableAssertionForReason:(id)arg1;
- (BOOL)handleIdleTimerUserAttentionDidReset;
- (BOOL)handleIdleTimerDidExpire;
- (BOOL)handleIdleTimerDidWarn;
- (id)acquireIdleTimerAssertionWithConfiguration:(id)arg1 fromClient:(id)arg2 forReason:(id)arg3;
- (void)dealloc;
- (id)_init;

@end
