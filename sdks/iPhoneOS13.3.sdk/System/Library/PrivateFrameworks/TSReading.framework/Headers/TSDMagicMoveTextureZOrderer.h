//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface TSDMagicMoveTextureZOrderer : NSObject
{
    NSArray *_zOrderMatches;
    NSArray *_outgoingTexturesInZOrder;
    NSArray *_incomingTexturesInZOrder;
    double _percentTexturesTimes;
    NSArray *_percentTextures;
    NSUInteger _zOrderIntersectionsCount;
}

@property(readonly, nonatomic) NSUInteger zOrderIntersectionsCount; // @synthesize zOrderIntersectionsCount=_zOrderIntersectionsCount;
- (void)p_calculateTextureArraysFromIntersections;
- (NSUInteger)p_bestZIndexForUnassignedMatch:(id)arg1 inMatchArray:(id)arg2;
- (NSUInteger)p_zIntersectionsBetweenZOrdererMatches:(id)arg1;
- (void)p_setupZOrderMatchesWithAnimationMatches:(id)arg1;
- (id)p_arrayBySortingMatches:(id)arg1 withInterpolatedPercent:(double)arg2;
- (void)p_addVisibleTexturesFromMatches:(id)arg1 toArray:(id)arg2 interpolatedPercent:(double)arg3;
- (id)texturedRectanglesAtPercent:(double)arg1;
- (void)dealloc;
- (id)initWithAnimationMatches:(id)arg1;

@end

