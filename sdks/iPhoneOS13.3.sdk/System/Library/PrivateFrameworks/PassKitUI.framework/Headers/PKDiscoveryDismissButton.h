//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIButton.h>

@class UIVisualEffectView;

@interface PKDiscoveryDismissButton : UIButton
{
    UIVisualEffectView *_blurView;
    long long _style;
}

+ (long long)_blurEffectStyleForUserInterfaceStyle:(long long)arg1;
+ (id)_tintColorForUserInterfaceStyle:(long long)arg1;
@property(readonly, nonatomic) long long style; // @synthesize style=_style;
// - (void).cxx_destruct;
- (void)_updateStyleWithStyle:(long long)arg1;
- (id)_tintColor;
- (id)_backingEffect;
- (void)_dynamicUserInterfaceTraitDidChange;
- (void)updateStyleWithStyle:(long long)arg1 animated:(BOOL)arg2;
- (void)layoutSubviews;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (id)initWithStyle:(long long)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (id)init;

@end

