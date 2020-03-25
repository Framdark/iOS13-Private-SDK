//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AvatarUI/AVTResourceCache-Protocol.h>

@class NSCache, NSMutableArray;
@protocol AVTUILogger, OS_dispatch_queue;

@interface AVTInMemoryResourceCache : NSObject <NSCacheDelegate, AVTResourceCache>
{
    NSCache *_storage;
    NSMutableArray *_orderedEntries;
    NSObject<OS_dispatch_queue> *_storageLock;
    id <AVTUILogger> _logger;
}

+ (NSUInteger)costForItem:(id)arg1 scope:(id)arg2;
+ (id)keyForItem:(id)arg1 scope:(id)arg2;
@property(readonly, nonatomic) id <AVTUILogger> logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *storageLock; // @synthesize storageLock=_storageLock;
@property(readonly, nonatomic) NSMutableArray *orderedEntries; // @synthesize orderedEntries=_orderedEntries;
@property(readonly, nonatomic) NSCache *storage; // @synthesize storage=_storage;
// - (void).cxx_destruct;
- (void)cache:(id)arg1 willEvictObject:(id)arg2;
- (void)handleChangeForItemForKey:(id)arg1;
- (id)observeChangesForItem:(id)arg1 key:(id)arg2;
- (void)nts_evictObjectsToFreeUpCost:(NSUInteger)arg1;
- (void)clearCache;
- (void)evictResourceFromCache:(id)arg1 scope:(id)arg2;
- (id)_resourceForItem:(id)arg1 scope:(id)arg2 cacheMissHandler:(id /* CDUnknownBlockType */)arg3;
- (id)resourceForItem:(id)arg1 scope:(id)arg2 cacheMissHandler:(id /* CDUnknownBlockType */)arg3;
- (id)resourceForItem:(id)arg1 scope:(id)arg2;
- (void)performStorageWork:(id /* CDUnknownBlockType */)arg1;
- (void)dealloc;
- (id)initWithLockProvider:(id /* CDUnknownBlockType */)arg1 totalCostLimit:(NSUInteger)arg2 logger:(id)arg3;

@end
