//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreThemeDefinition/TDSimpleArtworkRenditionSpec.h>

@interface TDFlattenedImageRenditionSpec : TDSimpleArtworkRenditionSpec
{
}

- (BOOL)updatePackingPropertiesWithDocument:(id)arg1;
- (void)addLayerReferencesObject:(id)arg1;
- (id)createCSIRepresentationWithCompression:(BOOL)arg1 colorSpaceID:(NSUInteger)arg2 document:(id)arg3;
- (void)drawFlattenedImageIntoContext:(CGContext )arg1 document:(id)arg2;

@end

