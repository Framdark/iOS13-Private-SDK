//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface BBMaskedSet : NSObject
{
    NSUInteger _maskBits;
    NSMutableArray *_maskObjectSets;
}

@property(retain, nonatomic) NSMutableArray *maskObjectSets; // @synthesize maskObjectSets=_maskObjectSets;
// - (void).cxx_destruct;
- (void)_executeUsingMask:(NSUInteger)arg1 block:(id /* CDUnknownBlockType */)arg2;
- (id)objectAtIndex:(NSUInteger)arg1;
- (id)objectsForMask:(NSUInteger)arg1;
- (id)allObjects;
- (void)removeObject:(id)arg1;
- (void)addObject:(id)arg1 withMask:(NSUInteger)arg2;
- (id)initWithMaskBits:(NSUInteger)arg1;

@end
