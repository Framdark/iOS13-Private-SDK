//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class UILabel, UIView;

__attribute__((visibility("hidden")))
@interface SKUIRoundedRectButton : UIButton
{
    UIView *_borderView;
    UILabel *_subtitleLabel;
}

- (void)_reloadFonts;
- (void)_reloadColors;
- (id)_basicAnimationWithKeyPath:(id)arg1;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)tintColorDidChange;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setTitleEdgeInsets:(struct UIEdgeInsets)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)setEnabled:(_Bool)arg1;
- (void)layoutSubviews;
- (void)setSubtitleWithLabel:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end
