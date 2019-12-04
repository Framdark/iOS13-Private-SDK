//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpringBoard/SBDeviceApplicationSceneOverlayViewProvider.h>

#import <SpringBoard/SBTransientOverlayViewControllerDelegate-Protocol.h>

@class NSMapTable, NSMutableArray, NSString, SBDeviceApplicationRemoteTransientOverlayContainerViewController;

@interface SBDeviceApplicationRemoteTransientOverlayViewProvider : SBDeviceApplicationSceneOverlayViewProvider <SBTransientOverlayViewControllerDelegate>
{
    NSMutableArray *_activePresentationContexts;
    SBDeviceApplicationRemoteTransientOverlayContainerViewController *_containerVC;
    NSMapTable *_keyboardFocusRedirectionsByRemoteVC;
    _Bool _needsDeactivationWithNoActiveTransientOverlays;
}

- (void)_handleAppSwitcherWillPresent:(id)arg1;
- (void)_handleCoverSheetDidPresent:(id)arg1;
- (void)_dismissRemoteOverlayVC:(id)arg1;
- (id)_realOverlayViewController;
- (void)_deactivateIfPossible;
- (void)_activateIfPossible;
- (void)transientOverlayViewControllerDidEndRotation:(id)arg1;
- (void)transientOverlayViewControllerWillBeginRotation:(id)arg1 toInterfaceOrientation:(long long)arg2;
- (void)transientOverlayViewControllerNeedsWhitePointAdaptivityStyleUpdate:(id)arg1;
- (void)transientOverlayViewControllerNeedsStatusBarAppearanceUpdate:(id)arg1;
- (void)transientOverlayViewControllerNeedsSceneDeactivationUpdate:(id)arg1;
- (void)transientOverlayViewControllerNeedsProximityDetectionUpdate:(id)arg1;
- (void)transientOverlayViewControllerNeedsOrientationUpdatesDisabledUpdate:(id)arg1;
- (void)transientOverlayViewControllerNeedsGestureDismissalStyleUpdate:(id)arg1;
- (void)transientOverlayViewControllerNeedsFeaturePolicyUpdate:(id)arg1;
- (void)transientOverlayViewControllerNeedsContentOpaqueUpdate:(id)arg1;
- (_Bool)defaultShouldAutorotateForTransientOverlayViewController:(id)arg1;
- (long long)defaultPreferredInterfaceOrientationForPresentationForTransientOverlayViewController:(id)arg1;
- (unsigned long long)defaultSupportedInterfaceOrientationsForTransientOverlayViewController:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (long long)preferredInterfaceOrientationForPresentation;
- (_Bool)shouldFollowSceneOrientation;
- (long long)preferredStatusBarStyle;
- (_Bool)isPresentingTransientOverlay:(id)arg1;
- (void)dismissRemoteTransientOverlayViewController:(id)arg1;
- (void)presentRemoteTransientOverlayViewController:(id)arg1 presentationTarget:(id)arg2;
- (void)dealloc;
- (id)initWithSceneHandle:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
