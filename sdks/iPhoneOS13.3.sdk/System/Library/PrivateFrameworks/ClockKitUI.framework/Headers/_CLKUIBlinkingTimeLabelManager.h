//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <ClockKitUI/CLKTimeFormatterObserver-Protocol.h>
#import <ClockKitUI/_CLKUITimeLabelManager-Protocol.h>

@class CLKTimeFormatter, UIColor, _CLKUIBasicTimeLabelManager;

@interface _CLKUIBlinkingTimeLabelManager : UIView <_CLKUITimeLabelManager, CLKTimeFormatterObserver>
{
    CLKTimeFormatter *_timeFormatter;
    _CLKUIBasicTimeLabelManager *_numbersLabelManager;
    _CLKUIBasicTimeLabelManager *_blinkerLabelManager;
    NSNumber _blinkTimerToken;
    BOOL _animationsPaused;
    BOOL _showSeconds;
}

@property(nonatomic) BOOL showSeconds; // @synthesize showSeconds=_showSeconds;
@property(nonatomic) BOOL animationsPaused; // @synthesize animationsPaused=_animationsPaused;
// - (void).cxx_destruct;
- (void)_updateBlinkerAlphaForSecondFraction:(double)arg1;
- (void)_startOrStopBlinking;
- (void)_stopBlinking;
- (void)_startBlinking;
- (void)timeFormatterReportingLiveTimeDidChange:(id)arg1;
- (void)layoutSubviews;
- (void)enumerateUnderlyingLabelsWithBlock:(id /* CDUnknownBlockType */)arg1;
@property(retain, nonatomic) UIColor *textColor;
- (void)updateTimeText;
- (id)effectiveAttributedText;
- (id)effectiveFont;
- (id)viewForLastBaselineLayout;
- (double)_lastLineBaseline;
- (void)setShowsDesignator:(BOOL)arg1;
- (void)setStyle:(id)arg1;
- (void)setMaxWidth:(double)arg1;
@property(readonly, nonatomic) UIEdgeInsets opticalInsets;
- (void)sizeViewToFit;
- (CGSize)sizeThatFits;
@property(readonly, nonatomic) CGSize intrinsicSize;
@property(readonly, nonatomic) UIView *view;
- (void)dealloc;
- (id)initWithForDevice:(id)arg1 timeFormatter:(id)arg2 options:(NSUInteger)arg3 labelFactory:(id /* CDUnknownBlockType */)arg4;

@end

