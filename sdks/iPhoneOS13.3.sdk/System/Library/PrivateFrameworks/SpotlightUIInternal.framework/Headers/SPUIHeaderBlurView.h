//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIVisualEffectView.h>

@class UIColor;

@interface SPUIHeaderBlurView : UIVisualEffectView
{
    BOOL _useInPlaceFilteredBlur;
    UIColor *_baseTintColor;
}

+ (double)backgroundViewBlurAlphaForProgress:(double)arg1 isDarkBackground:(BOOL)arg2;
@property(retain) UIColor *baseTintColor; // @synthesize baseTintColor=_baseTintColor;
@property(nonatomic) BOOL useInPlaceFilteredBlur; // @synthesize useInPlaceFilteredBlur=_useInPlaceFilteredBlur;
// - (void).cxx_destruct;
- (void)updateEffect;
- (void)setTintColor:(id)arg1;
- (id)init;

@end

