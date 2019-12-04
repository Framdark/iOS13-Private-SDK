//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>


#import <RelevanceEngine/RETrainingSimulationServerInterface-Protocol.h>

@class NSMutableSet, NSString, NSXPCListener, REObserverStore;
@protocol OS_dispatch_queue;

@interface RETrainingSimulationServer : NSObject <NSXPCListenerDelegate, RETrainingSimulationServerInterface>
{
    NSMutableSet *_connections;
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCListener *_listener;
    REObserverStore *_observers;
}

+ (id)sharedServer;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)relevanceEngine:(id)arg1 encodedObjectAtPath:(id)arg2 completion:(id /* block */)arg3;
- (void)relevanceEngine:(id)arg1 runActionOfElementWithDescription1:(id)arg2 completion:(id /* block */)arg3;
- (void)gatherDiagnosticLogsForRelevanceEngine:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchAllElementsInRelevanceEngine:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchAllElementIdentifiersInRelevanceEngine:(id)arg1 completion:(id /* block */)arg2;
- (void)availableRelevanceEngines:(id /* block */)arg1;
- (void)_safelyEnumerateObserversWithBlock:(id /* block */)arg1 observerAccessBlock:(id /* block */)arg2 completion:(id /* block */)arg3;
- (void)relevanceEngine:(id)arg1 performCommand:(id)arg2 withOptions:(id)arg3 completion:(id /* block */)arg4;
- (void)relevanceEngine:(id)arg1 createElementFromDescription:(id)arg2 completion:(id /* block */)arg3;
- (void)availableRelevanceEnginesDidChange;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)dealloc;
- (id)_init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
