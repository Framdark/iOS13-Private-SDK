//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString, OITSUReadWriteQueue;

__attribute__((visibility("hidden")))
@interface TSUConcurrentMutableDictionaryCache : NSObject
{
    NSMutableDictionary *_cache;
    OITSUReadWriteQueue *_readWriteQueue;
    NSString *_name;
    NSUInteger _count;
}

@property(readonly, nonatomic) NSUInteger count; // @synthesize count=_count;
@property(readonly, nonatomic) OITSUReadWriteQueue *readWriteQueue; // @synthesize readWriteQueue=_readWriteQueue;
// - (void).cxx_destruct;
- (void)performSyncWriteWithUnderlyingDictionary:(id /* CDUnknownBlockType */)arg1;
- (void)enumerateKeysAndObjectsUsingBlock:(id /* CDUnknownBlockType */)arg1;
- (id)objectsForKeys:(id)arg1 notFoundMarker:(id)arg2;
- (id)objectForKey:(id)arg1;
- (id)description;
- (void)removeObjectForKey:(id)arg1 andWait:(BOOL)arg2;
- (void)removeObjectsForKeys:(id)arg1;
- (void)removeAllObjects;
- (void)addEntriesFromDictionary:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)removeObjectForKey:(id)arg1;
- (void)p_didEnterBackground:(id)arg1;
- (void)p_didReceiveMemoryWarning:(id)arg1;
- (id)initWithName:(id)arg1;
- (id)init;

@end

