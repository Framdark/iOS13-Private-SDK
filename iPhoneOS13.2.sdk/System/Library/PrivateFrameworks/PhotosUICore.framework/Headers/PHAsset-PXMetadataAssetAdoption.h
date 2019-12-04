//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Photos/PHAsset.h>

#import <PhotosUICore/PXLayoutItemInput-Protocol.h>
#import <PhotosUICore/PXMetadataAsset-Protocol.h>
#import <PhotosUICore/PXPhotoKitAdjustedDisplayAsset-Protocol.h>
#import <PhotosUICore/PXShareable-Protocol.h>

@class CLLocation, NSAttributedString, NSDate, NSString, NSValue, PXDebugValueList;

@interface PHAsset (PXMetadataAssetAdoption) <PXMetadataAsset, PXLayoutItemInput, PXPhotoKitAdjustedDisplayAsset, PXShareable>
+ (id)addressWithoutUnitedStatesZipCode:(id)arg1;
+ (id)px_orderedAssetsFromAssets:(id)arg1 sortDescriptors:(id)arg2;
+ (id)px_fetchPlacesAssetsInAssetCollection:(id)arg1 options:(id)arg2;
+ (id)px_fetchAssetsInArray:(id)arg1 photoLibrary:(id)arg2;
@property(readonly, nonatomic) struct CGPoint positionOffset;
@property(readonly, nonatomic) struct CGAffineTransform transform;
- (float)px_playbackScore;
- (double)weightUsingWeightingScheme:(long long)arg1;
- (double)weightUsingCriterion:(long long)arg1;
@property(readonly, nonatomic) double weight;
@property(readonly, nonatomic) struct CGSize size;
- (_Bool)px_isRecommendationSeenForVariationType:(long long)arg1;
- (_Bool)px_isVariationTypeRecommended:(long long)arg1;
- (id)_imageProccessingFlagsWithMainFileURL:(id)arg1;
- (id)_deferredProcessingStringWithEnum:(unsigned short)arg1;
- (id)_junkClassificationStringWithClassifications:(id)arg1;
- (id)_sceneClassificationStringWithClassifications:(id)arg1;
- (id)stringMinutesTimeRangeFromTimeRange:(CDStruct_e83c9415)arg1;
@property(readonly, nonatomic) PXDebugValueList *px_curationDebugValues;
- (id)px_detailedDebugDescriptionInLibrary:(id)arg1;
@property(readonly, nonatomic) NSAttributedString *px_curationDebugString;
@property(readonly, nonatomic) long long px_currentVariationType;
- (id)px_singleLineMailingAddress;
@property(readonly, copy, nonatomic) NSString *px_adjustmentUuid;
@property(readonly, nonatomic) struct CGRect px_faceAreaRect;
@property(readonly, nonatomic) NSValue *px_originalFaceAreaRectValue;
@property(readonly, nonatomic) struct CGRect px_originalFaceAreaRect;
@property(readonly, nonatomic) _Bool isEligibleForAutoPlayback;
@property(readonly, nonatomic) NSDate *importDate;
- (id)applyAdjustmentsToCompositionController:(id)arg1 renderer:(id)arg2;
@property(readonly, nonatomic) PHAsset *photoKitAsset;
@property(readonly, nonatomic) NSString *adjustedContentIdentifier;
@property(readonly, nonatomic) _Bool wantsAdjustments;
- (struct CGRect)_adjustedRectWithFaceAreaRect:(struct CGRect)arg1 proposedCropRect:(struct CGRect)arg2 assetRect:(struct CGRect)arg3 verticalContentMode:(long long)arg4;
- (struct CGRect)bestCropRectForAspectRatio:(double)arg1 verticalContentMode:(long long)arg2 cropMode:(long long)arg3;
- (struct CGRect)bestCropRectForAspectRatio:(double)arg1;
@property(readonly, nonatomic) unsigned long long thumbnailVersion;
- (long long)isContentEqualTo:(id)arg1;
@property(readonly, nonatomic) Class defaultImageProviderClass;
- (id)localizedDetailedGeoDescriptionForRTL:(_Bool)arg1;
@property(readonly, nonatomic) NSString *localizedGeoDescription;
@property(readonly, nonatomic) _Bool isInCloud;
- (id)_faceNamesStringForAsset;
- (id)px_accessibilityLabelForStyles:(unsigned long long)arg1;
@property(readonly, nonatomic) _Bool requiresConfidentiality;
- (_Bool)px_isConfidentialAdjustmentsVersion:(id)arg1;
- (_Bool)px_isSupportedApp:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) struct CGRect acceptableCropRect;
@property(readonly, nonatomic) double aspectRatio;
@property(readonly, nonatomic) unsigned long long burstSelectionTypes;
@property(readonly, nonatomic) _Bool cloudIsDeletable;
@property(readonly, nonatomic) NSDate *creationDate;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) double duration;
@property(readonly, nonatomic, getter=isFavorite) _Bool favorite;
@property(readonly) NSUInteger hash;
@property(readonly, nonatomic) float hdrGain;
@property(readonly, nonatomic) NSDate *localCreationDate;
@property(readonly, nonatomic) CLLocation *location;
@property(readonly, nonatomic) unsigned long long mediaSubtypes;
@property(readonly, nonatomic) long long mediaType;
@property(readonly, nonatomic) unsigned long long pixelHeight;
@property(readonly, nonatomic) unsigned long long pixelWidth;
@property(readonly, nonatomic) long long playbackStyle;
@property(readonly, nonatomic) long long playbackVariation;
@property(readonly, nonatomic) struct CGRect preferredCropRect;
@property(readonly, nonatomic) _Bool representsBurst;
@property(readonly) Class superclass;
@property(readonly, nonatomic) unsigned long long thumbnailIndex;
@property(readonly, nonatomic) NSString *uuid;
@end
