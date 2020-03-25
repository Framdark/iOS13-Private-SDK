//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Navigation/MNTimeballInternalProvider-Protocol.h>

@class MNObserverHashTable, MNTimeballCache, MNTimeballLocationManager, MNTimeballRoutingProvider, MNXPCTransactionCounter, NSDate, NSMutableDictionary;
@protocol MNRouteRefreshPolicySchedulerTimedActivity, OS_dispatch_queue, OS_dispatch_source;

@interface MNRouteRefreshPolicyScheduler : NSObject <MNTimeballInternalProvider>
{
    NSMutableDictionary *_refreshPolicyByDestination;
    NSMutableDictionary *_optionsByDestination;
    NSMutableDictionary *_auditTokenByDestination;
//     struct os_unfair_lock_s _lock;
    MNTimeballRoutingProvider *_routingProvider;
    NSDate *_deferredRefreshDate;
    NSObject<OS_dispatch_queue> *_handlerQueue;
    NSObject<OS_dispatch_source> *_deferTimer;
    MNTimeballCache *_cache;
    MNTimeballLocationManager *_locationManager;
    MNXPCTransactionCounter *_transactionCounter;
    MNObserverHashTable *_observers;
    id /* CDUnknownBlockType */ _refreshCompletion;
    double _tolerance;
    id <MNRouteRefreshPolicySchedulerTimedActivity> _timedActivity;
}

@property(retain, nonatomic) id <MNRouteRefreshPolicySchedulerTimedActivity> timedActivity; // @synthesize timedActivity=_timedActivity;
@property(nonatomic) double tolerance; // @synthesize tolerance=_tolerance;
@property(copy, nonatomic) id /* CDUnknownBlockType */ refreshCompletion; // @synthesize refreshCompletion=_refreshCompletion;
// - (void).cxx_destruct;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)_leaveActiveWorkload;
- (void)_enterActiveWorkload;
- (id)_refreshPolicyForDestination:(id)arg1;
- (double)_timeIntervalForRefreshOfDestination:(id)arg1 routeUpdate:(id)arg2 atDate:(id)arg3;
- (void)_scheduleNextRefreshDateForDestination:(id)arg1 routeUpdate:(id)arg2 fromDate:(id)arg3 completion:(id /* CDUnknownBlockType */)arg4;
- (id)_newActivityFromRefreshPolicyRules:(id)arg1;
- (void)_handleCompletionOfRefresh;
- (void)_handleRefreshingCacheEntries:(id)arg1 atDate:(id)arg2 userLocation:(id)arg3;
- (void)_handleRefreshingCacheEntries:(id)arg1 atDate:(id)arg2;
- (void)_refreshAllDestinationsAtDate:(id)arg1;
- (void)_updateNextRefreshDate:(id)arg1 destination:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)_handleSchedulingThisDestinationAndRefreshAllDestinations:(id)arg1 nextRefreshDate:(id)arg2;
- (void)_deferRefreshForScheduledDestinationsAfter:(id)arg1;
- (void)_performDeferredRefresh;
- (void)refreshScheduledDestinations;
- (void)unscheduleUpdateForDestination:(id)arg1;
- (void)_handleSchedulingUpdatesForDestination:(id)arg1 options:(long long)arg2 policy:(NSUInteger)arg3 auditToken:(id)arg4;
- (void)scheduleUpdatesForDestination:(id)arg1 options:(long long)arg2 policy:(NSUInteger)arg3 auditToken:(id)arg4;
- (void)dealloc;
- (id)initWithRoutingProvider:(id)arg1 cache:(id)arg2 locationManager:(id)arg3;
- (id)init;

@end
