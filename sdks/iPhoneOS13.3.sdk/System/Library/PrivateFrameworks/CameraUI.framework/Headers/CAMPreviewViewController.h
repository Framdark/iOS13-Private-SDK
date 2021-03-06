//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <CameraUI/CAMExposureDelegate-Protocol.h>
#import <CameraUI/CAMFacesDelegate-Protocol.h>
#import <CameraUI/CAMFocusDelegate-Protocol.h>
#import <CameraUI/CAMFocusIndicatorViewDelegate-Protocol.h>

@class CAMBurstIndicatorView, CAMCaptureGraphConfiguration, CAMExposureResult, CAMFocusIndicatorView, CAMFocusResult, CAMMachineReadableCodeResult, CAMMotionController, CAMPreviewView, CAMStageLightOverlayView, CAMSubjectIndicatorView, CAMTimelapseController, CUCaptureController, NSArray, NSDate, NSMutableDictionary, UILongPressGestureRecognizer, UIPanGestureRecognizer, UITapGestureRecognizer;
@protocol CAMPreviewViewControllerDelegate;

@interface CAMPreviewViewController : UIViewController <UIGestureRecognizerDelegate, CAMFocusDelegate, CAMExposureDelegate, CAMFocusIndicatorViewDelegate, CAMFacesDelegate>
{
    BOOL __changingGraphConfiguration;
    BOOL __userLockedFocusAndExposure;
    BOOL __shouldSuppressExistingFaceIndicators;
    BOOL _showingStandardControls;
    float __cachedExposureTargetBias;
    float __exposureBiasPanStartValue;
    id <CAMPreviewViewControllerDelegate> _delegate;
    long long _layoutStyle;
    long long _shallowDepthOfFieldStatus;
    long long _stagePreviewStatus;
    CAMMachineReadableCodeResult *_cachedSignificantMRCResult;
    NSArray *_cachedMRCResults;
    long long _lightingType;
    CUCaptureController *__captureController;
    CAMTimelapseController *__timelapseController;
    CAMCaptureGraphConfiguration *__graphConfiguration;
    CAMBurstIndicatorView *__burstIndicator;
    CAMFocusIndicatorView *__continuousIndicator;
    CAMFocusIndicatorView *__pointIndicator;
    NSMutableDictionary *__indicatorViewsByType;
    NSDate *__lastFocusIndictorStartTime;
    CAMFocusResult *__lastFocusResult;
    CAMExposureResult *__lastExposureResult;
    NSDate *__lastTapToFocusTime;
    NSUInteger __currentFacesCount;
    UITapGestureRecognizer *__tapToFocusAndExposeGestureRecognizer;
    UILongPressGestureRecognizer *__longPressToLockGestureRecognizer;
    UIPanGestureRecognizer *__exposureBiasPanGestureRecognizer;
    UITapGestureRecognizer *__aspectRatioToggleDoubleTapGestureRecognizer;
    double __exposureBiasVirtualSliderExponent;
    double __exposureBiasVirtualSliderPointsForFirstStop;
    NSDate *__lastExposureBiasModificationTime;
    CAMSubjectIndicatorView *__portraitModeCenteredIndicatorView;
    CAMStageLightOverlayView *__stageLightOverlayView;
    CAMMotionController *__motionController;
}

