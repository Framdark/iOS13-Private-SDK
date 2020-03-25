//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSReading/TSDSmartStroke.h>

@interface TSDCalligraphyStroke : TSDSmartStroke
{
}

+ (Class)mutableClass;
+ (id)strokeWithName:(id)arg1 color:(id)arg2 width:(double)arg3;
- (CGRect)boundsForLineEnd:(id)arg1 atPoint:(CGPoint)arg2 atAngle:(double)arg3 withScale:(double)arg4 transform:(CGAffineTransform)arg5;
- (void)paintLineEnd:(id)arg1 atPoint:(CGPoint)arg2 atAngle:(double)arg3 withScale:(double)arg4 inContext:(CGContext )arg5 useFastDrawing:(BOOL)arg6;
- (void)paintPath:(CGPath )arg1 wantsInteriorStroke:(BOOL)arg2 inContext:(CGContext )arg3 useFastDrawing:(BOOL)arg4;
- (void)applyToContext:(CGContext )arg1 insideStroke:(BOOL)arg2;
- (CGAffineTransform)transformInContext:(CGContext )arg1;
- (CGRect)boundsForPath:(id)arg1;
- (BOOL)drawsOutsideStrokeBounds;
- (BOOL)drawsInOneStep;
- (BOOL)prefersToApplyToCAShapeLayerDuringManipulation;
- (BOOL)canApplyToCAShapeLayer;
- (BOOL)chisel;
- (double)scale;
- (double)angle;
- (id)mutableCopyWithZone:(_NSZone )arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithName:(id)arg1 color:(id)arg2 width:(double)arg3 cap:(int)arg4 join:(int)arg5 pattern:(id)arg6 miterLimit:(double)arg7;
- (id)initWithColor:(id)arg1 width:(double)arg2 cap:(int)arg3 join:(int)arg4 pattern:(id)arg5 miterLimit:(double)arg6;

@end

