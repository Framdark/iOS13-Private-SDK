//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoLibraryServices/PLCompositionHelper.h>

@interface PLCompositionHelper (PhotosUICore)
+ (id)compositionControllerImageSourceURL:(id)arg1;
+ (void)compositionController:(id)arg1 setInputOrientation:(long long)arg2;
+ (void)compositionController:(id)arg1 setVideoPosterFrameTime:(CDStruct_1b6d18a9)arg2;
+ (id)livePhotoMuteStateForCompositionController:(id)arg1;
+ (void)compositionController:(id)arg1 setLivePhotoMuteState:(id)arg2;
+ (void)compositionController:(id)arg1 setLivePhotoStillTime:(CDStruct_1b6d18a9)arg2;
+ (void)compositionController:(id)arg1 setLivePhotoTrimEndTime:(CDStruct_1b6d18a9)arg2;
+ (void)compositionController:(id)arg1 setLivePhotoTrimStartTime:(CDStruct_1b6d18a9)arg2;
+ (void)compositionController:(id)arg1 applyTrimRangeAndKeyTimeForCurretAssetVariation:(BOOL)arg2;
+ (void)compositionController:(id)arg1 applyAssetVariation:(unsigned int)arg2 withRecipe:(id)arg3;
+ (id)revertComposition:(id)arg1 originalComposition:(id)arg2 keepCrop:(BOOL)arg3 keepOrientation:(BOOL)arg4 primaryEditSource:(id)arg5 overcaptureEditSource:(id)arg6;
+ (BOOL)hasDepthEditsForCompositionController:(id)arg1;
+ (BOOL)isSlomoOnlyAdjustmentForCompositionController:(id)arg1;
+ (BOOL)isAdjustedBeyondDepthForCompositionController:(id)arg1;
+ (id)compositionController:(id)arg1 compositionCopyByApplyingAssetVariation:(unsigned int)arg2 withRecipe:(id)arg3;
+ (unsigned int)assetVariationForCompositionController:(id)arg1;
@end

