//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKEnumeratedEditOption.h>

@interface NTKSmokeColorEditOption : NTKEnumeratedEditOption
{
}

+ (id)_localizedNameForValue:(NSUInteger)arg1 forDevice:(id)arg2;
+ (id)_snapshotKeyForValue:(NSUInteger)arg1 forDevice:(id)arg2;
+ (id)_orderedValuesForDevice:(id)arg1;
+ (id)optionWithColor:(NSUInteger)arg1 forDevice:(id)arg2;
- (id)_valueToFaceBundleStringDict;
@property(readonly, nonatomic) NSUInteger color;
- (long long)swatchStyle;

@end

