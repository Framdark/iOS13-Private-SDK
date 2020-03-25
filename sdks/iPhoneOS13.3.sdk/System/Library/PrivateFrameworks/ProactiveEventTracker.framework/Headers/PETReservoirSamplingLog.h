//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol PETReservoirSamplingLogStore;

@interface PETReservoirSamplingLog : NSObject
{
    struct _opaque_pthread_mutex_t _lock;
    NSObject<PETReservoirSamplingLogStore> *_store;
    unsigned int _limit;
    CDStruct_9981aeec _rng;
}

// - (void).cxx_destruct;
- (void)enumerateAndClearItemsWithBlock:(id /* CDUnknownBlockType */)arg1;
- (void)_clearLocked;
- (void)clear;
- (void)_enumerateItemsWithBlockLocked:(id /* CDUnknownBlockType */)arg1;
- (void)enumerateItemsWithBlock:(id /* CDUnknownBlockType */)arg1;
- (void)_gc;
- (void)log:(id)arg1;
- (void)_unlock;
- (BOOL)_lock;
- (BOOL)_readHeader;
- (void)dealloc;
- (id)init;
- (id)initInMemoryWithLimit:(NSUInteger)arg1;
- (id)initWithPath:(id)arg1 limit:(NSUInteger)arg2;
- (id)initWithStore:(id)arg1 limit:(NSUInteger)arg2;

@end

