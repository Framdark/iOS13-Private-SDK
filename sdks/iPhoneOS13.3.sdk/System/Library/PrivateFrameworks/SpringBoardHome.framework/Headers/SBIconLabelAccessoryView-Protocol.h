//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardHome/SBReusableView-Protocol.h>

@class UIFont, _UILegibilitySettings;

@protocol SBIconLabelAccessoryView <SBReusableView>
@property(readonly, nonatomic) UIEdgeInsets alignmentRectInsets;
@property(readonly, nonatomic) double baselineOffsetFromBottom;
@property(readonly, nonatomic) BOOL hasBaseline;
- (void)updateWithLegibilitySettings:(_UILegibilitySettings *)arg1 labelFont:(UIFont *)arg2;
@end

