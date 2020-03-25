//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CLKDevice, NSString;

@interface NTKCompanionResourceDirectoryEditor : NSObject
{
    BOOL _resourceDirectoryIsHardLink;
    CLKDevice *_device;
    NSString *_resourceDirectory;
    long long _state;
    NSString *_galleryPreviewResourceDirectory;
}

+ (id)_subsampledImageWithData:(id)arg1 orientation:(long long)arg2 subsampleFactor:(NSUInteger)arg3;
+ (NSUInteger)_subsampleFactorForScale:(double)arg1;
+ (CGSize)_watchPhotoVideoSize;
+ (CGSize)_watchPhotoImageSize;
+ (void)_imageDataForAsset:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
+ (id)_cropAndScaleUIImage:(id)arg1 cropRect:(CGRect)arg2 outputSize:(CGSize)arg3;
+ (id)_videoAssetOf:(id)arg1;
+ (id)_scaleImage:(id)arg1 toLongestEdgeInPixels:(double)arg2;
+ (id)_writeAsset:(id)arg1 image:(id)arg2 withImageCrop:(CGRect)arg3 to:(id)arg4;
+ (BOOL)_transcodeIrisVideoOf:(id)arg1 forPhoto:(id)arg2 withCrop:(CGRect)arg3 into:(id)arg4 previewOnly:(BOOL)arg5;
+ (id)_createResourceDirectoryWithAsset:(id)arg1 forDevice:(id)arg2 previewOnly:(BOOL)arg3;
+ (BOOL)_transcodeStillImageOf:(id)arg1 forPhoto:(id)arg2 withCrop:(CGRect)arg3 into:(id)arg4;
+ (id)_transcodeAsset:(id)arg1 withCrop:(CGRect)arg2 into:(id)arg3 previewOnly:(BOOL)arg4;
+ (id)_linkPhoto:(id)arg1 to:(id)arg2 previewOnly:(BOOL)arg3;
@property(retain, nonatomic) NSString *galleryPreviewResourceDirectory; // @synthesize galleryPreviewResourceDirectory=_galleryPreviewResourceDirectory;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(retain, nonatomic) NSString *resourceDirectory; // @synthesize resourceDirectory=_resourceDirectory;
@property(readonly, nonatomic) CLKDevice *device; // @synthesize device=_device;
// - (void).cxx_destruct;
- (void)finalizeWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)generateGalleryPreviewResourceDirectoryWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)_deleteResourceDirectoryHardLinkIfNecessary;
- (void)dealloc;
- (id)initWithResourceDirectory:(id)arg1 forDevice:(id)arg2;

@end