@property(nonatomic, getter=isShowingStandardControls) BOOL showingStandardControls; // @synthesize showingStandardControls=_showingStandardControls;
@property(readonly, nonatomic) CAMMotionController *_motionController; // @synthesize _motionController=__motionController;
@property(readonly, nonatomic) CAMStageLightOverlayView *_stageLightOverlayView; // @synthesize _stageLightOverlayView=__stageLightOverlayView;
@property(readonly, nonatomic) CAMSubjectIndicatorView *_portraitModeCenteredIndicatorView; // @synthesize _portraitModeCenteredIndicatorView=__portraitModeCenteredIndicatorView;
@property(retain, nonatomic, setter=_setLastExposureBiasModifiedTime:) NSDate *_lastExposureBiasModificationTime; // @synthesize _lastExposureBiasModificationTime=__lastExposureBiasModificationTime;
@property(nonatomic, setter=_setExposureBiasVirtualSliderPointsForFirstStop:) double _exposureBiasVirtualSliderPointsForFirstStop; // @synthesize _exposureBiasVirtualSliderPointsForFirstStop=__exposureBiasVirtualSliderPointsForFirstStop;
@property(nonatomic, setter=_setExposureBiasVirtualSliderExponent:) double _exposureBiasVirtualSliderExponent; // @synthesize _exposureBiasVirtualSliderExponent=__exposureBiasVirtualSliderExponent;
@property(readonly, nonatomic) float _exposureBiasPanStartValue; // @synthesize _exposureBiasPanStartValue=__exposureBiasPanStartValue;
@property(nonatomic, setter=_setCachedExposureTargetBias:) float _cachedExposureTargetBias; // @synthesize _cachedExposureTargetBias=__cachedExposureTargetBias;
@property(readonly, nonatomic) UITapGestureRecognizer *_aspectRatioToggleDoubleTapGestureRecognizer; // @synthesize _aspectRatioToggleDoubleTapGestureRecognizer=__aspectRatioToggleDoubleTapGestureRecognizer;
@property(readonly, nonatomic) UIPanGestureRecognizer *_exposureBiasPanGestureRecognizer; // @synthesize _exposureBiasPanGestureRecognizer=__exposureBiasPanGestureRecognizer;
@property(readonly, nonatomic) UILongPressGestureRecognizer *_longPressToLockGestureRecognizer; // @synthesize _longPressToLockGestureRecognizer=__longPressToLockGestureRecognizer;
@property(readonly, nonatomic) UITapGestureRecognizer *_tapToFocusAndExposeGestureRecognizer; // @synthesize _tapToFocusAndExposeGestureRecognizer=__tapToFocusAndExposeGestureRecognizer;
@property(nonatomic, setter=_setShouldSuppressExistingFaceIndicators:) BOOL _shouldSuppressExistingFaceIndicators; // @synthesize _shouldSuppressExistingFaceIndicators=__shouldSuppressExistingFaceIndicators;
@property(nonatomic, setter=_setCurrentFacesCount:) NSUInteger _currentFacesCount; // @synthesize _currentFacesCount=__currentFacesCount;
@property(retain, nonatomic, setter=_setLastTapToFocusTime:) NSDate *_lastTapToFocusTime; // @synthesize _lastTapToFocusTime=__lastTapToFocusTime;
@property(retain, nonatomic, setter=_setLastExposureResult:) CAMExposureResult *_lastExposureResult; // @synthesize _lastExposureResult=__lastExposureResult;
@property(retain, nonatomic, setter=_setLastFocusResult:) CAMFocusResult *_lastFocusResult; // @synthesize _lastFocusResult=__lastFocusResult;
@property(nonatomic, setter=_setUserLockedFocusAndExposure:) BOOL _userLockedFocusAndExposure; // @synthesize _userLockedFocusAndExposure=__userLockedFocusAndExposure;
@property(retain, nonatomic, setter=_setLastFocusIndictorStartTime:) NSDate *_lastFocusIndictorStartTime; // @synthesize _lastFocusIndictorStartTime=__lastFocusIndictorStartTime;
@property(readonly, nonatomic) NSMutableDictionary *_indicatorViewsByType; // @synthesize _indicatorViewsByType=__indicatorViewsByType;
@property(readonly, nonatomic) CAMFocusIndicatorView *_pointIndicator; // @synthesize _pointIndicator=__pointIndicator;
@property(readonly, nonatomic) CAMFocusIndicatorView *_continuousIndicator; // @synthesize _continuousIndicator=__continuousIndicator;
@property(readonly, nonatomic) CAMBurstIndicatorView *_burstIndicator; // @synthesize _burstIndicator=__burstIndicator;
@property(nonatomic, getter=_isChangingGraphConfiguration, setter=_setChangingGraphConfiguration:) BOOL _changingGraphConfiguration; // @synthesize _changingGraphConfiguration=__changingGraphConfiguration;
@property(retain, nonatomic, setter=_setGraphConfiguration:) CAMCaptureGraphConfiguration *_graphConfiguration; // @synthesize _graphConfiguration=__graphConfiguration;
@property(readonly, nonatomic) __weak CAMTimelapseController *_timelapseController; // @synthesize _timelapseController=__timelapseController;
@property(readonly, nonatomic) CUCaptureController *_captureController; // @synthesize _captureController=__captureController;
@property(nonatomic) long long lightingType; // @synthesize lightingType=_lightingType;
@property(retain, nonatomic) NSArray *cachedMRCResults; // @synthesize cachedMRCResults=_cachedMRCResults;
@property(retain, nonatomic) CAMMachineReadableCodeResult *cachedSignificantMRCResult; // @synthesize cachedSignificantMRCResult=_cachedSignificantMRCResult;
@property(nonatomic) long long stagePreviewStatus; // @synthesize stagePreviewStatus=_stagePreviewStatus;
@property(nonatomic) long long shallowDepthOfFieldStatus; // @synthesize shallowDepthOfFieldStatus=_shallowDepthOfFieldStatus;
@property(nonatomic) long long layoutStyle; // @synthesize layoutStyle=_layoutStyle;
@property(nonatomic) __weak id <CAMPreviewViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (BOOL)_shouldShowIndicatorsAsInactive;
- (BOOL)_isPortraitEffectActive;
- (void)_updatePortraitModeViewsAnimated:(BOOL)arg1;
- (BOOL)_shouldSuppressNewPortraitModeTrackedSubjectIndicators;
- (BOOL)_shouldShowPortraitModeTrackedSubjectIndicatorsForLightingType:(long long)arg1;
- (BOOL)_shouldShowStageLightOverlayActive;
- (BOOL)_shouldShowStageLightOverlayViewForMode:(long long)arg1 device:(long long)arg2 lightingType:(long long)arg3 shallowDepthOfFieldStatus:(long long)arg4 stagePreviewStatus:(long long)arg5;
- (BOOL)_shouldShowPortraitModeIndicatorViews;
- (void)_createPortraitModeCenteredIndicatorViewIfNecessary;
- (void)setShallowDepthOfFieldStatus:(long long)arg1 stagePreviewStatus:(long long)arg2;
- (void)focusOnNormalizedPoint:(CGPoint)arg1;
- (void)_applicationDidEnterBackground;
- (void)notifyCaptureSessionDidStopRunning;
- (void)notifyDidStopCapture;
- (void)notifyWillStartCapturing;
- (void)notifyShutterButtonPressed;
- (void)_updateExposureBiasSideAnimated:(BOOL)arg1;
- (void)_captureOrientationChanged:(id)arg1;
- (void)_handleAspectRatioToggleDoubleTap:(id)arg1;
- (BOOL)_shouldDisableAspectRatioToggle;
- (BOOL)_shouldAllowAspectRatioToggleForMode:(long long)arg1;
- (void)_updatePreviewViewAspectMode;
- (id)focusIndicatorViewBoundingViewForClippingFocusIndicatorView:(id)arg1;
- (double)captureControllerDelayBeforeResettingFocusAndExposureAfterCapture:(id)arg1;
- (BOOL)_isFullyAutomaticFocus:(id)arg1 andExposure:(id)arg2;
- (BOOL)_isFullyAutomaticFocusAndExposure;
- (void)_validateUserLockedFocusAndExposure;
- (void)_validateLastExposureBiasModificationTime;
- (void)_validateExposureTargetBiasFromExposureResult:(id)arg1;
- (void)_validateInternalProperties;
- (BOOL)_shouldDisableFocusUI;
@property(readonly, nonatomic, getter=isExposureLockedByUser) BOOL exposureLockedByUser;
@property(readonly, nonatomic, getter=isFocusLockedByUser) BOOL focusLockedByUser;
- (void)_setUserLockedFocusAndExposure:(BOOL)arg1 shouldAnimate:(BOOL)arg2;
- (BOOL)captureControllerUserHasAdjustedExposureTargetBias:(id)arg1;
- (void)captureController:(id)arg1 didOutputExposureResult:(id)arg2;
- (void)captureController:(id)arg1 didOutputFocusResult:(id)arg2;
- (BOOL)_shouldResetFocusAndExposureForSubjectAreaDidChange;
- (BOOL)captureController:(id)arg1 shouldResetFocusAndExposureForReason:(long long)arg2;
- (void)captureControllerWillResetFocusAndExposure:(id)arg1;
- (double)_exposureBiasForVirtualSliderPosition:(double)arg1;
- (double)_virtualSliderPositionForExposureBias:(double)arg1;
- (void)_initializeExposureBiasSliderParameters;
- (double)_effectiveExposureBiasMovementForTranslation:(CGPoint)arg1;
- (void)_handleExposureBiasPan:(id)arg1;
- (BOOL)_isPanningExposureBias;
- (void)_updateExposureBiasPanGestureRecognizerForOrientation;
- (id)_focusIndicatorViewsWithExposureBiasSliders;
- (void)_updateExposureBiasViews:(id)arg1;
- (void)_updateExposureBiasViews;
- (void)_initializeExposureBiasParametersForFocusIndicatorView:(id)arg1;
- (int)_exposureBiasSide;
- (float)_exposureTargetBiasMaximum;
- (float)_exposureTargetBiasMinimum;
- (BOOL)_showExposureBiasSliderForPointView;
- (BOOL)_allowExposureBiasForMode:(long long)arg1;
- (BOOL)_canModifyExposureBias;
@property(readonly, nonatomic) UIPanGestureRecognizer *activeExposureBiasPanGestureRecognizer;
- (void)_lockFocusAndExposure;
- (void)_cancelDelayedFocusAndExposureLock;
- (void)_lockFocusAndExposureAfterDelay:(double)arg1;
- (void)_handleLongPressToLock:(id)arg1;
- (void)_handleTapToFocusAndExpose:(id)arg1;
- (void)_focusOnPoint:(CGPoint)arg1;
- (BOOL)_allowUserToChangeFocusAndExposure;
- (BOOL)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)_updateMRCIndicators;
- (void)_updateMRCIndicatorsIfNecessary;
- (BOOL)_shouldAllowMRCIndicators;
- (void)_hidePortraitModeTrackedSubjectIndicatorsAnimated:(BOOL)arg1;
- (BOOL)_shouldUpdateIndicatorSizeFrom:(CGSize)arg1 to:(CGSize)arg2 minimumAreaChangeThreshold:(double)arg3 minimumAreaFractionChangeThreshold:(double)arg4;
- (void)_resetFaceTracking;
- (void)_updatePortraitModeViewsForResults:(id)arg1;
- (BOOL)_shouldAllowFaceIndicators;
- (void)_updateFaceIndicatorsForResults:(id)arg1;
- (void)captureController:(id)arg1 didOutputFaceResults:(id)arg2;
- (BOOL)_shouldSuppressNewFaces;
- (void)_hideIndicatorsOfViewType:(id)arg1 animated:(BOOL)arg2;
- (void)_fadeOutIndicatorsOfViewType:(id)arg1;
- (void)_cancelDelayedFadeOutOfViewType:(id)arg1;
- (void)_fadeOutIndicatorsOfViewType:(id)arg1 afterDelay:(double)arg2;
- (BOOL)_isShowingIndicatorsOfType:(id)arg1;
- (void)_updateIndicatorsForMetadataObjectResults:(id)arg1 viewType:(id)arg2 viewClass:(Class)arg3 frameCallback:(id /* CDUnknownBlockType */)arg4 minimumAreaChangeThreshold:(double)arg5 minimumAreaFractionChangeThreshold:(double)arg6;
- (void)_fadeOutAndRemoveIndicatorViewsOfType:(id)arg1 withDuration:(double)arg2;
- (void)_fadeOutAndRemoveIndicatorView:(id)arg1 forType:(id)arg2 identifier:(id)arg3 withDuration:(double)arg4;
- (void)_removeIndicatorViewForType:(id)arg1 identifier:(id)arg2;
- (void)_addIndicatorView:(id)arg1 forType:(id)arg2 identifier:(id)arg3;
- (void)_updatePreviewIndicatorClippingStyleForGraphConfiguration:(id)arg1;
- (void)_animateView:(id)arg1 withCenter:(CGPoint)arg2 bounds:(CGRect)arg3;
- (void)_fadeOutView:(id)arg1 withDuration:(double)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)_fadeInView:(id)arg1 withDuration:(double)arg2;
- (void)_scaleDownLockedPointOfInterest;
- (void)_finishFocusingLockedPointOfInterestIndicator;
- (void)_showLockedAtPointOfInterest:(CGPoint)arg1;
- (long long)_largeStyleForPointIndicator;
- (long long)_styleForPointIndicator;
- (void)_showIndicatorAtPointOfInterest:(CGPoint)arg1;
- (void)_deactivateFocusIndicator:(id)arg1;
- (void)_deactivateFocusIndicator:(id)arg1 afterDelay:(double)arg2;
- (void)_activateFocusIndicator:(id)arg1;
- (void)_hideAllFocusIndicatorsAnimated:(BOOL)arg1;
- (void)_cancelDelayedHideOrDeactivateForFocusIndicator:(id)arg1;
- (void)_hideFocusIndicator:(id)arg1 animated:(BOOL)arg2;
- (void)_hideFocusIndicator:(id)arg1;
- (void)_hideFocusIndicator:(id)arg1 afterDelay:(double)arg2;
- (void)_hideAllFocusIndicatorsExceptForIndicator:(id)arg1;
- (void)_scalePortraitModeFocusIndicators;
- (void)_setFocusIndicatorsPulsing:(BOOL)arg1;
- (void)_updateUIForCenteredContrastBasedFocusDidEnd;
- (void)_showUIForResetFocusAndExposure;
- (BOOL)_shouldShowContinuousIndicator;
- (long long)_interfaceOrientation;
- (void)_updateForOrientationAnimated:(BOOL)arg1;
- (void)_createAspectRatioToggleDoubleTapGestureRecognizerIfNecessary;
- (void)_createExposureBiasPanGestureRecognizerIfNecessary;
- (void)_createLongPressToLockGestureRecognizersIfNecessary;
- (void)_createTapToFocusAndExposeGestureRecognizerIfNecessary;
- (void)_createCommonGestureRecognizersIfNecessary;
- (void)_resetCachedTimes;
- (void)setLightingType:(long long)arg1 animated:(BOOL)arg2;
- (void)_didChangeGraphConfigurationAnimated:(BOOL)arg1;
- (void)_willChangeGraphConfiguration;
- (void)didChangeToGraphConfiguration:(id)arg1 animated:(BOOL)arg2;
- (void)willChangeToGraphConfiguration:(id)arg1;
@property(readonly, nonatomic) long long _device;
@property(readonly, nonatomic) long long _mode;
- (void)_createStageLightOverlayViewIfNeededWillAnimate:(BOOL)arg1;
- (void)_createPointIndicatorIfNecessary;
- (void)_createContinuousIndicatorIfNecessary;
@property(readonly, nonatomic) CAMPreviewView *previewView;
- (void)_cancelDelayedActions;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (BOOL)_canShowWhileLocked;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithCaptureController:(id)arg1 motionController:(id)arg2 timelapseController:(id)arg3;

@end

