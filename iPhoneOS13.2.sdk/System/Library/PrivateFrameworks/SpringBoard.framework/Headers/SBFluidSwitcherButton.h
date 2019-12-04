//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class NSString, UIImage, UIImageView, UIView;

@interface SBFluidSwitcherButton : UIControl
{
    UIView *_backgroundView;
    UIImageView *_glyphImageView;
    UIImageView *_xPlusDView;
    UIView *_highlightView;
    UIImage *_image;
    NSString *_backdropGroupName;
    long long _buttonStyle;
    struct UIEdgeInsets _extendedEdgeInsets;
}

@property(nonatomic) long long buttonStyle; // @synthesize buttonStyle=_buttonStyle;
@property(retain, nonatomic) NSString *backdropGroupName; // @synthesize backdropGroupName=_backdropGroupName;
@property(nonatomic) struct UIEdgeInsets extendedEdgeInsets; // @synthesize extendedEdgeInsets=_extendedEdgeInsets;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
- (void)_configureGlyphImageViewIfNecessaryForStyle:(long long)arg1;
- (void)_configureXPlusDViewIfNecessaryForStyle:(long long)arg1;
- (void)_invalidateXPlusDView;
- (void)_configureBackgroundViewIfNecessaryForStyle:(long long)arg1;
- (void)_invalidateBackgroundView;
- (id)_backgroundMaterialView;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)_addHighlightViewIfNecessary;
- (void)setHighlighted:(_Bool)arg1;
- (void)didMoveToSuperview;
- (void)layoutSubviews;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end
