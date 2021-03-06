//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXDisplayAsset-Protocol.h>

@class NSString, PHAsset, PICompositionController, PLPhotoEditRenderer;

@protocol PXPhotoKitAdjustedDisplayAsset <PXDisplayAsset>
@property(readonly, nonatomic) PHAsset *photoKitAsset;
@property(readonly, nonatomic) NSString *adjustedContentIdentifier;
@property(readonly, nonatomic) BOOL wantsAdjustments;
- (PICompositionController *)applyAdjustmentsToCompositionController:(PICompositionController *)arg1 renderer:(PLPhotoEditRenderer *)arg2;
@end

