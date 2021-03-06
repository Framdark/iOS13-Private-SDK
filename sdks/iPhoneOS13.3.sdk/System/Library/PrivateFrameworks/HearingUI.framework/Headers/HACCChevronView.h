//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIColor;

@interface HACCChevronView : UIView
{
    UIView *_leftGrabberView;
    UIView *_rightGrabberView;
    double _animationDuration;
    long long _state;
    UIColor *_color;
    double _alphaComponent;
    UIView *_tintView;
    UIView *_backgroundView;
    BOOL _unified;
    UIView *_alphaContainerView;
}

@property(nonatomic) long long state; // @synthesize state=_state;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
// - (void).cxx_destruct;
- (id)description;
- (void)setState:(long long)arg1 animated:(BOOL)arg2;
- (BOOL)_setUnified:(BOOL)arg1;
- (BOOL)_setState:(long long)arg1;
- (void)layoutSubviews;
- (void)_layoutGrabberView:(id)arg1 forState:(long long)arg2;
- (CGRect)_frameForGrabberView:(id)arg1 forState:(long long)arg2 unified:(BOOL)arg3;
- (CGAffineTransform)_transformForGrabberView:(id)arg1 forState:(long long)arg2;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)configureForLightStyle;
@property(nonatomic) double animationDuration;
- (id)initWithColor:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;

@end

