//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Navigation/MNTimeballInternalProvider-Protocol.h>

@class MNObserverHashTable, MNTimeballCache, MNTimeballLocationManager, MNTimeballRoutingProvider, MNXPCTransactionCounter, NSDate, NSMutableDictionary, NSString;
@protocol MNRouteRefreshPolicySchedulerTimedActivity, OS_dispatch_queue, OS_dispatch_source;

@interface MNRouteRefreshPolicyScheduler : NSObject <MNTimeballInternalProvider>
{
    NSMutableDictionary *_refreshPolicyByDestination;
    NSMutableDictionary *_optionsByDestination;
    NSMutableDictionary *_auditTokenByDestination;
    struct os_unfair_lock_s _lock;
    MNTimeballRoutingProvider *_routingProvider;
    NSDate *_deferredRefreshDate;
    NSObject<OS_dispatch_queue> *_handlerQueue;
    NSObject<OS_dispatch_source> *_deferTimer;
    MNTimeballCache *_cache;
    MNTimeballLocationManager *_locationManager;
    MNXPCTransactionCounter *_transactionCounter;
    MNObserverHashTable *_observers;
    id /* block */ _refreshCompletion;
    double _tolerance;
    id <MNRouteRefreshPolicySchedulerTimedActivity> _timedActivity;
}

@property(retain, nonatomic) id <MNRouteRefreshPolicySchedulerTimedActivity> timedActivity; // @synthesize timedActivity=_timedActivity;
@property(nonatomic) double tolerance; // @synthesize tolerance=_tolerance;
@property(copy, nonatomic) id /* block */ refreshCompletion; // @synthesize refreshCompletion=_refreshCompletion;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)_leaveActiveWorkload;
- (void)_enterActiveWorkload;
- (id)_refreshPolicyForDestination:(id)arg1;
- (double)_timeIntervalForRefreshOfDestination:(id)arg1 routeUpdate:(id)arg2 atDate:(id)arg3;
- (void)_scheduleNextRefreshDateForDestination:(id)arg1 routeUpdate:(id)arg2 fromDate:(id)arg3 completion:(id /* block */)arg4;
- (id)_newActivityFromRefreshPolicyRules:(id)arg1;
- (void)_handleCompletionOfRefresh;
- (void)_handleRefreshingCacheEntries:(id)arg1 atDate:(id)arg2 userLocation:(id)arg3;
- (void)_handleRefreshingCacheEntries:(id)arg1 atDate:(id)arg2;
- (void)_refreshAllDestinationsAtDate:(id)arg1;
- (void)_updateNextRefreshDate:(id)arg1 destination:(id)arg2 completion:(id /* block */)arg3;
- (void)_handleSchedulingThisDestinationAndRefreshAllDestinations:(id)arg1 nextRefreshDate:(id)arg2;
- (void)_deferRefreshForScheduledDestinationsAfter:(id)arg1;
- (void)_performDeferredRefresh;
- (void)refreshScheduledDestinations;
- (void)unscheduleUpdateForDestination:(id)arg1;
- (void)_handleSchedulingUpdatesForDestination:(id)arg1 options:(long long)arg2 policy:(unsigned long long)arg3 auditToken:(id)arg4;
- (void)scheduleUpdatesForDestination:(id)arg1 options:(long long)arg2 policy:(unsigned long long)arg3 auditToken:(id)arg4;
- (void)dealloc;
- (id)initWithRoutingProvider:(id)arg1 cache:(id)arg2 locationManager:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
