//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIControl.h>

@class UIButton;

@interface PKPaletteButton : UIControl
{
    long long _buttonType;
    UIButton *_button;
}

@property(retain, nonatomic) UIButton *button; // @synthesize button=_button;
@property(nonatomic) long long buttonType; // @synthesize buttonType=_buttonType;
// - (void).cxx_destruct;
- (void)setHighlighted:(BOOL)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)layoutSubviews;
- (id)initWithType:(long long)arg1;
- (id)initWithFrame:(CGRect)arg1;

@end
