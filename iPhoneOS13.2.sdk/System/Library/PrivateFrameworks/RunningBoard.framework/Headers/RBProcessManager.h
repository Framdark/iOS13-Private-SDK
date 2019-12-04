//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <RunningBoard/RBProcessManaging-Protocol.h>
#import <RunningBoard/RBStateCapturing-Protocol.h>

@class NSMapTable, NSMutableDictionary, NSString, RBLaunchdJobRegistry, RBProcessIndex, RBProcessMap, RBSystemState;
@protocol RBBundlePropertiesManaging, RBEntitlementManaging, RBJetsamBandProviding, RBProcessManagerDelegate;

@interface RBProcessManager : NSObject <RBProcessManaging, RBStateCapturing>
{
    RBLaunchdJobRegistry *_jobRegistry;
    id <RBBundlePropertiesManaging> _bundlePropertiesManager;
    id <RBEntitlementManaging> _entitlementManager;
    id <RBJetsamBandProviding> _jetsamBandProvider;
    id <RBProcessManagerDelegate> _delegate;
    struct os_unfair_lock_s _lock;
    struct os_unfair_recursive_lock_s _resolutionLock;
    struct os_unfair_lock_s _pendingExitBlockLock;
    // Error parsing type: AQ, name: _counter
    RBProcessIndex *_processIndex;
    RBProcessIndex *_processGraveyard;
    RBSystemState *_systemState;
    RBProcessMap *_processState;
    NSMutableDictionary *_identityToPendingExitBlock;
    NSMapTable *_identityToProcessLifecycleQueue;
    _Bool _systemPreventsIdleSleep;
}

+ (id)stateApplicationQueue;
- (void)_removeProcess:(id)arg1;
- (id)_lifecycleQueue_addProcessInstance:(id)arg1 job:(id)arg2 properties:(id)arg3;
- (id)_lifecycleQueue_addProcessWithInstance:(id)arg1 properties:(id)arg2;
- (id)_lifecycleQueue_addProcessWithJob:(id)arg1;
- (id)_getLifecycleQueueForIdentity:(id)arg1;
- (void)_executeLifecycleEventForIdentity:(id)arg1 sync:(_Bool)arg2 withBlock:(id /* block */)arg3;
- (id)_resolveProcessWithIdentifier:(id)arg1 auditToken:(id)arg2 properties:(id *)arg3;
- (id)_processForInstance:(id)arg1;
- (id)_processForIdentifier:(id)arg1;
- (id)captureState;
@property(readonly, copy, nonatomic) NSString *stateCaptureTitle;
- (void)removeStateForProcessIdentity:(id)arg1;
- (void)applySystemState:(id)arg1;
- (void)didUpdateProcessStates:(id)arg1 completion:(id /* block */)arg2;
- (id)busyExtensionInstancesFromSet:(id)arg1;
- (_Bool)executeTerminateRequest:(id)arg1 withError:(out id *)arg2;
- (id)executeLaunchRequest:(id)arg1 withError:(out id *)arg2;
- (void)systemPreventIdleSleepStateDidChange:(_Bool)arg1;
- (_Bool)isActiveProcess:(id)arg1;
- (id)processesMatchingPredicate:(id)arg1;
- (id)processForInstance:(id)arg1;
- (id)processForIdentity:(id)arg1;
- (id)_processForIdentifier:(id)arg1 withAuditToken:(id)arg2;
- (id)processForIdentifier:(id)arg1;
- (id)processForAuditToken:(id)arg1;
- (void)start;
@property(readonly, copy) NSString *debugDescription;
- (id)initWithBundlePropertiesManager:(id)arg1 entitlementManager:(id)arg2 jetsamBandProvider:(id)arg3 delegate:(id)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
