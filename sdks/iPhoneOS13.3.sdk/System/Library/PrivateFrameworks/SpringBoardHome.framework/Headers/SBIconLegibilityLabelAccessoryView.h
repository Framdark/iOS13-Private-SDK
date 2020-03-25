//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardHome/SBIconLabelAccessoryView.h>

@class UIImageView;

@interface SBIconLegibilityLabelAccessoryView : SBIconLabelAccessoryView
{
    UIImageView *_iconImageView;
}

@property(readonly, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
// - (void).cxx_destruct;
- (UIEdgeInsets)alignmentRectInsets;
- (double)baselineOffsetFromBottom;
- (BOOL)hasBaseline;
- (void)removeInvertingFilter;
- (void)addInvertingFilter;
- (void)updateWithBaseImage:(id)arg1 legibilitySettings:(id)arg2;
- (id)initWithFrame:(CGRect)arg1;

@end
