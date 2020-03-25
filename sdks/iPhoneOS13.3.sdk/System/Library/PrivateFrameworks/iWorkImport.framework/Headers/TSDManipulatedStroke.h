//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSDSmartStroke.h>

@class NSMutableDictionary, TSDPathManipulation;

__attribute__((visibility("hidden")))
@interface TSDManipulatedStroke : TSDSmartStroke
{
    TSDPathManipulation *mManipulation;
    NSMutableDictionary *mArrows;
    unsigned int mRandomSeed;
}

+ (Class)mutableClass;
@property(retain, nonatomic) TSDPathManipulation *pathManipulation; // @synthesize pathManipulation=mManipulation;
@property(nonatomic) unsigned int randomSeed; // @synthesize randomSeed=mRandomSeed;
- (double)renderedWidth;
- (void)saveToArchive:(struct StrokeArchive )arg1 archiver:(id)arg2;
- (id)initWithArchive:(const struct StrokeArchive )arg1 unarchiver:(id)arg2;
- (const CGPath )pathToStrokeFromCGPath:(CGPath )arg1;
- (BOOL)prefersToApplyToShapeRenderableDuringManipulation;
- (BOOL)canApplyToShapeRenderable;
- (void)paintPath:(CGPath )arg1 wantsInteriorStroke:(BOOL)arg2 inContext:(CGContext )arg3 useFastDrawing:(BOOL)arg4 parameterized:(BOOL)arg5 shouldReverseDrawOrder:(BOOL)arg6;
- (CGPath )manipulatePath:(CGPath )arg1 withLineWidth:(double)arg2;
- (id)strokeLineEnd:(id)arg1;
- (CGPath )strokedPath:(CGPath )arg1 withLineWidth:(double)arg2 insideStroke:(BOOL)arg3;
- (void)seedRandom;
- (void)applyInteriorWrapPropertiesInContext:(CGContext )arg1 insideStroke:(BOOL)arg2;
- (id)mutableCopyWithZone:(_NSZone )arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (BOOL)drawsOutsideStrokeBounds;
- (void)dealloc;
- (id)initWithName:(id)arg1 color:(id)arg2 width:(double)arg3 cap:(int)arg4 join:(int)arg5 pattern:(id)arg6 miterLimit:(double)arg7;
- (void)p_setupDoodlesManipulation;

@end

