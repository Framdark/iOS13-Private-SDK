//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VideosUI/VUIDeviceMediaLibrary.h>

@class VUISidebandMediaLibrary;

__attribute__((visibility("hidden")))
@interface VUIAggregateMediaLibrary : VUIDeviceMediaLibrary
{
    VUIDeviceMediaLibrary *_deviceMediaLibrary;
    VUISidebandMediaLibrary *_sidebandMediaLibrary;
}

+ (id)keyPathsForValuesAffectingConnectionState;
@property(readonly, nonatomic) VUISidebandMediaLibrary *sidebandMediaLibrary; // @synthesize sidebandMediaLibrary=_sidebandMediaLibrary;
@property(readonly, nonatomic) VUIDeviceMediaLibrary *deviceMediaLibrary; // @synthesize deviceMediaLibrary=_deviceMediaLibrary;
// - (void).cxx_destruct;
- (void)_sidebandMediaLibraryContentsDidChangeNotification:(id)arg1;
- (void)_deviceMediaLibraryContentsDidChange:(id)arg1;
- (id)_imageLoadOperationWithParams:(id)arg1 scaleToSize:(CGSize)arg2 cropToFit:(BOOL)arg3;
- (id)_imageLoadParamsForImageLoaderObject:(id)arg1;
- (id)_imageLoaderIdentifier;
- (id)saveMediaEntity:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (id)enqueueFetchRequests:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (id)enqueueMediaItemEntityTypesFetchWithCompletionHandler:(id /* CDUnknownBlockType */)arg1;
- (void)connectWithCompletionHandler:(id /* CDUnknownBlockType */)arg1 progressHandler:(id /* CDUnknownBlockType */)arg2;
- (NSUInteger)connectionState;
- (id)title;
- (void)updateFromCloudWithReason:(long long)arg1;
- (void)updateProgressWithCompletionHandler:(id /* CDUnknownBlockType */)arg1;
- (BOOL)isInitialUpdateInProgress;
- (BOOL)isUpdating;
- (void)dealloc;
- (id)initWithManager:(id)arg1 deviceMediaLibrary:(id)arg2 sidebandMediaLibrary:(id)arg3;

@end

