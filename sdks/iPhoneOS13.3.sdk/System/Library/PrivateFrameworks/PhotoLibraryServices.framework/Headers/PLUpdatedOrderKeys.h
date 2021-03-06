//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSSet;

@interface PLUpdatedOrderKeys : NSObject
{
//     struct os_unfair_lock_s _lock;
    BOOL _isObservingOrderKeys;
    NSSet *_observedRelationships;
    NSMutableDictionary *_updatedOrderKeyObjectIDs;
}

// - (void).cxx_destruct;
- (void)persistentStoreDidUpdateOrderKeys:(id)arg1;
- (id)getAndClearUpdatedOrderKeys;
- (id)_persistentStoresForContext:(id)arg1;
- (BOOL)_inq_registerForStoreOrderKeyUpdateNotificationFromManagedObjectContext:(id)arg1;
- (BOOL)registerForStoreOrderKeyUpdateNotificationFromManagedObjectContext:(id)arg1;
@property(readonly) BOOL isObservingOrderKeys;
- (id)init;

@end

