//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAMExposureBiasSliderThumb;

@interface CAMExposureBiasSlider : UIView
{
    BOOL _suspendTrackFadeOut;
    float _exposureBiasMin;
    float _exposureBiasMax;
    float _exposureBiasValue;
    CAMExposureBiasSliderThumb *__thumbView;
    UIView *__minTrackView;
    UIView *__maxTrackView;
    UIView *__minTrackMaskView;
    UIView *__maxTrackMaskView;
    double __lastInteractionTime;
}

@property(readonly, nonatomic) double _lastInteractionTime; // @synthesize _lastInteractionTime=__lastInteractionTime;
@property(readonly, retain, nonatomic) UIView *_maxTrackMaskView; // @synthesize _maxTrackMaskView=__maxTrackMaskView;
@property(readonly, retain, nonatomic) UIView *_minTrackMaskView; // @synthesize _minTrackMaskView=__minTrackMaskView;
@property(readonly, retain, nonatomic) UIView *_maxTrackView; // @synthesize _maxTrackView=__maxTrackView;
@property(readonly, retain, nonatomic) UIView *_minTrackView; // @synthesize _minTrackView=__minTrackView;
@property(readonly, retain, nonatomic) CAMExposureBiasSliderThumb *_thumbView; // @synthesize _thumbView=__thumbView;
@property(nonatomic) BOOL suspendTrackFadeOut; // @synthesize suspendTrackFadeOut=_suspendTrackFadeOut;
@property(nonatomic) float exposureBiasValue; // @synthesize exposureBiasValue=_exposureBiasValue;
@property(nonatomic) float exposureBiasMax; // @synthesize exposureBiasMax=_exposureBiasMax;
@property(nonatomic) float exposureBiasMin; // @synthesize exposureBiasMin=_exposureBiasMin;
// - (void).cxx_destruct;
- (double)_trackAlpha;
- (void)_animateTrackAlpha:(double)arg1 withDuration:(double)arg2;
- (void)_dimTrackForInactivity;
- (void)_cancelDelayedDim;
- (void)_scheduleDelayedDim;
- (void)updateLastInteractionTime;
- (void)forceTrackDimmed;
- (float)_normalizedExposureValue;
- (CGPoint)_sunCenterForNormalizedValue:(float)arg1;
- (void)layoutSubviews;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)_updateForChangedNormalizedExposureValue;
@property(readonly, nonatomic) double thumbMaxExtension;
- (void)tintColorDidChange;
- (id)initWithFrame:(CGRect)arg1;

@end

