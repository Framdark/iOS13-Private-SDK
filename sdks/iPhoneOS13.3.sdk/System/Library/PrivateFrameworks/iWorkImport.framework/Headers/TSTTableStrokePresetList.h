//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class TSTTableStrokePresetData;

__attribute__((visibility("hidden")))
@interface TSTTableStrokePresetList : NSObject
{
    NSUInteger mCount;
    TSTTableStrokePresetData *mPresets[15];
}

+ (id)instanceWithArchive:(const struct StrokePresetListArchive )arg1 unarchiver:(id)arg2;
+ (id)strokePresetListForDefaultPropertyMapWithFatStroke:(id)arg1 andThinStroke:(id)arg2;
+ (id)strokePresetListForDefaultPropertyMapWithHorizontalStroke:(id)arg1 verticalStroke:(id)arg2 exteriorStroke:(id)arg3;
+ (id)strokePresetListForDefaultPropertyMapForTablePresetID:(NSUInteger)arg1 colors:(id)arg2;
+ (id)init;
- (void)setStroke:(id)arg1 forPresetIndex:(NSUInteger)arg2;
- (unsigned int)maskForStrokePresets:(id)arg1;
- (unsigned int)maskForStrokePreset:(NSUInteger)arg1;
- (id)exteriorStrokeForStrokePreset:(NSUInteger)arg1;
- (id)verticalStrokeForStrokePreset:(NSUInteger)arg1;
- (id)horizontalStrokeForStrokePreset:(NSUInteger)arg1;
- (void)saveToArchive:(struct StrokePresetListArchive )arg1 archiver:(id)arg2;
- (id)initWithArchive:(const struct StrokePresetListArchive )arg1 unarchiver:(id)arg2;
- (void)setStrokePreset:(id)arg1 atIndex:(NSUInteger)arg2;
- (id)presetAtIndex:(NSUInteger)arg1;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)count;
- (void)dealloc;

@end

