//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXGadgetProvider.h>

@class UIViewController;
@protocol PXPhotoLibraryPresenting;

@interface PXMessagesRecentPhotosGadgetProvider : PXGadgetProvider
{
    UIViewController<PXPhotoLibraryPresenting> *_recentPhotosViewController;
    double _preferredHeight;
}

@property(nonatomic) double preferredHeight; // @synthesize preferredHeight=_preferredHeight;
@property(retain, nonatomic) UIViewController<PXPhotoLibraryPresenting> *recentPhotosViewController; // @synthesize recentPhotosViewController=_recentPhotosViewController;
// - (void).cxx_destruct;
- (void)generateGadgets;
- (NSUInteger)estimatedNumberOfGadgets;
- (void)loadDataForGadgets;

@end

