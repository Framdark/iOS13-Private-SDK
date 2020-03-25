//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface TSCHRenderUtilities : NSObject
{
}

+ (void)updateStackRectsDictionary:(id)arg1 withElementRect:(CGRect)arg2 groupIndex:(NSUInteger)arg3 barModelCache:(id)arg4;
+ (CDStruct_d230bf23)barElementsRendererValueRangeForModelCache:(id)arg1 groupIndex:(NSUInteger)arg2;
+ (CGLayer )newCGLayerForUserSpaceRect:(CGRect)arg1 inContext:(CGContext )arg2 outUserSpaceLayerBounds:(CGRect )arg3;
+ (CGImage )newImageFromFills:(id)arg1 size:(CGSize)arg2 spaceBetween:(CGSize)arg3 scale:(double)arg4 borderColor:(id)arg5 outFillRects:(CGRect )arg6;
+ (CGPath )newStrokedPathFromPath:(CGPath )arg1 stroke:(id)arg2 cap:(int)arg3;
+ (CGRect)labelRectFromClipRect:(CGRect)arg1 elementSize:(CGSize)arg2;
+ (void)addTextSubselectionHalosToArray:(id)arg1 rect:(CGRect)arg2 transform:(CGAffineTransform)arg3;
+ (void)addTextSubselectionKnobsToArray:(id)arg1 rect:(CGRect)arg2 transform:(CGAffineTransform)arg3;
+ (CGPath )p_newPlusPath:(CGPoint)arg1 width:(double)arg2 pathLocation:(long long)arg3 stroke:(id)arg4 context:(CGContext )arg5;
+ (CGPath )p_newCrossPath:(CGPoint)arg1 width:(double)arg2 pathLocation:(long long)arg3 stroke:(id)arg4;
+ (CGPath )p_newDiamondPath:(CGPoint)arg1 width:(double)arg2 pathLocation:(long long)arg3 stroke:(id)arg4;
+ (CGPath )p_newSquarePath:(CGPoint)arg1 width:(double)arg2 pathLocation:(long long)arg3 stroke:(id)arg4 context:(CGContext )arg5;
+ (CGPath )p_newYieldPath:(CGPoint)arg1 width:(double)arg2 pathLocation:(long long)arg3 stroke:(id)arg4;
+ (CGPath )p_newTrianglePath:(CGPoint)arg1 width:(double)arg2 pathLocation:(long long)arg3 stroke:(id)arg4;
+ (CGPath )p_newCirclePath:(CGPoint)arg1 width:(double)arg2 pathLocation:(long long)arg3 stroke:(id)arg4;
+ (CGPath )p_newPathForSymbol:(int)arg1 context:(CGContext )arg2 at:(CGPoint)arg3 width:(double)arg4 pathLocation:(long long)arg5 stroke:(id)arg6;
+ (id)lightenFillOrStroke:(id)arg1 byPercent:(double)arg2;
+ (CGColor )newLightenedColor:(CGColor )arg1 byPercent:(double)arg2;
+ (CGRect)scaleRect:(CGRect)arg1 toFit:(CGRect)arg2;
+ (CGRect)integralFillRenderingRectFromElementRect:(CGRect)arg1;
+ (CGPath )newUnitPathForSymbol:(int)arg1 symbolSize:(double)arg2 stroke:(id)arg3;
+ (BOOL)centerPointForSeries:(id)arg1 index:(NSUInteger)arg2 frame:(CGRect)arg3 point:(CGPoint )arg4 nullsUseIntercept:(BOOL)arg5;
+ (BOOL)centerPointForSeries:(id)arg1 index:(NSUInteger)arg2 frame:(CGRect)arg3 point:(CGPoint )arg4;
+ (void)drawNullFillSwatchInContext:(CGContext )arg1 frame:(CGRect)arg2;
+ (void)drawImageFill:(id)arg1 inContext:(CGContext )arg2 path:(CGPath )arg3 withinBounds:(CGRect)arg4;
+ (void)drawFill:(id)arg1 inContext:(CGContext )arg2 path:(CGPath )arg3;
+ (void)drawFill:(id)arg1 inContext:(CGContext )arg2 frame:(CGRect)arg3;
+ (id)p_fillToRenderWithFill:(id)arg1 inContext:(CGContext )arg2;
+ (void)drawSymbol:(int)arg1 inContext:(CGContext )arg2 at:(CGPoint)arg3 width:(double)arg4 fill:(id)arg5 stroke:(id)arg6;
+ (CGPath )newClipPathForSymbol:(int)arg1 at:(CGPoint)arg2 width:(double)arg3 stroke:(id)arg4;
+ (id)printCGPath:(CGPath )arg1;

@end

