//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSMutableIndexSet;

__attribute__((visibility("hidden")))
@interface TSTHiddenStateIndexSet : NSObject <NSCopying>
{
    NSMutableIndexSet *_visibleIndexSet;
}

@property(retain, nonatomic) NSMutableIndexSet *visibleIndexSet; // @synthesize visibleIndexSet=_visibleIndexSet;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)swapIndex:(NSUInteger)arg1 withIndex:(NSUInteger)arg2;
- (void)insertRange:(_NSRange)arg1;
- (void)deleteRange:(_NSRange)arg1;
- (void)moveRangeFrom:(_NSRange)arg1 toIndex:(NSUInteger)arg2;
- (NSUInteger)findNthNextVisibleIndex:(NSUInteger)arg1 fromIndex:(NSUInteger)arg2;
- (NSUInteger)findNthPreviousVisibleIndex:(NSUInteger)arg1 fromIndex:(NSUInteger)arg2;
- (NSUInteger)visibleIndexBeforeAndIncludingIndex:(NSUInteger)arg1;
- (NSUInteger)visibleIndexBeforeIndex:(NSUInteger)arg1;
- (NSUInteger)visibleIndexAfterAndIncludingIndex:(NSUInteger)arg1;
- (NSUInteger)visibleIndexAfterIndex:(NSUInteger)arg1;
- (BOOL)anyHiddenIndicesInRange:(_NSRange)arg1;
- (NSUInteger)numberVisibleIndicesInRange:(_NSRange)arg1;
- (NSUInteger)numberHiddenIndicesInRange:(_NSRange)arg1;
- (BOOL)isIndexHidden:(NSUInteger)arg1;
- (id)visibleIndices;
- (void)setHidden:(BOOL)arg1 inRange:(_NSRange)arg2;
- (void)setHidden:(BOOL)arg1 atIndexes:(id)arg2;
- (void)setHidden:(BOOL)arg1 atIndex:(NSUInteger)arg2;
- (void)setCount:(NSUInteger)arg1;
- (void)dealloc;
- (id)init;

@end

