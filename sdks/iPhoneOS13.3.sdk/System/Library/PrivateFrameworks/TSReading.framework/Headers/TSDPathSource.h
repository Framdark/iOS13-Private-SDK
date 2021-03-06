//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TSReading/TSDMixing-Protocol.h>

@interface TSDPathSource : NSObject <TSDMixing, NSCopying>
{
    BOOL mHorizontalFlip;
    BOOL mVerticalFlip;
}

+ (id)pathSourceForShapeType:(int)arg1 naturalSize:(CGSize)arg2;
@property BOOL hasVerticalFlip; // @synthesize hasVerticalFlip=mVerticalFlip;
@property BOOL hasHorizontalFlip; // @synthesize hasHorizontalFlip=mHorizontalFlip;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1;
- (id)valueForSetSelector:(SEL)arg1;
- (CGAffineTransform)pathFlipTransform;
- (void)scaleToNaturalSize:(CGSize)arg1;
- (double)uniformScaleForScalingToNaturalSize:(CGSize)arg1;
- (void)setNaturalSize:(CGSize)arg1;
- (CGSize)naturalSize;
- (Class)preferredControllerClass;
- (id)interiorWrapPath;
- (id)bezierPathWithoutFlips;
- (id)bezierPath;
- (BOOL)isCircular;
- (BOOL)isRectangularForever;
- (BOOL)isRectangular;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;

@end

