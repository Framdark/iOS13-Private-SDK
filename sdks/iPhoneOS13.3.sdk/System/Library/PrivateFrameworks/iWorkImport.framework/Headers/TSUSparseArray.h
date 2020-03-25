//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


__attribute__((visibility("hidden")))
@interface TSUSparseArray : NSObject <NSCopying>
{
    struct tsuSaPage _topPage;
    NSUInteger _nonNilCount;
    unsigned int _depth;
}

+ (id)array;
- (void)setObject:(id)arg1 atIndexedSubscript:(NSUInteger)arg2;
- (id)objectAtIndexedSubscript:(NSUInteger)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
@property(readonly) NSUInteger count;
- (void)clear;
- (void)foreach:(id /* CDUnknownBlockType */)arg1;
- (void)removeObjectForKey:(NSUInteger)arg1;
- (BOOL)hasObjectForKey:(NSUInteger)arg1;
- (void)setObject:(id)arg1 forKey:(NSUInteger)arg2;
- (void)increaseDepth;
- (id)objectForKey:(NSUInteger)arg1;
- (NSUInteger)maxIndexForCurrentDepth;
- (id)description;
- (void)dealloc;

@end

