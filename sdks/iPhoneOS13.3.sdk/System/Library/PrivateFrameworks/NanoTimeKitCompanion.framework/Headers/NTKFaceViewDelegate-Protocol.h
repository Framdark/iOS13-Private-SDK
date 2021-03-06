//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSArray, NSDate, NSString, NTKComplication, NTKEditOption, NTKFaceView, UIViewController;

@protocol NTKFaceViewDelegate <NSObject>
- (NSArray *)faceViewAllVisibleComplicationsForCurrentConfiguration;
- (NSArray *)faceViewComplicationSlotsHiddenByEditOption:(NTKEditOption *)arg1;
- (NTKEditOption *)faceViewEditOptionThatHidesAllComplications;
- (NSArray *)faceViewComplicationSlots;
- (NTKComplication *)faceViewComplicationForSlot:(NSString *)arg1;
- (NSString *)faceViewComplicationAppIdentifierForSlot:(NSString *)arg1;
- (BOOL)faceViewShouldIgnoreSnapshotImages;
- (BOOL)faceView:(NTKFaceView *)arg1 wantsToDismissPresentedViewControllerAnimated:(BOOL)arg2;
- (void)faceViewWantsToPresentViewController:(UIViewController *)arg1;
- (void)faceViewRequestedLaunchFromRect:(CGRect)arg1;
- (void)faceViewUpdatedResourceDirectory:(NSString *)arg1 wantsToTransferOwnership:(BOOL)arg2;
- (BOOL)faceViewComplicationIsEmptyForSlot:(NSString *)arg1;
- (void)faceViewDidHideOrShowComplicationSlot;
- (void)faceViewWantsUnadornedSnapshotViewRemoved;
- (void)faceViewDidReloadSnapshotContentViews;
- (void)faceViewWillUnloadSnapshotContentViews;
- (void)faceViewWillExitTimeTravel;
- (void)faceViewDidScrubToDate:(NSDate *)arg1 forced:(BOOL)arg2;
- (void)faceViewWillEnterTimeTravel;
- (void)faceViewDidChangePaddingForStatusBar;
- (void)faceViewDidChangeWantsStatusBarIconShadow;
- (void)faceViewWantsStatusBarHidden:(BOOL)arg1 animated:(BOOL)arg2;
- (void)faceViewWantsCustomKeylineFramesReloadedForEditMode:(long long)arg1;
- (void)faceViewWantsComplicationKeylineFramesReloaded;
@end

