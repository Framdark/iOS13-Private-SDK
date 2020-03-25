//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AssetsLibraryServices/PLAssetsdBaseClient.h>

@interface PLAssetsdResourceClient : PLAssetsdBaseClient
{
}

- (BOOL)updateInternalResourcePath:(id)arg1 objectURI:(id)arg2 error:(id )arg3;
- (id)consolidateAssets:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (void)generateOnDemandResourcesForAsset:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (void)downloadCloudSharedAsset:(id)arg1 withCloudPlaceholderKind:(NSUInteger)arg2 shouldPrioritize:(BOOL)arg3 shouldExtendTimer:(BOOL)arg4 completionHandler:(id /* CDUnknownBlockType */)arg5;
- (BOOL)estimatedOutputFileLengthForVideoURL:(id)arg1 fallbackFilePath:(id)arg2 exportPreset:(id)arg3 exportProperties:(id)arg4 outFileLength:(long long )arg5 error:(id )arg6;
- (void)adjustmentDataForAsset:(id)arg1 withDataBlob:(BOOL)arg2 networkAccessAllowed:(BOOL)arg3 trackCPLDownload:(BOOL)arg4 completionHandler:(id /* CDUnknownBlockType */)arg5;
- (void)videoURLForAsset:(id)arg1 format:(int)arg2 networkAccessAllowed:(BOOL)arg3 streamingAllowed:(BOOL)arg4 restrictToPlayable:(BOOL)arg5 trackCPLDownload:(BOOL)arg6 completionHandler:(id /* CDUnknownBlockType */)arg7;
- (void)videoURLForAsset:(id)arg1 format:(int)arg2 intent:(NSUInteger)arg3 networkAccessAllowed:(BOOL)arg4 streamingAllowed:(BOOL)arg5 restrictToPlayable:(BOOL)arg6 trackCPLDownload:(BOOL)arg7 completionHandler:(id /* CDUnknownBlockType */)arg8;
- (BOOL)sandboxExtensionForFileSystemBookmark:(id)arg1 bookmarkURL:(id )arg2 sandboxExtensionToken:(id )arg3 error:(id )arg4;
- (BOOL)sandboxExtensionForAssetResourcePath:(id)arg1 sandboxExtensionToken:(id )arg2 error:(id )arg3;
- (void)imageDataForAsset:(id)arg1 format:(int)arg2 allowPlaceholder:(BOOL)arg3 wantURLOnly:(BOOL)arg4 networkAccessAllowed:(BOOL)arg5 trackCPLDownload:(BOOL)arg6 completionHandler:(id /* CDUnknownBlockType */)arg7;
- (BOOL)imageDataForAsset:(id)arg1 format:(int)arg2 allowPlaceholder:(BOOL)arg3 wantURLOnly:(BOOL)arg4 networkAccessAllowed:(BOOL)arg5 trackCPLDownload:(BOOL)arg6 outImageData:(id )arg7 outImageDataInfo:(id )arg8 outCPLDownloadContext:(id )arg9 error:(id )arg10;
- (BOOL)fileDescriptorForAssetURL:(id)arg1 withAdjustments:(BOOL)arg2 fileExtension:(id )arg3 fileDescriptor:(int )arg4 error:(id )arg5;
- (BOOL)fileURLForAssetURL:(id)arg1 withAdjustments:(BOOL)arg2 fileURL:(id )arg3 error:(id )arg4;
- (void)addAssetWithURL:(id)arg1 toAlbumWithUUID:(id)arg2 completionHandler:(id /* CDUnknownBlockType */)arg3;
- (void)addGroupWithName:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (void)saveAssetWithJobDictionary:(id)arg1 imageSurface:(struct __IOSurface )arg2 previewImageSurface:(struct __IOSurface )arg3 completionHandler:(id /* CDUnknownBlockType */)arg4;

@end

