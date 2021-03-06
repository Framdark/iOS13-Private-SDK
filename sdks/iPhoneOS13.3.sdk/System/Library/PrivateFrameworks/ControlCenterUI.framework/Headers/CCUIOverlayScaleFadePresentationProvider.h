//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ControlCenterUI/CCUIOverlayPresentationProvider-Protocol.h>

@protocol CCUIOverlayMetricsProvider, CCUIOverlayViewProvider;

@interface CCUIOverlayScaleFadePresentationProvider : NSObject <CCUIOverlayPresentationProvider>
{
    id <CCUIOverlayViewProvider> _viewProvider;
    id <CCUIOverlayMetricsProvider> _metricsProvider;
}

+ (id)_baseC2AnimationParametersForTransitionState:(id)arg1;
@property(nonatomic) __weak id <CCUIOverlayMetricsProvider> metricsProvider; // @synthesize metricsProvider=_metricsProvider;
@property(nonatomic) __weak id <CCUIOverlayViewProvider> viewProvider; // @synthesize viewProvider=_viewProvider;
// - (void).cxx_destruct;
- (void)_addContainerAlphaAnimationToBatch:(id)arg1 transitionState:(id)arg2;
- (void)_addContainerTransformAnimationToBatch:(id)arg1 transitionState:(id)arg2;
- (void)_addBackgroundViewWeightingAnimationToBatch:(id)arg1 transitionState:(id)arg2;
- (CGRect)_statusLabelViewFrame;
- (CGRect)_presentedViewFrame;
- (BOOL)tapAllowsDismissalForLocation:(CGPoint)arg1;
- (id)animationBatchForTransitionState:(id)arg1 previousTransitionState:(id)arg2;
- (void)layoutViews;
- (NSUInteger)finalTransitionTypeForState:(id)arg1 gestureTranslation:(CGPoint)arg2 gestureVelocity:(CGPoint)arg3;
- (id)transitionStateForType:(NSUInteger)arg1 interactive:(BOOL)arg2 translation:(CGPoint)arg3;
@property(readonly, nonatomic) BOOL allowHotPocketDuringTransition; // @dynamic allowHotPocketDuringTransition;
@property(readonly, nonatomic, getter=isZoomEnabled) BOOL zoomEnabled; // @dynamic zoomEnabled;
- (id /* CDUnknownBlockType */)customBackdropScaleAdjustment;
- (BOOL)backdropViewShouldUseAlphaTransformer;
@property(readonly, nonatomic, getter=isPanDismissalAvailable) BOOL panDismissalAvailable; // @dynamic panDismissalAvailable;

@end

